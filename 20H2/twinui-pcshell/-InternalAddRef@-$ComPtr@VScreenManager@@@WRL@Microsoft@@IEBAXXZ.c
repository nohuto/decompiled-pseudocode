/*
 * XREFs of ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1801E87D0
 * Callers:
 *     ?OnApplicationViewChanged@ScreenManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18007C880 (-OnApplicationViewChanged@ScreenManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@P.c)
 *     CreationThreadDispatcher::RunAsync__lambda_841554dac235e76a966632a629acea57___ @ 0x18009819C (CreationThreadDispatcher--RunAsync__lambda_841554dac235e76a966632a629acea57___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_9b5424b1010544f2b98d3b56c8ee7c3a___ @ 0x18009825C (CreationThreadDispatcher--RunAsync__lambda_9b5424b1010544f2b98d3b56c8ee7c3a___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_bb781a8a8a15c0cf7ff5e1563f68d9d3___ @ 0x1801E6C8C (CreationThreadDispatcher--RunAsync__lambda_bb781a8a8a15c0cf7ff5e1563f68d9d3___.c)
 *     ??$RunAsync@V_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@@CreationThreadDispatcher@@QEAAJV_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@K@Z @ 0x180215DAC (--$RunAsync@V_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@@CreationThreadDispatcher@@QEAAJV_lambda.c)
 *     CreationThreadDispatcher::RunAsync__lambda_7c0ea6bcd92fa0f22b391c2e3237e792___ @ 0x18023D0B0 (CreationThreadDispatcher--RunAsync__lambda_7c0ea6bcd92fa0f22b391c2e3237e792___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_69db3e9761c77a5f5df8b9f478688ffa___ @ 0x180316240 (CreationThreadDispatcher--RunAsync__lambda_69db3e9761c77a5f5df8b9f478688ffa___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_2e36a2b14ac9c065e7d81a4387bad0af___ @ 0x18031E454 (CreationThreadDispatcher--RunAsync__lambda_2e36a2b14ac9c065e7d81a4387bad0af___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_beeaa99da247ec9f188a411312d86a25___ @ 0x1803217B8 (CreationThreadDispatcher--RunAsync__lambda_beeaa99da247ec9f188a411312d86a25___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_95ea086e3b8fa056e55a3a293b600f83___ @ 0x180322C80 (CreationThreadDispatcher--RunAsync__lambda_95ea086e3b8fa056e55a3a293b600f83___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_b572b7b401bca0583e7d35bf745a8e03___ @ 0x180322DAC (CreationThreadDispatcher--RunAsync__lambda_b572b7b401bca0583e7d35bf745a8e03___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_0f869028d2211307d6500fcb06deb8db___ @ 0x18036E158 (CreationThreadDispatcher--RunAsync__lambda_0f869028d2211307d6500fcb06deb8db___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_3811e63994a6acdbea5f41d0f15c3e3d___ @ 0x18036E218 (CreationThreadDispatcher--RunAsync__lambda_3811e63994a6acdbea5f41d0f15c3e3d___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_49edb9179b1ba6407f235e88a6b30a0e___ @ 0x18036E2DC (CreationThreadDispatcher--RunAsync__lambda_49edb9179b1ba6407f235e88a6b30a0e___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_5e7b84d80f3018ca142c76d505d1d45c___ @ 0x18036E3A8 (CreationThreadDispatcher--RunAsync__lambda_5e7b84d80f3018ca142c76d505d1d45c___.c)
 * Callees:
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180139D9C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedE.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(__int64 *a1, volatile int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Microsoft::WRL::FtmBase>::InternalAddRef(
             v2,
             a2);
  return result;
}
