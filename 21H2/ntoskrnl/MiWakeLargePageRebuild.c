/*
 * XREFs of MiWakeLargePageRebuild @ 0x14038D750
 * Callers:
 *     MiSignalLargePageRebuild @ 0x140260F80 (MiSignalLargePageRebuild.c)
 *     MiUnlinkNodeLargePageHelper @ 0x140323C80 (MiUnlinkNodeLargePageHelper.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x1402745B0 (PsReferencePartitionSafe.c)
 *     ExQueueWorkItemToPartition @ 0x1403025FC (ExQueueWorkItemToPartition.c)
 */

__int64 __fastcall MiWakeLargePageRebuild(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // rdi
  __int64 v4; // r11
  unsigned __int8 v5; // al
  __int64 *v6; // r9
  unsigned __int64 v7; // r10
  __int64 v8; // r11
  unsigned int v9; // ebx

  if ( (*(_DWORD *)(a1 + 4) & 0x20) != 0 )
    return 1LL;
  v3 = a2;
  v4 = 4544LL * a2 + *(_QWORD *)(a1 + 16) + 3216LL;
  if ( *(_BYTE *)(v4 + 33) || *(_BYTE *)(v4 + 34) != 8 && (a3 & 1) == 0 )
    return 1LL;
  v5 = PsReferencePartitionSafe(*(_QWORD *)(a1 + 176));
  v9 = v5;
  if ( v5 == 1 )
  {
    *(_BYTE *)(v8 + 33) = v5;
    *(_QWORD *)v8 = 0LL;
    *(_QWORD *)(v8 + 16) = MiRebuildLargePages;
    *(_QWORD *)(v8 + 24) = (v3 << 53) | (v7 >> 4) & 0x1FFFFFFFFFFFFFLL;
    ExQueueWorkItemToPartition((_QWORD *)v8, v5 + 3, 0xFFFFFFFF, *v6);
  }
  return v9;
}
