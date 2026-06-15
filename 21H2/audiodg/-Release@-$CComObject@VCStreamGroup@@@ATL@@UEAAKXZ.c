/*
 * XREFs of ?Release@?$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x140019130
 * Callers:
 *     ?Release@?$CComObject@VCStreamGroup@@@ATL@@W7EAAKXZ @ 0x14002A0A0 (-Release@-$CComObject@VCStreamGroup@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCStreamGroup@@@ATL@@WBA@EAAKXZ @ 0x14002A0B0 (-Release@-$CComObject@VCStreamGroup@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCStreamGroup@@@ATL@@WBI@EAAKXZ @ 0x14002A0C0 (-Release@-$CComObject@VCStreamGroup@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     ?SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z @ 0x14001EB6C (-SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComObject<CStreamGroup>::Release(int *a1)
{
  unsigned int v2; // edi

  v2 = ATL::CComMultiThreadModel::SafeDecrementReference(a1 + 86);
  if ( !v2 )
  {
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( a1 )
      (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)a1 + 104LL))(a1, v2 + 1);
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
