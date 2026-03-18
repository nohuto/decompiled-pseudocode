/*
 * XREFs of ?InitializeScanLookAsideList@RGNMEMOBJ@@SAHXZ @ 0x1C001EE50
 * Callers:
 *     InitializeGre @ 0x1C029CF90 (InitializeGre.c)
 * Callees:
 *     Win32AllocPagedLookasideList @ 0x1C001F320 (Win32AllocPagedLookasideList.c)
 */

_BOOL8 RGNMEMOBJ::InitializeScanLookAsideList(void)
{
  RGNMEMOBJ::s_pSCANLookAsideList = (void *)Win32AllocPagedLookasideList(112LL, 1935764551LL, 1852011335LL, 96LL);
  return RGNMEMOBJ::s_pSCANLookAsideList != 0LL;
}
