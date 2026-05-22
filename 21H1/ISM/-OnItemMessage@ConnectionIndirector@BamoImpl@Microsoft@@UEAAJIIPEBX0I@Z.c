/*
 * XREFs of ?OnItemMessage@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEBX0I@Z @ 0x180006A60
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnItemMessage(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        int a2,
        __int64 a3,
        const void *a4,
        const void *a5,
        unsigned int a6)
{
  volatile signed __int32 *v9; // rsi
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdi
  unsigned int v13; // ebp
  __int64 v14; // rbx
  const char *v15; // r9
  const char *v16; // r9
  int v17; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

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
  v12 = *((_QWORD *)this + 2);
  *(_DWORD *)(v12 + 32) = a2;
  v13 = (*(__int64 (__fastcall **)(const void *, const void *, _QWORD))(*(_QWORD *)a4 + 24LL))(a4, a5, a6);
  *(_DWORD *)(v12 + 32) = 0;
  if ( v9 )
  {
    v14 = *((_QWORD *)v10 + 4);
    if ( *(_DWORD *)(v14 + 168) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x679,
        (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
        v15);
      __debugbreak();
    }
    *(_DWORD *)(v14 + 168) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v14 + 128));
    v17 = _InterlockedDecrement(v9 + 2);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoImplObject.inl",
        v16);
      __debugbreak();
    }
    if ( !v17 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v13;
}
