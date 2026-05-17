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

__int64 __fastcall RtlpAtomMapAtomToHandleEntry(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned __int8)RtlIsValidIndexHandle(a1 + 16, a2, &v3) )
    return *(_QWORD *)(v3 + 8);
  else
    return 0LL;
}
