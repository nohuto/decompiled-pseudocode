/*
 * XREFs of RtlpAtomMapAtomToHandleEntry @ 0x18004C924
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x18004C120 (RtlDeleteAtomFromAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x18004C220 (RtlQueryAtomInAtomTable.c)
 *     RtlLookupAtomInAtomTable @ 0x18004C640 (RtlLookupAtomInAtomTable.c)
 *     RtlpHashStringToAtom @ 0x18004C780 (RtlpHashStringToAtom.c)
 *     RtlPinAtomInAtomTable @ 0x1800EADE0 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlIsValidIndexHandle @ 0x18004C960 (RtlIsValidIndexHandle.c)
 */

_RTL_HANDLE_TABLE_ENTRY *__fastcall RtlpAtomMapAtomToHandleEntry(__int64 a1, ULONG a2)
{
  PRTL_HANDLE_TABLE_ENTRY Handle; // [rsp+30h] [rbp+8h] BYREF

  if ( RtlIsValidIndexHandle((PRTL_HANDLE_TABLE)(a1 + 16), a2, &Handle) )
    return Handle[1].NextFree;
  else
    return 0LL;
}
