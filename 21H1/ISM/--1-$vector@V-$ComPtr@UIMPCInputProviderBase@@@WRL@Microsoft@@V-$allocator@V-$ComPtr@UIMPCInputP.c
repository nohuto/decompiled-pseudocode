/*
 * XREFs of ??1?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18007583C
 * Callers:
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$3 @ 0x18004E5C1 (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$3.c)
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$10 @ 0x18004E670 (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$10.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::~vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>(
        __int64 a1)
{
  __int64 *v2; // rsi
  __int64 *v3; // rbp
  __int64 *v4; // rdi
  __int64 v5; // rcx

  v2 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(__int64 **)(a1 + 8);
    v4 = *(__int64 **)a1;
    if ( v2 != v3 )
    {
      do
      {
        v5 = *v4;
        if ( *v4 )
        {
          *v4 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        }
        ++v4;
      }
      while ( v4 != v3 );
    }
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
