/*
 * XREFs of HalpInterruptStartProcessor @ 0x140A53F54
 * Callers:
 *     HalStartNextProcessor @ 0x1403B2F30 (HalStartNextProcessor.c)
 *     HalStartDynamicProcessor @ 0x140508D60 (HalStartDynamicProcessor.c)
 *     HalpDpStartProcessor @ 0x140A629D4 (HalpDpStartProcessor.c)
 *     HalpBlkStartBlockedProcessor @ 0x140A6350C (HalpBlkStartBlockedProcessor.c)
 * Callees:
 *     HalpMmUpdateTiledMemoryMapTargetStub @ 0x140396A68 (HalpMmUpdateTiledMemoryMapTargetStub.c)
 *     HalpInterruptWaitForProcessorStartUp @ 0x1403B2F9C (HalpInterruptWaitForProcessorStartUp.c)
 *     HalpInterruptSetProcessorStartContext @ 0x1403B3020 (HalpInterruptSetProcessorStartContext.c)
 *     HalpHvVpStartEnabled @ 0x1403B32E8 (HalpHvVpStartEnabled.c)
 *     HalpInterruptGetNextProcessorLocalId @ 0x1403B3AE0 (HalpInterruptGetNextProcessorLocalId.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpInterruptSetProblemEx @ 0x14051E038 (HalpInterruptSetProblemEx.c)
 *     HalpHvStartProcessor @ 0x14051E90C (HalpHvStartProcessor.c)
 */

__int64 __fastcall HalpInterruptStartProcessor(unsigned int a1, unsigned int a2, char a3, const void *a4)
{
  unsigned int v4; // edi
  int NextProcessorLocalId; // ecx
  char started; // bp
  _BYTE *v10; // r14
  unsigned int v11; // ebx
  bool v12; // si
  char v13; // r8
  __int64 v14; // rdx
  int v15; // eax
  int v17; // edx
  __int16 v18; // [rsp+60h] [rbp-8h]
  unsigned int v19; // [rsp+78h] [rbp+10h] BYREF

  v19 = a2;
  v4 = 0;
  if ( HalpInterruptProcessorCap && HalpInterruptProcessorsStarted >= (unsigned int)HalpInterruptProcessorCap )
    return 2LL;
  NextProcessorLocalId = HalpInterruptGetNextProcessorLocalId(a3, &v19);
  if ( HalpHiberInProgress || (a3 & 2) != 0 )
  {
    HalpInterruptProcessorRestarting = 1;
    if ( NextProcessorLocalId == -1073740024 )
      goto LABEL_6;
  }
  else
  {
    HalpInterruptProcessorRestarting = 0;
  }
  if ( NextProcessorLocalId >= 0 )
  {
LABEL_6:
    HalpInterruptProcessorHidden = (a3 & 4) != 0;
    started = HalpHvVpStartEnabled();
    v10 = HalpInterruptGlobalStartupBlock;
    v11 = HalpInterruptGlobalStartupCodePhysical;
    if ( !HalpTiledMemoryMapActive || (a3 & 3) == 0 || (int)HalpMmUpdateTiledMemoryMapTargetStub() >= 0 )
    {
      v12 = 0;
      if ( !started )
      {
        _disable();
        v12 = (v18 & 0x200) != 0;
      }
      v13 = HalpInterruptProcessorHidden;
      v10[4] = 0;
      if ( (int)HalpInterruptSetProcessorStartContext(a1, a4, v13) >= 0 )
      {
        if ( started )
        {
          v15 = HalpHvStartProcessor(v19, v14, (__int64)v10);
        }
        else
        {
          v15 = -1073741823;
          if ( !*(_QWORD *)(HalpInterruptController + 128) )
            goto LABEL_29;
          v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, _QWORD))(HalpInterruptController + 128))(
                  *(_QWORD *)(HalpInterruptController + 16),
                  v19,
                  v10,
                  v11);
        }
        if ( v15 >= 0 )
        {
          v4 = HalpInterruptWaitForProcessorStartUp(v10 + 4, started);
          if ( v4 != 4 )
            HalpInterruptSetProblemEx(
              HalpInterruptController,
              14,
              0,
              (__int64)"minkernel\\hals\\lib\\interrupts\\common\\start.c",
              0x4DCu);
          goto LABEL_17;
        }
LABEL_29:
        HalpInterruptSetProblemEx(
          HalpInterruptController,
          13,
          v15,
          (__int64)"minkernel\\hals\\lib\\interrupts\\common\\start.c",
          0x4E2u);
        v4 = v17 - 11;
LABEL_17:
        if ( !started && v12 )
          _enable();
        goto LABEL_20;
      }
      v4 = 2;
    }
LABEL_20:
    HalpInterruptProcessorHidden = 0;
    return v4;
  }
  return 2LL;
}
