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

int __fastcall RtlpAtomMapAtomToHandleEntry(int a1, int a2)
{
  int v3; // [esp+0h] [ebp-4h] BYREF

  v3 = a1;
  if ( (unsigned __int8)RtlIsValidIndexHandle(a1 + 12, a2, &v3) )
    return *(_DWORD *)(v3 + 4);
  else
    return 0;
}
