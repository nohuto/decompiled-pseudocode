/*
 * XREFs of KxSetTimeStampBusy @ 0x1402EEEC8
 * Callers:
 *     KxFlushNonGlobalTb @ 0x140230244 (KxFlushNonGlobalTb.c)
 *     KxFlushEntireTb @ 0x1402D41D0 (KxFlushEntireTb.c)
 *     KiFlushAddressSpaceTb @ 0x1403902FC (KiFlushAddressSpaceTb.c)
 *     KeInvalidateAllCaches @ 0x1403A4F50 (KeInvalidateAllCaches.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 */

char __fastcall KxSetTimeStampBusy(int *a1)
{
  int v2; // ecx
  int v3; // edi
  int v4; // eax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  _m_prefetchw(a1);
  v2 = *a1;
  v3 = v2;
  while ( (v2 & 1) != 0 || _interlockedbittestandset(a1, 0) )
  {
    KeYieldProcessorEx(&v6);
    v2 = *a1;
    v4 = *a1 - v3;
    if ( v4 >= 3 || v4 >= 2 && (v3 & 1) == 0 )
      return 0;
  }
  return 1;
}
