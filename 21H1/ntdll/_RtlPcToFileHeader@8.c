/*
 * XREFs of _RtlPcToFileHeader@8 @ 0x4B2BC650
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpxLookupFunctionTable@8 @ 0x4B2BD6C0 (_RtlpxLookupFunctionTable@8.c)
 */

PVOID __stdcall RtlPcToFileHeader(PVOID PcValue, PVOID *BaseOfImage)
{
  PVOID result; // eax
  void *v3; // [esp+Ch] [ebp-Ch]

  if ( (unsigned int)PcValue < dword_4B3A9374[0] || (unsigned int)PcValue >= dword_4B3A9374[0] + dword_4B3A9378[0] )
    RtlpxLookupFunctionTable(PcValue);
  else
    v3 = (void *)dword_4B3A9370[1];
  result = v3;
  *BaseOfImage = v3;
  return result;
}
