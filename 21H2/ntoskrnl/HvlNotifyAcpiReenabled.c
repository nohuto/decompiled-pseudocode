/*
 * XREFs of HvlNotifyAcpiReenabled @ 0x140549B18
 * Callers:
 *     PopHiberCheckResume @ 0x140A4E0E0 (PopHiberCheckResume.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039D8F0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF00 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14039DF90 (HvlpAcquireHypercallPage.c)
 */

__int64 HvlNotifyAcpiReenabled()
{
  unsigned int v0; // ebx
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]
  __int64 v4; // [rsp+38h] [rbp-10h]

  v3 = 0LL;
  LODWORD(v4) = 0;
  v2 = 0LL;
  *(_DWORD *)HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v2, 1, 0LL, 8LL) = 3;
  v0 = (unsigned __int16)HvcallInitiateHypercall(135) != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((__int64)&v2);
  return v0;
}
