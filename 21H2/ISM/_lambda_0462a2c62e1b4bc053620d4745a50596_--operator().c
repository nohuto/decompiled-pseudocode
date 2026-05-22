/*
 * XREFs of _lambda_0462a2c62e1b4bc053620d4745a50596_::operator() @ 0x1800CE970
 * Callers:
 *     wil::details::lambda_call__lambda_0462a2c62e1b4bc053620d4745a50596___::_lambda_call__lambda_0462a2c62e1b4bc053620d4745a50596___ @ 0x1800CE3C4 (wil--details--lambda_call__lambda_0462a2c62e1b4bc053620d4745a50596___--_lambda_call__lambda_0462.c)
 *     ?DoDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@K_NPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800CF684 (-DoDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180040458 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800C65E8 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C7254 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?RemoveDeviceFromCache@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJKK@Z @ 0x1800D20F4 (-RemoveDeviceFromCache@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Win.c)
 *     ?SpatialInputController_Removed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKQEB_W@Z @ 0x1800D26A8 (-SpatialInputController_Removed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKQEB_W@.c)
 */

void __fastcall lambda_0462a2c62e1b4bc053620d4745a50596_::operator()(__int64 a1)
{
  __int64 v2; // rax
  unsigned int *v3; // rsi
  const wchar_t *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (****(__int64 (__fastcall *****)(_QWORD))(a1 + 8))(**(_QWORD **)(a1 + 8));
  v3 = *(unsigned int **)a1;
  v4 = (const wchar_t *)v2;
  if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v5) )
  {
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
      v6,
      _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    SpatialInteractionDevices::SpatialInteractionTrace::SpatialInputController_Removed_(v7, *v3, v4);
  }
  v8 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::RemoveDeviceFromCache(
         *(Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection **)(a1 + 16),
         **(_DWORD **)a1,
         **(_DWORD **)(a1 + 24));
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      217LL,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v8);
}
