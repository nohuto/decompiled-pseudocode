/*
 * XREFs of ?PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@PEA_N@Z @ 0x14006117C
 * Callers:
 *     ?GetCurrentPadding@CCrossProcessClientInputEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140062410 (-GetCurrentPadding@CCrossProcessClientInputEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?GetDevicePosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z @ 0x1400624E0 (-GetDevicePosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z.c)
 *     ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x1400625C0 (-GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 * Callees:
 *     ?GetCurrentQueue@CCrossProcessBaseEndpoint@@IEAAXPEAPEAUSharedMessageQueueItem@@PEAI11PEA_N@Z @ 0x140060914 (-GetCurrentQueue@CCrossProcessBaseEndpoint@@IEAAXPEAPEAUSharedMessageQueueItem@@PEAI11PEA_N@Z.c)
 *     ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z @ 0x140061144 (-IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140061F58 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

char __fastcall CCrossProcessBaseEndpoint::PeekNextTimestampMessage(
        CCrossProcessBaseEndpoint *this,
        struct SharedMessageQueueItem **a2,
        bool *a3)
{
  char v4; // bl
  CCrossProcessBaseEndpoint *v5; // rcx
  __int64 v6; // rdi
  unsigned int v8; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+34h] [rbp-14h] BYREF
  struct SharedMessageQueueItem *v10; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v11; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v10 = 0LL;
  CCrossProcessBaseEndpoint::GetCurrentQueue(this, &v10, &v11, &v8, &v9, a3);
  v6 = v11;
  if ( v11 != v8 )
  {
    if ( CCrossProcessBaseEndpoint::IsValidQueueIndex(v5, v11, v9) )
    {
      v4 = 1;
      *a2 = (struct SharedMessageQueueItem *)((char *)v10 + 64 * v6);
    }
    else
    {
      AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::PeekNextTimestampMessage", 0x533u, -2147467259);
    }
  }
  return v4;
}
