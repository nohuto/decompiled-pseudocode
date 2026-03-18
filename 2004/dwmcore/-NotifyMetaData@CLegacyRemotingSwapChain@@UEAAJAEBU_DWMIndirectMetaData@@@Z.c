/*
 * XREFs of ?NotifyMetaData@CLegacyRemotingSwapChain@@UEAAJAEBU_DWMIndirectMetaData@@@Z @ 0x1800E14C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xxx_EventWriteTransfer @ 0x1801F515C (McTemplateU0xxx_EventWriteTransfer.c)
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
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0xxx_EventWriteTransfer(
        (_DWORD)this,
        (unsigned int)&EVTDESC_DETECT_TOPLEVELWINDOW_DESTROY,
        *((_QWORD *)a2 + 1),
        (_DWORD)a2,
        1);
  }
  else if ( *(int *)a2 <= 4 || *(int *)a2 > 9 )
  {
    return v2;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, const struct _DWMIndirectMetaData *, __int64))(**((_QWORD **)this + 8) + 56LL))(
         *((_QWORD *)this + 8),
         a2,
         1LL);
  v2 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x7Cu, 0LL);
  return v2;
}
