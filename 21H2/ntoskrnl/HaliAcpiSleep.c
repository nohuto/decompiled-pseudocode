/*
 * XREFs of HaliAcpiSleep @ 0x140385F30
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiPmRegisterWrite @ 0x14037C760 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterRead @ 0x140399640 (HalpAcpiPmRegisterRead.c)
 *     HalpHvIsReferenceTscConfigured @ 0x1403A773C (HalpHvIsReferenceTscConfigured.c)
 *     VslTerminateSecureServices @ 0x1403F0ED4 (VslTerminateSecureServices.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpSaveProcessorState @ 0x1403FA0A0 (HalpSaveProcessorState.c)
 *     HalpFlushAndWait @ 0x1403FA0F0 (HalpFlushAndWait.c)
 *     HalpSetupRealModeResume @ 0x1403FA120 (HalpSetupRealModeResume.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     HalSetEnvironmentVariableEx @ 0x1404BBD90 (HalSetEnvironmentVariableEx.c)
 *     HalReturnToFirmware @ 0x1404BE1A0 (HalReturnToFirmware.c)
 *     HalpHvEnterSleepState @ 0x1404C29EC (HalpHvEnterSleepState.c)
 *     HalpCheckWakeupTimeAndAdjust @ 0x1404D2888 (HalpCheckWakeupTimeAndAdjust.c)
 *     HalpPostSleepMP @ 0x140995864 (HalpPostSleepMP.c)
 *     HalpAcpiPostSleep @ 0x140995B2C (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x140995EFC (HalpAcpiPreSleep.c)
 *     HalpReenableAcpi @ 0x1409990F0 (HalpReenableAcpi.c)
 *     HalpCheckLowMemoryPreSleep @ 0x1409A809C (HalpCheckLowMemoryPreSleep.c)
 *     KeWriteProtectPAT @ 0x1409AFB60 (KeWriteProtectPAT.c)
 */

