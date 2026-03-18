/*
 * XREFs of _xxxImmLoadLayout@4 @ 0xEA0CC
 * Callers:
 *     _EditionResetIMELayout@12 @ 0xEA082 (_EditionResetIMELayout@12.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _ClientImmLoadLayout@8 @ 0xEA14C (_ClientImmLoadLayout@8.c)
 */

int __fastcall xxxImmLoadLayout(int a1)
{
  int v2; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD v6[3]; // [esp+Ch] [ebp-Ch] BYREF

  memset(v6, 0, sizeof(v6));
  if ( (*_gpsi & 4) != 0 || (HIWORD(a1) & 0xF000) == 0xE000 )
  {
    v2 = Win32AllocPool(348, 1835627349);
    if ( v2 )
    {
      PushW32ThreadLock(v2, v6, (int)Win32FreePool);
      if ( ClientImmLoadLayout(a1, v2) )
      {
        CurrentThread = KeGetCurrentThread();
        ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
        *(_DWORD *)(ThreadWin32Thread + 8) = v6[0];
        return v2;
      }
      PopAndFreeAlwaysW32ThreadLock((int)v6);
    }
  }
  return 0;
}
