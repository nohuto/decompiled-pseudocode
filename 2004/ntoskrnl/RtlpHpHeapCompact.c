/*
 * XREFs of RtlpHpHeapCompact @ 0x1402DB5C4
 * Callers:
 *     ExpHpCompactionRoutine @ 0x140253400 (ExpHpCompactionRoutine.c)
 *     ExpHpCompactSessionPools @ 0x1402DC804 (ExpHpCompactSessionPools.c)
 * Callees:
 *     RtlpHpLfhContextCompact @ 0x1402CB2FC (RtlpHpLfhContextCompact.c)
 *     RtlpHpSegContextCompact @ 0x1402DB670 (RtlpHpSegContextCompact.c)
 *     RtlpHpVsContextFreeList @ 0x1402DBA70 (RtlpHpVsContextFreeList.c)
 *     RtlpInterlockedFlushSList @ 0x1403FF070 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall RtlpHpHeapCompact(__int64 a1)
{
  int v2; // r8d
  int v3; // edx
  int v4; // ecx
  unsigned int v5; // edi
  PSLIST_ENTRY v6; // rax

  v2 = *(_DWORD *)(a1 + 220);
  v3 = *(_DWORD *)(a1 + 20) & 0x13000003;
  v4 = 0;
  if ( v2 )
    LOBYTE(v4) = v2 == KeGetCurrentThread()[1].CurrentRunTime;
  v5 = v3 | 1;
  if ( !v4 )
    v5 = v3;
  v6 = RtlpInterlockedFlushSList((PSLIST_HEADER)(a1 + 704));
  if ( v6 )
    RtlpHpVsContextFreeList(a1 + 640, v5, v6);
  RtlpHpLfhContextCompact(a1 + 832, v5);
  RtlpHpSegContextCompact(a1 + 256, v5);
  RtlpHpSegContextCompact(a1 + 448, v5);
  return 0LL;
}
