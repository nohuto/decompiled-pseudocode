/*
 * XREFs of HalpTimerEnableHypervisorTimer @ 0x140386ADC
 * Callers:
 *     HalpTimerInitializeHypervisorTimer @ 0x1403A8E94 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpAcpiPostSleep @ 0x140996B2C (HalpAcpiPostSleep.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     HalpAcquireHighLevelLock @ 0x140378A70 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptGsiToLine @ 0x140378AAC (HalpInterruptGsiToLine.c)
 *     HalpInterruptSetLineState @ 0x1403A3C48 (HalpInterruptSetLineState.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

void HalpTimerEnableHypervisorTimer()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  bool v2; // sf
  int v3; // eax
  unsigned int v4; // eax
  unsigned __int8 v5; // al
  __int64 v6; // r8
  unsigned __int64 v7; // rdi
  int v8; // ebx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  __int64 v14; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v15[2]; // [rsp+48h] [rbp-38h] BYREF
  int v16; // [rsp+50h] [rbp-30h] BYREF
  __int64 v17; // [rsp+54h] [rbp-2Ch]
  int v18; // [rsp+5Ch] [rbp-24h]
  __int128 *v19; // [rsp+60h] [rbp-20h]
  __int128 v20; // [rsp+68h] [rbp-18h] BYREF

  v17 = 0LL;
  v18 = 0;
  v14 = 0LL;
  v0 = HalpHypervisorHpet;
  v20 = 0LL;
  if ( HalpHypervisorHpet
    && (*(int (__fastcall **)(_QWORD))(HalpHypervisorHpet + 104))(*(_QWORD *)(HalpHypervisorHpet + 72)) >= 0 )
  {
    if ( (*(_DWORD *)(v0 + 184) & 0x10) != 0 )
    {
      LOBYTE(v1) = 1;
      v2 = (*(int (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v0 + 152))(
             *(_QWORD *)(v0 + 72),
             v1,
             *(_QWORD *)(v0 + 232),
             *(unsigned int *)(v0 + 240)) < 0;
    }
    else
    {
      v3 = *(_DWORD *)(v0 + 224);
      if ( (v3 & 0x200) != 0 )
      {
        if ( (int)HalpInterruptGsiToLine(*(unsigned int *)(v0 + 88), &v14) < 0 )
          return;
      }
      else if ( (v3 & 0x100) != 0 )
      {
        v4 = *(_DWORD *)(v0 + 84);
        if ( v4 >= 8 )
        {
          LODWORD(v14) = 45057;
          v4 -= 8;
        }
        else
        {
          LODWORD(v14) = 45056;
        }
        HIDWORD(v14) = v4;
      }
      v15[0] = -1;
      v19 = &v20;
      v16 = 3;
      v15[1] = 1;
      v5 = HalpAcquireHighLevelLock(&HalpInterruptLock);
      LOBYTE(v6) = 15;
      v7 = v5;
      v8 = HalpInterruptSetLineState(&v14, 251LL, v6, *(unsigned int *)(v0 + 96), *(_DWORD *)(v0 + 92), &v16, v15);
      KxReleaseSpinLock(&HalpInterruptLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v13 = (v12 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v12;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v7);
      v2 = v8 < 0;
    }
    if ( !v2 )
      ((void (*)(void))qword_140C4A208)();
  }
}
