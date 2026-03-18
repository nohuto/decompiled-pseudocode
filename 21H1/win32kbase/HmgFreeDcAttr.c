/*
 * XREFs of HmgFreeDcAttr @ 0x1C007F458
 * Callers:
 *     GdiThreadCallout @ 0x1C000B570 (GdiThreadCallout.c)
 *     ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x1C007FB6C (-FreeDCAttributes@@YAXPEAVDC@@@Z.c)
 *     GreSetDCOwnerEx @ 0x1C0089500 (GreSetDCOwnerEx.c)
 *     GreCreateDisplayDC @ 0x1C008A9B0 (GreCreateDisplayDC.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0076C90 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C007B8A0 (GreReleaseHmgrSemaphore.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 */

__int64 __fastcall HmgFreeDcAttr(__int64 a1)
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
  __int64 v11; // rdx
  __int64 v12; // rax

  result = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( a1 && result )
  {
    if ( !*(_QWORD *)(result + 24) )
    {
      *(_QWORD *)(result + 24) = a1;
      return result;
    }
    result = PsGetCurrentProcessWin32Process(v3);
    v7 = result;
    if ( result )
    {
      GreAcquireHmgrSemaphore(v5, v4, v6);
      v10 = v7 + 192;
      v11 = *(_QWORD *)(v7 + 192);
      if ( v11 == v7 + 192 || *(_DWORD *)(v11 + 16) == 11 )
      {
        v11 = PALLOCMEM2(0x70uLL);
        if ( !v11 )
          return GreReleaseHmgrSemaphore(v8, v11, v9);
        v12 = *(_QWORD *)v10;
        if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 )
          __fastfail(3u);
        *(_QWORD *)v11 = v12;
        *(_QWORD *)(v11 + 8) = v10;
        *(_QWORD *)(v12 + 8) = v11;
        *(_QWORD *)v10 = v11;
        *(_DWORD *)(v11 + 16) = 0;
      }
      *(_QWORD *)(v11 + 8LL * (unsigned int)(*(_DWORD *)(v11 + 16))++ + 24) = a1;
      *(_QWORD *)(v7 + 40) = a1;
      return GreReleaseHmgrSemaphore(v8, v11, v9);
    }
  }
  return result;
}
