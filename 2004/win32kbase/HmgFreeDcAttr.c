/*
 * XREFs of HmgFreeDcAttr @ 0x1C0086408
 * Callers:
 *     ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x1C0086B1C (-FreeDCAttributes@@YAXPEAVDC@@@Z.c)
 *     GreSetDCOwnerEx @ 0x1C0090550 (GreSetDCOwnerEx.c)
 *     GreCreateDisplayDC @ 0x1C0091A00 (GreCreateDisplayDC.c)
 *     GdiThreadCallout @ 0x1C00BD690 (GdiThreadCallout.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0080D68 (PALLOCMEM2.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00821C0 (GreReleaseHmgrSemaphore.c)
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00A5C20 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall HmgFreeDcAttr(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  int v7; // ecx
  int v8; // r8d
  __int64 v9; // rbx
  _QWORD *v10; // rdx
  __int64 v11; // rax

  result = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( a1 && result )
  {
    if ( !*(_QWORD *)(result + 24) )
    {
      *(_QWORD *)(result + 24) = a1;
      return result;
    }
    result = PsGetCurrentProcessWin32Process(v3);
    v6 = result;
    if ( result )
    {
      GreAcquireHmgrSemaphore(v5, v4);
      v9 = v6 + 192;
      v10 = *(_QWORD **)(v6 + 192);
      if ( v10 == (_QWORD *)(v6 + 192) || *((_DWORD *)v10 + 4) == 11 )
      {
        v10 = PALLOCMEM2(0x70uLL, 0x66636447u, 0);
        if ( !v10 )
          return GreReleaseHmgrSemaphore(v7, (__int64)v10, v8);
        v11 = *(_QWORD *)v9;
        if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 )
          __fastfail(3u);
        *v10 = v11;
        v10[1] = v9;
        *(_QWORD *)(v11 + 8) = v10;
        *(_QWORD *)v9 = v10;
        *((_DWORD *)v10 + 4) = 0;
      }
      v10[(unsigned int)(*((_DWORD *)v10 + 4))++ + 3] = a1;
      *(_QWORD *)(v6 + 40) = a1;
      return GreReleaseHmgrSemaphore(v7, (__int64)v10, v8);
    }
  }
  return result;
}
