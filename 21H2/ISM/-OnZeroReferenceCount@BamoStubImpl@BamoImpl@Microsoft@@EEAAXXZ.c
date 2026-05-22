/*
 * XREFs of ?OnZeroReferenceCount@BamoStubImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180002470
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Microsoft::BamoImpl::BamoStubImpl::OnZeroReferenceCount(Microsoft::BamoImpl::BamoStubImpl *this)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  const char *v4; // r9
  __int64 v5; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 32LL);
  v3 = 0LL;
  if ( v2 && *(_DWORD *)(v2 + 168) == GetCurrentThreadId() && !*(_DWORD *)(v2 + 172) )
  {
    v3 = v2;
    if ( *(_DWORD *)(v2 + 168) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x679,
        (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
        v4);
      JUMPOUT(0x1800531CCLL);
    }
    *(_DWORD *)(v2 + 168) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 128));
  }
  v5 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)this + 24LL))(this);
  if ( v5 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
  if ( v3 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v3 + 128));
    *(_DWORD *)(v3 + 168) = GetCurrentThreadId();
  }
}
