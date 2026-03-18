/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@VCZOrderedRect@@$0A@@@QEAAJPEFBVCZOrderedRect@@I@Z @ 0x1800B5248
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180080540 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18008EB40 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?AddAntiOccluderRect@CArrayBasedCoverageSet@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@@Z @ 0x1800BF8F8 (-AddAntiOccluderRect@CArrayBasedCoverageSet@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?Add@CArrayBasedCoverageSet@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@@Z @ 0x180193E88 (-Add@CArrayBasedCoverageSet@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800B53E4 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall DynArray<CZOrderedRect,0>::AddMultipleAndSet(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v5; // r8d
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  _OWORD *v12; // rax
  __int64 v13; // rdx
  _OWORD *v14; // [rsp+40h] [rbp+8h] BYREF

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
      v14 = (_OWORD *)a2;
      v6 = DynArrayImpl<0>::Grow(a1, 36, 1, 0, (__int64)&v14);
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v6, 0xC0u, 0LL);
      }
      else
      {
        v11 = *(_QWORD *)a1;
        v12 = v14;
        v13 = (unsigned int)(36 * *(_DWORD *)(a1 + 24));
        *(_OWORD *)(v13 + v11) = *v14;
        *(_OWORD *)(v13 + v11 + 16) = v12[1];
        *(_DWORD *)(v13 + v11 + 32) = *((_DWORD *)v12 + 8);
        ++*(_DWORD *)(a1 + 24);
      }
    }
    else
    {
      v7 = *(_QWORD *)a1;
      v8 = 9 * v2;
      *(_OWORD *)(v7 + 4 * v8) = *(_OWORD *)a2;
      *(_OWORD *)(v7 + 4 * v8 + 16) = *(_OWORD *)(a2 + 16);
      *(_DWORD *)(v7 + 4 * v8 + 32) = *(_DWORD *)(a2 + 32);
      *(_DWORD *)(a1 + 24) = v5;
    }
  }
  return (unsigned int)v6;
}
