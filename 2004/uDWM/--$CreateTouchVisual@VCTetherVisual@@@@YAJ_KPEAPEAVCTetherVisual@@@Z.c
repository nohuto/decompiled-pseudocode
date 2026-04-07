/*
 * XREFs of ??$CreateTouchVisual@VCTetherVisual@@@@YAJ_KPEAPEAVCTetherVisual@@@Z @ 0x18009D0A8
 * Callers:
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x18009F6D4 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ??0CTetherVisual@@IEAA@_K@Z @ 0x1800A4CC0 (--0CTetherVisual@@IEAA@_K@Z.c)
 *     ?Initialize@CTetherVisual@@MEAAJXZ @ 0x1800A5230 (-Initialize@CTetherVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CreateTouchVisual<CTetherVisual>(unsigned __int64 a1, CTetherVisual **a2)
{
  unsigned int v4; // edi
  CTetherVisual *v5; // rax
  CTetherVisual *v6; // rbx
  int v7; // eax

  if ( a2 )
  {
    v5 = (CTetherVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                            WPF::g_pProcessHeap,
                            424LL);
    if ( v5 )
      v6 = CTetherVisual::CTetherVisual(v5, a1);
    else
      v6 = 0LL;
    if ( v6 )
    {
      v7 = CTetherVisual::Initialize(v6);
      v4 = v7;
      if ( v7 >= 0 )
      {
        *a2 = v6;
        v6 = 0LL;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x3Fu);
      }
      if ( v6 )
        CBaseObject::Release(v6);
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x3Du);
    }
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x39u);
  }
  return v4;
}
