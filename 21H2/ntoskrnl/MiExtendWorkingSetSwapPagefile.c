/*
 * XREFs of MiExtendWorkingSetSwapPagefile @ 0x1408D9ACC
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x14035BCDC (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x14035C7D0 (MmOutSwapWorkingSet.c)
 * Callees:
 *     MiIssuePageExtendRequest @ 0x140543944 (MiIssuePageExtendRequest.c)
 */

__int64 __fastcall MiExtendWorkingSetSwapPagefile(__int64 a1, __int64 a2, unsigned int a3)
{
  return (unsigned int)MiIssuePageExtendRequest(a1, (a2 + 0x7FFF) & 0xFFFFFFFFFFFF8000uLL, 0, a3) == 0 ? 0xC0000099 : 0;
}
