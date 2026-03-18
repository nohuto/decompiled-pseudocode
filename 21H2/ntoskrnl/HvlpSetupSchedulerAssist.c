/*
 * XREFs of HvlpSetupSchedulerAssist @ 0x1405456C0
 * Callers:
 *     HvlEnlightenProcessor @ 0x1403B6B58 (HvlEnlightenProcessor.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     HvlpReleaseHypercallPage @ 0x14039D8F0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF00 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14039DF90 (HvlpAcquireHypercallPage.c)
 */

char __fastcall HvlpSetupSchedulerAssist(__int64 a1)
{
  _DWORD *v1; // rdi
  char result; // al
  PHYSICAL_ADDRESS *v3; // rbx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]
  __int64 v6; // [rsp+38h] [rbp-10h]

  v1 = *(_DWORD **)(a1 + 35000);
  result = 0;
  v5 = 0LL;
  LODWORD(v6) = 0;
  v4 = 0LL;
  if ( v1 )
  {
    *v1 = 2056;
    v1[1] = 0;
    v3 = (PHYSICAL_ADDRESS *)HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v4, 1, 0LL, 16LL);
    v3->LowPart = 5;
    v3->HighPart = 1;
    v3[1] = MmGetPhysicalAddress(v1);
    HvcallInitiateHypercall(32773);
    return HvlpReleaseHypercallPage((__int64)&v4);
  }
  return result;
}
