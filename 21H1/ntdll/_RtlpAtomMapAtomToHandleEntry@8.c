/*
 * XREFs of _RtlpAtomMapAtomToHandleEntry@8 @ 0x4B2E04EF
 * Callers:
 *     _RtlDeleteAtomFromAtomTable@8 @ 0x4B2A7820 (_RtlDeleteAtomFromAtomTable@8.c)
 *     _RtlQueryAtomInAtomTable@24 @ 0x4B2A9E90 (_RtlQueryAtomInAtomTable@24.c)
 *     _RtlLookupAtomInAtomTable@12 @ 0x4B2E0270 (_RtlLookupAtomInAtomTable@12.c)
 *     _RtlpHashStringToAtom@28 @ 0x4B2E032F (_RtlpHashStringToAtom@28.c)
 *     _RtlPinAtomInAtomTable@8 @ 0x4B34D0F0 (_RtlPinAtomInAtomTable@8.c)
 * Callees:
 *     _RtlIsValidIndexHandle@12 @ 0x4B2E0520 (_RtlIsValidIndexHandle@12.c)
 */

ULONG __fastcall RtlpAtomMapAtomToHandleEntry(int a1, ULONG a2)
{
  PRTL_HANDLE_TABLE_ENTRY Handle; // [esp+0h] [ebp-4h] BYREF

  Handle = (PRTL_HANDLE_TABLE_ENTRY)a1;
  if ( RtlIsValidIndexHandle((PRTL_HANDLE_TABLE)(a1 + 12), a2, &Handle) )
    return Handle[1].Flags;
  else
    return 0;
}
