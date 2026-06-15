/*
 * XREFs of Microsoft::WRL::Details::OutOfProcModuleBase_Windows::Internal::SvcHostModule_::Create__lambda_b07e40d598d2e6cc64bbba968f53c163___ @ 0x180064E90
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x180063C30 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?Create@?$OutOfProcModuleBase@VSvcHostModule@Internal@Windows@@@Details@WRL@Microsoft@@SAAEAVSvcHostModule@Internal@Windows@@XZ @ 0x180054770 (-Create@-$OutOfProcModuleBase@VSvcHostModule@Internal@Windows@@@Details@WRL@Microsoft@@SAAEAVSvc.c)
 */

__int64 *Microsoft::WRL::Details::OutOfProcModuleBase_Windows::Internal::SvcHostModule_::Create__lambda_b07e40d598d2e6cc64bbba968f53c163___()
{
  __int64 *result; // rax

  result = Microsoft::WRL::Details::OutOfProcModuleBase<Windows::Internal::SvcHostModule>::Create();
  if ( !result[6] )
  {
    byte_1801A08B8 = 1;
    qword_1801A08A0 = (__int64)off_180149F50;
    byte_1801A08A8 = 0;
    result[6] = (__int64)&qword_1801A08A0;
  }
  return result;
}
