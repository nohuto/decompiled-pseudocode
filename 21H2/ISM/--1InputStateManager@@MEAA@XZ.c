/*
 * XREFs of ??1InputStateManager@@MEAA@XZ @ 0x180087444
 * Callers:
 *     ??_GInputStateManager@@MEAAPEAXI@Z @ 0x1800875FC (--_GInputStateManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800372E0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800462A4 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBEUTar.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800871F4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@-$_L.c)
 */

void __fastcall InputStateManager::~InputStateManager(InputStateManager *this)
{
  __int64 v2; // rdi
  __int64 i; // rbx
  _QWORD *v4; // r14
  __int64 v5; // rdi
  int (__fastcall *v6)(__int64, __int64 *); // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  void *v9; // rcx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &InputStateManager::`vftable'{for `IRawInputClient'};
  *((_QWORD *)this + 1) = &InputStateManager::`vftable'{for `IInputProcessorHost'};
  *((_QWORD *)this + 2) = &InputStateManager::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &InputStateManager::`vftable'{for `RefCountedObject'};
  v2 = *((_QWORD *)this + 10);
  for ( i = *((_QWORD *)this + 9); i != v2; i += 16LL )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(i + 8) + 16LL))(*(_QWORD *)(i + 8));
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 5);
  v4 = (_QWORD *)((char *)this + 48);
  if ( *((_QWORD *)this + 8) )
  {
    v10 = 0LL;
    v5 = *v4;
    v6 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v4 + 24LL);
    Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v10);
    if ( v6(v5, &v10) >= 0 )
      (*(void (__fastcall **)(__int64, const wchar_t *, __int64))(*(_QWORD *)v10 + 48LL))(
        v10,
        L"System\\Input\\DeviceCommandEndpoint",
        1LL);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v4 + 160LL))(*v4, *((_QWORD *)this + 8));
    *((_QWORD *)this + 8) = 0LL;
    Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v10);
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 6);
  v7 = *((_QWORD *)this + 22);
  if ( v7 )
  {
    *((_QWORD *)this + 22) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy((__int64)this + 120);
  std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>>>(
    v8,
    *((_QWORD ***)this + 13));
  std::_Deallocate<16,0>(*((void **)this + 13), (const struct std::nothrow_t *)0x20);
  v9 = (void *)*((_QWORD *)this + 9);
  if ( v9 )
  {
    std::_Deallocate<16,0>(
      v9,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 11) - (_QWORD)v9) & 0xFFFFFFFFFFFFFFF0uLL));
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 5);
  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
}
