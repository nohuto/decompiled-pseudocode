/*
 * XREFs of ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x1800D5AC8
 * Callers:
 *     ?Append@CVisualTreePath@@QEAAJPEBVCVisual@@PEBVCVisualTree@@@Z @ 0x18001071C (-Append@CVisualTreePath@@QEAAJPEBVCVisual@@PEBVCVisualTree@@@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004AFB8 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z @ 0x18004C450 (-CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z.c)
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@PEBVCVisualTree@@_N@Z @ 0x1800D49D8 (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@PEBVCVisualT.c)
 *     _lambda_c2c4320ca1e41092fdbc0b7f07aa0d93_::operator() @ 0x180103B2C (_lambda_c2c4320ca1e41092fdbc0b7f07aa0d93_--operator().c)
 *     _lambda_9dcfd4a181459fe08d94fb0c4400ffb8_::operator() @ 0x1801C40F8 (_lambda_9dcfd4a181459fe08d94fb0c4400ffb8_--operator().c)
 *     ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x1801FAFC8 (-EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z.c)
 *     ?IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z @ 0x1801FB15C (-IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z.c)
 *     ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z @ 0x1802009E8 (-IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z.c)
 *     ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z @ 0x1802020F4 (-UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1802368A0 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetVisualAlpha@CVisual@@QEBAMPEBVCVisualTree@@@Z @ 0x18000EC10 (-GetVisualAlpha@CVisual@@QEBAMPEBVCVisualTree@@@Z.c)
 *     ?GetEffectAlpha@CVisual@@QEBAMXZ @ 0x18000EE64 (-GetEffectAlpha@CVisual@@QEBAMXZ.c)
 */

char __fastcall CVisualTree::_IsInTree(__int64 a1, __int64 a2, int a3)
{
  char v3; // si
  float v5; // xmm7_4
  __int64 v6; // rbx
  __int64 v8; // rdi
  float VisualAlpha; // xmm6_4

  v3 = 0;
  v5 = *(float *)&FLOAT_1_0;
  v6 = a2;
  v8 = a2;
  if ( a2 )
  {
    while ( 1 )
    {
      if ( (unsigned int)(a3 - 1) <= 1 )
      {
        if ( (*(_BYTE *)(v6 + 103) & 2) == 0 )
          break;
        if ( (*(_BYTE *)(v6 + 102) & 4) != 0 )
          break;
        if ( a3 == 2 )
        {
          VisualAlpha = CVisual::GetVisualAlpha((CVisual *)v6, (CVisual **)a1);
          v5 = v5 * (float)(VisualAlpha * CVisual::GetEffectAlpha((CVisual *)v6));
          if ( COERCE_FLOAT(LODWORD(v5) & _xmm) < 0.0000011920929 )
            break;
        }
      }
      if ( v6 == *(_QWORD *)(a1 + 64) )
        return 1;
      if ( !v8 || (v8 = *(_QWORD *)(v8 + 88)) == 0 || v6 != v8 && (v8 = *(_QWORD *)(v8 + 88), v6 != v8) )
      {
        v6 = *(_QWORD *)(v6 + 88);
        if ( v6 )
          continue;
      }
      return v3;
    }
  }
  return v3;
}
