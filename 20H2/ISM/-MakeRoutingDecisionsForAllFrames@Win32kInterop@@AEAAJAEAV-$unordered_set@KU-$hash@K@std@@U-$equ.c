/*
 * XREFs of ?MakeRoutingDecisionsForAllFrames@Win32kInterop@@AEAAJAEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAUInputInfo@@PEAUIInputTarget@@@Z @ 0x1800B0974
 * Callers:
 *     ?DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAUIInputTarget@@@Z @ 0x1800AF8F0 (-DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ @ 0x1800337B0 (-InternalAddRef@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@PEBUInputInfo@@@Z @ 0x1800A29E0 (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@PEBUInputInfo@@@Z.c)
 *     ?RouteCachedInput@Win32kInterop@@CAXXZ @ 0x1800B25A0 (-RouteCachedInput@Win32kInterop@@CAXXZ.c)
 *     ?RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@PEAX@Z @ 0x1800B26CC (-RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@PEAX@Z.c)
 *     ?SendCancelNotificationToGestureTargeting@Win32kInterop@@AEAAXAEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAUInputInfo@@@Z @ 0x1800B276C (-SendCancelNotificationToGestureTargeting@Win32kInterop@@AEAAXAEAV-$unordered_set@KU-$hash@K@std.c)
 *     ?_Push_back_internal@?$deque@UCachedInputInfo@@V?$allocator@UCachedInputInfo@@@std@@@std@@AEAAX$$QEAUCachedInputInfo@@@Z @ 0x1800B3824 (-_Push_back_internal@-$deque@UCachedInputInfo@@V-$allocator@UCachedInputInfo@@@std@@@std@@AEAAX$.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Win32kInterop::MakeRoutingDecisionsForAllFrames(
        __int64 a1,
        __int64 a2,
        int *a3,
        int (__fastcall ***a4)(_QWORD, GUID *, __int64 *))
{
  int v7; // eax
  __int64 v8; // r8
  const char *v9; // r9
  void *v10; // rdx
  int (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rbx
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v15; // rcx
  const struct std::nothrow_t *v16; // rdx
  int v17; // eax
  void *v18; // [rsp+28h] [rbp-18h] BYREF
  __int64 v19[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v20; // [rsp+68h] [rbp+28h] BYREF

  if ( *(_QWORD *)(a2 + 16) )
    Win32kInterop::SendCancelNotificationToGestureTargeting();
  v7 = _Mtx_lock((_Mtx_t)&Win32kInterop::s_inputInfoCachedLock);
  if ( v7 )
    std::_Throw_C_error(v7);
  if ( qword_180208B80 )
  {
    VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>(&v18, a3, v8, v9);
    v19[0] = (__int64)a4;
    Microsoft::WRL::ComPtr<IInputTarget>::InternalAddRef(v19);
    std::deque<CachedInputInfo>::_Push_back_internal(v15, &v18);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v19);
    if ( v18 )
      operator delete(v18, v16);
    goto LABEL_19;
  }
  *(_BYTE *)(a1 + 1632) = 0;
  while ( qword_180208BD0 )
    Win32kInterop::RouteCachedInput();
  v20 = 0LL;
  if ( !a4 )
  {
    v10 = 0LL;
LABEL_13:
    Win32kInterop::RoutePointerFrame((struct InputInfo *)a3, v10);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
LABEL_19:
    v17 = _Mtx_unlock((_Mtx_t)&Win32kInterop::s_inputInfoCachedLock);
    if ( v17 )
      std::_Throw_C_error(v17);
    return 0LL;
  }
  v11 = **a4;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  if ( v11(a4, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v20) >= 0 )
  {
    v10 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 56LL))(v20);
    goto LABEL_13;
  }
  Win32kInterop::RoutePointerFrame((struct InputInfo *)a3, 0LL);
  v12 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), int *))(*a4)[3])(a4, a3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  v13 = _Mtx_unlock((_Mtx_t)&Win32kInterop::s_inputInfoCachedLock);
  if ( v13 )
    std::_Throw_C_error(v13);
  return v12;
}
