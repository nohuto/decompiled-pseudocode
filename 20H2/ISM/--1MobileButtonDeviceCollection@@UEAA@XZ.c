/*
 * XREFs of ??1MobileButtonDeviceCollection@@UEAA@XZ @ 0x1800976C0
 * Callers:
 *     ??_GMobileButtonDeviceCollection@@UEAAPEAXI@Z @ 0x180097790 (--_GMobileButtonDeviceCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180045414 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBEUTar.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180096C74 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX.c)
 */

void __fastcall MobileButtonDeviceCollection::~MobileButtonDeviceCollection(MobileButtonDeviceCollection *this)
{
  char *v2; // rcx
  __int64 v3; // rcx
  _QWORD **v4; // rcx
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx

  *(_QWORD *)this = &MobileButtonDeviceCollection::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  v2 = (char *)*((_QWORD *)this + 361);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy((__int64)this + 2848);
  std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorState>,void *>>>(
    v3,
    *((_QWORD ***)this + 354));
  std::_Deallocate<16,0>(*((void **)this + 354), (const struct std::nothrow_t *)0x18);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy((__int64)this + 2784);
  v4 = (_QWORD **)*((_QWORD *)this + 346);
  *v4[1] = 0LL;
  v5 = *v4;
  if ( v5 )
  {
    do
    {
      v6 = (_QWORD *)*v5;
      std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x28);
      v5 = v6;
    }
    while ( v6 );
  }
  std::_Deallocate<16,0>(*((void **)this + 346), (const struct std::nothrow_t *)0x28);
  HIDDeviceCollection::~HIDDeviceCollection(this);
}
