/*
 * XREFs of ExpUuidSaveSequenceNumberIf @ 0x1406DC574
 * Callers:
 *     ExUuidCreate @ 0x140681B30 (ExUuidCreate.c)
 *     NtAllocateUuids @ 0x1406DC3C0 (NtAllocateUuids.c)
 * Callees:
 *     ExpUuidSaveSequenceNumber @ 0x14085F1D0 (ExpUuidSaveSequenceNumber.c)
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
