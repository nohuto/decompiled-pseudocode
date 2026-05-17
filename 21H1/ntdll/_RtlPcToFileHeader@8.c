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
  int v3; // [esp+8h] [ebp-10h] BYREF
  void *v4; // [esp+Ch] [ebp-Ch]
  int v5; // [esp+10h] [ebp-8h]
  int v6; // [esp+14h] [ebp-4h]

  if ( (unsigned int)PcValue < dword_4B3A9374[0] || (unsigned int)PcValue >= dword_4B3A9374[0] + dword_4B3A9378[0] )
  {
    RtlpxLookupFunctionTable(PcValue, &v3);
  }
  else
  {
    v3 = dword_4B3A9370[0];
    v4 = (void *)dword_4B3A9370[1];
    v5 = dword_4B3A9370[2];
    v6 = dword_4B3A9370[3];
  }
  result = v4;
  *BaseOfImage = v4;
  return result;
}
