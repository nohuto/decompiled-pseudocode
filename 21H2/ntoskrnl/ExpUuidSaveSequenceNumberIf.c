/*
 * XREFs of ExpUuidSaveSequenceNumberIf @ 0x140618ED4
 * Callers:
 *     NtAllocateUuids @ 0x140618D20 (NtAllocateUuids.c)
 *     ExUuidCreate @ 0x1406F73B0 (ExUuidCreate.c)
 * Callees:
 *     ExpUuidSaveSequenceNumber @ 0x1407CF964 (ExpUuidSaveSequenceNumber.c)
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
