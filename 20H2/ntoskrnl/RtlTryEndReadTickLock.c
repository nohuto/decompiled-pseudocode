/*
 * XREFs of RtlTryEndReadTickLock @ 0x14033D444
 * Callers:
 *     KeQueryCpuSetInformation @ 0x1407C2DC8 (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlTryEndReadTickLock(_QWORD *a1, __int64 a2)
{
  return *a1 == a2;
}
