/*
 * XREFs of HalEnableInterrupt @ 0x1403B02C0
 * Callers:
 *     KeConnectInterrupt @ 0x1403AF5E4 (KeConnectInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     HalpAcquireHighLevelLock @ 0x140252344 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptGsiToLine @ 0x140252380 (HalpInterruptGsiToLine.c)
 *     HalpInterruptSetLineState @ 0x1403B07C8 (HalpInterruptSetLineState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpInterruptSetProblemEx @ 0x14051E038 (HalpInterruptSetProblemEx.c)
 *     HalpEnableSecondaryInterrupt @ 0x140909678 (HalpEnableSecondaryInterrupt.c)
 */

__int64 __fastcall HalEnableInterrupt(__int64 a1)
{
  int v2; // edi
  unsigned int v3; // esi
  unsigned __int8 v4; // al
  __int64 v5; // r8
  unsigned __int64 v6; // rdi
  unsigned int v7; // ebx
  int v9; // edx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  int v15; // [rsp+20h] [rbp-40h]
  _DWORD v16[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h]
  __int64 v18; // [rsp+50h] [rbp-10h]
  int v19; // [rsp+80h] [rbp+20h] BYREF
  int v20; // [rsp+84h] [rbp+24h]
  __int64 v21; // [rsp+88h] [rbp+28h] BYREF

  v21 = 0LL;
  v16[1] = 0;
  if ( *(_DWORD *)a1 != 1 )
  {
    v15 = 204;
LABEL_11:
    v9 = 19;
LABEL_13:
    HalpInterruptSetProblemEx(0, v9, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", v15);
    return (unsigned int)-1073741811;
  }
  v19 = -1;
  v2 = *(_DWORD *)(a1 + 8);
  v17 = a1 + 32;
  v18 = a1 + 48;
  v16[0] = 1;
  v20 = 1;
  if ( v2 )
  {
    if ( v2 == 3 )
      return 0;
    v15 = 313;
    goto LABEL_11;
  }
  v3 = *(_DWORD *)(a1 + 64);
  if ( (int)HalpInterruptGsiToLine(v3, &v21) < 0 )
  {
    if ( ((unsigned __int8 (__fastcall *)(_QWORD, _QWORD))off_140C01DD0[0])(0LL, v3) )
      return (unsigned int)HalpEnableSecondaryInterrupt(a1);
    v15 = 272;
    v9 = 18;
    goto LABEL_13;
  }
  v4 = HalpAcquireHighLevelLock(&HalpInterruptLock);
  LOBYTE(v5) = *(_BYTE *)(a1 + 16);
  v6 = v4;
  v7 = HalpInterruptSetLineState(
         &v21,
         *(unsigned int *)(a1 + 12),
         v5,
         *(unsigned int *)(a1 + 24),
         *(_DWORD *)(a1 + 20),
         v16,
         &v19);
  KxReleaseSpinLock(&HalpInterruptLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v14 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return v7;
}
