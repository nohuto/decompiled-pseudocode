/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UClippingScopeState@CScopedClipStack@@$0A@@@QEAAJPEFBUClippingScopeState@CScopedClipStack@@I@Z @ 0x1800BF658
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800678C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800AC2C0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DynArray<CScopedClipStack::ClippingScopeState,0>::AddMultipleAndSet(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v5; // r8d
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v10; // eax
  __int64 v11; // rcx

  v2 = *(unsigned int *)(a1 + 24);
  v5 = v2 + 1;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else
  {
    v6 = 0;
    if ( v5 > *(_DWORD *)(a1 + 20) )
    {
      v10 = DynArrayImpl<0>::AddMultipleAndSet(a1, 84, 1, a2);
      v6 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xC0u, 0LL);
    }
    else
    {
      v7 = *(_QWORD *)a1;
      v8 = 84 * v2;
      *(_OWORD *)(v8 + v7) = *(_OWORD *)a2;
      *(_OWORD *)(v8 + v7 + 16) = *(_OWORD *)(a2 + 16);
      *(_OWORD *)(v8 + v7 + 32) = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(v8 + v7 + 48) = *(_OWORD *)(a2 + 48);
      *(_OWORD *)(v8 + v7 + 64) = *(_OWORD *)(a2 + 64);
      *(_DWORD *)(v8 + v7 + 80) = *(_DWORD *)(a2 + 80);
      *(_DWORD *)(a1 + 24) = v5;
    }
  }
  return v6;
}
