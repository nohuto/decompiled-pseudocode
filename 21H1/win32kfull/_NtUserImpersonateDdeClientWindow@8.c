/*
 * XREFs of _NtUserImpersonateDdeClientWindow@8 @ 0x1652D8
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __ImpersonateDdeClientWindow@8 @ 0x18000E (__ImpersonateDdeClientWindow@8.c)
 */

int __stdcall NtUserImpersonateDdeClientWindow(int a1, int a2)
{
  int v2; // esi
  int v3; // edi
  int v4; // edx
  int v5; // ecx
  _BYTE v7[8]; // [esp+8h] [ebp-8h] BYREF

  v2 = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v7);
  v3 = ValidateHwnd(a1);
  if ( v3 )
  {
    v4 = ValidateHwnd(a2);
    if ( v4 )
    {
      v5 = *(_DWORD *)(v4 + 8);
      if ( v5 == _gptiCurrent )
      {
        if ( *(_DWORD *)(*(_DWORD *)(v3 + 8) + 232) == *(_DWORD *)(v5 + 232) )
          v2 = 1;
        else
          v2 = _ImpersonateDdeClientWindow(v3);
      }
      else
      {
        UserSetLastError((struct _NT_TIB *)0x57);
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v7);
  UserSessionSwitchLeaveCrit();
  return v2;
}
