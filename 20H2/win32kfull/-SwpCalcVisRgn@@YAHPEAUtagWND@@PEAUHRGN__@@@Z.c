/*
 * XREFs of ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00407C4
 * Callers:
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C0048180 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00482D8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?IsMinimizedSausageWindow@@YAHQEAUtagWND@@@Z @ 0x1C003F01C (-IsMinimizedSausageWindow@@YAHQEAUtagWND@@@Z.c)
 *     GetRedirectionBitmap @ 0x1C003F430 (GetRedirectionBitmap.c)
 *     GetLayeredOrRedirectedParent @ 0x1C0040760 (GetLayeredOrRedirectedParent.c)
 *     CalcVisRgn @ 0x1C0043F90 (CalcVisRgn.c)
 */

__int64 __fastcall SwpCalcVisRgn(struct tagWND *a1, HRGN a2)
{
  struct tagWND *LayeredOrRedirectedParent; // rax
  struct tagWND *v3; // rsi
  HRGN v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) == 0 )
    return 0LL;
  LayeredOrRedirectedParent = (struct tagWND *)GetLayeredOrRedirectedParent(a1);
  v3 = LayeredOrRedirectedParent;
  if ( LayeredOrRedirectedParent && (*(_DWORD *)(*((_QWORD *)LayeredOrRedirectedParent + 5) + 24LL) & 0x20000000) != 0 )
  {
    if ( GetRedirectionBitmap((__int64)LayeredOrRedirectedParent) )
      IsMinimizedSausageWindow(v3);
  }
  return CalcVisRgn(&v5);
}
