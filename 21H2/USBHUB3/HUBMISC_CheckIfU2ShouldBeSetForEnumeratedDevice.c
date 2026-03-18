/*
 * XREFs of HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice @ 0x1C002DC74
 * Callers:
 *     HUBDSM_UpdatingDeviceInformationInEnum @ 0x1C001E460 (HUBDSM_UpdatingDeviceInformationInEnum.c)
 *     HUBDSM_ComputingLPMTimeoutValuesInUnconfigured @ 0x1C0023210 (HUBDSM_ComputingLPMTimeoutValuesInUnconfigured.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice(__int64 a1)
{
  unsigned __int8 v1; // r8
  __int64 result; // rax

  v1 = *(_BYTE *)(a1 + 2220);
  if ( (v1 & 8) == 0
    || (*(_DWORD *)(a1 + 1644) & 0x80u) != 0
    || (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 0x8000) != 0
    || (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 204LL) & 0x400) != 0 )
  {
    return 4061LL;
  }
  result = 4089LL;
  *(_BYTE *)(a1 + 2213) = ~(v1 >> 5) | 0xFE;
  return result;
}
