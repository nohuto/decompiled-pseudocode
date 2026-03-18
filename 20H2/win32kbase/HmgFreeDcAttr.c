/*
 * XREFs of HmgFreeDcAttr @ 0x1C003E544
 * Callers:
 *     GdiThreadCallout @ 0x1C0018740 (GdiThreadCallout.c)
 *     ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x1C0040A10 (-FreeDCAttributes@@YAXPEAVDC@@@Z.c)
 *     GreSetDCOwnerEx @ 0x1C004A4E0 (GreSetDCOwnerEx.c)
 *     GreCreateDisplayDC @ 0x1C004DC90 (GreCreateDisplayDC.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003C5B0 (PALLOCMEM2.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003D970 (GreReleaseHmgrSemaphore.c)
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     GreAcquireHmgrSemaphore @ 0x1C005EA20 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall HmgFreeDcAttr(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rsi
  int v8; // ecx
  int v9; // r8d
  __int64 v10; // rbx
  _QWORD *v11; // rdx
  __int64 v12; // rax

  result = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( a1 && result )
  {
    if ( !*(_QWORD *)(result + 24) )
    {
      *(_QWORD *)(result + 24) = a1;
      return result;
    }
    result = PsGetCurrentProcessWin32Process(v4, v3, v5, v6);
    v7 = result;
    if ( result )
    {
      GreAcquireHmgrSemaphore();
      v10 = v7 + 192;
      v11 = *(_QWORD **)(v7 + 192);
      if ( v11 == (_QWORD *)(v7 + 192) || *((_DWORD *)v11 + 4) == 11 )
      {
        v11 = PALLOCMEM2(0x70uLL, 1717789767LL, 0);
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
      *(_QWORD *)(v7 + 40) = a1;
      return GreReleaseHmgrSemaphore(v8, (__int64)v11, v9);
    }
  }
  return result;
}
