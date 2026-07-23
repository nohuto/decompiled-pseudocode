/*
 * XREFs of IopLiveDumpMarkDeviceNode @ 0x1409AD928
 * Callers:
 *     IopLiveDumpMarkRequiredDumpData @ 0x1409ADD1C (IopLiveDumpMarkRequiredDumpData.c)
 * Callees:
 *     MmAddRangeToCrashDump @ 0x140538818 (MmAddRangeToCrashDump.c)
 */

__int64 __fastcall IopLiveDumpMarkDeviceNode(__int64 (__fastcall **a1)(_QWORD, __int64, __int64), unsigned __int64 a2)
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
