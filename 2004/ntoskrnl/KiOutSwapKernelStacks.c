/*
 * XREFs of KiOutSwapKernelStacks @ 0x1402E51AC
 * Callers:
 *     KeSwapProcessOrStack @ 0x1403B0300 (KeSwapProcessOrStack.c)
 * Callees:
 *     KiDecrementProcessStackCount @ 0x1402051D8 (KiDecrementProcessStackCount.c)
 *     KiWaitForContextSwap @ 0x140280C14 (KiWaitForContextSwap.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402DE560 (KeQueryActiveProcessorCountEx.c)
 *     MmOutPageKernelStack @ 0x1402E53C0 (MmOutPageKernelStack.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
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
  __int64 v18; // rdx
  unsigned __int64 *v19; // rsi
  unsigned __int64 v20; // rdi
  __int64 v21; // rbx
  int v22; // eax
  _DWORD *v23; // rcx
  int v24; // eax
  int v25; // eax
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8
  int v29; // eax
  bool v30; // zf
  int v31; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v32[2]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v33; // [rsp+48h] [rbp-30h]

  v4 = 0LL;
  memset(v32, 0, sizeof(v32));
  v33 = 0LL;
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
  v31 = 0;
  while ( 1 )
  {
    v9 = CurrentPrcb->SchedulerAssist;
    if ( v9 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v22 = v9[6];
        v9[6] = v22 + 1;
        if ( v22 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v5 + 31760), 0LL) )
      break;
    v23 = CurrentPrcb->SchedulerAssist;
    if ( v23 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v24 = v23[6] - 1;
        v23[6] = v24;
        if ( !v24 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v31, a2, a3, (__int64)SchedulerAssist);
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
      *((_QWORD *)v32 + v4) = v12;
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
      v25 = v16[6] - 1;
      v16[6] = v25;
      if ( !v25 )
        KiRemoveSystemWorkPriorityKick(v15);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v26 = KeGetCurrentIrql();
      if ( v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
      {
        v27 = KeGetCurrentPrcb();
        v28 = v27->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v30 = (v29 & v28[5]) == 0;
        v28[5] &= v29;
        if ( v30 )
          KiRemoveSystemWorkPriorityKick(v27);
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
    v19 = (unsigned __int64 *)v32 + v4;
    do
    {
      --v19;
      LODWORD(v4) = v4 - 1;
      v20 = *v19 & 0xFFFFFFFFFFFFFFFEuLL;
      v21 = *v19 & 1;
      if ( !v21 )
        v20 = *v19;
      KiWaitForContextSwap(v20, v18);
      if ( (unsigned int)v21 != 1 )
        KiDecrementProcessStackCount(*(_QWORD *)(v20 + 184));
      result = MmOutPageKernelStack(v20);
    }
    while ( (_DWORD)v4 );
  }
  return result;
}
