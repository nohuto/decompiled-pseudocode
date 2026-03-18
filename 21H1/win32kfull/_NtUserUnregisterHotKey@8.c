/*
 * XREFs of _NtUserUnregisterHotKey@8 @ 0xCA27A
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     __UnregisterHotKey@8 @ 0xCA2CC (__UnregisterHotKey@8.c)
 */

int __stdcall NtUserUnregisterHotKey(int a1, int a2)
{
  int v2; // esi
  int v3; // eax
  _BYTE v5[8]; // [esp+4h] [ebp-8h] BYREF

  v2 = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v5);
  if ( !a1 )
  {
    v3 = 0;
    goto LABEL_3;
  }
  v3 = ValidateHwnd(a1);
  if ( v3 )
LABEL_3:
    v2 = _UnregisterHotKey(v3, a2);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v5);
  UserSessionSwitchLeaveCrit();
  return v2;
}
