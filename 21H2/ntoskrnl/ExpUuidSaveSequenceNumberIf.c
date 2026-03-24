/*
 * XREFs of ExpUuidSaveSequenceNumberIf @ 0x1406B9814
 * Callers:
 *     NtAllocateUuids @ 0x1406B9660 (NtAllocateUuids.c)
 *     ExUuidCreate @ 0x1407208B0 (ExUuidCreate.c)
 * Callees:
 *     ExpUuidSaveSequenceNumber @ 0x1407CF7F4 (ExpUuidSaveSequenceNumber.c)
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
