/*
 * XREFs of CiSystemTerminate @ 0x1C000C888
 * Callers:
 *     CiSystemInitialize @ 0x1C000E0B0 (CiSystemInitialize.c)
 * Callees:
 *     CiFreeMemory @ 0x1C0004AFC (CiFreeMemory.c)
 */

void CiSystemTerminate()
{
  if ( CiLastIdleTime )
  {
    CiFreeMemory((void *)CiLastIdleTime);
    CiLastIdleTime = 0LL;
  }
}
