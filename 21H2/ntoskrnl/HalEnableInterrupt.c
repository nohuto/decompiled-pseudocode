/*
 * XREFs of HalEnableInterrupt @ 0x140377680
 * Callers:
 *     KeConnectInterrupt @ 0x14037731C (KeConnectInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     HalpAcquireHighLevelLock @ 0x140378A70 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptGsiToLine @ 0x140378AAC (HalpInterruptGsiToLine.c)
 *     HalpInterruptSetLineState @ 0x1403A3C48 (HalpInterruptSetLineState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpEnableSecondaryInterrupt @ 0x140865644 (HalpEnableSecondaryInterrupt.c)
 */

__int64 __fastcall HalEnableInterrupt(__int64 a1)
{
  int v2; // edi
  unsigned int v3; // ebx
  unsigned int v5; // esi
  unsigned __int8 v6; // al
  __int64 v7; // r8
  unsigned __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  _DWORD v14[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+48h] [rbp-20h]
  __int64 v16; // [rsp+50h] [rbp-18h]
  int v17; // [rsp+70h] [rbp+8h] BYREF
  int v18; // [rsp+74h] [rbp+Ch]
  __int64 v19; // [rsp+78h] [rbp+10h] BYREF

  v14[1] = 0;
  v19 = 0LL;
  if ( *(_DWORD *)a1 != 1 )
  {
LABEL_9:
    HalpInterruptLastProblem = 19;
    return (unsigned int)-1073741811;
  }
  v17 = -1;
  v2 = *(_DWORD *)(a1 + 8);
  v14[0] = 1;
  v15 = a1 + 32;
  v16 = a1 + 48;
  v18 = 1;
  if ( v2 )
  {
    if ( v2 == 3 )
      return 0;
    goto LABEL_9;
  }
  v5 = *(_DWORD *)(a1 + 64);
  if ( (int)HalpInterruptGsiToLine(v5, &v19) < 0 )
  {
    if ( ((unsigned __int8 (__fastcall *)(_QWORD, _QWORD))off_140C00780[0])(0LL, v5) )
      return (unsigned int)HalpEnableSecondaryInterrupt(a1);
    HalpInterruptLastProblem = 18;
    return (unsigned int)-1073741811;
  }
  v6 = HalpAcquireHighLevelLock(&HalpInterruptLock);
  LOBYTE(v7) = *(_BYTE *)(a1 + 16);
  v8 = v6;
  v3 = HalpInterruptSetLineState(
         &v19,
         *(unsigned int *)(a1 + 12),
         v7,
         *(unsigned int *)(a1 + 24),
         *(_DWORD *)(a1 + 20),
         v14,
         &v17);
  KxReleaseSpinLock(&HalpInterruptLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  return v3;
}
