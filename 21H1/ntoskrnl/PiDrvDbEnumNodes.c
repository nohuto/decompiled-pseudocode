/*
 * XREFs of PiDrvDbEnumNodes @ 0x1408B1978
 * Callers:
 *     PpDevCfgInit @ 0x140A4A920 (PpDevCfgInit.c)
 * Callees:
 *     PiDevCfgInitDriverDatabaseCallback @ 0x1408A2678 (PiDevCfgInitDriverDatabaseCallback.c)
 */

__int64 PiDrvDbEnumNodes()
{
  __int64 *i; // rbx

  for ( i = (__int64 *)PiDrvDbNodeList; i != &PiDrvDbNodeList && PiDevCfgInitDriverDatabaseCallback(i[3]); i = (__int64 *)*i )
    ;
  return 0LL;
}
