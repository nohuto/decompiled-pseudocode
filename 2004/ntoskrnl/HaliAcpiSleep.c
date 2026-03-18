/*
 * XREFs of HaliAcpiSleep @ 0x140383470
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiPmRegisterWrite @ 0x14037A7A0 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterRead @ 0x140396D50 (HalpAcpiPmRegisterRead.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpSaveProcessorState @ 0x1403F32C0 (HalpSaveProcessorState.c)
 *     HalpFlushAndWait @ 0x1403F3310 (HalpFlushAndWait.c)
 *     HalpSetupRealModeResume @ 0x1403F3340 (HalpSetupRealModeResume.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     HalSetEnvironmentVariableEx @ 0x1404B6EB0 (HalSetEnvironmentVariableEx.c)
 *     HalReturnToFirmware @ 0x1404B92C0 (HalReturnToFirmware.c)
 *     HalpHvEnterSleepState @ 0x1404BDAFC (HalpHvEnterSleepState.c)
 *     HalpCheckWakeupTimeAndAdjust @ 0x1404CD918 (HalpCheckWakeupTimeAndAdjust.c)
 *     HalpPostSleepMP @ 0x140992004 (HalpPostSleepMP.c)
 *     HalpAcpiPostSleep @ 0x1409922CC (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x14099269C (HalpAcpiPreSleep.c)
 *     HalpReenableAcpi @ 0x140995DEC (HalpReenableAcpi.c)
 *     HalpCheckLowMemoryPreSleep @ 0x1409A526C (HalpCheckLowMemoryPreSleep.c)
 *     KeWriteProtectPAT @ 0x1409ACCF0 (KeWriteProtectPAT.c)
 */

