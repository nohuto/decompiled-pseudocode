/*
 * XREFs of _RtlpPopulateContext@12 @ 0x4B35B59E
 * Callers:
 *     _RtlInitEnumerationHashTable@8 @ 0x4B35B1C0 (_RtlInitEnumerationHashTable@8.c)
 *     _RtlInitStrongEnumerationHashTable@8 @ 0x4B35B220 (_RtlInitStrongEnumerationHashTable@8.c)
 *     _RtlInsertEntryHashTable@16 @ 0x4B35B270 (_RtlInsertEntryHashTable@16.c)
 *     _RtlLookupEntryHashTable@12 @ 0x4B35B2E0 (_RtlLookupEntryHashTable@12.c)
 *     _RtlRemoveEntryHashTable@12 @ 0x4B35B320 (_RtlRemoveEntryHashTable@12.c)
 * Callees:
 *     _RtlpGetBucketIndex@8 @ 0x4B35B542 (_RtlpGetBucketIndex@8.c)
 *     _RtlpGetChainHead@8 @ 0x4B35B57F (_RtlpGetChainHead@8.c)
 */

_DWORD *__fastcall RtlpPopulateContext(_DWORD *a1, _DWORD *a2, unsigned int a3)
{
  unsigned int BucketIndex; // eax
  _DWORD *result; // eax
  _DWORD *v7; // edx
  _DWORD *v8; // esi
  _DWORD *v9; // ecx

  BucketIndex = RtlpGetBucketIndex(a1, a3);
  result = (_DWORD *)RtlpGetChainHead((int)a1, BucketIndex);
  v7 = result;
  v8 = result;
  v9 = (_DWORD *)*result;
  if ( (_DWORD *)*result != result )
  {
    do
    {
      if ( v9[2] && v9[2] >= a3 )
        break;
      result = (_DWORD *)*v9;
      v8 = v9;
      v9 = result;
    }
    while ( result != v7 );
  }
  a2[1] = v8;
  a2[2] = a3;
  *a2 = v7;
  return result;
}
