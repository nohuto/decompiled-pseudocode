/*
 * XREFs of _lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_::_lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_ @ 0x18040CC20
 * Callers:
 *     Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_____lambda_fe1ba1d2764f4f2a02d8a9be58f012f2__&_ @ 0x18040C588 (Microsoft--WRL--Details--Make_CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f01.c)
 * Callees:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180184DA0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCom_ea_180184DA0.c)
 */

__int64 *__fastcall lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_::_lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rcx

  v3 = *a2;
  *a1 = *a2;
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::AddRef(v3);
  return a1;
}
