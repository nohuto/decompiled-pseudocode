/*
 * XREFs of ?Thunk_UpdateActivatePolicy_10@?$IActivationConfigurationInputObjectProxy_Receive@VBamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180010610
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IActivationConfigurationInputObjectProxy_Receive<BamoImpl::BamoActivationConfigurationInputObjectProxyImpl>::Thunk_UpdateActivatePolicy_10(
        __int64 a1,
        _DWORD **a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  const char *v5; // r9
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_DWORD *)(a1 + 32) = **a2;
  if ( !*(_BYTE *)(a1 + 28) )
    return 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL);
  v4 = 0LL;
  if ( !*(_DWORD *)(v3 + 172) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL);
    if ( *(_DWORD *)(v3 + 168) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x679,
        (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
        v5);
      goto LABEL_10;
    }
    *(_DWORD *)(v3 + 168) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v3 + 128));
  }
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 16) + 56LL))(a1 - 16);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_10:
    wil::details::in1diag3::FailFast_Hr(
      v7,
      (void *)0x559F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v6,
      v9);
    JUMPOUT(0x180055D8CLL);
  }
  if ( v4 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 128));
    *(_DWORD *)(v4 + 168) = GetCurrentThreadId();
  }
  return 0LL;
}
