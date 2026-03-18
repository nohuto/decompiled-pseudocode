/*
 * XREFs of HvlpSetLogicalProcessorProperty @ 0x1404EEB1C
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1403B0F84 (HvlStartBootLogicalProcessors.c)
 *     HvlConfigurePcc @ 0x1404F26C4 (HvlConfigurePcc.c)
 *     HvlConfigurePerfStateCap @ 0x1404F2740 (HvlConfigurePerfStateCap.c)
 *     HvlConfigurePerfStates @ 0x1404F27A0 (HvlConfigurePerfStates.c)
 *     HvlConfigureThrottleStates @ 0x1404F2800 (HvlConfigureThrottleStates.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038DB00 (HvcallInitiateHypercall.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     HvlpAcquireHypercallPage @ 0x1404ED430 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404EE030 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpSetLogicalProcessorProperty(int a1, int a2, const void *a3)
{
  _DWORD *v6; // rax
  unsigned int v7; // ebx
  PHYSICAL_ADDRESS v9[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v9, 0, 32);
  v6 = HvlpAcquireHypercallPage(v9, 1, 0LL, 3264LL);
  *v6 = a1;
  v6[1] = a2;
  memmove(v6 + 2, a3, 0xCB8uLL);
  v7 = (unsigned __int16)HvcallInitiateHypercall(121) != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((__int64)v9);
  return v7;
}