__int64 __fastcall HaliAcpiSleep(
        unsigned int a1,
        __int64 (__fastcall *a2)(__int64),
        __int64 a3,
        unsigned int a4,
        volatile signed __int32 *a5)
{
  unsigned int v5; // r12d
  __int64 v6; // r15
  unsigned int v9; // r14d
  unsigned __int8 v10; // r13
  volatile signed __int32 *v11; // rdi
  unsigned int v12; // ebx
  int v13; // r8d
  __int64 v14; // r9
  struct _KPRCB *v15; // rbx
  __int64 Number; // rax
  unsigned int v17; // edi
  unsigned int v18; // ebx
  unsigned int v19; // eax
  unsigned int v20; // ebx
  __int64 v21; // rcx
  int v22; // ecx
  unsigned int v23; // ebx
  int v24; // esi
  unsigned __int8 v25; // bl
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r9
  _DWORD *SchedulerAssist; // r8
  int v29; // eax
  bool v30; // zf
  __int64 v32; // rcx
  __int64 v33; // rcx
  unsigned int v34; // ebx
  unsigned int v35; // ebx
  _WORD v36[2]; // [rsp+30h] [rbp-58h] BYREF
  _WORD v37[2]; // [rsp+34h] [rbp-54h] BYREF
  _WORD v38[2]; // [rsp+38h] [rbp-50h] BYREF
  _WORD v39[2]; // [rsp+3Ch] [rbp-4Ch] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+40h] [rbp-48h]
  __int64 CurrentIrql; // [rsp+48h] [rbp-40h]
  int v42; // [rsp+80h] [rbp-8h]
  char v43; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v44; // [rsp+A8h] [rbp+20h]

  v44 = a4;
  v5 = a4;
  v6 = a3;
  v43 = 0;
  v37[0] = 0;
  v38[0] = 0;
  v36[0] = 0;
  v39[0] = 0;
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0;
  _disable();
  v10 = 0;
  v11 = a5;
  v12 = 0;
  v42 &= 0x200u;
  CurrentPrcb = KeGetCurrentPrcb();
  _InterlockedDecrement(a5);
  while ( *v11 )
  {
    if ( (++v12 & dword_140C4A17C) != 0 || !qword_140C4A180 )
      _mm_pause();
    else
      qword_140C4A180(v12);
  }
  LODWORD(a3) = KeGetPcr()->Prcb.Number;
  *(_QWORD *)(HalpTimerSavedProcessorCounter + 8 * a3) = __rdtsc();
  if ( (unsigned __int8)HalpHvIsReferenceTscConfigured() )
  {
    if ( !v13 )
    {
      HalpTimerIsReferenceTimeSaved = 1;
      HalpTimerSavedReferenceTime = ((__int64 (__fastcall *)(int *))qword_140C4A188)(&HalpTimerSavedSequenceNumber);
      v14 = 0LL;
    }
  }
  else
  {
    HalpTimerIsReferenceTimeSaved = v14;
    HalpTimerSavedSequenceNumber = v14;
  }
  HalpTscOnWake = v14;
  if ( !KeGetPcr()->Prcb.Number )
    HalpTscRestoreValue = *(_QWORD *)HalpTimerSavedProcessorCounter;
  v15 = CurrentPrcb;
  Number = CurrentPrcb->Number;
  if ( !(_DWORD)Number )
  {
    HalpResumeFromHibernate = v14;
    HalpBarrier = v14;
    HalpAcpiPreSleep(a1);
    if ( byte_140C49090 )
      HalpAcpiPmRegisterRead(1, 0, (unsigned int)v38, 2, 0LL);
    if ( byte_140C49120 )
      HalpAcpiPmRegisterRead(4, 0, (unsigned int)v39, 2, 0LL);
    v17 = a1 >> 12;
    if ( ((a1 >> 12) & 2) != 0
      && (unsigned __int8)HalpSetupRealModeResume(HalpLowStub, (unsigned int)HalpLowStubPhysicalAddress) )
    {
      goto LABEL_71;
    }
    HalpInterruptProcessorRestarting = 1;
    _InterlockedIncrement(&HalpSaveStateSync);
    v18 = 0;
    while ( HalpSaveStateSync != v5 )
    {
      if ( (++v18 & dword_140C4A17C) != 0 || !qword_140C4A180 )
        _mm_pause();
      else
        qword_140C4A180(v18);
    }
    if ( a2 )
    {
      v19 = a2(v6);
      v9 = v19;
      if ( (HalpPlatformFlags & 1) != 0 || v19 != -1073741632 )
      {
        if ( v19 )
        {
          if ( v19 == 1073742484 )
            HalpResumeFromHibernate = 1;
          else
            HalpReenableAcpi();
          goto LABEL_71;
        }
      }
      else
      {
        v10 = 1;
      }
    }
    _InterlockedAdd(&HalpFlushBarrier, 1u);
    v20 = 0;
    while ( HalpFlushBarrier != v5 )
    {
      if ( (++v20 & dword_140C4A17C) != 0 || !qword_140C4A180 )
        _mm_pause();
      else
        qword_140C4A180(v20);
    }
    _InterlockedOr(&HalpFlushBarrier, 0);
    HalpCheckWakeupTimeAndAdjust();
    HalpCheckLowMemoryPreSleep(a1);
    v36[0] = 0x8000;
    if ( PmRegisters[0] )
      HalpAcpiPmRegisterWrite(0, 0, (__int64)v36, 2u, 0LL);
    if ( byte_140C490F0 )
      HalpAcpiPmRegisterWrite(3, 0, (__int64)v36, 2u, 0LL);
    v43 = -112;
    if ( (v17 & 0x40) != 0 )
      HalSetEnvironmentVariableEx(
        (unsigned int)L"SystemSleepCheckpoint",
        (unsigned int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
        (unsigned int)&v43,
        1,
        1);
    if ( (a1 & 0x1000) != 0 )
    {
      if ( CurrentPrcb->CpuVendor == 1 )
      {
        LOBYTE(v21) = 1;
        KeWriteProtectPAT(v21);
      }
      __wbinvd();
    }
    if ( HalpHvSleepEnlightenedCpuManager )
    {
      v22 = (a1 >> 8) & 0xF;
      if ( (unsigned int)(v22 - 1) <= 2 || v22 == 5 )
      {
        v9 = HalpHvEnterSleepState();
LABEL_75:
        v43 = -97;
        if ( (v17 & 0x40) != 0 )
          HalSetEnvironmentVariableEx(
            (unsigned int)L"SystemSleepCheckpoint",
            (unsigned int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
            (unsigned int)&v43,
            1,
            1);
        HalpSaveStateSync = 0;
        HalpFlushBarrier = 0;
        HalpAcpiPostSleep(a1);
        goto LABEL_78;
      }
    }
    if ( (HalpPlatformFlags & 1) == 0 )
      HalReturnToFirmware((unsigned int)v10 + 1);
    if ( ((a1 >> 8) & 0xF) - 4 <= 1 )
      VslTerminateSecureServices();
    if ( byte_140C49090 )
    {
      HalpAcpiPmRegisterRead(1, 0, (unsigned int)v37, 2, 0LL);
      v37[0] = v37[0] & 0x203 | ((a1 & 7 | 8) << 10);
      HalpAcpiPmRegisterWrite(1, 0, (__int64)v37, 2u, 0LL);
    }
    if ( byte_140C49120 )
    {
      HalpAcpiPmRegisterRead(4, 0, (unsigned int)v37, 2, 0LL);
      v37[0] = v37[0] & 0x203 | (((a1 >> 4) & 7 | 8) << 10);
      HalpAcpiPmRegisterWrite(4, 0, (__int64)v37, 2u, 0LL);
    }
    v23 = 0;
    if ( PmRegisters[0] )
    {
      v24 = byte_140C490F0 != 0 ? 3 : 0;
      HalpAcpiPmRegisterRead(0, 0, (unsigned int)v36, 2, 0LL);
      if ( v36[0] >= 0 )
      {
        do
        {
          HalpAcpiPmRegisterRead(v24, 0, (unsigned int)v36, 2, 0LL);
          if ( (v36[0] & 0x8000) != 0 )
            break;
          if ( (++v23 & dword_140C4A17C) != 0 || !qword_140C4A180 )
            _mm_pause();
          else
            qword_140C4A180(v23);
          HalpAcpiPmRegisterRead(0, 0, (unsigned int)v36, 2, 0LL);
        }
        while ( (v36[0] & 0x8000) == 0 );
        v5 = v44;
      }
    }
LABEL_71:
    if ( byte_140C49090 )
      HalpAcpiPmRegisterWrite(1, 0, (__int64)v38, 2u, 0LL);
    if ( byte_140C49120 )
      HalpAcpiPmRegisterWrite(4, 0, (__int64)v39, 2u, 0LL);
    goto LABEL_75;
  }
  v17 = a1 >> 12;
  if ( ((a1 >> 12) & 8) != 0 )
    v32 = v14;
  else
    v32 = HalpHiberProcState + 1472 * Number;
  if ( (unsigned __int8)HalpSaveProcessorState(v32) )
    goto LABEL_109;
  _InterlockedIncrement(&HalpSaveStateSync);
  if ( a2 )
  {
    v34 = 0;
    while ( HalpSaveStateSync != v5 )
    {
      if ( (++v34 & dword_140C4A17C) != 0 || !qword_140C4A180 )
        _mm_pause();
      else
        qword_140C4A180(v34);
    }
    v9 = a2(v6);
    if ( v9 != 1073742484 )
    {
      v15 = CurrentPrcb;
      goto LABEL_106;
    }
LABEL_109:
    v35 = 0;
    while ( HalpFlushBarrier )
    {
      if ( (++v35 & dword_140C4A17C) != 0 || !qword_140C4A180 )
        _mm_pause();
      else
        qword_140C4A180(v35);
    }
LABEL_78:
    v15 = CurrentPrcb;
    goto LABEL_79;
  }
LABEL_106:
  if ( v15->CpuVendor == 1 )
  {
    LOBYTE(v33) = 1;
    KeWriteProtectPAT(v33);
  }
  HalpFlushAndWait(&HalpFlushBarrier);
LABEL_79:
  if ( (v17 & 1) != 0 && (v17 & 0x10) == 0 && v15->CpuVendor == 1 )
  {
    KeWriteProtectPAT(0LL);
    __wbinvd();
  }
  HalpPostSleepMP(v5);
  v25 = CurrentIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v26 = KeGetCurrentIrql();
      if ( v26 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v26 >= 2u )
      {
        v27 = KeGetCurrentPrcb();
        SchedulerAssist = v27->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
        v30 = (v29 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v29;
        if ( v30 )
          KiRemoveSystemWorkPriorityKick(v27);
      }
    }
  }
  __writecr8(v25);
  if ( v42 )
    _enable();
  return v9;
}
