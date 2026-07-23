/*
 * XREFs of HalpInterruptStartProcessor @ 0x14099AF74
 * Callers:
 *     HalStartNextProcessor @ 0x1403A15F0 (HalStartNextProcessor.c)
 *     HalStartDynamicProcessor @ 0x1404BC520 (HalStartDynamicProcessor.c)
 *     HalpDpStartProcessor @ 0x1409A9984 (HalpDpStartProcessor.c)
 *     HalpBlkStartBlockedProcessor @ 0x1409AA4D4 (HalpBlkStartBlockedProcessor.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140251020 (HalSystemVectorDispatchEntry.c)
 *     HalpInterruptWaitForProcessorStartUp @ 0x1403A165C (HalpInterruptWaitForProcessorStartUp.c)
 *     HalpInterruptBuildStartupStub @ 0x1403A16D0 (HalpInterruptBuildStartupStub.c)
 *     HalpHvVpStartEnabled @ 0x1403A1AD0 (HalpHvVpStartEnabled.c)
 *     HalpInterruptGetNextProcessorLocalId @ 0x1403A2404 (HalpInterruptGetNextProcessorLocalId.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpInterruptSetProblemEx @ 0x1404D1CC8 (HalpInterruptSetProblemEx.c)
 *     HalpHvStartProcessor @ 0x1404D22CC (HalpHvStartProcessor.c)
 *     HalpMmFreeTiledMemoryMap @ 0x14099B150 (HalpMmFreeTiledMemoryMap.c)
 *     HalpMmBuildTiledMemoryMap @ 0x14099B1BC (HalpMmBuildTiledMemoryMap.c)
 */

__int64 __fastcall HalpInterruptStartProcessor(unsigned int a1, unsigned int a2, char a3, const void *a4)
{
  unsigned int v7; // esi
  __int64 *v8; // rbp
  int NextProcessorLocalId; // ecx
  __int64 v10; // rdx
  char started; // di
  __int64 v12; // r14
  bool v13; // bl
  __int64 v14; // rdx
  int v15; // eax
  int v17; // edx
  __int64 v18; // [rsp+30h] [rbp-58h] BYREF
  PHYSICAL_ADDRESS v19; // [rsp+38h] [rbp-50h] BYREF
  __int64 v20; // [rsp+40h] [rbp-48h] BYREF
  int v21; // [rsp+80h] [rbp-8h]
  unsigned int v22; // [rsp+98h] [rbp+10h] BYREF

  v22 = a2;
  v19.QuadPart = 0LL;
  v7 = 0;
  v18 = 0LL;
  v8 = 0LL;
  if ( HalpInterruptProcessorCap && HalpInterruptProcessorsStarted >= (unsigned int)HalpInterruptProcessorCap )
    return 2LL;
  NextProcessorLocalId = HalpInterruptGetNextProcessorLocalId(a3, &v22);
  if ( HalpHiberInProgress || (a3 & 2) != 0 )
  {
    HalpInterruptProcessorRestarting = 1;
    if ( NextProcessorLocalId == -1073740024 )
      NextProcessorLocalId = 0;
  }
  else
  {
    HalpInterruptProcessorRestarting = 0;
  }
  if ( NextProcessorLocalId < 0 )
    return 2LL;
  HalpInterruptProcessorHidden = (a3 & 4) != 0;
  started = HalpHvVpStartEnabled();
  v12 = HalpLowStub;
  v20 = HalpLowStub;
  if ( !HalpInterruptProcessorRestarting && !HalpInterruptProcessorHidden )
  {
    if ( (int)HalpMmBuildTiledMemoryMap(&v18, v10, a1) >= 0 )
    {
      v8 = &v18;
      goto LABEL_10;
    }
    return 2LL;
  }
LABEL_10:
  HalpInterruptBuildStartupStub((PVOID *)&v20, &v19, a4, (__int64)v8);
  v13 = 0;
  if ( !started )
  {
    _disable();
    v13 = (v21 & 0x200) != 0;
  }
  *(_BYTE *)(v12 + 4) = 0;
  if ( (int)HalSystemVectorDispatchEntry() < 0 )
    goto LABEL_22;
  if ( started )
  {
    v15 = HalpHvStartProcessor(v22, v14, v12);
  }
  else
  {
    v15 = -1073741823;
    if ( !*(_QWORD *)(HalpInterruptController + 128) )
      goto LABEL_33;
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(HalpInterruptController + 128))(
            *(_QWORD *)(HalpInterruptController + 16),
            v22,
            v12,
            v19.LowPart);
  }
  if ( v15 >= 0 )
  {
    v7 = HalpInterruptWaitForProcessorStartUp((_BYTE *)(v12 + 4), started);
    if ( v7 != 4 )
      HalpInterruptSetProblemEx(
        HalpInterruptController,
        14,
        0,
        (__int64)"minkernel\\hals\\lib\\interrupts\\common\\start.c",
        0x4A7u);
    goto LABEL_19;
  }
LABEL_33:
  HalpInterruptSetProblemEx(
    HalpInterruptController,
    13,
    v15,
    (__int64)"minkernel\\hals\\lib\\interrupts\\common\\start.c",
    0x4ADu);
  v7 = v17 - 11;
LABEL_19:
  if ( !started && v13 )
    _enable();
LABEL_22:
  if ( !HalpInterruptProcessorRestarting && !HalpInterruptProcessorHidden )
  {
    if ( v8 )
      HalpMmFreeTiledMemoryMap(v8);
  }
  HalpInterruptProcessorHidden = 0;
  return v7;
}
