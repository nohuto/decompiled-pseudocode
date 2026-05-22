/*
 * XREFs of ?Materialize_BamoInputAttemptedDeliveryClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x180004380
 * Callers:
 *     ?Thunk_Materialize_BamoInputAttemptedDeliveryClientProxy_10@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180004370 (-Thunk_Materialize_BamoInputAttemptedDeliveryClientProxy_10@-$IBamoPeer_ISMBamos_AutoBamos_Recei.c)
 * Callees:
 *     ?CreateInputAttemptedDeliveryClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x18000441C (-CreateInputAttemptedDeliveryClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEA.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl::Materialize_BamoInputAttemptedDeliveryClientProxy(
        BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl *this,
        unsigned int a2,
        __int64 a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  __int64 v6; // rdi
  void (__fastcall ***v7)(_QWORD); // rcx
  __int64 v8; // rcx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  BamoImpl::CreateInputAttemptedDeliveryClientProxy(
    *(BamoImpl **)(*((_QWORD *)this + 3) + 32LL),
    *((struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)this + 2),
    (struct ISMBamos_AutoBamos::BamoPeer *)&v13,
    a4);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 48LL))(v13);
  v7 = *(void (__fastcall ****)(_QWORD))(v6 + 16);
  *(_QWORD *)(v6 + 16) = this;
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  if ( v7 )
    (**v7)(v7);
  *(_DWORD *)(v6 + 24) = a2;
  v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 56LL);
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v8 + 40LL))(
         v8,
         *((unsigned int *)this + 9),
         a2,
         v6);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xDADA,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v9,
      v11);
    __debugbreak();
  }
  return 0LL;
}
