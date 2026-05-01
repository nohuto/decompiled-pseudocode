/*
 * XREFs of ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x18008381C
 * Callers:
 *     ?GetFrameByWindow@CApplicationFrameService@@UEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x180077AC0 (-GetFrameByWindow@CApplicationFrameService@@UEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z.c)
 *     ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameWrapper@@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Z @ 0x18014F9D8 (--$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PE_ea_18014F9D8.c)
 *     ??1?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x180150228 (--1-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x180150790 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 *     ?DestroyFrame@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z @ 0x180150F60 (-DestroyFrame@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z.c)
 *     ?EndFrameRecovery@CApplicationFrameService@@UEAAXXZ @ 0x1801510F0 (-EndFrameRecovery@CApplicationFrameService@@UEAAXXZ.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180151EDC (-RemoveAll@-$CTSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V-$CT.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180043BC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$ChainInterfaces.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return result;
}
