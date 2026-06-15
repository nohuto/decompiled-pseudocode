/*
 * XREFs of ?GetCurrentPadding@CCrossProcessBaseClientEndpoint@@UEAAJPEAI@Z @ 0x140060680
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140060750 (-GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140061F58 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseClientEndpoint::GetCurrentPadding(
        CCrossProcessBaseClientEndpoint *this,
        unsigned int *a2)
{
  unsigned int v2; // ebx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v6 = 0LL;
  if ( a2 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this - 86, 1, 1) )
    {
      CCrossProcessBaseEndpoint::GetCurrentPadding((CCrossProcessBaseClientEndpoint *)((char *)this - 392), &v6, 0LL);
      *a2 = (int)((double)(int)(*(_DWORD *)(*((_QWORD *)this - 40) + 188LL)
                              / (unsigned int)*(unsigned __int16 *)(*((_QWORD *)this - 40) + 192LL))
                * (double)(int)v6
                / 10000000.0
                + 0.5);
      return v2;
    }
    v2 = -2005139437;
  }
  else
  {
    v2 = -2147467261;
  }
  AudCPTraceLoggingErrorHelper("CCrossProcessBaseClientEndpoint::GetCurrentPadding", 0x4AAu, v2);
  return v2;
}
