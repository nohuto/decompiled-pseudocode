/*
 * XREFs of RtlpAtomMapAtomToHandleEntry @ 0x180059984
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x180059150 (RtlDeleteAtomFromAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x180059250 (RtlQueryAtomInAtomTable.c)
 *     RtlLookupAtomInAtomTable @ 0x1800596A0 (RtlLookupAtomInAtomTable.c)
 *     RtlpHashStringToAtom @ 0x1800597E0 (RtlpHashStringToAtom.c)
 *     RtlPinAtomInAtomTable @ 0x1800EB140 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlIsValidIndexHandle @ 0x1800599C0 (RtlIsValidIndexHandle.c)
 */

_RTL_HANDLE_TABLE_ENTRY *__fastcall RtlpAtomMapAtomToHandleEntry(__int64 a1, ULONG a2)
{
  PRTL_HANDLE_TABLE_ENTRY Handle; // [rsp+30h] [rbp+8h] BYREF

  if ( RtlIsValidIndexHandle((PRTL_HANDLE_TABLE)(a1 + 16), a2, &Handle) )
    return Handle[1].NextFree;
  else
    return 0LL;
}
