/*
 * XREFs of HvlNotifyAcpiReenabled @ 0x1404F2488
 * Callers:
 *     PopHiberCheckResume @ 0x140993F10 (PopHiberCheckResume.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 */

__int64 HvlNotifyAcpiReenabled()
{
  _QWORD *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // r9
  unsigned int v3; // ebx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v6 = 0LL;
  v0 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v5, 1, 0LL, 8LL);
  v1 = *((_QWORD *)&v6 + 1);
  *(_DWORD *)v0 = 3;
  v3 = (unsigned __int16)HvcallInitiateHypercall(135, v1, 0LL, v2) != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((__int64)&v5);
  return v3;
}
