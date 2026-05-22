/*
 * XREFs of ?SetActivated@BamoActivationControllerProxy@@UEAAX_N@Z @ 0x18000A8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x18000AB14 (-CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?UpdateActivatedRemoteCache@BamoActivationControllerProxyImpl@BamoImpl@@AEAAXXZ @ 0x18000AB40 (-UpdateActivatedRemoteCache@BamoActivationControllerProxyImpl@BamoImpl@@AEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoActivationControllerProxy::SetActivated(BamoActivationControllerProxy *this, char a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rbx
  const char *v8; // r9
  const char *v9; // r9
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  v5 = 0LL;
  v6 = *(_QWORD *)(v4 + 32);
  if ( *(_DWORD *)(v6 + 168) == GetCurrentThreadId() )
  {
    v4 = 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 128));
    *(_DWORD *)(v6 + 168) = GetCurrentThreadId();
    v5 = v4;
  }
  *((_BYTE *)this + 40) = a2;
  BamoImpl::BamoActivationControllerProxyImpl::UpdateActivatedRemoteCache((BamoActivationControllerProxy *)((char *)this + 8));
  if ( v4 )
  {
    v7 = *(_QWORD *)(v5 + 32);
    if ( !Microsoft::BamoImpl::BaseBamoConnectionImpl::CurrentThreadHasLock((Microsoft::BamoImpl::BaseBamoConnectionImpl *)v7) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x679,
        (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
        v8);
      __debugbreak();
    }
    *(_DWORD *)(v7 + 168) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v7 + 128));
    v10 = _InterlockedDecrement((volatile signed __int32 *)(v4 + 8));
    if ( v10 < 0 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoImplObject.inl",
        v9);
      __debugbreak();
    }
    if ( !v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
