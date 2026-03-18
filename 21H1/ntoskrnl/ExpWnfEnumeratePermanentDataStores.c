/*
 * XREFs of ExpWnfEnumeratePermanentDataStores @ 0x140958300
 * Callers:
 *     ExpWnfDeletePermanentStateData @ 0x140958134 (ExpWnfDeletePermanentStateData.c)
 * Callees:
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x1407B3F08 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 */

NTSTATUS __fastcall ExpWnfEnumeratePermanentDataStores(int a1, int a2, int a3, HANDLE *a4)
{
  if ( a1 == 2 || a3 )
    return -1073741772;
  else
    return ExpWnfGetPermanentDataStoreHandleByScopeId(a1, a2, 0LL, (__int64)a4, (unsigned int)(a2 - 2) <= 1, 0, a4);
}
