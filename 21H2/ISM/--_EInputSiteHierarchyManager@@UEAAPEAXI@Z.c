/*
 * XREFs of ??_EInputSiteHierarchyManager@@UEAAPEAXI@Z @ 0x1800F1A60
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800462A4 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBEUTar.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

InputSiteHierarchyManager *__fastcall InputSiteHierarchyManager::`vector deleting destructor'(
        InputSiteHierarchyManager *this,
        char a2)
{
  _QWORD **v4; // r8
  _QWORD *v5; // rbx
  _QWORD *v6; // rsi
  void *v7; // rcx
  __int64 v8; // rcx

  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy((__int64)this + 40);
  v4 = (_QWORD **)*((_QWORD *)this + 3);
  *v4[1] = 0LL;
  v5 = *v4;
  if ( *v4 )
  {
    do
    {
      v6 = (_QWORD *)*v5;
      v7 = (void *)v5[5];
      if ( v7 )
      {
        std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)((v5[7] - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF8uLL));
        v5[5] = 0LL;
        v5[6] = 0LL;
        v5[7] = 0LL;
      }
      v8 = v5[3];
      if ( v8 )
      {
        v5[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x40);
      v5 = v6;
    }
    while ( v6 );
  }
  std::_Deallocate<16,0>(*((void **)this + 3), (const struct std::nothrow_t *)0x40);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
