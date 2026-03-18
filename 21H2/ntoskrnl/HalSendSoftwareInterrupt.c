/*
 * XREFs of HalSendSoftwareInterrupt @ 0x140342650
 * Callers:
 *     KiSendSoftwareInterrupt @ 0x14022BA48 (KiSendSoftwareInterrupt.c)
 *     IopfCompleteRequest @ 0x1402B59D0 (IopfCompleteRequest.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiProcessThreadWaitList @ 0x140340390 (KiProcessThreadWaitList.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x1402ADD00 (HalpInterruptSendIpi.c)
 */

__int64 __fastcall HalSendSoftwareInterrupt(int a1, char a2)
{
  unsigned int v3; // edx
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+2Ch] [rbp-1Ch]

  v7 = 0LL;
  v3 = 31;
  v6 = a1;
  v5 = 6LL;
  if ( a2 != 1 )
    v3 = 47;
  return HalpInterruptSendIpi((int *)&v5, v3);
}
