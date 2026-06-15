/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProcessSubmixProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18004F224
 * Callers:
 *     ??_GCProcessSubmixProxy@@MEAAPEAXI@Z @ 0x18004F020 (--_GCProcessSubmixProxy@@MEAAPEAXI@Z.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIProcessSubmixProxy@@UIInspectable@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800E44C0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIProcessSubmixProxy@@UIInspectable@@.c)
 * Callees:
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x18006DED8 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

int __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IProcessSubmixProxy,IInspectable>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IProcessSubmixProxy,IInspectable>(
        __int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r10

  v1 = *(_QWORD *)(a1 + 40) >> 63;
  if ( *(__int64 *)(a1 + 40) < 0 )
  {
    LODWORD(v1) = ATL::SafeDecrementReferenceMultiThread((int *)(2LL * *(_QWORD *)(a1 + 40) + 12));
    if ( !(_DWORD)v1 )
    {
      if ( v2 )
        LODWORD(v1) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 32LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        LODWORD(v1) = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v1;
}
