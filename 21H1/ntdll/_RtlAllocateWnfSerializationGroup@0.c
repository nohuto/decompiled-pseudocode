/*
 * XREFs of _RtlAllocateWnfSerializationGroup@0 @ 0x4B2ED6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

signed __int32 __stdcall RtlAllocateWnfSerializationGroup()
{
  signed __int32 result; // eax

  do
    result = _InterlockedIncrement(&dword_4B3A6700);
  while ( !result );
  return result;
}
