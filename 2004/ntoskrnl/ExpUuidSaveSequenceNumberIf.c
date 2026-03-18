/*
 * XREFs of ExpUuidSaveSequenceNumberIf @ 0x140708054
 * Callers:
 *     ExUuidCreate @ 0x140657460 (ExUuidCreate.c)
 *     NtAllocateUuids @ 0x140707EA0 (NtAllocateUuids.c)
 * Callees:
 *     ExpUuidSaveSequenceNumber @ 0x1407BCCA4 (ExpUuidSaveSequenceNumber.c)
 */

__int64 ExpUuidSaveSequenceNumberIf()
{
  __int64 result; // rax

  result = 0LL;
  if ( ExpUuidSequenceNumberNotSaved == 1 )
  {
    result = ExpUuidSaveSequenceNumber();
    if ( (int)result >= 0 )
      ExpUuidSequenceNumberNotSaved = 0;
  }
  return result;
}
