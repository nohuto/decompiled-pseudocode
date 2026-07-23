/*
 * XREFs of PipDeviceObjectListRemove @ 0x14077D150
 * Callers:
 *     IopRemoveDeviceRelationsFromList @ 0x14073601C (IopRemoveDeviceRelationsFromList.c)
 *     IopRemoveCurrentRelationFromList @ 0x1408B2974 (IopRemoveCurrentRelationFromList.c)
 *     IopRemoveRelationFromList @ 0x1408B29F4 (IopRemoveRelationFromList.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x140414040 (memmove.c)
 */

__int64 __fastcall PipDeviceObjectListRemove(unsigned int *a1, unsigned int a2)
{
  PVOID *v4; // rsi
  unsigned int v5; // edx

  if ( a2 >= *a1 )
    return 3221225612LL;
  v4 = (PVOID *)&a1[6 * a2];
  ObfDereferenceObjectWithTag(v4[2], 0x4C706E50u);
  if ( ((_DWORD)v4[4] & 1) != 0 )
    --a1[2];
  v5 = *a1;
  if ( a2 < *a1 - 1 )
  {
    memmove(v4 + 2, &a1[4 * a2 + 10 + 2 * a2], 24LL * (v5 - a2 - 1));
    v5 = *a1;
  }
  *a1 = v5 - 1;
  return 0LL;
}
