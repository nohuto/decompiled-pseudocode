/*
 * XREFs of HalpTimerConfigureInterrupt @ 0x1403A26D4
 * Callers:
 *     HalpTimerPrepareClockInterrupt @ 0x1403A263C (HalpTimerPrepareClockInterrupt.c)
 *     HalpTimerInitializeClock @ 0x1403A91E4 (HalpTimerInitializeClock.c)
 *     HalpTimerInitializeProfiling @ 0x1403A95E0 (HalpTimerInitializeProfiling.c)
 *     HalpTimerTestHypervisorTimer @ 0x1404C1D6C (HalpTimerTestHypervisorTimer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1402694D0 (KeFindFirstSetRightGroupAffinity.c)
 *     HalpTimerGetInternalData @ 0x1402CF2E0 (HalpTimerGetInternalData.c)
 *     HalpInterruptRemap @ 0x140378130 (HalpInterruptRemap.c)
 *     HalpInterruptApplyOverrides @ 0x140378974 (HalpInterruptApplyOverrides.c)
 *     HalpAcquireHighLevelLock @ 0x140378A70 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptGsiToLine @ 0x140378AAC (HalpInterruptGsiToLine.c)
 *     HalpInterruptSetIdtEntry @ 0x1403A27FC (HalpInterruptSetIdtEntry.c)
 *     HalpInterruptSetLineState @ 0x1403A3C48 (HalpInterruptSetLineState.c)
 *     HalpInterruptIsMsiSupported @ 0x1403C9D48 (HalpInterruptIsMsiSupported.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalpInterruptLineToGsi @ 0x1404BC944 (HalpInterruptLineToGsi.c)
 *     HalpTimerSetupMessageInterruptRouting @ 0x1404C0690 (HalpTimerSetupMessageInterruptRouting.c)
 *     HalpTimerUnmapInterrupt @ 0x1404C07C8 (HalpTimerUnmapInterrupt.c)
 */

