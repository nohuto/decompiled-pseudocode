/*
 * XREFs of ?Thunk_AckProxyReference_37@?$IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive@VBamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180198500
 * Callers:
 *     <none>
 * Callees:
 *     ?TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z @ 0x1800F03B0 (-TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180177B90 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?RequestDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBaseBamoPeerImpl@23@PEAVBamoStubImpl@23@@Z @ 0x180197A4C (-RequestDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBaseBamoPeerImpl@23@PEAVBamo.c)
 */

__int64 __fastcall IBamoPeer_DiagnosticCallbacks_AutoBamos_Receive<BamoImpl::DiagnosticCallbacks_AutoBamos::BamoPeerImpl>::Thunk_AckProxyReference_37(
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a1,
        __int64 a2)
{
  char v3; // di
  struct Microsoft::BamoImpl::BamoPrincipalImpl *Principal; // rax
  const char *v5; // r9
  __int64 i; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = **(_BYTE **)(a2 + 8);
  Principal = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetPrincipal(
                *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)a1 + 3) + 32LL),
                **(_DWORD **)a2);
  if ( Principal )
  {
    for ( i = *((_QWORD *)Principal + 4); i; i = *(_QWORD *)(i + 48) )
    {
      if ( *(_DWORD *)(*(_QWORD *)(i + 40) + 36LL) == *((_DWORD *)a1 + 9) )
        break;
    }
    if ( !*(_DWORD *)(i + 16) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        186LL,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        v5);
    _InterlockedDecrement((volatile signed __int32 *)(i + 16));
    if ( !v3 )
      Microsoft::BamoImpl::BamoPrincipalImpl::RequestDisposeProxy(
        Principal,
        a1,
        (struct Microsoft::BamoImpl::BamoStubImpl *)i);
  }
  return 0LL;
}
