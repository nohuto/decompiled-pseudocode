/*
 * XREFs of ExpUuidSaveSequenceNumberIf @ 0x1406E46E4
 * Callers:
 *     ExUuidCreate @ 0x14065B780 (ExUuidCreate.c)
 *     NtAllocateUuids @ 0x1406E4530 (NtAllocateUuids.c)
 * Callees:
 *     ExpUuidSaveSequenceNumber @ 0x1407B9B34 (ExpUuidSaveSequenceNumber.c)
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
