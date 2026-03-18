/*
 * XREFs of KeIsProcessPowerThrottled @ 0x14045A08C
 * Callers:
 *     ExpGetProcessInformation @ 0x1407B6CA0 (ExpGetProcessInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsProcessPowerThrottled(__int64 a1, char a2)
{
  int v2; // r8d
  unsigned int v3; // ecx
  bool v4; // dl

  v2 = KiProcessPolicyToQosMappingTable[((unsigned __int64)*(unsigned int *)(a1 + 632) >> 7) & 0xF];
  v3 = 1;
  v4 = v2 == 6 && a2 == 1;
  if ( !PpmPerfQosEnabled || (((v2 - 1) & 0xFFFFFFFA) != 0 || v2 == 6) && !v4 )
    return 0;
  return v3;
}
