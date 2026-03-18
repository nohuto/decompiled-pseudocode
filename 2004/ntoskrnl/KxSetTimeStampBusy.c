/*
 * XREFs of KxSetTimeStampBusy @ 0x140280BB4
 * Callers:
 *     KxFlushEntireTb @ 0x14021E6D0 (KxFlushEntireTb.c)
 *     KxFlushNonGlobalTb @ 0x1403406A4 (KxFlushNonGlobalTb.c)
 *     KiFlushAddressSpaceTb @ 0x14038D7EC (KiFlushAddressSpaceTb.c)
 *     KeInvalidateAllCaches @ 0x1403A2070 (KeInvalidateAllCaches.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 */

char __fastcall KxSetTimeStampBusy(int *a1, __int64 a2)
{
  int v3; // ecx
  int v4; // edi
  int v5; // eax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  _m_prefetchw(a1);
  v3 = *a1;
  v4 = v3;
  while ( (v3 & 1) != 0 || _interlockedbittestandset(a1, 0) )
  {
    KeYieldProcessorEx(&v7, a2);
    v3 = *a1;
    v5 = *a1 - v4;
    if ( v5 >= 3 || v5 >= 2 && (v4 & 1) == 0 )
      return 0;
  }
  return 1;
}
