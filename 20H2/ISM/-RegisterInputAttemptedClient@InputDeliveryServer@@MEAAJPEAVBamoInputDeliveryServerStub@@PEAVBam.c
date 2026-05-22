/*
 * XREFs of ?RegisterInputAttemptedClient@InputDeliveryServer@@MEAAJPEAVBamoInputDeliveryServerStub@@PEAVBamoInputAttemptedDeliveryClientProxy@@@Z @ 0x180004C20
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180004CB8 (--$_Emplace_reallocate@AEBV-$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@-$v.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputDeliveryServer::RegisterInputAttemptedClient(
        InputDeliveryServer *this,
        struct BamoInputDeliveryServerStub *a2,
        struct BamoInputAttemptedDeliveryClientProxy *a3)
{
  _QWORD *v4; // rdx
  struct BamoInputAttemptedDeliveryClientProxy *v5; // rcx
  struct BamoInputAttemptedDeliveryClientProxy *v7; // [rsp+30h] [rbp+8h] BYREF
  struct BamoInputAttemptedDeliveryClientProxy **v8; // [rsp+40h] [rbp+18h]

  v7 = a3;
  if ( a3 )
  {
    (**(void (__fastcall ***)(struct BamoInputAttemptedDeliveryClientProxy *, struct BamoInputDeliveryServerStub *))a3)(
      a3,
      a2);
    a3 = v7;
  }
  v8 = &v7;
  v4 = (_QWORD *)*((_QWORD *)this + 11);
  if ( *((_QWORD **)this + 12) == v4 )
  {
    std::vector<Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy> const &>(
      (char *)this + 80,
      v4,
      &v7);
  }
  else
  {
    *v4 = a3;
    if ( a3 )
      (**(void (__fastcall ***)(struct BamoInputAttemptedDeliveryClientProxy *))v7)(v7);
    *((_QWORD *)this + 11) += 8LL;
  }
  v5 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(struct BamoInputAttemptedDeliveryClientProxy *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  return 0LL;
}
