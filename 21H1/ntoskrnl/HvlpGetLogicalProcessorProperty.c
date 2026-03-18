/*
 * XREFs of HvlpGetLogicalProcessorProperty @ 0x1404ED4AC
 * Callers:
 *     HvlLpGetMachineCheckContext @ 0x1404EFB40 (HvlLpGetMachineCheckContext.c)
 *     HvlpLogMicrocodeUpdateStatus @ 0x14088A214 (HvlpLogMicrocodeUpdateStatus.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpGetLogicalProcessorProperty(int a1, int a2, void *a3)
{
  unsigned int v3; // ebp
  _DWORD *v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  const void *v11; // r15
  __int64 v12; // r9
  __int128 v14; // [rsp+20h] [rbp-58h] BYREF
  __int128 v15; // [rsp+30h] [rbp-48h]
  __int128 v16; // [rsp+40h] [rbp-38h] BYREF
  __int128 v17; // [rsp+50h] [rbp-28h]

  v3 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v7 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v16, 1, 0LL, 8LL);
  v8 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v14, 2, 0LL, 3256LL);
  v9 = *((_QWORD *)&v15 + 1);
  v10 = *((_QWORD *)&v17 + 1);
  v11 = v8;
  *v7 = a1;
  v7[1] = a2;
  if ( (unsigned __int16)HvcallInitiateHypercall(122, v10, v9, v12) )
    v3 = -1073741823;
  else
    memmove(a3, v11, 0xCB8uLL);
  HvlpReleaseHypercallPage(&v14);
  HvlpReleaseHypercallPage(&v16);
  return v3;
}
