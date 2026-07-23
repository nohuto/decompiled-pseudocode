/*
 * XREFs of KiIntSteerConnect @ 0x140377774
 * Callers:
 *     KeConnectInterrupt @ 0x14037731C (KeConnectInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KiIntSteerUpdateDeviceInterruptMask @ 0x14023F2BC (KiIntSteerUpdateDeviceInterruptMask.c)
 *     KiIntSteerSetDestination @ 0x140241BFC (KiIntSteerSetDestination.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiIntSteerLogState @ 0x140377B04 (KiIntSteerLogState.c)
 *     KiIntSteerChooseInitialTargetProcessors @ 0x140377B64 (KiIntSteerChooseInitialTargetProcessors.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwRegister @ 0x140762E70 (EtwRegister.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall KiIntSteerConnect(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r12
  int v6; // r14d
  char v7; // bp
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rax
  unsigned __int64 v13; // r13
  __int64 *i; // rbx
  int v15; // r9d
  int v16; // ebp
  __int64 v17; // r8
  __int16 v18; // cx
  __int16 v19; // ax
  __int64 v20; // rax
  bool v21; // zf
  __int64 **v22; // rax
  __int64 v23; // r8
  _QWORD *v24; // rbx
  _QWORD *v25; // rax
  int v27; // eax
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v36; // eax
  __int128 v37; // [rsp+40h] [rbp-48h] BYREF
  int v38; // [rsp+A0h] [rbp+18h] BYREF
  int v39; // [rsp+A8h] [rbp+20h] BYREF

  v3 = a2;
  v39 = 0;
  v37 = 0LL;
  if ( !KiIntSteerEtwHandle )
    EtwRegister(&INTSTEER_ETW_PROVIDER, KiIntSteerEventTraceControlCallback, 0LL, &KiIntSteerEtwHandle);
  if ( !*(_DWORD *)a3 )
  {
    v38 = *(_DWORD *)(a3 + 56);
    if ( (unsigned __int8)off_140C00780[0]() )
    {
      v7 = 0;
      v28 = ((__int64 (__fastcall *)(__int64, int *))off_140C00768[0])(a3, &v38);
      if ( !v28 )
        goto LABEL_33;
    }
    else
    {
      v7 = 1;
      v28 = 0;
    }
    if ( v28 < 0 )
      goto LABEL_36;
LABEL_33:
    v6 = v38;
LABEL_6:
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x98uLL, 0x6B725449u);
    v9 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    PoolWithTag[4] = a1;
    *((_DWORD *)PoolWithTag + 6) = v3;
    PoolWithTag[5] = 0LL;
    PoolWithTag[6] = 0LL;
    *((_BYTE *)PoolWithTag + 56) = v7;
    *((_OWORD *)PoolWithTag + 4) = *(_OWORD *)a3;
    *((_OWORD *)PoolWithTag + 5) = *(_OWORD *)(a3 + 16);
    *((_OWORD *)PoolWithTag + 6) = *(_OWORD *)(a3 + 32);
    *((_OWORD *)PoolWithTag + 7) = *(_OWORD *)(a3 + 48);
    *((_OWORD *)PoolWithTag + 8) = *(_OWORD *)(a3 + 64);
    PoolWithTag[18] = *(_QWORD *)(a3 + 80);
    if ( (_DWORD)v3 )
    {
      v10 = a1;
      v11 = v3;
      do
      {
        v12 = (_QWORD *)*v10++;
        v12[22] = 0LL;
        v12[24] = 0LL;
        v12[25] = 0LL;
        v12[27] = 0LL;
        v12[21] = v9;
        --v11;
      }
      while ( v11 );
    }
    v13 = KeAcquireSpinLockRaiseToDpc(&KiIntTrackSpinlock);
    if ( *(_DWORD *)a3 )
    {
LABEL_11:
      i = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xD0uLL, 0x6B725449u);
      if ( i )
      {
        v16 = KiIntSteerChooseInitialTargetProcessors((_DWORD)a1, v3, a3, v15, v7, (__int64)&v37, (__int64)&v39);
        if ( v16 >= 0 )
        {
          memset(i, 0, 0xD0uLL);
          i[19] = 0LL;
          v18 = WORD4(v37);
          i[3] = (__int64)(i + 2);
          i[2] = (__int64)(i + 2);
          *((_DWORD *)i + 8) = v6;
          *((_BYTE *)i + 132) = 0;
          v19 = *(_WORD *)(a3 + 32);
          i[17] = 0LL;
          *((_WORD *)i + 72) = v19;
          *((_DWORD *)i + 32) = v39;
          v20 = v37;
          i[20] = v37;
          i[22] = v20;
          *((_WORD *)i + 84) = v18;
          *((_WORD *)i + 92) = v18;
          v21 = *((_DWORD *)i + 32) == 2;
          *(_OWORD *)(i + 5) = *(_OWORD *)a3;
          *(_OWORD *)(i + 7) = *(_OWORD *)(a3 + 16);
          *(_OWORD *)(i + 9) = *(_OWORD *)(a3 + 32);
          *(_OWORD *)(i + 11) = *(_OWORD *)(a3 + 48);
          *(_OWORD *)(i + 13) = *(_OWORD *)(a3 + 64);
          i[15] = *(_QWORD *)(a3 + 80);
          if ( v21 )
            i[25] = *(_QWORD *)(*a1 + 272LL);
          v22 = (__int64 **)qword_140C2B148;
          if ( *(__int64 **)qword_140C2B148 != &KiIntTrackRootList )
            goto LABEL_48;
          *i = (__int64)&KiIntTrackRootList;
          i[1] = (__int64)v22;
          *v22 = i;
          ++KiIntTrackRootCount;
          qword_140C2B148 = (__int64)i;
          KiIntSteerUpdateDeviceInterruptMask((__int64)(i + 20), 0, v17);
          if ( *((_DWORD *)i + 32) )
            KiIntSteerSetDestination((__int64)i, (__int64)(i + 20), v23);
          v16 = 0;
        }
        if ( !v16 )
        {
LABEL_20:
          v9[2] = i;
          v24 = i + 2;
          v25 = (_QWORD *)v24[1];
          if ( (_QWORD *)*v25 == v24 )
          {
            *v9 = v24;
            v9[1] = v25;
            *v25 = v9;
            v24[1] = v9;
            KiIntSteerLogState(v9, PPM_ETW_INTERRUPT_STEERING_STATE_CONNECT);
            goto LABEL_22;
          }
LABEL_48:
          __fastfail(3u);
        }
      }
      else
      {
        v16 = -1073741670;
      }
      ExFreePoolWithTag(v9, 0x6B725449u);
LABEL_22:
      KxReleaseSpinLock(&KiIntTrackSpinlock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
            v21 = (v36 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v36;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v13);
      return (unsigned int)v16;
    }
    for ( i = (__int64 *)KiIntTrackRootList; ; i = (__int64 *)*i )
    {
      if ( i == &KiIntTrackRootList )
        goto LABEL_11;
      v27 = *((_DWORD *)i + 8);
      if ( v27 != -1 && v27 == v6 )
        break;
    }
    if ( *((_DWORD *)i + 32) == 2 )
    {
      *(_BYTE *)(i[25] + 16) = 0;
      *((_DWORD *)i + 32) = 0;
      *((_BYTE *)i + 132) = 0;
      v31 = *(unsigned __int16 *)(a3 + 32);
      v32 = *(_QWORD *)(a3 + 24);
      if ( LOWORD(KiIntSteerAffinitizedInterrupts[0]) <= (unsigned __int16)v31 )
        LOWORD(KiIntSteerAffinitizedInterrupts[0]) = v31 + 1;
      *(_QWORD *)&KiIntSteerAffinitizedInterrupts[2 * v31 + 2] |= v32;
    }
    v16 = 0;
    goto LABEL_20;
  }
  if ( *(_DWORD *)a3 == 3 )
  {
    v6 = -1;
    v7 = 1;
    v38 = -1;
    goto LABEL_6;
  }
LABEL_36:
  v29 = *(unsigned __int16 *)(a3 + 32);
  v30 = *(_QWORD *)(a3 + 24);
  if ( LOWORD(KiIntSteerAffinitizedInterrupts[0]) <= (unsigned __int16)v29 )
    LOWORD(KiIntSteerAffinitizedInterrupts[0]) = v29 + 1;
  *(_QWORD *)&KiIntSteerAffinitizedInterrupts[2 * v29 + 2] |= v30;
  return 0LL;
}
