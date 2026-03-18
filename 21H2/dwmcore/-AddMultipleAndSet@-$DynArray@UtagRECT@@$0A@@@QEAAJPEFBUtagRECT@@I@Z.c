/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UtagRECT@@$0A@@@QEAAJPEFBUtagRECT@@I@Z @ 0x180089450
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009CC10 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800894E4 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall DynArray<tagRECT,0>::AddMultipleAndSet(__int64 a1, _OWORD *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // eax
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  _OWORD *v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(unsigned int *)(a1 + 24);
  v4 = v3 + 1;
  if ( (int)v3 + 1 < (unsigned int)v3 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0LL, -2147024362, 0xB5u);
    return 2147942934LL;
  }
  else if ( v4 > *(_DWORD *)(a1 + 20) )
  {
    v9 = a2;
    v6 = DynArrayImpl<0>::Grow(a1, 16, 1, 0, (__int64)&v9);
    v8 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0xC0u);
    else
      *(_OWORD *)(*(_QWORD *)a1 + (unsigned int)(16 * (*(_DWORD *)(a1 + 24))++)) = *v9;
    return v8;
  }
  else
  {
    *(_OWORD *)(*(_QWORD *)a1 + 16LL * (unsigned int)v3) = *a2;
    *(_DWORD *)(a1 + 24) = v4;
    return 0LL;
  }
}
