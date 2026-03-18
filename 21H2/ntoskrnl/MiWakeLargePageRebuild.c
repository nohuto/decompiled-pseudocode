/*
 * XREFs of MiWakeLargePageRebuild @ 0x140397C78
 * Callers:
 *     MiSignalLargePageRebuild @ 0x140267CA8 (MiSignalLargePageRebuild.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1402CB2D0 (MiUnlinkNodeLargePageHelper.c)
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x1402EF060 (ExQueueWorkItemToPartition.c)
 *     PsReferencePartitionSafe @ 0x1403606EC (PsReferencePartitionSafe.c)
 */

__int64 __fastcall MiWakeLargePageRebuild(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // r9
  unsigned __int8 v4; // al
  __int64 v5; // r9
  ULONG_PTR v6; // r10
  __int64 v7; // r11
  unsigned int v8; // ebx

  v3 = *(_QWORD *)(a1 + 16) + 24512LL * a2;
  if ( (*(_DWORD *)(a1 + 4) & 0x20) != 0 || *(_BYTE *)(v3 + 3249) || *(_BYTE *)(v3 + 3250) != 8 && (a3 & 1) == 0 )
    return 1LL;
  v4 = PsReferencePartitionSafe(*(_QWORD *)(a1 + 176));
  v8 = v4;
  if ( v4 )
  {
    *(_BYTE *)(v6 + 33) = 1;
    *(_QWORD *)v6 = 0LL;
    *(_QWORD *)(v6 + 16) = MiRebuildLargePages;
    *(_QWORD *)(v6 + 24) = v5;
    ExQueueWorkItemToPartition(v6, 4, 0xFFFFFFFF, *(_QWORD *)(v7 + 176));
  }
  return v8;
}
