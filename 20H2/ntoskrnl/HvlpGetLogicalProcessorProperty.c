/*
 * XREFs of HvlpGetLogicalProcessorProperty @ 0x1404F1368
 * Callers:
 *     HvlLpGetMachineCheckContext @ 0x1404F3A00 (HvlLpGetMachineCheckContext.c)
 *     HvlpLogMicrocodeUpdateStatus @ 0x140891084 (HvlpLogMicrocodeUpdateStatus.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FFF0 (HvcallInitiateHypercall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     HvlpAcquireHypercallPage @ 0x1404F0CA0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F1890 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpGetLogicalProcessorProperty(int a1, int a2, void *a3)
{
  unsigned int v3; // ebp
  _DWORD *v7; // rbx
  _QWORD *v8; // r15
  PHYSICAL_ADDRESS v10[4]; // [rsp+20h] [rbp-58h] BYREF
  PHYSICAL_ADDRESS v11[4]; // [rsp+40h] [rbp-38h] BYREF

  v3 = 0;
  memset(v11, 0, sizeof(v11));
  memset(v10, 0, sizeof(v10));
  v7 = HvlpAcquireHypercallPage(v11, 1, 0LL, 8LL);
  v8 = HvlpAcquireHypercallPage(v10, 2, 0LL, 3256LL);
  *v7 = a1;
  v7[1] = a2;
  if ( (unsigned __int16)HvcallInitiateHypercall(122) )
    v3 = -1073741823;
  else
    memmove(a3, v8, 0xCB8uLL);
  HvlpReleaseHypercallPage(v10);
  HvlpReleaseHypercallPage(v11);
  return v3;
}
