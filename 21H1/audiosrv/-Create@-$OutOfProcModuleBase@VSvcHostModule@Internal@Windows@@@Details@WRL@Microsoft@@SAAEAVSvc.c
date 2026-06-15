/*
 * XREFs of ?Create@?$OutOfProcModuleBase@VSvcHostModule@Internal@Windows@@@Details@WRL@Microsoft@@SAAEAVSvcHostModule@Internal@Windows@@XZ @ 0x180054770
 * Callers:
 *     ?StaticInitialize@?$Module@$00VSvcHostModule@Internal@Windows@@@WRL@Microsoft@@CA_NXZ @ 0x180054754 (-StaticInitialize@-$Module@$00VSvcHostModule@Internal@Windows@@@WRL@Microsoft@@CA_NXZ.c)
 *     Microsoft::WRL::Details::OutOfProcModuleBase_Windows::Internal::SvcHostModule_::Create__lambda_b07e40d598d2e6cc64bbba968f53c163___ @ 0x180064E90 (Microsoft--WRL--Details--OutOfProcModuleBase_Windows--Internal--SvcHostModule_--Create__lambda_b.c)
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800BB9B4 (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 *Microsoft::WRL::Details::OutOfProcModuleBase<Windows::Internal::SvcHostModule>::Create()
{
  __int64 *result; // rax

  InitOnceExecuteOnce(
    &Microsoft::WRL::Details::OutOfProcModuleBase<Windows::Internal::SvcHostModule>::initOnceOutOfProc_,
    (PINIT_ONCE_FN)_lambda_253709c146e3c4eefdc38a0c994771db_::_lambda_invoker_cdecl_,
    0LL,
    0LL);
  result = &Microsoft::WRL::Details::StaticStorage<Windows::Internal::SvcHostModule,1,int>::instance_;
  byte_18019F520 = 1;
  return result;
}
