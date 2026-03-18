/*
 * XREFs of HmgFreeObjectAttr @ 0x1C00350CC
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C006C610 (NtGdiDeleteObjectApp.c)
 *     bDeleteBrush @ 0x1C006D4D0 (bDeleteBrush.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C008B250 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     GreSetBrushOwner @ 0x1C00A8CA0 (GreSetBrushOwner.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00A9370 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C00A9630 (NtGdiCreateRectRgn.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0076C90 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C007B8A0 (GreReleaseHmgrSemaphore.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 */

__int64 __fastcall HmgFreeObjectAttr(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax

  result = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( a1 && result )
  {
    if ( !*(_QWORD *)(result + 32) )
    {
      *(_QWORD *)(result + 32) = a1;
      return result;
    }
    result = PsGetCurrentProcessWin32Process(v3);
    v4 = result;
    if ( result )
    {
      GreAcquireHmgrSemaphore();
      v5 = v4 + 208;
      v6 = *(_QWORD *)(v4 + 208);
      if ( v6 == v4 + 208 || *(_DWORD *)(v6 + 16) == 170 )
      {
        v6 = PALLOCMEM2(0x568uLL);
        if ( !v6 )
          return GreReleaseHmgrSemaphore();
        v7 = *(_QWORD *)v5;
        if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 )
          __fastfail(3u);
        *(_QWORD *)v6 = v7;
        *(_QWORD *)(v6 + 8) = v5;
        *(_QWORD *)(v7 + 8) = v6;
        *(_QWORD *)v5 = v6;
        *(_DWORD *)(v6 + 16) = 0;
      }
      *(_QWORD *)(v6 + 8LL * (unsigned int)(*(_DWORD *)(v6 + 16))++ + 24) = a1;
      *(_QWORD *)(v4 + 48) = a1;
      return GreReleaseHmgrSemaphore();
    }
  }
  return result;
}
