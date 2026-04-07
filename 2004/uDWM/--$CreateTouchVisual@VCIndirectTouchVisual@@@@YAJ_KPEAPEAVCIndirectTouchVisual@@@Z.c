/*
 * XREFs of ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x18009CC78
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18009E71C (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800A01C4 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180045E4C (--0CTouchVisual@@IEAA@_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJXZ @ 0x1800AD860 (-Initialize@CIndirectTouchVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CreateTouchVisual<CIndirectTouchVisual>(__int64 a1, CTouchVisual **a2)
{
  unsigned int v3; // edi
  CTouchVisual *v4; // rax
  CTouchVisual *v5; // rbx
  int v6; // eax

  if ( a2 )
  {
    v4 = (CTouchVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                           WPF::g_pProcessHeap,
                           424LL);
    v5 = v4;
    if ( v4 )
    {
      CTouchVisual::CTouchVisual(v4);
      *(_QWORD *)v5 = &CIndirectTouchVisual::`vftable';
      *((_QWORD *)v5 + 48) = 0LL;
      *((_QWORD *)v5 + 49) = 0LL;
      *((_DWORD *)v5 + 100) = 0;
      *((_DWORD *)v5 + 101) = 0;
      *((_DWORD *)v5 + 102) = 0;
      *((_QWORD *)v5 + 47) = 0LL;
    }
    else
    {
      v5 = 0LL;
    }
    if ( v5 )
    {
      v6 = CIndirectTouchVisual::Initialize(v5);
      v3 = v6;
      if ( v6 >= 0 )
      {
        *a2 = v5;
        v5 = 0LL;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x3Fu);
      }
      if ( v5 )
        CBaseObject::Release(v5);
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x3Du);
    }
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x39u);
  }
  return v3;
}
