/*
 * XREFs of ?Release@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180053CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x18006D32C (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        __int64 a1)
{
  unsigned int v1; // eax
  _DWORD *v2; // r10
  int v3; // edi
  unsigned int v4; // ebx
  bool v5; // zf

  v1 = ATL::SafeDecrementReferenceMultiThread((int *)(a1 + 12));
  v3 = v2[5];
  v4 = v1;
  if ( v1 )
  {
    if ( (v3 & 6) != 0 )
      return v4;
    v5 = v1 == 1;
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v2 + 40LL))(v2, 1LL);
    v5 = (v3 & 5) == 5;
  }
  if ( v5 )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return v4;
}
