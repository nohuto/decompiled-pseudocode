/*
 * XREFs of ?GetPresentStatisticsDWM@CLegacyRenderTarget@@UEBAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x1800BFBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyRenderTarget::GetPresentStatisticsDWM(
        CLegacyRenderTarget *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2,
        struct _UNSIGNED_RATIO *a3)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, struct DXGI_FRAME_STATISTICS_DWM *, struct _UNSIGNED_RATIO *))(*(_QWORD *)v3 + 184LL))(
           v3,
           a2,
           a3);
    v6 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802AB078, 2u, v4, 0x391u, 0LL);
  }
  else
  {
    v6 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, &dword_1802AB078, 2u, -2003304307, 0x395u, 0LL);
  }
  return v6;
}
