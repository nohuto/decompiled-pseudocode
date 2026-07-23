/*
 * XREFs of KiOutSwapKernelStacks @ 0x140295A90
 * Callers:
 *     KeSwapProcessOrStack @ 0x1403B4200 (KeSwapProcessOrStack.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402695B0 (KeQueryActiveProcessorCountEx.c)
 *     MmOutPageKernelStack @ 0x140295CA4 (MmOutPageKernelStack.c)
 *     KiDecrementProcessStackCount @ 0x1402AC380 (KiDecrementProcessStackCount.c)
 *     KiWaitForContextSwap @ 0x1402EFA9C (KiWaitForContextSwap.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG KiOutSwapKernelStacks()
{
  __int64 v0; // rbp
  __int64 v1; // rdi
  unsigned int v2; // r15d
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v5; // rcx
  _QWORD *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  _QWORD *v10; // r8
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  ULONG result; // eax
  unsigned __int64 *v14; // rsi
  unsigned __int64 v15; // rdi
  __int64 v16; // rbx
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  _DWORD *v19; // rcx
  int v20; // eax
  int v21; // eax
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  int v25; // eax
  bool v26; // zf
  int v27; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v28[2]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v29; // [rsp+48h] [rbp-30h]

  v0 = 0LL;
  memset(v28, 0, sizeof(v28));
  v29 = 0LL;
  v1 = KiProcessorBlock[KiLastProcessor];
  v2 = MEMORY[0xFFFFF78000000320] - KiStackProtectTime;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v27 = 0;
  while ( 1 )
  {
    v5 = CurrentPrcb->SchedulerAssist;
    if ( v5 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v18 = v5[6];
        v5[6] = v18 + 1;
        if ( v18 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v1 + 31760), 0LL) )
      break;
    v19 = CurrentPrcb->SchedulerAssist;
    if ( v19 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v20 = v19[6] - 1;
        v19[6] = v20;
        if ( !v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v27);
    while ( *(_QWORD *)(v1 + 31760) );
  }
  v6 = *(_QWORD **)(v1 + 31744);
  while ( v6 != (_QWORD *)(v1 + 31744) )
  {
    if ( (unsigned int)v0 >= 5 )
      break;
    v7 = (__int64)(v6 - 27);
    v6 = (_QWORD *)*v6;
    if ( v2 < *(_DWORD *)(v7 + 436) )
      break;
    if ( *(char *)(v7 + 195) < 25 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v7 + 120), 0x11u);
      v8 = v7;
      if ( _interlockedbittestandset((volatile signed __int32 *)(v7 + 120), 0x14u) )
        v8 = v7 | 1;
      *((_QWORD *)v28 + v0) = v8;
      v0 = (unsigned int)(v0 + 1);
    }
    v9 = *(_QWORD *)(v7 + 216);
    v10 = *(_QWORD **)(v7 + 224);
    if ( *(_QWORD *)(v9 + 8) != v7 + 216 || *v10 != v7 + 216 )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    *(_QWORD *)(v7 + 712) = 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 31760), 0LL);
  v11 = KeGetCurrentPrcb();
  v12 = v11->SchedulerAssist;
  if ( v12 )
  {
    if ( v11->NestingLevel <= 1u )
    {
      v21 = v12[6] - 1;
      v12[6] = v21;
      if ( !v21 )
        KiRemoveSystemWorkPriorityKick(v11);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v22 = KeGetCurrentIrql();
      if ( v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v26 = (v25 & v24[5]) == 0;
        v24[5] &= v25;
        if ( v26 )
          KiRemoveSystemWorkPriorityKick(v23);
      }
    }
  }
  __writecr8(CurrentIrql);
  ++KiLastProcessor;
  result = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( KiLastProcessor == result )
    KiLastProcessor = 0;
  if ( (_DWORD)v0 )
  {
    v14 = (unsigned __int64 *)v28 + v0;
    do
    {
      --v14;
      LODWORD(v0) = v0 - 1;
      v15 = *v14 & 0xFFFFFFFFFFFFFFFEuLL;
      v16 = *v14 & 1;
      if ( !v16 )
        v15 = *v14;
      KiWaitForContextSwap(v15);
      if ( (unsigned int)v16 != 1 )
        KiDecrementProcessStackCount(*(_QWORD *)(v15 + 184));
      result = MmOutPageKernelStack(v15);
    }
    while ( (_DWORD)v0 );
  }
  return result;
}
