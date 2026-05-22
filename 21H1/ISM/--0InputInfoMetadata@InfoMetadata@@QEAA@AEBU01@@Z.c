/*
 * XREFs of ??0InputInfoMetadata@InfoMetadata@@QEAA@AEBU01@@Z @ 0x1801A490C
 * Callers:
 *     ??$_Emplace_reallocate@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@?$vector@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@QEAAPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@1@QEAU21@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@Z @ 0x1801A4298 (--$_Emplace_reallocate@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@-$vector@U-$pair@W4I.c)
 *     ?AddInput@InfoMetadata@@QEAAXW4InputType@@UInputInfoMetadata@1@@Z @ 0x1801A4AF8 (-AddInput@InfoMetadata@@QEAAXW4InputType@@UInputInfoMetadata@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??0?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@QEAA@AEBV01@@Z @ 0x1800CE220 (--0-$function@$$A6AXAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=6
InfoMetadata::InputInfoMetadata *__fastcall InfoMetadata::InputInfoMetadata::InputInfoMetadata(
        InfoMetadata::InputInfoMetadata *this,
        const struct InfoMetadata::InputInfoMetadata *a2)
{
  __int64 (__fastcall ***v4)(_QWORD, char *); // rcx
  __int64 (__fastcall ***v5)(_QWORD, char *); // rcx

  std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>(
    (__int64)this,
    (__int64)a2);
  std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>(
    (__int64)this + 64,
    (__int64)a2 + 64);
  *((_QWORD *)this + 23) = 0LL;
  v4 = (__int64 (__fastcall ***)(_QWORD, char *))*((_QWORD *)a2 + 23);
  if ( v4 )
    *((_QWORD *)this + 23) = (**v4)(v4, (char *)this + 128);
  *((_QWORD *)this + 31) = 0LL;
  v5 = (__int64 (__fastcall ***)(_QWORD, char *))*((_QWORD *)a2 + 31);
  if ( v5 )
    *((_QWORD *)this + 31) = (**v5)(v5, (char *)this + 192);
  std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>(
    (__int64)this + 256,
    (__int64)a2 + 256);
  return this;
}
