/*
 * XREFs of IopLiveDumpMarkProcessorData @ 0x1409ADC08
 * Callers:
 *     IopLiveDumpMarkRequiredDumpData @ 0x1409ADD1C (IopLiveDumpMarkRequiredDumpData.c)
 * Callees:
 *     MmAddRangeToCrashDump @ 0x140538818 (MmAddRangeToCrashDump.c)
 */

__int64 __fastcall IopLiveDumpMarkProcessorData(__int64 (__fastcall **a1)(_QWORD, __int64, __int64), int a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  v3 = KiProcessorBlock[a2];
  result = MmAddRangeToCrashDump(a1, v3 - 384, 45184LL);
  if ( (int)result >= 0 )
  {
    result = MmAddRangeToCrashDump(a1, *(_QWORD *)(v3 + 8), 2200LL);
    if ( (int)result >= 0 )
    {
      result = MmAddRangeToCrashDump(a1, *(_QWORD *)(*(_QWORD *)(v3 + 8) + 184LL), 2624LL);
      if ( (int)result >= 0 )
      {
        result = MmAddRangeToCrashDump(a1, *(_QWORD *)(v3 + 34240), 1232LL);
        if ( (int)result >= 0 )
        {
          result = MmAddRangeToCrashDump(a1, *(_QWORD *)(*(_QWORD *)(v3 + 34240) + 152LL), 0x2000LL);
          if ( (int)result >= 0 )
          {
            result = MmAddRangeToCrashDump(a1, *(_QWORD *)(*(_QWORD *)(v3 + 34240) + 248LL) - 4096LL, 0x2000LL);
            if ( (int)result >= 0 )
            {
              result = MmAddRangeToCrashDump(a1, *(_QWORD *)(v3 + 344), *(unsigned __int16 *)(v3 + 342));
              if ( (int)result >= 0 )
                return MmAddRangeToCrashDump(a1, *(_QWORD *)(v3 + 360), *(unsigned __int16 *)(v3 + 358));
            }
          }
        }
      }
    }
  }
  return result;
}
