/*
 * XREFs of ?NotifyMetaData@CLegacyRemotingSwapChain@@UEAAJAEBU_DWMIndirectMetaData@@@Z @ 0x180294350
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xxx_EventWriteTransfer @ 0x180244868 (McTemplateU0xxx_EventWriteTransfer.c)
 */

__int64 __fastcall CLegacyRemotingSwapChain::NotifyMetaData(
        CLegacyRemotingSwapChain *this,
        const struct _DWMIndirectMetaData *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 v6; // rcx

  v2 = 0;
  if ( *(_DWORD *)a2 == 4 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0xxx_EventWriteTransfer(
        (__int64)this,
        &EVTDESC_DETECT_TOPLEVELWINDOW_DESTROY,
        *((_QWORD *)a2 + 1),
        a2,
        1LL);
  }
  else if ( *(int *)a2 <= 4 || *(int *)a2 > 6 && (*(int *)a2 <= 7 || *(int *)a2 > 10) )
  {
    return v2;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, const struct _DWMIndirectMetaData *, __int64))(**((_QWORD **)this + 14) + 56LL))(
         *((_QWORD *)this + 14),
         a2,
         1LL);
  v2 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, v5, 0x90u);
  return v2;
}
