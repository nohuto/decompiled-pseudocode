/*
 * XREFs of IopLiveDumpMarkLoadedModuleList @ 0x1409ADB4C
 * Callers:
 *     IopLiveDumpMarkRequiredDumpData @ 0x1409ADD1C (IopLiveDumpMarkRequiredDumpData.c)
 * Callees:
 *     MmAddRangeToCrashDump @ 0x140538818 (MmAddRangeToCrashDump.c)
 */

__int64 __fastcall IopLiveDumpMarkLoadedModuleList(__int64 (__fastcall **a1)(_QWORD, __int64, __int64))
{
  __int64 result; // rax
  PVOID *i; // rbx

  result = MmAddRangeToCrashDump(a1, (unsigned __int64)&PsLoadedModuleList, 16LL);
  if ( (int)result >= 0 )
  {
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      result = MmAddRangeToCrashDump(a1, (unsigned __int64)i, 160LL);
      if ( (int)result < 0 )
        break;
      result = MmAddRangeToCrashDump(a1, (unsigned __int64)i[12], *((unsigned __int16 *)i + 44));
      if ( (int)result < 0 )
        break;
      result = MmAddRangeToCrashDump(a1, (unsigned __int64)i[10], *((unsigned __int16 *)i + 36));
      if ( (int)result < 0 )
        break;
      result = MmAddRangeToCrashDump(a1, (unsigned __int64)i[5], 32LL);
      if ( (int)result < 0 )
        break;
      result = MmAddRangeToCrashDump(a1, (unsigned __int64)i[6], *((unsigned int *)i + 16));
      if ( (int)result < 0 )
        break;
    }
  }
  return result;
}