__int64 __fastcall HaliAcpiSleep(
        unsigned int a1,
        __int64 (__fastcall *a2)(__int64),
        __int64 a3,
        unsigned int a4,
        volatile signed __int32 *a5)
{
  unsigned int v9; // r14d
  struct _KPRCB *CurrentPrcb; // r8
  char v11; // r13
  volatile signed __int32 *v12; // rdi
  unsigned int v13; // ebx
  volatile signed __int32 *v14; // roff
  unsigned int Number; // ecx
  unsigned int v16; // ebx
  __int64 v17; // rax
  unsigned int v18; // edi
  __int64 v19; // rcx
  __int64 v20; // rcx
  struct _KPRCB *v21; // r15
  unsigned __int8 v22; // bl
  unsigned int v24; // ebx
  unsigned int v25; // eax
  unsigned int v26; // ebx
  __int64 v27; // rcx
  int v28; // ecx
  __int64 v29; // rcx
  int v30; // esi
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r9
  _DWORD *SchedulerAssist; // r8
  int v34; // eax
  bool v35; // zf
  _WORD v36[2]; // [rsp+30h] [rbp-58h] BYREF
  _WORD v37[2]; // [rsp+34h] [rbp-54h] BYREF
  _WORD v38[2]; // [rsp+38h] [rbp-50h] BYREF
  _WORD v39[2]; // [rsp+3Ch] [rbp-4Ch] BYREF
  struct _KPRCB *v40; // [rsp+40h] [rbp-48h]
  __int64 CurrentIrql; // [rsp+48h] [rbp-40h]
  int v42; // [rsp+80h] [rbp-8h]
  char v43; // [rsp+90h] [rbp+8h] BYREF

  v43 = 0;
  v36[0] = 0;
  v38[0] = 0;
  v37[0] = 0;
  v39[0] = 0;
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0;
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = 0;
  v12 = a5;
  v13 = 0;
  v42 &= 0x200u;
  v40 = CurrentPrcb;
  v14 = a5;
  _InterlockedDecrement(a5);
  if ( *v14 )
  {
    do
    {
      if ( (++v13 & dword_140C4A1FC) == 0 && qword_140C4A200 )
        qword_140C4A200(v13);
      else
        _mm_pause();
    }
    while ( *v12 );
    CurrentPrcb = v40;
  }
  Number = KeGetPcr()->Prcb.Number;
  v16 = 0;
  HalpTscOnWake = 0LL;
  *(_QWORD *)(HalpTimerSavedProcessorCounter + 8LL * Number) = __rdtsc();
  if ( !KeGetPcr()->Prcb.Number )
    HalpTscRestoreValue = *(_QWORD *)HalpTimerSavedProcessorCounter;
  v17 = CurrentPrcb->Number;
  if ( !(_DWORD)v17 )
  {
    HalpResumeFromHibernate = 0;
    HalpBarrier = 0;
    HalpAcpiPreSleep(a1);
    if ( byte_140C48EB0 )
      HalpAcpiPmRegisterRead(1, 0, (unsigned int)v38, 2, 0LL);
    if ( byte_140C48F40 )
      HalpAcpiPmRegisterRead(4, 0, (unsigned int)v39, 2, 0LL);
    v18 = a1 >> 12;
    if ( ((a1 >> 12) & 2) != 0
      && (unsigned __int8)HalpSetupRealModeResume(HalpLowStub, (unsigned int)HalpLowStubPhysicalAddress) )
    {
      goto LABEL_40;
    }
    HalpInterruptProcessorRestarting = 1;
    _InterlockedIncrement(&HalpSaveStateSync);
    while ( HalpSaveStateSync != a4 )
    {
      if ( (++v16 & dword_140C4A1FC) != 0 || !qword_140C4A200 )
        _mm_pause();
      else
        qword_140C4A200(v16);
    }
    v24 = 0;
    if ( a2 )
    {
      v25 = a2(a3);
      v9 = v25;
      if ( (HalpPlatformFlags & 1) != 0 || v25 != -1073741632 )
      {
        if ( v25 )
        {
          if ( v25 == 1073742484 )
            HalpResumeFromHibernate = 1;
          else
            HalpReenableAcpi();
          goto LABEL_40;
        }
      }
      else
      {
        v11 = 1;
      }
    }
    _InterlockedAdd(&HalpFlushBarrier, 1u);
    while ( HalpFlushBarrier != a4 )
    {
      if ( (++v24 & dword_140C4A1FC) != 0 || !qword_140C4A200 )
        _mm_pause();
      else
        qword_140C4A200(v24);
    }
    v26 = 0;
    _InterlockedOr(&HalpFlushBarrier, 0);
    HalpCheckWakeupTimeAndAdjust();
    HalpCheckLowMemoryPreSleep(a1);
    v37[0] = 0x8000;
    if ( PmRegisters[0] )
      HalpAcpiPmRegisterWrite(0, 0, (__int64)v37, 2u, 0LL);
    if ( byte_140C48F10 )
      HalpAcpiPmRegisterWrite(3, 0, (__int64)v37, 2u, 0LL);
    v43 = -112;
    if ( (v18 & 0x40) != 0 )
      HalSetEnvironmentVariableEx(
        (unsigned int)L"SystemSleepCheckpoint",
        (unsigned int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
        (unsigned int)&v43,
        1,
        1);
    v21 = v40;
    if ( (a1 & 0x1000) != 0 )
    {
      if ( v40->CpuVendor == 1 )
      {
        LOBYTE(v27) = 1;
        KeWriteProtectPAT(v27);
      }
      __wbinvd();
    }
    if ( HalpHvSleepEnlightenedCpuManager )
    {
      v28 = (a1 >> 8) & 0xF;
      if ( (unsigned int)(v28 - 1) <= 2 || v28 == 5 )
      {
        v9 = HalpHvEnterSleepState();
LABEL_45:
        v43 = -97;
        if ( (v18 & 0x40) != 0 )
          HalSetEnvironmentVariableEx(
            (unsigned int)L"SystemSleepCheckpoint",
            (unsigned int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
            (unsigned int)&v43,
            1,
            1);
        HalpSaveStateSync = 0;
        HalpFlushBarrier = 0;
        HalpAcpiPostSleep(a1);
        goto LABEL_20;
      }
    }
    if ( (HalpPlatformFlags & 1) == 0 )
    {
      v29 = 2LL;
      if ( !v11 )
        v29 = 1LL;
      HalReturnToFirmware(v29);
    }
    if ( byte_140C48EB0 )
    {
      HalpAcpiPmRegisterRead(1, 0, (unsigned int)v36, 2, 0LL);
      v36[0] = v36[0] & 0x203 | ((a1 & 7 | 8) << 10);
      HalpAcpiPmRegisterWrite(1, 0, (__int64)v36, 2u, 0LL);
    }
    if ( byte_140C48F40 )
    {
      HalpAcpiPmRegisterRead(4, 0, (unsigned int)v36, 2, 0LL);
      v36[0] = v36[0] & 0x203 | (((a1 >> 4) & 7 | 8) << 10);
      HalpAcpiPmRegisterWrite(4, 0, (__int64)v36, 2u, 0LL);
    }
    if ( !PmRegisters[0] )
    {
LABEL_41:
      if ( byte_140C48EB0 )
        HalpAcpiPmRegisterWrite(1, 0, (__int64)v38, 2u, 0LL);
      if ( byte_140C48F40 )
        HalpAcpiPmRegisterWrite(4, 0, (__int64)v39, 2u, 0LL);
      goto LABEL_45;
    }
    v30 = byte_140C48F10 != 0 ? 3 : 0;
    while ( 1 )
    {
      HalpAcpiPmRegisterRead(0, 0, (unsigned int)v37, 2, 0LL);
      if ( (v37[0] & 0x8000) != 0 )
        break;
      HalpAcpiPmRegisterRead(v30, 0, (unsigned int)v37, 2, 0LL);
      if ( (v37[0] & 0x8000) != 0 )
        break;
      if ( (++v26 & dword_140C4A1FC) != 0 || !qword_140C4A200 )
        _mm_pause();
      else
        qword_140C4A200(v26);
    }
LABEL_40:
    v21 = v40;
    goto LABEL_41;
  }
  v18 = a1 >> 12;
  if ( ((a1 >> 12) & 8) != 0 )
    v19 = 0LL;
  else
    v19 = HalpHiberProcState + 1472 * v17;
  if ( (unsigned __int8)HalpSaveProcessorState(v19) )
  {
LABEL_18:
    while ( HalpFlushBarrier )
    {
      if ( (++v16 & dword_140C4A1FC) != 0 || !qword_140C4A200 )
        _mm_pause();
      else
        qword_140C4A200(v16);
    }
    v21 = v40;
    goto LABEL_20;
  }
  _InterlockedIncrement(&HalpSaveStateSync);
  if ( a2 )
  {
    while ( HalpSaveStateSync != a4 )
    {
      if ( (++v16 & dword_140C4A1FC) == 0 && qword_140C4A200 )
        qword_140C4A200(v16);
      else
        _mm_pause();
    }
    v9 = a2(a3);
    if ( v9 == 1073742484 )
    {
      v16 = 0;
      goto LABEL_18;
    }
  }
  v21 = v40;
  if ( v40->CpuVendor == 1 )
  {
    LOBYTE(v20) = 1;
    KeWriteProtectPAT(v20);
  }
  HalpFlushAndWait(&HalpFlushBarrier);
LABEL_20:
  if ( (v18 & 1) != 0 && (v18 & 0x10) == 0 && v21->CpuVendor == 1 )
  {
    KeWriteProtectPAT(0LL);
    __wbinvd();
  }
  HalpPostSleepMP(a4);
  v22 = CurrentIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v31 = KeGetCurrentIrql();
      if ( v31 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v31 >= 2u )
      {
        v32 = KeGetCurrentPrcb();
        SchedulerAssist = v32->SchedulerAssist;
        v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
        v35 = (v34 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v34;
        if ( v35 )
          KiRemoveSystemWorkPriorityKick(v32);
      }
    }
  }
  __writecr8(v22);
  if ( v42 )
    _enable();
  return v9;
}
