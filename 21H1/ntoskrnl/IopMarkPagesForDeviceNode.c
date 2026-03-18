/*
 * XREFs of IopMarkPagesForDeviceNode @ 0x1405062FC
 * Callers:
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x140505CE8 (IopAddLiveDumpPagesToPartialKernelDump.c)
 * Callees:
 *     MmAddRangeToCrashDump @ 0x140532AB8 (MmAddRangeToCrashDump.c)
 */

__int64 __fastcall IopMarkPagesForDeviceNode(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = MmAddRangeToCrashDump(a1, a2, 88LL);
  if ( (int)result >= 0 )
  {
    result = MmAddRangeToCrashDump(a1, *(_QWORD *)(a2 + 48), *(unsigned __int16 *)(a2 + 40) + 2LL);
    if ( (int)result >= 0 )
      return MmAddRangeToCrashDump(a1, *(_QWORD *)(a2 + 64), *(unsigned __int16 *)(a2 + 56) + 2LL);
  }
  return result;
}
