/*
 * XREFs of MmRemoveImportOptimizationForDriverVerifier @ 0x14054476C
 * Callers:
 *     VfDriverEnableVerifier @ 0x1409C9620 (VfDriverEnableVerifier.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402695B0 (KeQueryActiveProcessorCountEx.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiSectionControlArea @ 0x14031FFB0 (MiSectionControlArea.c)
 *     KeIpiGenericCall @ 0x1403A4C70 (KeIpiGenericCall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     KeIsNmiCallbackRegistered @ 0x140514480 (KeIsNmiCallbackRegistered.c)
 *     MmHasImageBeenImportOptimized @ 0x1407737A8 (MmHasImageBeenImportOptimized.c)
 *     MiInitializeDriverPatchState @ 0x1408C4E64 (MiInitializeDriverPatchState.c)
 *     MiLockAndMapEntireDriver @ 0x1408D0C54 (MiLockAndMapEntireDriver.c)
 *     MiUnlockEntireDriver @ 0x1408D0ED4 (MiUnlockEntireDriver.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmRemoveImportOptimizationForDriverVerifier(__int64 a1)
{
  int v2; // r14d
  int v3; // ebx
  __int64 v4; // rcx
  _OWORD *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned int v8; // ebx
  unsigned __int16 **v9; // rdx
  __int64 v10; // r9
  _OWORD *Pool; // rax
  unsigned int v12; // r15d
  __int64 v13; // r14
  unsigned __int16 *v14; // rdx
  unsigned int v15; // ebx
  void *v16; // rcx
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v19; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v21; // r8
  int v22; // eax
  bool v23; // zf
  ULONG_PTR Context; // [rsp+28h] [rbp-29h] BYREF
  __int64 v26; // [rsp+30h] [rbp-21h]
  __int64 v27; // [rsp+38h] [rbp-19h]
  PVOID P[3]; // [rsp+40h] [rbp-11h] BYREF
  _BYTE v29[64]; // [rsp+58h] [rbp+7h] BYREF

  memset(v29, 0, sizeof(v29));
  v2 = 0;
  Context = 0LL;
  v26 = 0LL;
  *(_OWORD *)P = 0LL;
  MiInitializeDriverPatchState(a1, v29);
  v27 = a1;
  if ( (unsigned int)MmHasImageBeenImportOptimized(a1) )
  {
    if ( (MiFlags & 0x10000) != 0 || (unsigned int)KeIsNmiCallbackRegistered() )
      goto LABEL_4;
    v4 = *(_QWORD *)(a1 + 112);
    v5 = 0LL;
    if ( v4 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(MiSectionControlArea(v4) + 96) + 32LL);
      if ( v6 )
        v5 = *(_OWORD **)(v6 + 96);
    }
    else
    {
      v5 = *(_OWORD **)(a1 + 296);
    }
    v7 = *(_DWORD *)(a1 + 64) >> 12;
    if ( !v5 )
    {
LABEL_4:
      v3 = -1073741637;
    }
    else
    {
      v3 = MiLockAndMapEntireDriver(a1, v29, P);
      if ( v3 >= 0 )
      {
        v8 = 8 * v7 + 56;
        HIDWORD(v26) = v8;
        if ( (_DWORD)v7 )
        {
          v9 = (unsigned __int16 **)v5 + 7;
          v10 = (unsigned int)v7;
          do
          {
            if ( *v9 )
              v2 += ((*v9)[1] >> 1) + ((*v9)[2] >> 1) + (**v9 >> 2);
            ++v9;
            --v10;
          }
          while ( v10 );
        }
        Pool = MiAllocatePool(64, v8 + 4 * ((_DWORD)v7 + v2 + 2 * (_DWORD)v7), 0x66766D4Du);
        P[1] = Pool;
        if ( Pool )
        {
          v12 = 0;
          *Pool = *v5;
          Pool[1] = v5[1];
          Pool[2] = v5[2];
          *((_QWORD *)P[1] + 2) = 0LL;
          *((_QWORD *)P[1] + 3) = 0LL;
          *((_QWORD *)P[1] + 6) = (char *)P[1] + v8;
          if ( (_DWORD)v7 )
          {
            v13 = 56LL;
            do
            {
              v14 = *(unsigned __int16 **)((char *)v5 + v13);
              if ( v14 )
              {
                v15 = v14[1] + 12 + v14[2] + *v14;
                v16 = (void *)(*((_QWORD *)P[1] + 6) + v12);
                *(_QWORD *)((char *)P[1] + v13) = v16;
                memmove(v16, v14, v15);
                v12 += v15;
              }
              v13 += 8LL;
              --v7;
            }
            while ( v7 );
          }
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(0xCuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
          }
          HIDWORD(Context) = KeQueryActiveProcessorCountEx(0xFFFFu);
          LODWORD(Context) = HIDWORD(Context);
          v3 = KeIpiGenericCall(MmRemoveImportOptimizationWorker, (ULONG_PTR)&Context);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v19 = KeGetCurrentIrql();
              if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v21 = CurrentPrcb->SchedulerAssist;
                v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v23 = (v22 & v21[5]) == 0;
                v21[5] &= v22;
                if ( v23 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
        }
        else
        {
          v3 = -1073741670;
        }
      }
    }
  }
  else
  {
    v3 = 0;
  }
  MiUnlockEntireDriver(v29, P[0]);
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  return (unsigned int)v3;
}
