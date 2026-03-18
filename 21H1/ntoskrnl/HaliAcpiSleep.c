/*
 * XREFs of HaliAcpiSleep @ 0x140382C30
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiPmRegisterWrite @ 0x140379A20 (HalpAcpiPmRegisterWrite.c)
 *     HalpAcpiPmRegisterRead @ 0x140396140 (HalpAcpiPmRegisterRead.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpSaveProcessorState @ 0x1403F2030 (HalpSaveProcessorState.c)
 *     HalpFlushAndWait @ 0x1403F2080 (HalpFlushAndWait.c)
 *     HalpSetupRealModeResume @ 0x1403F20B0 (HalpSetupRealModeResume.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     HalSetEnvironmentVariableEx @ 0x1404B67D0 (HalSetEnvironmentVariableEx.c)
 *     HalReturnToFirmware @ 0x1404B8BE0 (HalReturnToFirmware.c)
 *     HalpHvEnterSleepState @ 0x1404BD41C (HalpHvEnterSleepState.c)
 *     HalpCheckWakeupTimeAndAdjust @ 0x1404CD468 (HalpCheckWakeupTimeAndAdjust.c)
 *     HalpPostSleepMP @ 0x1409910C4 (HalpPostSleepMP.c)
 *     HalpAcpiPostSleep @ 0x14099138C (HalpAcpiPostSleep.c)
 *     HalpAcpiPreSleep @ 0x14099175C (HalpAcpiPreSleep.c)
 *     HalpReenableAcpi @ 0x140994760 (HalpReenableAcpi.c)
 *     HalpCheckLowMemoryPreSleep @ 0x1409A442C (HalpCheckLowMemoryPreSleep.c)
 *     KeWriteProtectPAT @ 0x1409ABE90 (KeWriteProtectPAT.c)
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
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  struct _KPRCB *v23; // r15
  unsigned __int8 v24; // bl
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned int v28; // ebx
  unsigned int v29; // eax
  unsigned int v30; // ebx
  __int64 v31; // rcx
  int v32; // ecx
  __int64 v33; // rcx
  int v34; // esi
  __int64 v35; // rdx
  __int64 v36; // r8
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r9
  _DWORD *SchedulerAssist; // r8
  int v40; // eax
  bool v41; // zf
  _WORD v42[2]; // [rsp+30h] [rbp-58h] BYREF
  _WORD v43[2]; // [rsp+34h] [rbp-54h] BYREF
  _WORD v44[2]; // [rsp+38h] [rbp-50h] BYREF
  _WORD v45[2]; // [rsp+3Ch] [rbp-4Ch] BYREF
  struct _KPRCB *v46; // [rsp+40h] [rbp-48h]
  __int64 CurrentIrql; // [rsp+48h] [rbp-40h]
  int v48; // [rsp+80h] [rbp-8h]
  char v49; // [rsp+90h] [rbp+8h] BYREF

  v49 = 0;
  v42[0] = 0;
  v44[0] = 0;
  v43[0] = 0;
  v45[0] = 0;
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0;
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = 0;
  v12 = a5;
  v13 = 0;
  v48 &= 0x200u;
  v46 = CurrentPrcb;
  v14 = a5;
  _InterlockedDecrement(a5);
  if ( *v14 )
  {
    do
    {
      if ( (++v13 & dword_140C4A35C) == 0 && qword_140C4A360 )
        qword_140C4A360(v13, a2, CurrentPrcb);
      else
        _mm_pause();
    }
    while ( *v12 );
    CurrentPrcb = v46;
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
    if ( byte_140C49030 )
      HalpAcpiPmRegisterRead(1, 0, (unsigned int)v44, 2, 0LL);
    if ( byte_140C490C0 )
      HalpAcpiPmRegisterRead(4, 0, (unsigned int)v45, 2, 0LL);
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
      if ( (++v16 & dword_140C4A35C) != 0 || !qword_140C4A360 )
        _mm_pause();
      else
        qword_140C4A360(v16, v26, v27);
    }
    v28 = 0;
    if ( a2 )
    {
      v29 = a2(a3);
      v9 = v29;
      if ( (HalpPlatformFlags & 1) != 0 || v29 != -1073741632 )
      {
        if ( v29 )
        {
          if ( v29 == 1073742484 )
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
      if ( (++v28 & dword_140C4A35C) != 0 || !qword_140C4A360 )
        _mm_pause();
      else
        qword_140C4A360(v28, v26, v27);
    }
    v30 = 0;
    _InterlockedOr(&HalpFlushBarrier, 0);
    HalpCheckWakeupTimeAndAdjust();
    HalpCheckLowMemoryPreSleep(a1);
    v43[0] = 0x8000;
    if ( PmRegisters[0] )
      HalpAcpiPmRegisterWrite(0, 0, (__int64)v43, 2u, 0LL);
    if ( byte_140C49090 )
      HalpAcpiPmRegisterWrite(3, 0, (__int64)v43, 2u, 0LL);
    v49 = -112;
    if ( (v18 & 0x40) != 0 )
      HalSetEnvironmentVariableEx(
        (unsigned int)L"SystemSleepCheckpoint",
        (unsigned int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
        (unsigned int)&v49,
        1,
        1);
    v23 = v46;
    if ( (a1 & 0x1000) != 0 )
    {
      if ( v46->CpuVendor == 1 )
      {
        LOBYTE(v31) = 1;
        KeWriteProtectPAT(v31);
      }
      __wbinvd();
    }
    if ( HalpHvSleepEnlightenedCpuManager )
    {
      v32 = (a1 >> 8) & 0xF;
      if ( (unsigned int)(v32 - 1) <= 2 || v32 == 5 )
      {
        v9 = HalpHvEnterSleepState();
LABEL_45:
        v49 = -97;
        if ( (v18 & 0x40) != 0 )
          HalSetEnvironmentVariableEx(
            (unsigned int)L"SystemSleepCheckpoint",
            (unsigned int)SYSTEM_SLEEP_ETW_CHECKPOINT_GUID,
            (unsigned int)&v49,
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
      v33 = 2LL;
      if ( !v11 )
        v33 = 1LL;
      HalReturnToFirmware(v33);
    }
    if ( byte_140C49030 )
    {
      HalpAcpiPmRegisterRead(1, 0, (unsigned int)v42, 2, 0LL);
      v42[0] = v42[0] & 0x203 | ((a1 & 7 | 8) << 10);
      HalpAcpiPmRegisterWrite(1, 0, (__int64)v42, 2u, 0LL);
    }
    if ( byte_140C490C0 )
    {
      HalpAcpiPmRegisterRead(4, 0, (unsigned int)v42, 2, 0LL);
      v42[0] = v42[0] & 0x203 | (((a1 >> 4) & 7 | 8) << 10);
      HalpAcpiPmRegisterWrite(4, 0, (__int64)v42, 2u, 0LL);
    }
    if ( !PmRegisters[0] )
    {
LABEL_41:
      if ( byte_140C49030 )
        HalpAcpiPmRegisterWrite(1, 0, (__int64)v44, 2u, 0LL);
      if ( byte_140C490C0 )
        HalpAcpiPmRegisterWrite(4, 0, (__int64)v45, 2u, 0LL);
      goto LABEL_45;
    }
    v34 = byte_140C49090 != 0 ? 3 : 0;
    while ( 1 )
    {
      HalpAcpiPmRegisterRead(0, 0, (unsigned int)v43, 2, 0LL);
      if ( (v43[0] & 0x8000) != 0 )
        break;
      HalpAcpiPmRegisterRead(v34, 0, (unsigned int)v43, 2, 0LL);
      if ( (v43[0] & 0x8000) != 0 )
        break;
      if ( (++v30 & dword_140C4A35C) != 0 || !qword_140C4A360 )
        _mm_pause();
      else
        qword_140C4A360(v30, v35, v36);
    }
LABEL_40:
    v23 = v46;
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
      if ( (++v16 & dword_140C4A35C) != 0 || !qword_140C4A360 )
        _mm_pause();
      else
        qword_140C4A360(v16, v20, v22);
    }
    v23 = v46;
    goto LABEL_20;
  }
  _InterlockedIncrement(&HalpSaveStateSync);
  if ( a2 )
  {
    while ( HalpSaveStateSync != a4 )
    {
      if ( (++v16 & dword_140C4A35C) == 0 && qword_140C4A360 )
        qword_140C4A360(v16, v20, v22);
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
  v23 = v46;
  if ( v46->CpuVendor == 1 )
  {
    LOBYTE(v21) = 1;
    KeWriteProtectPAT(v21);
  }
  HalpFlushAndWait(&HalpFlushBarrier);
LABEL_20:
  if ( (v18 & 1) != 0 && (v18 & 0x10) == 0 && v23->CpuVendor == 1 )
  {
    KeWriteProtectPAT(0LL);
    __wbinvd();
  }
  HalpPostSleepMP(a4);
  v24 = CurrentIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v37 = KeGetCurrentIrql();
      if ( v37 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v37 >= 2u )
      {
        v38 = KeGetCurrentPrcb();
        SchedulerAssist = v38->SchedulerAssist;
        v40 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
        v41 = (v40 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v40;
        if ( v41 )
          KiRemoveSystemWorkPriorityKick(v38);
      }
    }
  }
  __writecr8(v24);
  if ( v48 )
    _enable();
  return v9;
}
