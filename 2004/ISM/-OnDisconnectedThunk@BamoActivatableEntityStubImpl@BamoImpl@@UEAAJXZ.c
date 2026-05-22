/*
 * XREFs of ?OnDisconnectedThunk@BamoActivatableEntityStubImpl@BamoImpl@@UEAAJXZ @ 0x1800027C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoActivatableEntityStubImpl::OnDisconnectedThunk(
        BamoImpl::BamoActivatableEntityStubImpl *this)
{
  __int64 v2; // r14
  __int64 v3; // rdi
  __int64 v4; // rbx
  const char *v5; // r9
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 3);
  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 32LL);
  v4 = 0LL;
  if ( !*(_DWORD *)(v3 + 172) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 32LL);
    if ( *(_DWORD *)(v3 + 168) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x679,
        (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
        v5);
      JUMPOUT(0x18005262ALL);
    }
    *(_DWORD *)(v3 + 168) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v3 + 128));
  }
  v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(v2 - 16) + 64LL))(v2 - 16, (char *)this - 16);
  if ( v4 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 128));
    *(_DWORD *)(v4 + 168) = GetCurrentThreadId();
  }
  return v6;
}
