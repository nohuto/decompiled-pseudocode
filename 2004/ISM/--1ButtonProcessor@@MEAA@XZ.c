/*
 * XREFs of ??1ButtonProcessor@@MEAA@XZ @ 0x180049E04
 * Callers:
 *     ??_EButtonProcessor@@MEAAPEAXI@Z @ 0x180049ED4 (--_EButtonProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800375F0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180045464 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBEUTar.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800476D0 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@PEA.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ButtonProcessor::~ButtonProcessor(ButtonProcessor *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  _QWORD *v6; // rbx

  *(_QWORD *)this = &ButtonProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &ButtonProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  v2 = *((_QWORD *)this + 16);
  if ( v2 )
  {
    *((_QWORD *)this + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 14);
  if ( v3 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 13);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy((__int64)this + 64);
  v4 = *((_QWORD *)this + 6);
  **(_QWORD **)(v4 + 8) = 0LL;
  v5 = *(_QWORD **)v4;
  if ( *(_QWORD *)v4 )
  {
    do
    {
      v6 = (_QWORD *)*v5;
      std::_List_node<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>,void *>>>(
        v4,
        (__int64)v5);
      v5 = v6;
    }
    while ( v6 );
  }
  std::_Deallocate<16,0>(*((void **)this + 6), (const struct std::nothrow_t *)0x28);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
