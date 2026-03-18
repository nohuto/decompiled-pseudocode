/*
 * XREFs of PnpFinalizeDeviceRemovalForReset @ 0x140945A9C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1407655BC (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     IopEnumerateRelations @ 0x1407667B0 (IopEnumerateRelations.c)
 *     IopLogDeviceResetComplete @ 0x1409455A8 (IopLogDeviceResetComplete.c)
 *     IopMarkDeviceToBeReset @ 0x140945654 (IopMarkDeviceToBeReset.c)
 */

NTSTATUS __fastcall PnpFinalizeDeviceRemovalForReset(__int64 a1, unsigned int **a2)
{
  __int16 *v4; // r9
  int v6; // [rsp+50h] [rbp+18h] BYREF
  int v7; // [rsp+54h] [rbp+1Ch]
  ULONG_PTR MaxDataSize; // [rsp+58h] [rbp+20h] BYREF

  MaxDataSize = 0LL;
  v7 = 0;
  v6 = 1;
  while ( IopEnumerateRelations(a2, &v6, &MaxDataSize, 0LL, 0LL) )
    IopMarkDeviceToBeReset(MaxDataSize);
  return IopLogDeviceResetComplete(a1, 0, 0, v4);
}
