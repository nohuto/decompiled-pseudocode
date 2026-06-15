/*
 * XREFs of ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140015E30
 * Callers:
 *     ?FillRampBuffer@CCrossProcessServerInputEndpoint@@AEAAXXZ @ 0x140015D2C (-FillRampBuffer@CCrossProcessServerInputEndpoint@@AEAAXXZ.c)
 *     ?GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140060750 (-GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140062E70 (-GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?ReleaseOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x140063980 (-ReleaseOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@.c)
 *     ?GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140064480 (-GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?ReleaseOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x140064760 (-ReleaseOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@.c)
 * Callees:
 *     McTemplateU0p_EventWriteTransfer @ 0x14006168C (McTemplateU0p_EventWriteTransfer.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140061F58 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

char __fastcall CCrossProcessBaseEndpoint::IsValidOffset(CCrossProcessBaseEndpoint *this, __int64 a2)
{
  char v2; // bl

  v2 = 0;
  if ( a2 >= 0 )
    return 1;
  if ( (byte_140090581 & 4) != 0 )
    McTemplateU0p_EventWriteTransfer(this, a2, this);
  _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this + 9) + 164LL), 0xFFFFFFFE);
  AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::IsValidOffset", 0x6A6u, -2147467259);
  return v2;
}
