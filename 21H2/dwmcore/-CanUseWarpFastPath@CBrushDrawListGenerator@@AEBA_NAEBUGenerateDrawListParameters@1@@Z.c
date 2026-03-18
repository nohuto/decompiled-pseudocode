/*
 * XREFs of ?CanUseWarpFastPath@CBrushDrawListGenerator@@AEBA_NAEBUGenerateDrawListParameters@1@@Z @ 0x1801E5238
 * Callers:
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180094700 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800DD36C (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsColorConversionRequired@CBrushDrawListGenerator@@AEBA_NXZ @ 0x1801E6150 (-IsColorConversionRequired@CBrushDrawListGenerator@@AEBA_NXZ.c)
 *     ?IsRatioWithinThresholdF@CBrushDrawListGenerator@@CA_NMM@Z @ 0x1801E629C (-IsRatioWithinThresholdF@CBrushDrawListGenerator@@CA_NMM@Z.c)
 */

bool __fastcall CBrushDrawListGenerator::CanUseWarpFastPath(
        CBrushDrawListGenerator *this,
        const struct CBrushDrawListGenerator::GenerateDrawListParameters *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  int v6; // xmm0_4
  int v7; // xmm1_4
  __int64 v8; // r9
  _DWORD v10[4]; // [rsp+20h] [rbp-29h] BYREF
  _BYTE v11[64]; // [rsp+30h] [rbp-19h] BYREF
  int v12; // [rsp+70h] [rbp+27h]
  __int128 v13; // [rsp+80h] [rbp+37h] BYREF

  if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 22) + 8LL))(*((_QWORD *)a2 + 22)) != 1 )
    return 0;
  if ( *(_DWORD *)(*(_QWORD *)this + 308LL) == 4 )
    return 0;
  if ( (*((_DWORD *)this + 4) & 0x200) != 0 )
  {
    v4 = *(_DWORD *)(*(_QWORD *)this + 300LL);
    if ( v4 >= 4 && (v4 == 4 || v4 == 6) )
      return 0;
  }
  if ( CBrushDrawListGenerator::IsColorConversionRequired(this) )
    return 0;
  if ( *((_DWORD *)a2 + 46) )
    return 0;
  v5 = *(_QWORD *)this;
  v12 = 0;
  CMatrixStack::Top(v5 + 368, (__int64)v11);
  v6 = *((_DWORD *)this + 2);
  v7 = *((_DWORD *)this + 3);
  v10[0] = 0;
  v10[1] = 0;
  v10[2] = v6;
  v13 = 0LL;
  v10[3] = v7;
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)v11, (__int64)v10, (float *)&v13, v8);
  return CBrushDrawListGenerator::IsRatioWithinThresholdF(
           *((float *)&v13 + 2) - *(float *)&v13,
           *((float *)&v13 + 3) - *((float *)&v13 + 1));
}
