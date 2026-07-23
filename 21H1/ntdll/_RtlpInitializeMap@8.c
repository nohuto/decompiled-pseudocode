/*
 * XREFs of _RtlpInitializeMap@8 @ 0x4B35E872
 * Callers:
 *     _RtlpInitializeLeakDetection@0 @ 0x4B35E7F3 (_RtlpInitializeLeakDetection@0.c)
 *     _RtlpSetBlockInfo@16 @ 0x4B35EDDC (_RtlpSetBlockInfo@16.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

void *__fastcall RtlpInitializeMap(_DWORD *a1, _DWORD *a2)
{
  void *result; // eax
  size_t v5; // [esp-4h] [ebp-Ch]

  LODWORD(v5) = 1068;
  result = memset(a1, 0, v5);
  a1[267] = a2;
  if ( a2 )
  {
    result = (void *)(*a2 >> 8);
    *a1 = result;
  }
  return result;
}
