/*
 * XREFs of RtlpHpFreeVA @ 0x14025255C
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x140257B20 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegMgrReserve @ 0x1402D9D84 (RtlpHpSegMgrReserve.c)
 *     RtlpHpLargeFree @ 0x1402DA540 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x1402DA8E8 (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapAllocate @ 0x140379930 (RtlpHpHeapAllocate.c)
 *     RtlpHpHeapDestroy @ 0x140386FA4 (RtlpHpHeapDestroy.c)
 *     RtlpHpSegMgrRelease @ 0x14038723C (RtlpHpSegMgrRelease.c)
 *     RtlpHpLargeAllocationDestroy @ 0x140590118 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlpHpEnvFreeVA @ 0x140253038 (RtlpHpEnvFreeVA.c)
 *     RtlpHpEnvGetHeapManager @ 0x14025A6D4 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpVaMgrCtxFree @ 0x1402D843C (RtlpHpVaMgrCtxFree.c)
 */

__int64 __fastcall RtlpHpFreeVA(unsigned __int64 *a1, unsigned __int64 *a2, int a3, __int128 *a4)
{
  __int128 v4; // xmm0
  unsigned int v5; // ebx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 HeapManager; // rax
  __int64 v14; // r10
  __int64 v15; // r11
  __int128 v16; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a4;
  v5 = 0;
  v16 = *a4;
  if ( (a3 & 0xFEFFFFFF) != 0x8000 || (a3 & 0x1000000) != 0 )
  {
    if ( BYTE1(v16) < 2u )
      return (unsigned int)RtlpHpEnvFreeVA(a1, a2);
  }
  else
  {
    v9 = *a1;
    v10 = v9 + *a2;
    v11 = (v9 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v12 = v10 - v11;
    *a1 = v11;
    *a2 = v12;
    if ( v12 )
    {
      v16 = v4;
      HeapManager = RtlpHpEnvGetHeapManager(&v16);
      RtlpHpVaMgrCtxFree(HeapManager + 88, v15, v14);
    }
  }
  return v5;
}
