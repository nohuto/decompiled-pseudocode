/*
 * XREFs of KiUpdateThreadCpuSetAffinitiesProcess @ 0x1403C303C
 * Callers:
 *     KeSetCpuSetsProcess @ 0x1403C2E54 (KeSetCpuSetsProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140517488 (KeRecomputeCpuSetAffinityProcess.c)
 * Callees:
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x1403C308C (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 */

__int64 __fastcall KiUpdateThreadCpuSetAffinitiesProcess(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  _QWORD *i; // rbx
  __int64 result; // rax

  *a2 = 0LL;
  v2 = (_QWORD *)(a1 + 48);
  for ( i = *(_QWORD **)(a1 + 48); i != v2; i = (_QWORD *)*i )
    result = KiUpdateThreadCpuSetAffinitiesFromDpcLevel(i - 95, a2);
  return result;
}
