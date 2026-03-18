/*
 * XREFs of CiSystemTerminate @ 0x1C000C908
 * Callers:
 *     CiSystemInitialize @ 0x1C000D0B0 (CiSystemInitialize.c)
 * Callees:
 *     CiFreeMemory @ 0x1C0004DEC (CiFreeMemory.c)
 */

void CiSystemTerminate()
{
  if ( CiLastIdleStats )
  {
    CiFreeMemory((void *)CiLastIdleStats);
    CiLastIdleStats = 0LL;
  }
}
