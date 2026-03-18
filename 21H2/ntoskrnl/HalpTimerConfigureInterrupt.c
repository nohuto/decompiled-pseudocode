/*
 * XREFs of HalpTimerConfigureInterrupt @ 0x1403AEA08
 * Callers:
 *     HalpTimerPrepareClockInterrupt @ 0x1403AE88C (HalpTimerPrepareClockInterrupt.c)
 *     HalpTimerInitializeClock @ 0x1403BAF00 (HalpTimerInitializeClock.c)
 *     HalpTimerInitializeProfiling @ 0x1403BB340 (HalpTimerInitializeProfiling.c)
 *     HalpTimerTestHypervisorTimer @ 0x14050E088 (HalpTimerTestHypervisorTimer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     HalpInterruptApplyOverrides @ 0x140252258 (HalpInterruptApplyOverrides.c)
 *     HalpAcquireHighLevelLock @ 0x140252344 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptGsiToLine @ 0x140252380 (HalpInterruptGsiToLine.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1402FE230 (KeFindFirstSetRightGroupAffinity.c)
 *     HalpTimerGetInternalData @ 0x140303720 (HalpTimerGetInternalData.c)
 *     HalpInterruptSetIdtEntry @ 0x1403AEF08 (HalpInterruptSetIdtEntry.c)
 *     HalpInterruptSetLineState @ 0x1403B07C8 (HalpInterruptSetLineState.c)
 *     HalpInterruptRemap @ 0x1403D57DC (HalpInterruptRemap.c)
 *     HalpInterruptIsMsiSupported @ 0x1403D8A98 (HalpInterruptIsMsiSupported.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HalpInterruptLineToGsi @ 0x14050918C (HalpInterruptLineToGsi.c)
 *     HalpTimerSetupMessageInterruptRouting @ 0x14050CF10 (HalpTimerSetupMessageInterruptRouting.c)
 *     HalpTimerUnmapInterrupt @ 0x14050D048 (HalpTimerUnmapInterrupt.c)
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
  int v14; // r9d
  int v15; // edi
  int v16; // eax
  __int64 InternalData; // rax
  int v18; // r8d
  int v19; // r9d
  int v20; // edi
  _DWORD *v22; // rax
  int v23; // eax
  __int64 v24; // r9
  int v25; // eax
  int v26; // eax
  unsigned int v27; // eax
  bool v28; // zf
  __int64 v29; // rax
  int v30; // eax
  int v31; // eax
  unsigned __int8 v32; // al
  __int64 v33; // r8
  unsigned __int64 v34; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v38; // eax
  __int64 v39; // [rsp+40h] [rbp-A9h] BYREF
  _DWORD v40[2]; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v41; // [rsp+50h] [rbp-99h] BYREF
  int FirstSetRightGroupAffinity; // [rsp+58h] [rbp-91h]
  int v43; // [rsp+5Ch] [rbp-8Dh]
  __int128 *v44; // [rsp+60h] [rbp-89h]
  __int128 v45; // [rsp+68h] [rbp-81h] BYREF
  _QWORD v46[12]; // [rsp+80h] [rbp-69h] BYREF

  v43 = 0;
  v39 = 0LL;
  v41 = 6LL;
  v45 = 0LL;
  memset(v46, 0, 0x58uLL);
  v11 = *a7;
  HIDWORD(v46[0]) = a2;
  LOBYTE(v46[1]) = a3;
  LODWORD(v46[5]) = a6 & 0x3FFFFFFF | v46[5] & 0xC0000000 | 0x40000000;
  *(_OWORD *)&v46[3] = v11;
  FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)a7);
  v44 = &v45;
  v15 = -1073741637;
  LODWORD(v45) = a6 & 0x3FFFFFFF;
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
          v22 = *(_DWORD **)(a1 + 288);
          HIDWORD(v46[1]) = 0;
          LODWORD(v46[0]) = 3;
          LODWORD(v46[2]) = 1;
          v15 = HalpInterruptRemap(*v22, v22[1], (int)v22 + 8, 0, (__int64)v46, 1);
          if ( v15 < 0 )
            goto LABEL_13;
          v23 = HIDWORD(v46[5]);
          *(_DWORD *)(a1 + 184) |= 0x40u;
          *(_DWORD *)(a1 + 236) = v23;
          *(_DWORD *)(a1 + 232) = v46[6];
          *(_QWORD *)(a1 + 240) = HIDWORD(v46[6]);
        }
        v15 = HalpTimerSetupMessageInterruptRouting(a1);
        if ( v15 >= 0 )
        {
          *(_DWORD *)(a1 + 184) |= 0x10u;
          return 0;
        }
        LOBYTE(v24) = 1;
        HalpTimerUnmapInterrupt(a1, a2, a6, v24);
      }
    }
  }
LABEL_13:
  v25 = *(_DWORD *)(a1 + 224);
  if ( (v25 & 0x200) != 0 )
  {
    v26 = HalpInterruptGsiToLine(*(unsigned int *)(a1 + 88), &v39);
    v20 = v26;
    if ( v26 < 0 )
    {
      HalpTimerLastProblem = 16;
      *(_DWORD *)(a1 + 252) = 16;
      *(_DWORD *)(a1 + 256) = v26;
      *(_DWORD *)(a1 + 272) = 356;
LABEL_44:
      *(_QWORD *)(a1 + 264) = "minkernel\\hals\\lib\\timers\\common\\timersup.c";
      return (unsigned int)v20;
    }
  }
  else
  {
    if ( (v25 & 0x100) == 0 )
    {
      *(_DWORD *)(a1 + 256) = v15;
      v30 = 17;
      v20 = -1073741811;
      *(_DWORD *)(a1 + 272) = 371;
      goto LABEL_43;
    }
    v27 = *(_DWORD *)(a1 + 84);
    if ( v27 >= 8 )
    {
      LODWORD(v39) = 45057;
      v27 -= 8;
    }
    else
    {
      LODWORD(v39) = 45056;
    }
    v28 = *(_DWORD *)(a1 + 92) == 0;
    HIDWORD(v39) = v27;
    if ( v28 )
    {
      *(_DWORD *)(a1 + 92) = 1;
      *(_DWORD *)(a1 + 96) = 1;
    }
  }
  LOBYTE(v13) = a3;
  HalpInterruptSetIdtEntry(a2, a8, v13, v14, a5);
  if ( (*(_DWORD *)(a1 + 184) & 0x10) == 0 )
    goto LABEL_27;
  v29 = HalpTimerGetInternalData(a1);
  v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(a1 + 152))(v29, 0LL, 0LL, 0LL);
  if ( v20 < 0 )
  {
    v30 = 24;
    *(_DWORD *)(a1 + 256) = v20;
    *(_DWORD *)(a1 + 272) = 398;
LABEL_43:
    *(_DWORD *)(a1 + 252) = v30;
    HalpTimerLastProblem = v30;
    goto LABEL_44;
  }
  *(_DWORD *)(a1 + 184) &= ~0x10u;
  if ( (*(_DWORD *)(a1 + 184) & 0x10) == 0 )
  {
LABEL_27:
    if ( a2 == 209 )
    {
      HalpTimerCriticalClockSource = v39;
      HalpTimerCriticalClockSourceCount = 1;
    }
  }
  v31 = *(_DWORD *)(a1 + 96);
  LODWORD(v46[0]) = 0;
  LODWORD(v46[2]) = v31;
  HIDWORD(v46[1]) = *(_DWORD *)(a1 + 92);
  HalpInterruptApplyOverrides(&v39, (_DWORD *)&v46[1] + 1, &v46[2]);
  v20 = HalpInterruptLineToGsi(&v39, &v46[7]);
  if ( v20 >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0x40) == 0 )
    {
      v20 = HalpInterruptRemap(
              **(_DWORD **)(a1 + 288),
              *(_DWORD *)(*(_QWORD *)(a1 + 288) + 4LL),
              (unsigned int)*(_QWORD *)(a1 + 288) + 8,
              0,
              (__int64)v46,
              1);
      if ( v20 < 0 )
        return (unsigned int)v20;
      *(_DWORD *)(a1 + 184) |= 0x40u;
    }
    v40[0] = -1;
    v40[1] = 1;
    v32 = HalpAcquireHighLevelLock(&HalpInterruptLock);
    LOBYTE(v33) = a3;
    v34 = v32;
    v20 = HalpInterruptSetLineState(&v39, a2, v33, LODWORD(v46[2]), HIDWORD(v46[1]), &v41, v40);
    KxReleaseSpinLock(&HalpInterruptLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v34 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v34 + 1));
          v28 = (v38 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v38;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v34);
    if ( v20 >= 0 )
      return 0;
  }
  return (unsigned int)v20;
}
