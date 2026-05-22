/*
 * XREFs of std::_Func_impl_no_alloc__lambda_be1afa1ad46a34c97b71e3333d61116f__void__MIT_INPUT_FOCUS_MESSAGE_const___::_Do_call @ 0x180013E80
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$GetAllAttachedObjectsByType@UIActivationListenerInputObjectProxy@@@InputSite@@QEAA?AV?$vector@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@std@@@std@@XZ @ 0x180013F70 (--$GetAllAttachedObjectsByType@UIActivationListenerInputObjectProxy@@@InputSite@@QEAA-AV-$vector.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180016718 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@0@@Z @ 0x1800CD41C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graph.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_be1afa1ad46a34c97b71e3333d61116f__void__MIT_INPUT_FOCUS_MESSAGE_const___::_Do_call(
        __int64 a1,
        const struct _MIT_INPUT_FOCUS_MESSAGE **a2)
{
  const struct _MIT_INPUT_FOCUS_MESSAGE *v3; // r14
  __int64 v4; // rax
  HWND Ancestor; // r12
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v7; // rax
  _QWORD *v8; // rbx
  _QWORD *i; // rbp
  _QWORD *v10; // rsi
  _QWORD *v11; // rdi
  int v12; // eax
  HWND v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v16; // [rsp+28h] [rbp-40h]
  __int64 v17; // [rsp+30h] [rbp-38h]

  v3 = *a2;
  v4 = *((_QWORD *)*a2 + 2);
  Ancestor = 0LL;
  if ( v4 )
    Ancestor = GetAncestor((HWND)(int)v4, 2u);
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 23) + 8LL) + 136LL))(*((_QWORD *)BamoServerConnection + 23) + 8LL);
  v8 = *(_QWORD **)(v7 + 56);
  for ( i = *(_QWORD **)(v7 + 64); v8 != i; ++v8 )
  {
    InputSite::GetAllAttachedObjectsByType<IActivationListenerInputObjectProxy>(*v8, &v15);
    v10 = v16;
    v11 = v15;
    if ( v15 != v16 )
    {
      do
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v11 + 32LL))(*v11);
        v13 = GetAncestor((HWND)v12, 2u);
        v14 = 1LL;
        if ( v13 == Ancestor )
          v14 = 3LL;
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v11 + 24LL))(*v11, v14);
        ++v11;
      }
      while ( v11 != v10 );
      v10 = v16;
      v11 = v15;
    }
    if ( v11 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal>>>(
        v11,
        v10);
      std::_Deallocate<16,0>(v11, (const struct std::nothrow_t *)((v17 - (_QWORD)v11) & 0xFFFFFFFFFFFFFFF8uLL));
    }
  }
  DWMInputRouter::OnFocusedThreadChanged(*(DWMInputRouter **)(a1 + 8), v3);
}
