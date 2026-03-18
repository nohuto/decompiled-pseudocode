/*
 * XREFs of ?_TTBetterRank@@YGHIHIH@Z @ 0x17A392
 * Callers:
 *     ?TTBetterTarget@@YGHPAUtagWND@@IPAUtagPNTRWINDOWHITTTESTARGS@@PAUtagRECT@@K@Z @ 0x179D48 (-TTBetterTarget@@YGHPAUtagWND@@IPAUtagPNTRWINDOWHITTTESTARGS@@PAUtagRECT@@K@Z.c)
 *     ?TopLevelTouchTarget@@YGPAUtagWND@@PAU1@PAUtagTOUCHTARGETINGCONTACT@@PAUtagPOINT@@2H@Z @ 0x179F56 (-TopLevelTouchTarget@@YGPAUtagWND@@PAU1@PAUtagTOUCHTARGETINGCONTACT@@PAUtagPOINT@@2H@Z.c)
 * Callees:
 *     <none>
 */

BOOL __userpurge _TTBetterRank@<eax>(int a1@<edx>, int a2@<ecx>, unsigned int a3, int a4, unsigned int a5, int a6)
{
  return a2 + (a1 != 0 ? 0 : 4095) < a3 + (a4 != 0 ? 0 : 4095);
}
