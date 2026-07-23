/*
 * XREFs of PopControlMonitor @ 0x14077A160
 * Callers:
 *     PopScreenOff @ 0x1408F0428 (PopScreenOff.c)
 *     PopScreenOn @ 0x1408F0474 (PopScreenOn.c)
 * Callees:
 *     PopInvokeWin32Callout @ 0x14066EF08 (PopInvokeWin32Callout.c)
 *     TtmSessionMonitorControl @ 0x1408FF074 (TtmSessionMonitorControl.c)
 */

__int64 __fastcall PopControlMonitor(unsigned int *a1, unsigned int a2)
{
  int v3; // [rsp+20h] [rbp-30h] BYREF
  char v4; // [rsp+24h] [rbp-2Ch]
  __int16 v5; // [rsp+25h] [rbp-2Bh]
  char v6; // [rsp+27h] [rbp-29h]
  __int64 v7; // [rsp+28h] [rbp-28h]
  unsigned int *v8; // [rsp+30h] [rbp-20h]
  __int64 v9; // [rsp+38h] [rbp-18h]
  __int64 v10; // [rsp+40h] [rbp-10h]
  unsigned int v11; // [rsp+68h] [rbp+18h] BYREF

  v11 = a2;
  v5 = 0;
  v6 = 0;
  HIDWORD(v7) = 0;
  HIDWORD(v9) = 0;
  if ( TtmpEnabled == 1 )
    return TtmSessionMonitorControl(a2, a1[1], *a1);
  v5 = 0;
  v6 = 0;
  v9 = 0LL;
  v4 = 0;
  v8 = a1;
  v10 = 0LL;
  v7 = 8LL;
  v3 = 3;
  return PopInvokeWin32Callout(5u, (__int64)&v3, 1u, (int *)&v11);
}
