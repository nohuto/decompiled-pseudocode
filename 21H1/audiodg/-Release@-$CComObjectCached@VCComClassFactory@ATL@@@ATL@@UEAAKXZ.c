/*
 * XREFs of ?Release@?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ @ 0x140019080
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z @ 0x14001E7F8 (-SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ??_G?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z @ 0x14003065C (--_G-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ATL::CComObjectCached<ATL::CComClassFactory>::Release(__int64 a1)
{
  unsigned int v1; // ebx
  void *v2; // r10

  v1 = ATL::CComMultiThreadModel::SafeDecrementReference((int *)(a1 + 8));
  if ( v1 )
  {
    if ( v1 == 1 )
      (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  else if ( v2 )
  {
    ATL::CComObjectCached<ATL::CComClassFactory>::`scalar deleting destructor'(v2);
  }
  return v1;
}
