/*
 * XREFs of _NtUserSetDisplayMapping@8 @ 0x16938E
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SetDisplayMapping@8 @ 0x159C18 (__SetDisplayMapping@8.c)
 */

int __stdcall NtUserSetDisplayMapping(int a1, int a2)
{
  int v2; // esi
  int v4; // eax
  int *v5; // edi
  int v6; // eax
  int v7; // ebx
  _DWORD v8[2]; // [esp+10h] [ebp-10h] BYREF
  _BYTE v9[8]; // [esp+18h] [ebp-8h] BYREF

  v8[1] = -1;
  v2 = 0;
  v8[0] = 0x2000;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v9);
  if ( !(unsigned __int8)CheckAccess(*(_DWORD *)(_gptiCurrent + 232) + 496, v8) )
  {
    EtwTraceUIPISystemError(*(_DWORD *)(_gptiCurrent + 232), 0, 10);
LABEL_3:
    UserSetLastError((struct _NT_TIB *)5);
    goto LABEL_4;
  }
  v4 = HMValidateHandle(a1, 19);
  v5 = (int *)v4;
  if ( !v4 || *(char *)(v4 + 120) >= 0 )
  {
    UserSetLastError((struct _NT_TIB *)6);
    UserSetLastError((struct _NT_TIB *)6);
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(v4 + 104) & 0x2000) != 0 )
  {
    UserSetLastError((struct _NT_TIB *)5);
    goto LABEL_3;
  }
  v6 = *(_DWORD *)(*(_DWORD *)(v4 + 284) + 12);
  if ( v6 == 6 || v6 == 7 )
    goto LABEL_3;
  v7 = ValidateHmonitor(a2);
  if ( v7 )
  {
    v2 = 1;
    if ( ValidateHmonitorNoRip(v5[285]) != v7 )
      v2 = _SetDisplayMapping(v5[71], v7);
    v5[286] = 1;
  }
LABEL_4:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v9);
  UserSessionSwitchLeaveCrit();
  return v2;
}
