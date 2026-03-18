/*
 * XREFs of PiDrvDbEnumNodes @ 0x1408B88B8
 * Callers:
 *     PpDevCfgInit @ 0x140A50A1C (PpDevCfgInit.c)
 * Callees:
 *     PiDevCfgInitDriverDatabaseCallback @ 0x1408A94C8 (PiDevCfgInitDriverDatabaseCallback.c)
 */

__int64 PiDrvDbEnumNodes()
{
  __int64 *i; // rbx

  for ( i = (__int64 *)PiDrvDbNodeList; i != &PiDrvDbNodeList && PiDevCfgInitDriverDatabaseCallback(i[3]); i = (__int64 *)*i )
    ;
  return 0LL;
}
