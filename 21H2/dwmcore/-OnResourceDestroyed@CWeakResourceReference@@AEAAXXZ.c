/*
 * XREFs of ?OnResourceDestroyed@CWeakResourceReference@@AEAAXXZ @ 0x1800DE334
 * Callers:
 *     ??1CResource@@MEAA@XZ @ 0x180049CEC (--1CResource@@MEAA@XZ.c)
 * Callees:
 *     ?erase@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBQEBVCResource@@@Z @ 0x180031E68 (-erase@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBV.c)
 *     ??0?$vector@PEAVCResource@@V?$allocator@PEAVCResource@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800DE3F0 (--0-$vector@PEAVCResource@@V-$allocator@PEAVCResource@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$vector@PEAVCResource@@V?$allocator@PEAVCResource@@@std@@@std@@AEAAXXZ @ 0x1800E2760 (-_Tidy@-$vector@PEAVCResource@@V-$allocator@PEAVCResource@@@std@@@std@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CWeakResourceReference::OnResourceDestroyed(CWeakResourceReference *this)
{
  _QWORD *i; // rdi
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+50h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 2);
  std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::erase(
    (unsigned __int64)this,
    (const unsigned __int8 *)&v4);
  *(_DWORD *)(*((_QWORD *)this + 2) + 32LL) &= ~8u;
  *((_QWORD *)this + 2) = 0LL;
  (**(void (__fastcall ***)(CWeakResourceReference *))this)(this);
  std::vector<CResource *>::vector<CResource *>(v3, (char *)this + 24);
  for ( i = (_QWORD *)v3[0]; i != (_QWORD *)v3[1]; ++i )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*i + 72LL))(*i, 0LL, 0LL);
  std::vector<CResource *>::_Tidy(v3);
  (*(void (__fastcall **)(CWeakResourceReference *))(*(_QWORD *)this + 8LL))(this);
}
