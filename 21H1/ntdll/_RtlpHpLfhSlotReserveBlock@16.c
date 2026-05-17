/*
 * XREFs of _RtlpHpLfhSlotReserveBlock@16 @ 0x4B376CD6
 * Callers:
 *     _RtlpHpLfhSlotAllocate@20 @ 0x4B376AB9 (_RtlpHpLfhSlotAllocate@20.c)
 * Callees:
 *     _RtlpHpLfhOwnerMoveSubsegment@12 @ 0x4B3769A2 (_RtlpHpLfhOwnerMoveSubsegment@12.c)
 *     _RtlpHpLfhSubsegmentReserveBlock@20 @ 0x4B37797B (_RtlpHpLfhSubsegmentReserveBlock@20.c)
 */

int __fastcall RtlpHpLfhSlotReserveBlock(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // eax
  _DWORD *v6; // edi
  int v7; // esi

  v5 = a2;
  v6 = a1 + 3;
  v7 = a1[3];
  while ( 1 )
  {
    if ( (_DWORD *)v7 == v6 )
      return 0;
    if ( RtlpHpLfhSubsegmentReserveBlock(v5, a3, a4) )
      break;
    v7 = *(_DWORD *)v7;
    v5 = a2;
  }
  if ( !*(_WORD *)(v7 + 16) )
    RtlpHpLfhOwnerMoveSubsegment(a1, (int *)v7, 1);
  return v7;
}
