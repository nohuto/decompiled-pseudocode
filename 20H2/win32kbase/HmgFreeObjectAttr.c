/*
 * XREFs of HmgFreeObjectAttr @ 0x1C00A566C
 * Callers:
 *     GreSetBrushOwner @ 0x1C001C210 (GreSetBrushOwner.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C001C8E0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C001CC30 (NtGdiCreateRectRgn.c)
 *     bDeleteBrush @ 0x1C00371E0 (bDeleteBrush.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0039CD0 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     NtGdiDeleteObjectApp @ 0x1C003A900 (NtGdiDeleteObjectApp.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003C5B0 (PALLOCMEM2.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003D970 (GreReleaseHmgrSemaphore.c)
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     GreAcquireHmgrSemaphore @ 0x1C005EA20 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall HmgFreeObjectAttr(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  int v4; // edx
  __int64 v5; // rcx
  int v6; // r8d
  __int64 v7; // rsi
  int v8; // ecx
  int v9; // r8d
  __int64 v10; // rbx
  _QWORD *v11; // rdx
  __int64 v12; // rax

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a1 && result )
  {
    if ( !*(_QWORD *)(result + 32) )
    {
      *(_QWORD *)(result + 32) = a1;
      return result;
    }
    result = PsGetCurrentProcessWin32Process(v3);
    v7 = result;
    if ( result )
    {
      GreAcquireHmgrSemaphore(v5, v4, v6);
      v10 = v7 + 208;
      v11 = *(_QWORD **)(v7 + 208);
      if ( v11 == (_QWORD *)(v7 + 208) || *((_DWORD *)v11 + 4) == 170 )
      {
        v11 = PALLOCMEM2(0x568uLL, 1717658183LL, 0);
        if ( !v11 )
          return GreReleaseHmgrSemaphore(v8, (__int64)v11, v9);
        v12 = *(_QWORD *)v10;
        if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 )
          __fastfail(3u);
        *v11 = v12;
        v11[1] = v10;
        *(_QWORD *)(v12 + 8) = v11;
        *(_QWORD *)v10 = v11;
        *((_DWORD *)v11 + 4) = 0;
      }
      v11[(unsigned int)(*((_DWORD *)v11 + 4))++ + 3] = a1;
      *(_QWORD *)(v7 + 48) = a1;
      return GreReleaseHmgrSemaphore(v8, (__int64)v11, v9);
    }
  }
  return result;
}
