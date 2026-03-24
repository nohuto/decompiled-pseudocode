/*
 * XREFs of KiOutSwapKernelStacks @ 0x1402E4740
 * Callers:
 *     KeSwapProcessOrStack @ 0x1403B4090 (KeSwapProcessOrStack.c)
 * Callees:
 *     KiDecrementProcessStackCount @ 0x140207A80 (KiDecrementProcessStackCount.c)
 *     KiWaitForContextSwap @ 0x14024B24C (KiWaitForContextSwap.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x14027B610 (KeQueryActiveProcessorCountEx.c)
 *     MmOutPageKernelStack @ 0x1402E4954 (MmOutPageKernelStack.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG __fastcall KiOutSwapKernelStacks(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 v4; // rbp
  __int64 v5; // rdi
  unsigned int v6; // r15d
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v9; // rcx
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r9
  _QWORD *v14; // r8
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  ULONG result; // eax
  unsigned __int64 *v18; // rsi
  unsigned __int64 v19; // rdi
  __int64 v20; // rbx
  int v21; // eax
  _DWORD *v22; // rcx
  int v23; // eax
  int v24; // eax
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // eax
  bool v29; // zf
  int v30; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v31[2]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v32; // [rsp+48h] [rbp-30h]

  v4 = 0LL;
  memset(v31, 0, sizeof(v31));
  v32 = 0LL;
  v5 = KiProcessorBlock[KiLastProcessor];
  v6 = MEMORY[0xFFFFF78000000320] - KiStackProtectTime;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v30 = 0;
  while ( 1 )
  {
    v9 = CurrentPrcb->SchedulerAssist;
    if ( v9 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v21 = v9[6];
        v9[6] = v21 + 1;
        if ( v21 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v5 + 31760), 0LL) )
      break;
    v22 = CurrentPrcb->SchedulerAssist;
    if ( v22 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v23 = v22[6] - 1;
        v22[6] = v23;
        if ( !v23 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v30, a2, a3, (__int64)SchedulerAssist);
    while ( *(_QWORD *)(v5 + 31760) );
  }
  v10 = *(_QWORD **)(v5 + 31744);
  while ( v10 != (_QWORD *)(v5 + 31744) )
  {
    if ( (unsigned int)v4 >= 5 )
      break;
    v11 = (__int64)(v10 - 27);
    v10 = (_QWORD *)*v10;
    if ( v6 < *(_DWORD *)(v11 + 436) )
      break;
    if ( *(char *)(v11 + 195) < 25 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v11 + 120), 0x11u);
      v12 = v11;
      if ( _interlockedbittestandset((volatile signed __int32 *)(v11 + 120), 0x14u) )
        v12 = v11 | 1;
      *((_QWORD *)v31 + v4) = v12;
      v4 = (unsigned int)(v4 + 1);
    }
    v13 = *(_QWORD *)(v11 + 216);
    v14 = *(_QWORD **)(v11 + 224);
    if ( *(_QWORD *)(v13 + 8) != v11 + 216 || *v14 != v11 + 216 )
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    *(_QWORD *)(v11 + 712) = 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 31760), 0LL);
  v15 = KeGetCurrentPrcb();
  v16 = v15->SchedulerAssist;
  if ( v16 )
  {
    if ( v15->NestingLevel <= 1u )
    {
      v24 = v16[6] - 1;
      v16[6] = v24;
      if ( !v24 )
        KiRemoveSystemWorkPriorityKick(v15);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v25 = KeGetCurrentIrql();
      if ( v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
      {
        v26 = KeGetCurrentPrcb();
        v27 = v26->SchedulerAssist;
        v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v29 = (v28 & v27[5]) == 0;
        v27[5] &= v28;
        if ( v29 )
          KiRemoveSystemWorkPriorityKick(v26);
      }
    }
  }
  __writecr8(CurrentIrql);
  ++KiLastProcessor;
  result = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( KiLastProcessor == result )
    KiLastProcessor = 0;
  if ( (_DWORD)v4 )
  {
    v18 = (unsigned __int64 *)v31 + v4;
    do
    {
      --v18;
      LODWORD(v4) = v4 - 1;
      v19 = *v18 & 0xFFFFFFFFFFFFFFFEuLL;
      v20 = *v18 & 1;
      if ( !v20 )
        v19 = *v18;
      KiWaitForContextSwap(v19);
      if ( (unsigned int)v20 != 1 )
        KiDecrementProcessStackCount(*(_QWORD *)(v19 + 184));
      result = MmOutPageKernelStack(v19);
    }
    while ( (_DWORD)v4 );
  }
  return result;
}
