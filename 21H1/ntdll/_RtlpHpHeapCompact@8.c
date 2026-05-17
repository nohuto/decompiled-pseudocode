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

int __fastcall RtlpHpHeapCompact(int a1, int a2)
{
  int v3; // esi
  void *v4; // ecx
  int v5; // esi
  int v6; // eax

  v3 = *(_DWORD *)(a1 + 12);
  v4 = *(void **)(a1 + 176);
  v5 = a2 | v3 & 0x13000003;
  if ( v4 && v4 == NtCurrentTeb()->ClientId.UniqueThread )
    v5 |= 1u;
  v6 = RtlpInterlockedFlushSList(a1 + 576);
  if ( v6 )
    RtlpHpVsContextFreeList(v6);
  RtlpHpLfhContextCompact(a1 + 704, v5);
  RtlpHpSegContextCompact(a1 + 256, v5);
  RtlpHpSegContextCompact(a1 + 384, v5);
  return 0;
}
