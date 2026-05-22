/*
 * XREFs of ?OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z @ 0x180009F10
 * Callers:
 *     <none>
 * Callees:
 *     ?OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x18000A030 (-OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnPeerConnected(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        void **a5)
{
  volatile signed __int32 *v9; // rdi
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rsi
  unsigned int v12; // esi
  __int64 v13; // rbx
  const char *v14; // r9
  const char *v15; // r9
  int v16; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v9 = (volatile signed __int32 *)((char *)this - 16);
  v10 = 0LL;
  v11 = *((_QWORD *)this + 2);
  if ( *(_DWORD *)(v11 + 168) == GetCurrentThreadId() )
  {
    v9 = 0LL;
  }
  else
  {
    _InterlockedIncrement(v9 + 2);
    EnterCriticalSection((LPCRITICAL_SECTION)(v11 + 128));
    *(_DWORD *)(v11 + 168) = GetCurrentThreadId();
    v10 = v9;
  }
  v12 = Microsoft::BamoImpl::BaseBamoConnectionImpl::OnPeerConnected(
          *((Microsoft::BamoImpl::BaseBamoConnectionImpl **)this + 2),
          a2,
          a3,
          a4,
          a5);
  if ( v9 )
  {
    v13 = *((_QWORD *)v10 + 4);
    if ( *(_DWORD *)(v13 + 168) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x679,
        (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
        v14);
      __debugbreak();
    }
    *(_DWORD *)(v13 + 168) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v13 + 128));
    v16 = _InterlockedDecrement(v9 + 2);
    if ( v16 < 0 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoImplObject.inl",
        v15);
      __debugbreak();
    }
    if ( !v16 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v12;
}
