/*
 * XREFs of _RtlTraceDatabaseUnlock@4 @ 0x4B36A410
 * Callers:
 *     <none>
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 */

int __stdcall RtlTraceDatabaseUnlock(int a1)
{
  *(_DWORD *)(a1 + 24) = 0;
  return RtlLeaveCriticalSection(a1 + 28);
}
