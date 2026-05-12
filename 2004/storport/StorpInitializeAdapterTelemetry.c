/*
 * XREFs of StorpInitializeAdapterTelemetry @ 0x1C0051540
 * Callers:
 *     RaidInitializeAdapter @ 0x1C0078078 (RaidInitializeAdapter.c)
 * Callees:
 *     StorpInitializeHierarchicalResetBuckets @ 0x1C000D28C (StorpInitializeHierarchicalResetBuckets.c)
 */

__int64 __fastcall StorpInitializeAdapterTelemetry(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  StorpInitializeHierarchicalResetBuckets(a1);
  *(_QWORD *)(v1 + 5344) = MEMORY[0xFFFFF78000000008];
  result = 0LL;
  *(_QWORD *)(v1 + 5352) = 0LL;
  *(_QWORD *)(v1 + 5360) = 0LL;
  *(_QWORD *)(v1 + 5368) = 0LL;
  *(_QWORD *)(v1 + 5376) = 0LL;
  *(_QWORD *)(v1 + 5384) = 0LL;
  *(_QWORD *)(v1 + 5392) = 0LL;
  *(_QWORD *)(v1 + 5400) = 0LL;
  *(_QWORD *)(v1 + 5408) = 0LL;
  *(_QWORD *)(v1 + 5416) = 0LL;
  *(_QWORD *)(v1 + 5424) = 0LL;
  *(_DWORD *)(v1 + 5440) = 0;
  *(_BYTE *)(v1 + 5472) = 0;
  *(_QWORD *)(v1 + 5432) = 1LL;
  return result;
}
