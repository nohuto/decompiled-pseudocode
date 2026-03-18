/*
 * XREFs of xxxImmLoadLayout @ 0x1C012543C
 * Callers:
 *     EditionResetIMELayout @ 0x1C01253D0 (EditionResetIMELayout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00B9A60 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     ClientImmLoadLayout @ 0x1C01254E4 (ClientImmLoadLayout.c)
 */

__int64 __fastcall xxxImmLoadLayout(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 ThreadWin32Thread; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v6 = 0LL;
  if ( (*gpsi & 4) != 0 || (WORD1(a1) & 0xF000) == 0xE000 )
  {
    v2 = Win32AllocPool(352LL, 1835627349LL);
    v3 = v2;
    if ( v2 )
    {
      PushW32ThreadLock(v2, &v6, (__int64)Win32FreePool);
      if ( (unsigned int)ClientImmLoadLayout(a1, v3) )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)(ThreadWin32Thread + 16) = v6;
        return v3;
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)&v6);
    }
  }
  return 0LL;
}
