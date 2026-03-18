/*
 * XREFs of _NtUserRegisterHotKey@16 @ 0xC5E5E
 * Callers:
 *     <none>
 * Callees:
 *     _IAMThreadAccessGranted@4 @ 0x26140 (_IAMThreadAccessGranted@4.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __RegisterHotKey@20 @ 0xC5F06 (__RegisterHotKey@20.c)
 */

int __stdcall NtUserRegisterHotKey(
        int a1,
        struct tagTHREADINFO *a2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter2)
{
  int v4; // esi
  struct tagTHREADINFO *v5; // eax
  int v7; // ecx
  int v8; // [esp-4h] [ebp-10h]
  _BYTE v9[8]; // [esp+4h] [ebp-8h] BYREF

  v4 = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v9);
  if ( IsImmersiveAppRestricted(*(_DWORD *)(_gptiCurrent + 232)) )
    goto LABEL_12;
  if ( (BugCheckParameter3 & 0xFFFF95F0) != 0 )
  {
    v7 = 1004;
    goto LABEL_15;
  }
  if ( (BugCheckParameter3 & 0x800) == 0 )
    goto LABEL_4;
  if ( !IAMThreadAccessGranted(_gptiCurrent) )
  {
LABEL_12:
    v8 = 5;
    goto LABEL_11;
  }
  if ( !BugCheckParameter2 )
  {
    v8 = 87;
LABEL_11:
    v7 = v8;
LABEL_15:
    UserSetLastError((struct _NT_TIB *)v7);
    goto LABEL_7;
  }
LABEL_4:
  if ( !a1 )
  {
    v5 = 0;
    goto LABEL_6;
  }
  v5 = (struct tagTHREADINFO *)ValidateHwnd(a1);
  if ( v5 )
LABEL_6:
    v4 = _RegisterHotKey(v5, a2, BugCheckParameter3, BugCheckParameter2);
LABEL_7:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v9);
  UserSessionSwitchLeaveCrit();
  return v4;
}
