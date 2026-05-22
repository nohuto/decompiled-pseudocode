/*
 * XREFs of ?OnPeerRequestsConnect@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEAIPEAPEAUMsgString@@@Z @ 0x18000B870
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnPeerRequestsConnect(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        unsigned int a2,
        unsigned int *a3,
        struct MsgString **a4)
{
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rbx
  const char *v13; // r9
  unsigned int v14; // esi
  __int64 v15; // rbx
  const char *v16; // r9
  const char *v17; // r9
  int v18; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  volatile signed __int32 *v21; // [rsp+70h] [rbp+8h]

  v8 = (volatile signed __int32 *)((char *)this - 24);
  v9 = 0LL;
  v21 = 0LL;
  v10 = *((_QWORD *)this + 1);
  if ( *(_DWORD *)(v10 + 168) != GetCurrentThreadId() )
  {
    v21 = v8;
    _InterlockedIncrement(v8 + 2);
    EnterCriticalSection((LPCRITICAL_SECTION)(v10 + 128));
    *(_DWORD *)(v10 + 168) = GetCurrentThreadId();
    v9 = v8;
  }
  v11 = *((_QWORD *)this + 1);
  v12 = 0LL;
  if ( !*(_DWORD *)(v11 + 172) )
  {
    v12 = *((_QWORD *)this + 1);
    if ( *(_DWORD *)(v11 + 168) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x679,
        (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
        v13);
      goto LABEL_15;
    }
    *(_DWORD *)(v11 + 168) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v11 + 128));
  }
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *, struct MsgString **))(*(_QWORD *)v11 + 24LL))(
          v11,
          a2,
          a3,
          a4);
  if ( v12 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v12 + 128));
    *(_DWORD *)(v12 + 168) = GetCurrentThreadId();
  }
  if ( v9 )
  {
    v15 = *((_QWORD *)v9 + 4);
    if ( *(_DWORD *)(v15 + 168) == GetCurrentThreadId() )
    {
      *(_DWORD *)(v15 + 168) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(v15 + 128));
      v18 = _InterlockedDecrement(v9 + 2);
      if ( v18 < 0 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x33,
          (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoImplObject.inl",
          v17);
        __debugbreak();
      }
      if ( !v18 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
      return v14;
    }
LABEL_15:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x679,
      (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      v16);
    __debugbreak();
  }
  return v14;
}
