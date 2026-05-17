/*
 * XREFs of _RtlpHpFreeVA@20 @ 0x4B378695
 * Callers:
 *     _RtlpHpHeapAllocate@16 @ 0x4B37877E (_RtlpHpHeapAllocate@16.c)
 *     _RtlpHpHeapDestroy@4 @ 0x4B378C76 (_RtlpHpHeapDestroy@4.c)
 *     _RtlpHpLargeAlloc@16 @ 0x4B379D22 (_RtlpHpLargeAlloc@16.c)
 *     _RtlpHpLargeAllocationDestroy@8 @ 0x4B37A2B4 (_RtlpHpLargeAllocationDestroy@8.c)
 *     _RtlpHpLargeFree@12 @ 0x4B37A3A3 (_RtlpHpLargeFree@12.c)
 *     _RtlpHpLargeReAlloc@16 @ 0x4B37A510 (_RtlpHpLargeReAlloc@16.c)
 *     _RtlpHpSegMgrCommit@28 @ 0x4B37BF36 (_RtlpHpSegMgrCommit@28.c)
 *     _RtlpHpSegMgrRelease@12 @ 0x4B37C3E1 (_RtlpHpSegMgrRelease@12.c)
 *     _RtlpHpSegMgrReserve@20 @ 0x4B37C4D9 (_RtlpHpSegMgrReserve@20.c)
 * Callees:
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     _RtlpHpTlLogVAChange@16 @ 0x4B370AE6 (_RtlpHpTlLogVAChange@16.c)
 *     _RtlpHpVaMgrCtxFree@12 @ 0x4B37AC12 (_RtlpHpVaMgrCtxFree@12.c)
 */

int __fastcall RtlpHpFreeVA(int *a1, int *a2, int a3, __int16 a4, int a5)
{
  unsigned int v7; // eax
  int v8; // ecx
  int v9; // esi

  if ( (a3 & 0xFEFFFFFF) == 0x8000 && (a3 & 0x1000000) == 0 )
  {
    v7 = (*a1 + 0xFFFFF) & 0xFFF00000;
    v8 = *a1 + *a2 - v7;
    *a1 = v7;
    *a2 = v8;
    if ( !v8 )
      return 0;
    RtlpHpVaMgrCtxFree(a2);
    goto LABEL_6;
  }
  if ( HIBYTE(a4) >= 2u )
  {
LABEL_6:
    v9 = 0;
    goto LABEL_9;
  }
  v9 = NtFreeVirtualMemory(-1, (int)a1, (int)a2, a3 & 0xC000);
LABEL_9:
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(a3 & 0xFEFFFFFF, *a2, *a1, v9);
  return v9;
}
