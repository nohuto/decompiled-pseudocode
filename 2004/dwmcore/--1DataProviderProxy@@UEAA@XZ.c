/*
 * XREFs of ??1DataProviderProxy@@UEAA@XZ @ 0x180182820
 * Callers:
 *     ??_EDataProviderProxy@@UEAAPEAXI@Z @ 0x180182900 (--_EDataProviderProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800D637C (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAVCInte.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DataProviderProxy::~DataProviderProxy(DataProviderProxy *this)
{
  _QWORD *v2; // rdx
  _QWORD *i; // rax
  _QWORD **v4; // rcx
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  _QWORD *v7; // rsi
  void (__fastcall ***v8)(_QWORD); // rcx

  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *(_QWORD *)this = &DataProviderProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)this + 1) = &DataProviderProxy::`vftable'{for `IDataProviderProxy'};
  v2 = (_QWORD *)*((_QWORD *)this + 11);
  for ( i = (_QWORD *)*v2; i != v2; i = (_QWORD *)*i )
    *(_QWORD *)(i[3] + 192LL) = 0LL;
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>>>>::_Tidy((__int64)this + 104);
  v4 = (_QWORD **)*((_QWORD *)this + 11);
  *v4[1] = 0LL;
  v5 = *v4;
  if ( *v4 )
  {
    do
    {
      v6 = v5[3];
      v7 = (_QWORD *)*v5;
      if ( v6 )
      {
        v5[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      }
      std::_Deallocate<16,0>(v5, 0x20uLL);
      v5 = v7;
    }
    while ( v7 );
  }
  std::_Deallocate<16,0>(*((void **)this + 11), 0x20uLL);
  v8 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 4);
  if ( v8 )
    (**v8)(v8);
}
