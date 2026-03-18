/*
 * XREFs of _NtUserSetCalibrationData@16 @ 0x1688E9
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     __SetCalibrationData@16 @ 0x1448D3 (__SetCalibrationData@16.c)
 */

int __stdcall NtUserSetCalibrationData(int a1, SIZE_T Length, volatile void *Address, int a4)
{
  void *v4; // esi
  int v6; // eax
  int v7; // edi
  int v8; // ecx
  void *v9; // eax
  int v11; // [esp-4h] [ebp-4Ch]
  _BYTE v12[8]; // [esp+10h] [ebp-38h] BYREF
  _DWORD v13[2]; // [esp+18h] [ebp-30h] BYREF
  _DWORD v14[2]; // [esp+20h] [ebp-28h] BYREF
  void *v15; // [esp+2Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+30h] [ebp-18h]
  volatile void *Addressa; // [esp+58h] [ebp+10h]

  v4 = 0;
  v15 = 0;
  v13[0] = 0x2000;
  v13[1] = -1;
  v14[0] = 12288;
  v14[1] = -1;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v12);
  if ( !a1 || a4 != 1 && a4 != 2 && a4 != 3 )
    goto LABEL_31;
  if ( Length )
  {
    if ( !Address )
      goto LABEL_31;
  }
  else if ( Address || a4 == 1 )
  {
    goto LABEL_31;
  }
  if ( a4 == 3 )
  {
    if ( !(unsigned __int8)CheckAccess(*(_DWORD *)(_gptiCurrent + 232) + 496, v13) )
      goto LABEL_12;
  }
  else if ( !(unsigned __int8)CheckAccess(*(_DWORD *)(_gptiCurrent + 232) + 496, v14) )
  {
LABEL_12:
    EtwTraceUIPISystemError(*(_DWORD *)(_gptiCurrent + 232), 0, 11);
    v11 = 5;
LABEL_32:
    v7 = 0;
    UserSetLastError((struct _NT_TIB *)v11);
    goto LABEL_33;
  }
  if ( Length > 0xCA0 )
  {
LABEL_31:
    v11 = 87;
    goto LABEL_32;
  }
  v6 = HMValidateHandle(a1, 19);
  Addressa = (volatile void *)v6;
  if ( !v6 )
  {
LABEL_27:
    UserSetLastError((struct _NT_TIB *)6);
    v7 = 0;
    goto LABEL_28;
  }
  if ( (*(_DWORD *)(v6 + 104) & 0x2000) == 0 )
  {
    if ( *(char *)(v6 + 120) < 0 )
    {
      v8 = *(_DWORD *)(*(_DWORD *)(v6 + 284) + 12);
      if ( v8 != 6 && v8 != 7 )
      {
        if ( Address )
        {
          ms_exc.registration.TryLevel = 0;
          ProbeForRead(Address, Length, 1u);
          v9 = (void *)Win32AllocPoolWithQuota(Length, 1633907541);
          v4 = v9;
          v15 = v9;
          if ( !v9 )
            ExRaiseStatus(-1073741801);
          memcpy(v9, (const void *)Address, Length);
          ms_exc.registration.TryLevel = -2;
          v6 = (int)Addressa;
        }
        v7 = _SetCalibrationData(v6, Length, v4, a4);
        goto LABEL_28;
      }
    }
    goto LABEL_27;
  }
  UserSetLastError((struct _NT_TIB *)6);
  v7 = 0;
  UserSetLastError(0);
LABEL_28:
  if ( v4 && !v7 )
    Win32FreePool(v4);
LABEL_33:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v12);
  UserSessionSwitchLeaveCrit();
  return v7;
}
