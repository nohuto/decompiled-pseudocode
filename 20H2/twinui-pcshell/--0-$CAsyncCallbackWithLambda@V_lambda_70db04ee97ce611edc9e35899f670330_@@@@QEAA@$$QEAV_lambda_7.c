/*
 * XREFs of ??0?$CAsyncCallbackWithLambda@V_lambda_70db04ee97ce611edc9e35899f670330_@@@@QEAA@$$QEAV_lambda_70db04ee97ce611edc9e35899f670330_@@@Z @ 0x180215F74
 * Callers:
 *     ??$CreateAsyncCallbackWithLambda@V_lambda_70db04ee97ce611edc9e35899f670330_@@@@YA?AV?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@$$QEAV_lambda_70db04ee97ce611edc9e35899f670330_@@@Z @ 0x180215A28 (--$CreateAsyncCallbackWithLambda@V_lambda_70db04ee97ce611edc9e35899f670330_@@@@YA-AV-$ComPtr@UIA.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180073D48 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda<_lambda_70db04ee97ce611edc9e35899f670330_>::CAsyncCallbackWithLambda<_lambda_70db04ee97ce611edc9e35899f670330_>(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>(a1);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)a1 = &CAsyncCallbackWithLambda<_lambda_70db04ee97ce611edc9e35899f670330_>::`vftable'{for `IAsyncCallback'};
  *(_QWORD *)(a1 + 8) = &CAsyncCallbackWithLambda<_lambda_70db04ee97ce611edc9e35899f670330_>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return a1;
}
