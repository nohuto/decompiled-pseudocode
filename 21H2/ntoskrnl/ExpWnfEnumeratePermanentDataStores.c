/*
 * XREFs of ExpWnfEnumeratePermanentDataStores @ 0x14095CEA0
 * Callers:
 *     ExpWnfDeletePermanentStateData @ 0x14095CCD4 (ExpWnfDeletePermanentStateData.c)
 * Callees:
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x1407C9E88 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 */

NTSTATUS __fastcall ExpWnfEnumeratePermanentDataStores(int a1, int a2, int a3, HANDLE *a4)
{
  if ( a1 == 2 || a3 )
    return -1073741772;
  else
    return ExpWnfGetPermanentDataStoreHandleByScopeId(a1, a2, 0LL, (__int64)a4, (unsigned int)(a2 - 2) <= 1, 0, a4);
}
