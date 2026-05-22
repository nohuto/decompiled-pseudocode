/*
 * XREFs of ??1DWMCursorBroker@@MEAA@XZ @ 0x18019B28C
 * Callers:
 *     ??_GDWMCursorBroker@@MEAAPEAXI@Z @ 0x18019B62C (--_GDWMCursorBroker@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800375F0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180045464 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBEUTar.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180086E74 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@-$_L.c)
 */

void __fastcall DWMCursorBroker::~DWMCursorBroker(DWMCursorBroker *this)
{
  _QWORD *v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rcx
  void *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD **v9; // rcx
  _QWORD *v10; // rcx
  _QWORD *v11; // rbx
  __int64 v12; // rcx

  *(_QWORD *)this = &DWMCursorBroker::`vftable'{for `ICursorBroker'};
  *((_QWORD *)this + 1) = &DWMCursorBroker::`vftable'{for `IRemoteCursorBroker'};
  *((_QWORD *)this + 2) = &DWMCursorBroker::`vftable'{for `ISystemContextObserver'};
  *((_QWORD *)this + 3) = &DWMCursorBroker::`vftable'{for `RefCountedObject'};
  v2 = (_QWORD *)((char *)this + 216);
  v3 = 10LL;
  do
  {
    if ( *v2 )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 160LL))(*((_QWORD *)this + 22));
      *v2 = 0LL;
    }
    v2 += 3;
    --v3;
  }
  while ( v3 );
  v4 = *((_QWORD *)this + 59);
  if ( v4 )
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 32LL))(v4, (char *)this + 16);
  v5 = *((_QWORD *)this + 63);
  if ( v5 )
  {
    *((_QWORD *)this + 63) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = (void *)*((_QWORD *)this + 60);
  if ( v6 )
  {
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)(200 * ((*((_QWORD *)this + 62) - (_QWORD)v6) / 200LL)));
    *((_QWORD *)this + 60) = 0LL;
    *((_QWORD *)this + 61) = 0LL;
    *((_QWORD *)this + 62) = 0LL;
  }
  v7 = *((_QWORD *)this + 59);
  if ( v7 )
  {
    *((_QWORD *)this + 59) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 25);
  v8 = *((_QWORD *)this + 24);
  if ( v8 )
  {
    *((_QWORD *)this + 24) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 23);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 22);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy((__int64)this + 136);
  v9 = (_QWORD **)*((_QWORD *)this + 15);
  *v9[1] = 0LL;
  v10 = *v9;
  if ( v10 )
  {
    do
    {
      v11 = (_QWORD *)*v10;
      std::_Deallocate<16,0>(v10, (const struct std::nothrow_t *)0x20);
      v10 = v11;
    }
    while ( v11 );
  }
  std::_Deallocate<16,0>(*((void **)this + 15), (const struct std::nothrow_t *)0x20);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy((__int64)this + 72);
  std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>>>(
    v12,
    *((_QWORD ***)this + 7));
  std::_Deallocate<16,0>(*((void **)this + 7), (const struct std::nothrow_t *)0x20);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 5);
  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
}
