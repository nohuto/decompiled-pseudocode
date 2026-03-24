/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UCOMPOSITION_INPUT_SINK_TRANSFORM@@$0A@@@QEAAJPEFBUCOMPOSITION_INPUT_SINK_TRANSFORM@@I@Z @ 0x180017F00
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180088930 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8AF4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DynArray<COMPOSITION_INPUT_SINK_TRANSFORM,0>::AddMultipleAndSet(__int64 *a1, _OWORD *a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v7; // ecx
  __int64 v9; // rcx
  __int64 v10; // rax

  v2 = *((unsigned int *)a1 + 6);
  v4 = v2 + 1;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    v5 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else
  {
    v5 = 0;
    if ( v4 <= *((_DWORD *)a1 + 5) )
    {
      v9 = 5 * v2;
      v10 = *a1;
      v9 *= 2LL;
      *(_OWORD *)(v10 + 8 * v9) = *a2;
      *(_OWORD *)(v10 + 8 * v9 + 16) = a2[1];
      *(_OWORD *)(v10 + 8 * v9 + 32) = a2[2];
      *(_OWORD *)(v10 + 8 * v9 + 48) = a2[3];
      *(_OWORD *)(v10 + 8 * v9 + 64) = a2[4];
      *((_DWORD *)a1 + 6) = v4;
    }
    else
    {
      v6 = DynArrayImpl<0>::AddMultipleAndSet(a1, 80LL, 1LL, a2);
      v5 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xC0u, 0LL);
    }
  }
  return v5;
}
