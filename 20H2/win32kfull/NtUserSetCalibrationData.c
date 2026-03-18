/*
 * XREFs of NtUserSetCalibrationData @ 0x1C02013C0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0095000 (HMValidateHandle.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     _SetCalibrationData @ 0x1C01D5658 (_SetCalibrationData.c)
 */

__int64 __fastcall NtUserSetCalibrationData(unsigned __int64 a1, unsigned int a2, volatile void *a3, int a4)
{
  SIZE_T v6; // r14
  void *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rbx
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 CurrentProcessWow64Process; // rax
  void *v21; // rax
  __int64 v22; // rcx
  _DWORD v24[2]; // [rsp+20h] [rbp-38h] BYREF
  void *v25; // [rsp+28h] [rbp-30h]
  _BYTE v26[40]; // [rsp+30h] [rbp-28h] BYREF
  int v27; // [rsp+60h] [rbp+8h] BYREF
  int v28; // [rsp+64h] [rbp+Ch]

  v6 = a2;
  v8 = 0LL;
  v25 = 0LL;
  v24[0] = 0x2000;
  v24[1] = -1;
  v27 = 12288;
  v28 = -1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v26);
  if ( !a1 || (unsigned int)(a4 - 1) > 2 )
    goto LABEL_28;
  if ( (_DWORD)v6 )
  {
    if ( !a3 )
      goto LABEL_28;
  }
  else if ( a3 || a4 == 1 )
  {
    goto LABEL_28;
  }
  if ( a4 == 3 )
  {
    if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 880LL, v24) )
      goto LABEL_10;
  }
  else if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 880LL, &v27) )
  {
LABEL_10:
    EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 424LL), 0LL, 11LL);
    v11 = 5LL;
LABEL_29:
    v16 = 0;
    UserSetLastError(v11, v9, v10);
    goto LABEL_30;
  }
  if ( (unsigned int)v6 > 0xCA0 )
  {
LABEL_28:
    v11 = 87LL;
    goto LABEL_29;
  }
  v12 = HMValidateHandle(a1, 0x13u);
  v15 = v12;
  if ( !v12 )
  {
LABEL_24:
    UserSetLastError(6LL, v13, v14);
    v16 = 0;
    goto LABEL_25;
  }
  if ( (*(_DWORD *)(v12 + 184) & 0x2000) == 0 )
  {
    v19 = *(_QWORD *)(v12 + 480);
    if ( (*(_DWORD *)(v12 + 200) & 0x80u) != 0 && (unsigned int)(*(_DWORD *)(v19 + 24) - 6) > 1 )
    {
      if ( a3 )
      {
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v19);
        ProbeForRead(a3, v6, CurrentProcessWow64Process != 0 ? 1 : 4);
        v21 = (void *)Win32AllocPoolWithQuota(v6, 1633907541LL);
        v8 = v21;
        v25 = v21;
        if ( !v21 )
          ExRaiseStatus(-1073741801);
        memmove(v21, (const void *)a3, v6);
      }
      v16 = SetCalibrationData(v15, v6, v8, a4);
      goto LABEL_25;
    }
    goto LABEL_24;
  }
  UserSetLastError(6LL, v13, v14);
  v16 = 0;
  UserSetLastError(0LL, v17, v18);
LABEL_25:
  if ( v8 && !v16 )
    Win32FreePool(v8);
LABEL_30:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v26);
  UserSessionSwitchLeaveCrit(v22);
  return v16;
}
