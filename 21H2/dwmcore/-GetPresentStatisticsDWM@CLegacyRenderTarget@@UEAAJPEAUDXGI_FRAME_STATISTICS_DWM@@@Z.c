/*
 * XREFs of ?GetPresentStatisticsDWM@CLegacyRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1800D8650
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyRenderTarget::GetPresentStatisticsDWM(
        CLegacyRenderTarget *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, struct DXGI_FRAME_STATISTICS_DWM *))(*(_QWORD *)v2 + 96LL))(v2, a2);
    v5 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_1802E18D0, 2LL, v3, 0x3C2u);
  }
  else
  {
    v5 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, &dword_1802E18D0, 2LL, -2003304307, 0x3C6u);
  }
  return v5;
}
