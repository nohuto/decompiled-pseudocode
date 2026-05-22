/*
 * XREFs of ?GetWindowId@BamoActivatableEntityPrincipal@@UEAA_KXZ @ 0x180006400
 * Callers:
 *     <none>
 * Callees:
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800064C0 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoActivatableEntityPrincipal::GetWindowId(BamoActivatableEntityPrincipal *this)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 v4; // rbp
  __int64 v5; // rsi
  const char *v6; // r9
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 3);
  v2 = 0LL;
  v4 = *(_QWORD *)(v1 + 32);
  if ( *(_DWORD *)(v4 + 168) == GetCurrentThreadId() )
  {
    v1 = 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v1 + 8));
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 128));
    v2 = v1;
    *(_DWORD *)(v4 + 168) = GetCurrentThreadId();
  }
  v5 = *((_QWORD *)this + 6);
  if ( v1 )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v2 + 32));
    v7 = _InterlockedDecrement((volatile signed __int32 *)(v1 + 8));
    if ( v7 < 0 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoImplObject.inl",
        v6);
      __debugbreak();
    }
    if ( !v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return v5;
}
