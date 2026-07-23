/*
 * XREFs of HaliAcpiSleep @ 0x140386080
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiPmRegisterWrite @ 0x14037C2B0 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterRead @ 0x140399790 (HalpAcpiPmRegisterRead.c)
 *     HalpHvIsReferenceTscConfigured @ 0x1403A788C (HalpHvIsReferenceTscConfigured.c)
 *     VslTerminateSecureServices @ 0x1403F0E04 (VslTerminateSecureServices.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpSaveProcessorState @ 0x1403FA280 (HalpSaveProcessorState.c)
 *     HalpFlushAndWait @ 0x1403FA2D0 (HalpFlushAndWait.c)
 *     HalpSetupRealModeResume @ 0x1403FA300 (HalpSetupRealModeResume.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalSetEnvironmentVariableEx @ 0x1404BBFD0 (HalSetEnvironmentVariableEx.c)
 *     HalReturnToFirmware @ 0x1404BE3E0 (HalReturnToFirmware.c)
 *     HalpHvEnterSleepState @ 0x1404C2C2C (HalpHvEnterSleepState.c)
 *     HalpCheckWakeupTimeAndAdjust @ 0x1404D2AC8 (HalpCheckWakeupTimeAndAdjust.c)
 *     HalpPostSleepMP @ 0x140996864 (HalpPostSleepMP.c)
 *     HalpAcpiPostSleep @ 0x140996B2C (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x140996EFC (HalpAcpiPreSleep.c)
 *     HalpReenableAcpi @ 0x14099A0F0 (HalpReenableAcpi.c)
 *     HalpCheckLowMemoryPreSleep @ 0x1409A8FCC (HalpCheckLowMemoryPreSleep.c)
 *     KeWriteProtectPAT @ 0x1409B0A90 (KeWriteProtectPAT.c)
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
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned int v19; // edi
  unsigned int v20; // ebx
  unsigned int v21; // eax
  unsigned int v22; // ebx
  __int64 v23; // rcx
  int v24; // ecx
  unsigned int v25; // ebx
  int v26; // esi
  __int64 v27; // rdx
  __int64 v28; // r8
  unsigned __int8 v29; // bl
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r9
  _DWORD *SchedulerAssist; // r8
  int v33; // eax
  bool v34; // zf
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned int v40; // ebx
  unsigned int v41; // ebx
  _WORD v42[2]; // [rsp+30h] [rbp-58h] BYREF
  _WORD v43[2]; // [rsp+34h] [rbp-54h] BYREF
  _WORD v44[2]; // [rsp+38h] [rbp-50h] BYREF
  _WORD v45[2]; // [rsp+3Ch] [rbp-4Ch] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+40h] [rbp-48h]
  __int64 CurrentIrql; // [rsp+48h] [rbp-40h]
  int v48; // [rsp+80h] [rbp-8h]
  char v49; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v50; // [rsp+A8h] [rbp+20h]

  v50 = a4;
  v5 = a4;
  v6 = a3;
  v49 = 0;
  v43[0] = 0;
  v44[0] = 0;
  v42[0] = 0;
  v45[0] = 0;
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0;
  _disable();
  v10 = 0;
  v11 = a5;
  v12 = 0;
  v48 &= 0x200u;
  CurrentPrcb = KeGetCurrentPrcb();
  _InterlockedDecrement(a5);
  while ( *v11 )
  {
    if ( (++v12 & dword_140C4A1BC) != 0 || !qword_140C4A1C0 )
      _mm_pause();
    else
      qword_140C4A1C0(v12, a2, a3);
  }
  LODWORD(a3) = KeGetPcr()->Prcb.Number;
  *(_QWORD *)(HalpTimerSavedProcessorCounter + 8 * a3) = __rdtsc();
  if ( (unsigned __int8)HalpHvIsReferenceTscConfigured() )
  {
    if ( !v13 )
    {
      HalpTimerIsReferenceTimeSaved = 1;
      HalpTimerSavedReferenceTime = ((__int64 (__fastcall *)(int *))qword_140C4A1C8)(&HalpTimerSavedSequenceNumber);
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
    if ( byte_140C490D0 )
      HalpAcpiPmRegisterRead(1, 0, (unsigned int)v44, 2, 0LL);
    if ( byte_140C49160 )
      HalpAcpiPmRegisterRead(4, 0, (unsigned int)v45, 2, 0LL);
    v19 = a1 >> 12;
    if ( ((a1 >> 12) & 2) != 0
      && (unsigned __int8)HalpSetupRealModeResume(HalpLowStub, (unsigned int)HalpLowStubPhysicalAddress) )
    {
      goto LABEL_71;
    }
    HalpInterruptProcessorRestarting = 1;
    _InterlockedIncrement(&HalpSaveStateSync);
    v20 = 0;
    while ( HalpSaveStateSync != v5 )
    {
      if ( (++v20 & dword_140C4A1BC) != 0 || !qword_140C4A1C0 )
        _mm_pause();
      else
        qword_140C4A1C0(v20, v17, v18);
    }
    if ( a2 )
    {
      v21 = a2(v6);
      v9 = v21;
      if ( (HalpPlatformFlags & 1) != 0 || v21 != -1073741632 )
      {
        if ( v21 )
        {
          if ( v21 == 1073742484 )
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
    v22 = 0;
    while ( HalpFlushBarrier != v5 )
    {
      if ( (++v22 & dword_140C4A1BC) != 0 || !qword_140C4A1C0 )
        _mm_pause();
      else
        qword_140C4A1C0(v22, v17, v18);
    }
    _InterlockedOr(&HalpFlushBarrier, 0);
    HalpCheckWakeupTimeAndAdjust();
    HalpCheckLowMemoryPreSleep(a1);
    v42[0] = 0x8000;
    if ( PmRegisters[0] )
      HalpAcpiPmRegisterWrite(0, 0, (__int64)v42, 2u, 0LL);
    if ( byte_140C49130 )
      HalpAcpiPmRegisterWrite(3, 0, (__int64)v42, 2u, 0LL);
    v49 = -112;
    if ( (v19 & 0x40) != 0 )
      HalSetEnvironmentVariableEx(
        (unsigned int)L"SystemSleepCheckpoint",
        (unsigned int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
        (unsigned int)&v49,
        1,
        1);
    if ( (a1 & 0x1000) != 0 )
    {
      if ( CurrentPrcb->CpuVendor == 1 )
      {
        LOBYTE(v23) = 1;
        KeWriteProtectPAT(v23);
      }
      __wbinvd();
    }
    if ( HalpHvSleepEnlightenedCpuManager )
    {
      v24 = (a1 >> 8) & 0xF;
      if ( (unsigned int)(v24 - 1) <= 2 || v24 == 5 )
      {
        v9 = HalpHvEnterSleepState();
LABEL_75:
        v49 = -97;
        if ( (v19 & 0x40) != 0 )
          HalSetEnvironmentVariableEx(
            (unsigned int)L"SystemSleepCheckpoint",
            (unsigned int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
            (unsigned int)&v49,
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
    if ( byte_140C490D0 )
    {
      HalpAcpiPmRegisterRead(1, 0, (unsigned int)v43, 2, 0LL);
      v43[0] = v43[0] & 0x203 | ((a1 & 7 | 8) << 10);
      HalpAcpiPmRegisterWrite(1, 0, (__int64)v43, 2u, 0LL);
    }
    if ( byte_140C49160 )
    {
      HalpAcpiPmRegisterRead(4, 0, (unsigned int)v43, 2, 0LL);
      v43[0] = v43[0] & 0x203 | (((a1 >> 4) & 7 | 8) << 10);
      HalpAcpiPmRegisterWrite(4, 0, (__int64)v43, 2u, 0LL);
    }
    v25 = 0;
    if ( PmRegisters[0] )
    {
      v26 = byte_140C49130 != 0 ? 3 : 0;
      HalpAcpiPmRegisterRead(0, 0, (unsigned int)v42, 2, 0LL);
      if ( v42[0] >= 0 )
      {
        do
        {
          HalpAcpiPmRegisterRead(v26, 0, (unsigned int)v42, 2, 0LL);
          if ( (v42[0] & 0x8000) != 0 )
            break;
          if ( (++v25 & dword_140C4A1BC) != 0 || !qword_140C4A1C0 )
            _mm_pause();
          else
            qword_140C4A1C0(v25, v27, v28);
          HalpAcpiPmRegisterRead(0, 0, (unsigned int)v42, 2, 0LL);
        }
        while ( (v42[0] & 0x8000) == 0 );
        v5 = v50;
      }
    }
LABEL_71:
    if ( byte_140C490D0 )
      HalpAcpiPmRegisterWrite(1, 0, (__int64)v44, 2u, 0LL);
    if ( byte_140C49160 )
      HalpAcpiPmRegisterWrite(4, 0, (__int64)v45, 2u, 0LL);
    goto LABEL_75;
  }
  v19 = a1 >> 12;
  if ( ((a1 >> 12) & 8) != 0 )
    v36 = v14;
  else
    v36 = HalpHiberProcState + 1472 * Number;
  if ( (unsigned __int8)HalpSaveProcessorState(v36) )
    goto LABEL_109;
  _InterlockedIncrement(&HalpSaveStateSync);
  if ( a2 )
  {
    v40 = 0;
    while ( HalpSaveStateSync != v5 )
    {
      if ( (++v40 & dword_140C4A1BC) != 0 || !qword_140C4A1C0 )
        _mm_pause();
      else
        qword_140C4A1C0(v40, v37, v39);
    }
    v9 = a2(v6);
    if ( v9 != 1073742484 )
    {
      v15 = CurrentPrcb;
      goto LABEL_106;
    }
LABEL_109:
    v41 = 0;
    while ( HalpFlushBarrier )
    {
      if ( (++v41 & dword_140C4A1BC) != 0 || !qword_140C4A1C0 )
        _mm_pause();
      else
        qword_140C4A1C0(v41, v37, v39);
    }
LABEL_78:
    v15 = CurrentPrcb;
    goto LABEL_79;
  }
LABEL_106:
  if ( v15->CpuVendor == 1 )
  {
    LOBYTE(v38) = 1;
    KeWriteProtectPAT(v38);
  }
  HalpFlushAndWait(&HalpFlushBarrier);
LABEL_79:
  if ( (v19 & 1) != 0 && (v19 & 0x10) == 0 && v15->CpuVendor == 1 )
  {
    KeWriteProtectPAT(0LL);
    __wbinvd();
  }
  HalpPostSleepMP(v5);
  v29 = CurrentIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v30 = KeGetCurrentIrql();
      if ( v30 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v30 >= 2u )
      {
        v31 = KeGetCurrentPrcb();
        SchedulerAssist = v31->SchedulerAssist;
        v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
        v34 = (v33 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v33;
        if ( v34 )
          KiRemoveSystemWorkPriorityKick(v31);
      }
    }
  }
  __writecr8(v29);
  if ( v48 )
    _enable();
  return v9;
}
