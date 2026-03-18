/*
 * XREFs of ?AllocatePeer@BamoConnection@DiagnosticCallbacks_AutoBamos@@MEAAJPEAPEAVBamoPeer@2@@Z @ 0x18016A320
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180150424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall DiagnosticCallbacks_AutoBamos::BamoConnection::AllocatePeer(
        DiagnosticCallbacks_AutoBamos::BamoConnection *this,
        struct DiagnosticCallbacks_AutoBamos::BamoPeer **a2)
{
  _DWORD *v3; // rax
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = operator new(0x48uLL);
  if ( v3 )
  {
    *(_QWORD *)v3 = &DiagnosticCallbacks_AutoBamos::BamoPeer::`vftable';
    v3[4] = 1;
    *((_QWORD *)v3 + 4) = 0LL;
    *((_QWORD *)v3 + 1) = &BamoImpl::DiagnosticCallbacks_AutoBamos::BamoPeerImpl::`vftable';
    *((_QWORD *)v3 + 3) = v3;
    *((_QWORD *)v3 + 5) = 0LL;
    v3[12] = 0;
    *((_WORD *)v3 + 26) = 0;
    *((_QWORD *)v3 + 7) = 0LL;
    *((_QWORD *)v3 + 8) = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  *a2 = (struct DiagnosticCallbacks_AutoBamos::BamoPeer *)v3;
  if ( !v3 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xD29,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\diagnosticcallbacks\\objfre\\amd64\\diagnosticcallbacks.bamo.h",
      v4);
    __debugbreak();
  }
  return 0LL;
}
