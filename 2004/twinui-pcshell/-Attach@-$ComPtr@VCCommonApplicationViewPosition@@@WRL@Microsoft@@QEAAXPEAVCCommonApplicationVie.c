/*
 * XREFs of ?Attach@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationViewPosition@@@Z @ 0x180184DAC
 * Callers:
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x1801849CC (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@V1@AEAUCRect@Geometry@@@Details@WRL@Microsoft@@YAJPEAPEAVCCommonApplicationViewPosition@@AEAUCRect@Geometry@@@Z @ 0x1803D9F48 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@V1@AEAUCRect@Geometry@@@Details@WRL@Micros.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801855C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCo_ea_1801855C0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::Attach(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::Release(v4);
  *a1 = a2;
  return result;
}
