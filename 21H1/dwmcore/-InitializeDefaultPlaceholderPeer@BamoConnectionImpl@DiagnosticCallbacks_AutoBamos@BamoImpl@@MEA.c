/*
 * XREFs of ?InitializeDefaultPlaceholderPeer@BamoConnectionImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@MEAAJPEAPEAVBaseBamoPeer@Bamo@Microsoft@@@Z @ 0x18016A7C0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     ?Initialize@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoConnectionImpl@23@III@Z @ 0x1800B1F2C (-Initialize@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoConnectionImpl@23@III@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180150424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall BamoImpl::DiagnosticCallbacks_AutoBamos::BamoConnectionImpl::InitializeDefaultPlaceholderPeer(
        BamoImpl::DiagnosticCallbacks_AutoBamos::BamoConnectionImpl *this,
        struct Microsoft::Bamo::BaseBamoPeer **a2)
{
  struct Microsoft::Bamo::BaseBamoPeer *v4; // rax
  const char *v5; // r9
  struct Microsoft::Bamo::BaseBamoPeer *v6; // rdi
  Microsoft::BamoImpl::BaseBamoPeerImpl *v7; // rax
  Microsoft::BamoImpl::BaseBamoPeerImpl *v8; // rbx
  __int64 result; // rax
  unsigned int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (struct Microsoft::Bamo::BaseBamoPeer *)operator new(0x48uLL);
  v6 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = &DiagnosticCallbacks_AutoBamos::BamoPeer::`vftable';
    *((_DWORD *)v4 + 4) = 1;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_QWORD *)v4 + 1) = &BamoImpl::DiagnosticCallbacks_AutoBamos::BamoPeerImpl::`vftable';
    *((_QWORD *)v4 + 3) = v4;
    *((_QWORD *)v4 + 5) = 0LL;
    *((_DWORD *)v4 + 12) = 0;
    *((_WORD *)v4 + 26) = 0;
    *((_QWORD *)v4 + 7) = 0LL;
    *((_QWORD *)v4 + 8) = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1228,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\diagnosticcallbacks\\objfre\\amd64\\diagnosticcallbacks.bamo.h",
      v5);
    __debugbreak();
  }
  v7 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)(*(__int64 (__fastcall **)(struct Microsoft::Bamo::BaseBamoPeer *))(*(_QWORD *)v6 + 8LL))(v6);
  v10 = *((_DWORD *)this + 9);
  v8 = v7;
  *((_DWORD *)this + 9) = v10 + 1;
  Microsoft::BamoImpl::BaseBamoPeerImpl::Initialize(v7, this, 0, v10, v10);
  result = 0LL;
  *((_BYTE *)v8 + 44) = 1;
  *a2 = v6;
  return result;
}
