/*
 * XREFs of RtlAllocateWnfSerializationGroup @ 0x180084570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlAllocateWnfSerializationGroup()
{
  __int64 result; // rax

  do
    result = (unsigned int)_InterlockedIncrement(&dword_18016D258);
  while ( !(_DWORD)result );
  return result;
}
