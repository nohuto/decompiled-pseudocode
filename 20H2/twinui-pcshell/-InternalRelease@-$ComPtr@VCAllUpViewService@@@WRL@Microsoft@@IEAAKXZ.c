/*
 * XREFs of ?InternalRelease@?$ComPtr@VCAllUpViewService@@@WRL@Microsoft@@IEAAKXZ @ 0x180380FF8
 * Callers:
 *     ??$MakeAndInitialize@VAppResizeView@@V1@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVAppResizeView@@AEA_N@Z @ 0x1800BBBA0 (--$MakeAndInitialize@VAppResizeView@@V1@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVAppResizeView@@AE.c)
 *     ?AppResizeView_CreateInstance@@YAJ_NAEBU_GUID@@PEAPEAX@Z @ 0x1800BBD50 (-AppResizeView_CreateInstance@@YAJ_NAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VCAllUpViewService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@YAJPEAPEAVCAllUpViewService@@AEAPEAUIMultitaskingViewTaskScheduler@@@Z @ 0x180380964 (--$MakeAndInitialize@VCAllUpViewService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@WRL@.c)
 *     ?CAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x180380EF0 (-CAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$ComPtr@VAppResizeView@@@WRL@Microsoft@@QEAA@XZ @ 0x180411B98 (--1-$ComPtr@VAppResizeView@@@WRL@Microsoft@@QEAA@XZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_efd0a2201cba9b434f5cd15cf706417f___::_scalar_deleting_destructor_ @ 0x180411CA0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_efd0a2201cba9b434f5cd15cf706417f___--_scala.c)
 *     ?Hide@AppResizeView@@UEAAX_N@Z @ 0x1804122B0 (-Hide@AppResizeView@@UEAAX_N@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIAMSpecialWindowBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007AE90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIAMSpecialWindo.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CAllUpViewService>::InternalRelease(volatile int **a1)
{
  volatile int *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CIAMSpecialWindowBase>::Release(
             (__int64)v1,
             v1);
  }
  return result;
}
