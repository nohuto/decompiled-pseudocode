/*
 * XREFs of ?Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x180009DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000DCA0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::BamoImpl::BamoProxyImpl::Release(Microsoft::BamoImpl::BamoProxyImpl *this)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // rdi
  const char *v5; // r9
  int v6; // edi
  __int64 v7; // rbp
  const char *v8; // r9
  const char *v9; // r9
  int v10; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h]

  v2 = *((_QWORD *)this + 2);
  if ( !v2 )
    return Microsoft::BamoImpl::BamoImplObject::Release(this);
  v3 = *(_QWORD *)(v2 + 24);
  v4 = *(_QWORD *)(v3 + 32);
  if ( *(int *)(v4 + 8) <= 0 )
    return Microsoft::BamoImpl::BamoImplObject::Release(this);
  v13 = 0LL;
  if ( *(_DWORD *)(v4 + 168) != GetCurrentThreadId() )
  {
    v13 = v3;
    if ( v3 )
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 128));
    *(_DWORD *)(v4 + 168) = GetCurrentThreadId();
  }
  v6 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x33,
      (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoImplObject.inl",
      v5);
    goto LABEL_18;
  }
  if ( !v6 )
    (*(void (__fastcall **)(Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)this + 16LL))(this);
  if ( v13 )
  {
    v7 = *(_QWORD *)(v13 + 32);
    if ( *(_DWORD *)(v7 + 168) == GetCurrentThreadId() )
    {
      *(_DWORD *)(v7 + 168) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(v7 + 128));
      v10 = _InterlockedDecrement((volatile signed __int32 *)(v13 + 8));
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
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      return (unsigned int)v6;
    }
LABEL_18:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x679,
      (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      v8);
    __debugbreak();
  }
  return (unsigned int)v6;
}
