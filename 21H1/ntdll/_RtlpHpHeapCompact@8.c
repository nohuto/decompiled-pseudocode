/*
 * XREFs of _RtlpHpHeapCompact@8 @ 0x4B378991
 * Callers:
 *     _RtlCompactHeap@8 @ 0x4B3567C0 (_RtlCompactHeap@8.c)
 *     _RtlpFlushHeapsCallback@8 @ 0x4B357ED0 (_RtlpFlushHeapsCallback@8.c)
 *     _RtlpHpGCFlushCallback@8 @ 0x4B358460 (_RtlpHpGCFlushCallback@8.c)
 * Callees:
 *     @RtlpInterlockedFlushSList@4 @ 0x4B33E8E6 (@RtlpInterlockedFlushSList@4.c)
 *     _RtlpHpLfhContextCompact@8 @ 0x4B37653C (_RtlpHpLfhContextCompact@8.c)
 *     _RtlpHpSegContextCompact@8 @ 0x4B37B591 (_RtlpHpSegContextCompact@8.c)
 *     _RtlpHpVsContextFreeList@12 @ 0x4B37F65A (_RtlpHpVsContextFreeList@12.c)
 */

int __fastcall RtlpHpHeapCompact(_RTL_SRWLOCK *a1, int a2)
{
  unsigned int Value; // esi
  void *Ptr; // ecx
  int v5; // esi
  int v6; // eax

  Value = a1[3].Value;
  Ptr = a1[44].Ptr;
  v5 = a2 | Value & 0x13000003;
  if ( Ptr && Ptr == NtCurrentTeb()->ClientId.UniqueThread )
    v5 |= 1u;
  v6 = RtlpInterlockedFlushSList((unsigned int)&a1[144]);
  if ( v6 )
    RtlpHpVsContextFreeList(a1 + 128, v5, v6);
  RtlpHpLfhContextCompact(a1 + 176, v5);
  RtlpHpSegContextCompact(&a1[64], v5);
  RtlpHpSegContextCompact(&a1[96], v5);
  return 0;
}
