/*
 * XREFs of ExpUuidSaveSequenceNumberIf @ 0x140711D14
 * Callers:
 *     ExUuidCreate @ 0x140710ED0 (ExUuidCreate.c)
 *     NtAllocateUuids @ 0x140711B60 (NtAllocateUuids.c)
 * Callees:
 *     ExpUuidSaveSequenceNumber @ 0x1407CB534 (ExpUuidSaveSequenceNumber.c)
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
