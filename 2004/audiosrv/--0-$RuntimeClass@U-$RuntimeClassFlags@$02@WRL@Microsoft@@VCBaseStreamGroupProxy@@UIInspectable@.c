/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCBaseStreamGroupProxy@@UIInspectable@@@WRL@Microsoft@@QEAA@XZ @ 0x1800E3D68
 * Callers:
 *     ??0CExclusiveStreamGroupProxy@@QEAA@XZ @ 0x1800E3E88 (--0CExclusiveStreamGroupProxy@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ??0CBaseStreamGroupProxy@@QEAA@XZ @ 0x1800E3DE8 (--0CBaseStreamGroupProxy@@QEAA@XZ.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>(
        _QWORD *a1)
{
  Microsoft::WRL::Details *v2; // rcx

  CBaseStreamGroupProxy::CBaseStreamGroupProxy((CBaseStreamGroupProxy *)(a1 + 1));
  v2 = Microsoft::WRL::Details::ModuleBase::module_;
  *a1 = &CSharedStreamGroupProxy::`vftable'{for `IInspectable'};
  a1[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CBaseStreamGroupProxy>,IWeakReferenceSource,IInspectable>'};
  a1[31] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>::`vftable'{for `IWeakReferenceSource'};
  a1[32] = &CSharedStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  a1[34] = 1LL;
  if ( v2 )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)v2 + 8LL))(v2);
  return a1;
}
