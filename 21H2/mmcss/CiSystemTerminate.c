/*
 * XREFs of CiSystemTerminate @ 0x1C000CCC4
 * Callers:
 *     CiSystemInitialize @ 0x1C000E230 (CiSystemInitialize.c)
 * Callees:
 *     CiFreeMemory @ 0x1C0004B3C (CiFreeMemory.c)
 */

void CiSystemTerminate()
{
  if ( CiLastIdleTime )
  {
    CiFreeMemory((void *)CiLastIdleTime);
    CiLastIdleTime = 0LL;
  }
}
