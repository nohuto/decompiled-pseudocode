/*
 * XREFs of ??1?$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800922FC
 * Callers:
 *     ??1DeviceAttached@RawInputProvidersTracing@@QEAA@XZ @ 0x180092524 (--1DeviceAttached@RawInputProvidersTracing@@QEAA@XZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180096A10 (-reset@-$shared_object@V-$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProv.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x180067FAC (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x18008FF00 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     ??$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$03@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x180091CD8 (--$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$03@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall wil::ActivityBase<RawInputProvidersTracing,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rbx
  HANDLE ProcessHeap; // rax
  _QWORD *v5; // rax

  wil::details::shared_buffer::reset((volatile signed __int32 **)(a1 + 224));
  if ( *(_BYTE *)(a1 + 64) )
  {
    v3 = *(void **)(a1 + 56);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v3);
    *(_BYTE *)(a1 + 64) = 0;
  }
  *(_QWORD *)(a1 + 56) = 0LL;
  if ( *(_DWORD *)a1 == 1 )
  {
    *(_DWORD *)a1 = 2;
    v5 = wil::details::static_lazy<RawInputProvidersTracing>::get(
           v2,
           _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
    _tlgWriteActivityAutoStop<70368744177664,4>((_DWORD *)v5[1]);
  }
  *(_DWORD *)a1 = 3;
}