__int64 __fastcall HalpTimerConfigureInterrupt(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int128 *a7,
        __int64 a8)
{
  __int128 v11; // xmm0
  __int64 v12; // rcx
  int v13; // r8d
  __int64 v14; // r9
  int v15; // edi
  int v16; // eax
  __int64 InternalData; // rax
  int v18; // r8d
  int v19; // r9d
  int v20; // edi
  unsigned int *v22; // rax
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  unsigned int v26; // eax
  bool v27; // zf
  __int64 v28; // rax
  int v29; // eax
  unsigned __int8 v30; // al
  __int64 v31; // r8
  unsigned __int64 v32; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v36; // eax
  __int64 v37; // [rsp+40h] [rbp-A9h] BYREF
  _DWORD v38[2]; // [rsp+48h] [rbp-A1h] BYREF
  _DWORD v39[4]; // [rsp+50h] [rbp-99h] BYREF
  __int128 *v40; // [rsp+60h] [rbp-89h]
  __int128 v41; // [rsp+68h] [rbp-81h] BYREF
  _QWORD v42[12]; // [rsp+80h] [rbp-69h] BYREF

  v39[1] = 0;
  v39[3] = 0;
  v37 = 0LL;
  v41 = 0LL;
  memset(v42, 0, 0x58uLL);
  v11 = *a7;
  HIDWORD(v42[0]) = a2;
  LOBYTE(v42[1]) = a3;
  v39[0] = 6;
  LODWORD(v42[5]) = a6 & 0x3FFFFFFF | v42[5] & 0xC0000000 | 0x40000000;
  *(_OWORD *)&v42[3] = v11;
  v39[2] = KeFindFirstSetRightGroupAffinity((__int64)a7);
  v40 = &v41;
  v15 = -1073741637;
  LODWORD(v41) = a6 & 0x3FFFFFFF;
  v16 = *(_DWORD *)(a1 + 224);
  if ( (v16 & 0x800) != 0 )
  {
    InternalData = HalpTimerGetInternalData(a1);
    (*(void (__fastcall **)(__int64, _QWORD))(a1 + 168))(InternalData, a2);
    LOBYTE(v18) = a3;
    HalpInterruptSetIdtEntry(a2, a8, v18, v19, a5);
    return 0;
  }
  if ( (v16 & 0x400) != 0 )
  {
    LOBYTE(v12) = 1;
    if ( (unsigned __int8)HalpInterruptIsMsiSupported(v12) )
    {
      if ( (*(_DWORD *)(a1 + 184) & 0x50) != 0x40 )
      {
        LOBYTE(v13) = a3;
        HalpInterruptSetIdtEntry(a2, a8, v13, v14, a5);
        if ( (*(_DWORD *)(a1 + 184) & 0x40) == 0 )
        {
          v22 = *(unsigned int **)(a1 + 288);
          HIDWORD(v42[1]) = 0;
          LODWORD(v42[0]) = 3;
          LODWORD(v42[2]) = 1;
          v15 = HalpInterruptRemap(*v22, v22[1], (__int64)(v22 + 2), 0, (unsigned int *)v42, 1u);
          if ( v15 < 0 )
            goto LABEL_15;
          v23 = HIDWORD(v42[5]);
          *(_DWORD *)(a1 + 184) |= 0x40u;
          *(_DWORD *)(a1 + 236) = v23;
          *(_DWORD *)(a1 + 232) = v42[6];
          *(_QWORD *)(a1 + 240) = WORD2(v42[6]);
        }
        v15 = HalpTimerSetupMessageInterruptRouting(a1);
        if ( v15 >= 0 )
        {
          *(_DWORD *)(a1 + 184) |= 0x10u;
        }
        else
        {
          LOBYTE(v14) = 1;
          HalpTimerUnmapInterrupt(a1, a2, a6, v14);
        }
        if ( v15 >= 0 )
          return 0;
      }
    }
  }
LABEL_15:
  v24 = *(_DWORD *)(a1 + 224);
  if ( (v24 & 0x200) != 0 )
  {
    v20 = HalpInterruptGsiToLine(*(unsigned int *)(a1 + 88), &v37);
    if ( v20 < 0 )
    {
      v25 = 16;
      *(_DWORD *)(a1 + 256) = v20;
      *(_DWORD *)(a1 + 272) = 356;
LABEL_44:
      HalpTimerLastProblem = v25;
      *(_DWORD *)(a1 + 252) = v25;
      *(_QWORD *)(a1 + 264) = "minkernel\\hals\\lib\\timers\\common\\timersup.c";
      return (unsigned int)v20;
    }
  }
  else
  {
    if ( (v24 & 0x100) == 0 )
    {
      *(_DWORD *)(a1 + 256) = v15;
      v25 = 17;
      v20 = -1073741811;
      *(_DWORD *)(a1 + 272) = 371;
      goto LABEL_44;
    }
    v26 = *(_DWORD *)(a1 + 84);
    if ( v26 >= 8 )
    {
      LODWORD(v37) = 45057;
      v26 -= 8;
    }
    else
    {
      LODWORD(v37) = 45056;
    }
    v27 = *(_DWORD *)(a1 + 92) == 0;
    HIDWORD(v37) = v26;
    if ( v27 )
    {
      *(_DWORD *)(a1 + 92) = 1;
      *(_DWORD *)(a1 + 96) = 1;
    }
  }
  LOBYTE(v13) = a3;
  HalpInterruptSetIdtEntry(a2, a8, v13, v14, a5);
  if ( (*(_DWORD *)(a1 + 184) & 0x10) == 0 )
    goto LABEL_28;
  v28 = HalpTimerGetInternalData(a1);
  v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(a1 + 152))(v28, 0LL, 0LL, 0LL);
  if ( v20 < 0 )
  {
    v25 = 24;
    *(_DWORD *)(a1 + 256) = v20;
    *(_DWORD *)(a1 + 272) = 398;
    goto LABEL_44;
  }
  *(_DWORD *)(a1 + 184) &= ~0x10u;
  if ( (*(_DWORD *)(a1 + 184) & 0x10) == 0 )
  {
LABEL_28:
    if ( a2 == 209 )
    {
      HalpTimerCriticalClockSource = v37;
      HalpTimerCriticalClockSourceCount = 1;
    }
  }
  v29 = *(_DWORD *)(a1 + 96);
  LODWORD(v42[0]) = 0;
  LODWORD(v42[2]) = v29;
  HIDWORD(v42[1]) = *(_DWORD *)(a1 + 92);
  HalpInterruptApplyOverrides((unsigned int *)&v37, (_DWORD *)&v42[1] + 1, &v42[2]);
  v20 = HalpInterruptLineToGsi(&v37, &v42[7]);
  if ( v20 >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0x40) == 0 )
    {
      v20 = HalpInterruptRemap(
              **(_DWORD **)(a1 + 288),
              *(_DWORD *)(*(_QWORD *)(a1 + 288) + 4LL),
              *(_QWORD *)(a1 + 288) + 8LL,
              0,
              (unsigned int *)v42,
              1u);
      if ( v20 < 0 )
        return (unsigned int)v20;
      *(_DWORD *)(a1 + 184) |= 0x40u;
    }
    v38[0] = -1;
    v38[1] = 1;
    v30 = HalpAcquireHighLevelLock(&HalpInterruptLock);
    LOBYTE(v31) = a3;
    v32 = v30;
    v20 = HalpInterruptSetLineState(&v37, a2, v31, LODWORD(v42[2]), HIDWORD(v42[1]), v39, v38);
    KxReleaseSpinLock(&HalpInterruptLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v32 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v32 + 1));
          v27 = (v36 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v36;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v32);
    if ( v20 >= 0 )
      return 0;
  }
  return (unsigned int)v20;
}
