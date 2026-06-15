/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIEndpointCharacteristicsCache@@@WRL@Microsoft@@QEAA@XZ @ 0x180055F30
 * Callers:
 *     ??0CEndpointCharacteristicsCache@@QEAA@XZ @ 0x180055F74 (--0CEndpointCharacteristicsCache@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IEndpointCharacteristicsCache>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IEndpointCharacteristicsCache>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IEndpointCharacteristicsCache>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
