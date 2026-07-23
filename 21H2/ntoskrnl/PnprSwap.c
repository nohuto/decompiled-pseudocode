/*
 * XREFs of PnprSwap @ 0x14050FCA8
 * Callers:
 *     PnprEndMirroring @ 0x1409AE650 (PnprEndMirroring.c)
 *     PnprInitiateReplaceOperation @ 0x1409AE72C (PnprInitiateReplaceOperation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PnprSwapFinalize @ 0x14050FED0 (PnprSwapFinalize.c)
 *     MmUnmapReservedMapping @ 0x140531ED0 (MmUnmapReservedMapping.c)
 *     PnprMirrorMarkedPages @ 0x1409AEF5C (PnprMirrorMarkedPages.c)
 */

__int64 PnprSwap()
{
  __int64 v0; // rcx
  int v1; // edi
  __int64 v2; // rdx
  int v3; // ecx
  int v4; // ecx
  __int64 v5; // rax
  __int64 (__fastcall *v6)(_QWORD); // rax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  __int64 i; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 result; // rax

  v0 = PnprContext;
  if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) && (*(_DWORD *)(PnprContext + 64) & 8) == 0 )
  {
    if ( *(int *)(PnprContext + 200) < 2 )
      *(_DWORD *)(PnprContext + 200) = 2;
    v1 = PnprMirrorMarkedPages();
    if ( v1 < 0 )
    {
      v2 = PnprContext;
      v3 = *(_DWORD *)(PnprContext + 20984);
      if ( !v3 )
        v3 = 2818;
      *(_DWORD *)(PnprContext + 20984) = v3;
      v4 = *(_DWORD *)(v2 + 20988);
      if ( !v4 )
        v4 = 1;
      *(_DWORD *)(v2 + 20988) = v4;
      goto LABEL_34;
    }
    v5 = PnprContext;
    *(_DWORD *)(PnprContext + 204) = 1;
    *(_DWORD *)(v5 + 200) = 3;
    v0 = PnprContext;
    if ( *(_DWORD *)(v5 + 204) < *(_DWORD *)(PnprContext + 176) )
    {
      do
      {
        _mm_pause();
        v0 = PnprContext;
      }
      while ( *(_DWORD *)(PnprContext + 204) < *(_DWORD *)(PnprContext + 176) );
    }
  }
  v6 = *(__int64 (__fastcall **)(_QWORD))(v0 + 20960);
  if ( v6 && (v1 = v6(*(_QWORD *)(v0 + 20880)), v1 < 0) )
  {
    v2 = PnprContext;
    v7 = *(_DWORD *)(PnprContext + 20984);
    if ( !v7 )
      v7 = 2838;
    *(_DWORD *)(PnprContext + 20984) = v7;
    v8 = *(_DWORD *)(v2 + 20988);
    if ( !v8 )
      v8 = 8;
    *(_DWORD *)(v2 + 20988) = v8;
  }
  else
  {
    v9 = PnprContext;
    *(_DWORD *)(PnprContext + 204) = 1;
    *(_DWORD *)(v9 + 200) = 4;
    while ( *(_DWORD *)(v9 + 204) < *(_DWORD *)(PnprContext + 176) )
    {
      _mm_pause();
      v9 = PnprContext;
    }
    v10 = PnprSwapFinalize();
    v2 = PnprContext;
    v1 = v10;
    if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(PnprContext + 176); i = (unsigned int)(i + 1) )
      {
        v12 = *(_QWORD *)(v2 + 136) + 24 * i;
        if ( v12 )
        {
          v13 = *(_QWORD *)v12;
          if ( *(_QWORD *)v12 )
          {
            if ( (*(_BYTE *)(v13 + 10) & 1) != 0 )
              MmUnmapReservedMapping(*(PVOID *)(v12 + 8), 0x51706E50u, (PMDL)v13);
          }
        }
        v14 = *(_QWORD *)(PnprContext + 144) + 24 * i;
        if ( v14 )
        {
          v15 = *(_QWORD *)v14;
          if ( *(_QWORD *)v14 )
          {
            if ( (*(_BYTE *)(v15 + 10) & 1) != 0 )
              MmUnmapReservedMapping(*(PVOID *)(v14 + 8), 0x51706E50u, (PMDL)v15);
          }
        }
        v2 = PnprContext;
      }
    }
  }
LABEL_34:
  result = (unsigned int)v1;
  *(_DWORD *)(v2 + 200) = 5;
  return result;
}
