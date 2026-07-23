/*
 * XREFs of IopRemoveDeviceRelationsFromList @ 0x14073601C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140736AD4 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PipDeviceObjectListElementAt @ 0x14076EDDC (PipDeviceObjectListElementAt.c)
 *     PipDeviceObjectListRemove @ 0x14077D150 (PipDeviceObjectListRemove.c)
 */

__int64 __fastcall IopRemoveDeviceRelationsFromList(unsigned int **a1)
{
  unsigned int *v1; // rax
  unsigned int v3; // ebx
  int v5; // [rsp+40h] [rbp+8h] BYREF
  char v6; // [rsp+48h] [rbp+10h] BYREF

  v1 = *a1;
  v5 = 0;
  v3 = *v1;
  while ( (--v3 & 0x80000000) == 0 )
  {
    PipDeviceObjectListElementAt((unsigned int)*a1, v3, (unsigned int)&v6, (unsigned int)&v5, 0LL);
    if ( !v5 )
      PipDeviceObjectListRemove(*a1, v3);
  }
  return 0LL;
}
