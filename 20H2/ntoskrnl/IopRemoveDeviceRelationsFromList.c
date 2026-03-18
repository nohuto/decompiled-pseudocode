/*
 * XREFs of IopRemoveDeviceRelationsFromList @ 0x14076EE10
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14073F768 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PipDeviceObjectListElementAt @ 0x14076A93C (PipDeviceObjectListElementAt.c)
 *     PipDeviceObjectListRemove @ 0x1407791B0 (PipDeviceObjectListRemove.c)
 */

__int64 __fastcall IopRemoveDeviceRelationsFromList(unsigned int **a1)
{
  unsigned int *v1; // rax
  unsigned int v3; // ebx
  int v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v1 = *a1;
  v5 = 0;
  v3 = *v1;
  while ( (--v3 & 0x80000000) == 0 )
  {
    PipDeviceObjectListElementAt(*a1, v3, &v6, &v5, 0LL);
    if ( !v5 )
      PipDeviceObjectListRemove(*a1, v3);
  }
  return 0LL;
}
