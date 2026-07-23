/*
 * XREFs of KiInterruptDispatchCommon @ 0x140521668
 * Callers:
 *     IopPassiveInterruptWorker @ 0x14050D7F0 (IopPassiveInterruptWorker.c)
 *     KeDispatchSecondaryInterrupt @ 0x1405190F0 (KeDispatchSecondaryInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeGetCurrentProcessorNumberEx @ 0x140282240 (KeGetCurrentProcessorNumberEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14029C6E0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14029C840 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     IoProcessPassiveInterrupts @ 0x14050D294 (IoProcessPassiveInterrupts.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x14051916C (KiAcquireSecondaryInterruptConnectLock.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140521BAC (KiInvokeInterruptServiceRoutine.c)
 *     KiProcessDisconnectList @ 0x140521F2C (KiProcessDisconnectList.c)
 *     KiProcessPendingDisconnect @ 0x140521F84 (KiProcessPendingDisconnect.c)
 */

char __fastcall KiInterruptDispatchCommon(unsigned int a1, unsigned int a2, char a3, __int128 *a4, int *a5)
{
  unsigned int v5; // r15d
  __int128 *v7; // rbx
  char v8; // r12
  unsigned __int8 v9; // di
  _DWORD *SchedulerAssist; // r9
  _WORD *v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rdx
  _QWORD *v14; // rbx
  __int64 v15; // rbx
  unsigned int v16; // r13d
  char v17; // r15
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r10
  _DWORD *v20; // r9
  int v21; // eax
  bool v22; // zf
  KSPIN_LOCK *v23; // r14
  unsigned __int8 v24; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v26; // r9
  int v27; // eax
  _DWORD *v28; // r9
  __int128 *v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r14
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r9
  _DWORD *v34; // r8
  int v35; // eax
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r9
  _DWORD *v38; // r8
  int v39; // eax
  unsigned __int8 v41; // [rsp+20h] [rbp-61h] BYREF
  char v42; // [rsp+21h] [rbp-60h]
  unsigned int v43; // [rsp+24h] [rbp-5Dh]
  int v44; // [rsp+28h] [rbp-59h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+2Ch] [rbp-55h] BYREF
  unsigned int v46; // [rsp+30h] [rbp-51h]
  int v47; // [rsp+34h] [rbp-4Dh]
  PKSPIN_LOCK SpinLock; // [rsp+38h] [rbp-49h]
  int v49; // [rsp+40h] [rbp-41h]
  __int128 *v50; // [rsp+48h] [rbp-39h]
  __int64 CurrentIrql; // [rsp+50h] [rbp-31h]
  int *v52; // [rsp+58h] [rbp-29h]
  _GROUP_AFFINITY Affinity; // [rsp+60h] [rbp-21h] BYREF
  __int128 v54; // [rsp+70h] [rbp-11h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+80h] [rbp-1h] BYREF

  v46 = a2;
  v43 = a1;
  v5 = a1;
  v41 = 0;
  v52 = a5;
  ProcNumber = 0;
  v44 = 0;
  v54 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v7 = &v54;
  v42 = 0;
  if ( a4 )
    v7 = a4;
  v47 = 0;
  v50 = v7;
  v8 = 0;
  PreviousAffinity = 0LL;
  *((_QWORD *)v7 + 1) = v7;
  *(_QWORD *)v7 = v7;
  if ( a1 )
  {
    v12 = a2 - 256;
    SpinLock = (PKSPIN_LOCK)(KiGlobalSecondaryIDT + 48 * v12);
    KiAcquireSecondaryInterruptConnectLock(SpinLock, &v41);
    v11 = 0LL;
    if ( (unsigned int)v12 < 0x100 )
      v11 = *(_WORD **)(KiGlobalSecondaryIDT + 48 * v12 + 40);
    v7 = v50;
    v5 = v43;
    goto LABEL_13;
  }
  SpinLock = 0LL;
  KeGetCurrentProcessorNumberEx(&ProcNumber);
  *(_QWORD *)&Affinity.Group = ProcNumber.Group;
  Affinity.Mask = 1LL << ProcNumber.Number;
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  v9 = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v9 <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (v9 + 1)) & 0xFFFC;
  }
  v11 = 0LL;
  v41 = v9;
  if ( v46 <= 0xFF )
  {
    _mm_lfence();
    v11 = KeGetCurrentPrcb()->InterruptObject[v46];
LABEL_13:
    v9 = v41;
  }
  if ( v11 )
  {
    v13 = 1LL;
    v14 = v11;
    ++v11[51];
    if ( (a3 & 1) != 0 )
    {
      while ( *((_BYTE *)v14 + 93) )
      {
        v15 = v14[1];
        if ( !v15 )
        {
          v14 = 0LL;
          break;
        }
        v14 = (_QWORD *)(v15 - 8);
        if ( v14 == (_QWORD *)v11 )
        {
          if ( *((_BYTE *)v14 + 93) )
            v14 = 0LL;
          break;
        }
      }
    }
    if ( v14 )
    {
      v16 = 0;
      v49 = *((_DWORD *)v11 + 27);
      v17 = 0;
      while ( (unsigned __int8)CurrentIrql <= 2u || *((_BYTE *)v14 + 93) )
      {
        if ( (v14[13] & 1) != 0 )
        {
          v31 = v14[1];
        }
        else
        {
          ++*((_WORD *)v14 + 51);
          ++v16;
          if ( v43 )
          {
            v23 = SpinLock;
            KxReleaseSpinLock(SpinLock);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v24 = KeGetCurrentIrql();
                if ( v24 <= 0xFu && v9 <= 0xFu && v24 >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v26 = CurrentPrcb->SchedulerAssist;
                  v9 = v41;
                  v13 = -1LL << (v41 + 1);
                  v27 = ~(unsigned __int16)v13;
                  v22 = (v27 & v26[5]) == 0;
                  v26[5] &= v27;
                  if ( v22 )
                    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                }
              }
            }
          }
          else
          {
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v18 = KeGetCurrentIrql();
                if ( v18 <= 0xFu && v9 <= 0xFu && v18 >= 2u )
                {
                  v19 = KeGetCurrentPrcb();
                  v20 = v19->SchedulerAssist;
                  v9 = v41;
                  v13 = -1LL << (v41 + 1);
                  v21 = ~(unsigned __int16)v13;
                  v22 = (v21 & v20[5]) == 0;
                  v20[5] &= v21;
                  if ( v22 )
                    KiRemoveSystemWorkPriorityKick((__int64)v19);
                }
              }
            }
            v23 = SpinLock;
          }
          __writecr8(v9);
          LOBYTE(v13) = v9;
          v8 = KiInvokeInterruptServiceRoutine(v14, v13, v46);
          v44 = 2;
          if ( v43 )
          {
            KiAcquireSecondaryInterruptConnectLock(v23, &v41);
            v9 = v41;
          }
          else
          {
            v9 = KeGetCurrentIrql();
            __writecr8(0xFuLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v9 <= 0xFu )
            {
              v28 = KeGetCurrentPrcb()->SchedulerAssist;
              v28[5] |= (-1 << (v9 + 1)) & 0xFFFC;
            }
            v41 = v9;
          }
          v29 = v50;
          v30 = v43;
          --*((_WORD *)v14 + 51);
          v31 = v14[1];
          KiProcessPendingDisconnect(v30, v14, v29);
          v13 = 1LL;
        }
        v14 = (_QWORD *)(v31 - 8);
        if ( v49 )
        {
          if ( v8 )
            v17 = 1;
          if ( v14 == (_QWORD *)v11 )
          {
            if ( !v17 || v16 <= 1 )
            {
              v8 = 1;
              goto LABEL_68;
            }
            v16 = 0;
            v17 = 0;
            v8 = 0;
          }
        }
        else if ( v8 || v14 == (_QWORD *)v11 )
        {
          goto LABEL_68;
        }
      }
      v42 = 1;
      if ( v44 != 2 )
        v44 = 1;
      v47 = *((_DWORD *)v14 + 22);
LABEL_68:
      v5 = v43;
    }
    --v11[51];
    v7 = v50;
    KiProcessPendingDisconnect(v5, v11, v50);
  }
  if ( v5 )
  {
    KxReleaseSpinLock(SpinLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v36 = KeGetCurrentIrql();
        if ( v36 <= 0xFu && v9 <= 0xFu && v36 >= 2u )
        {
          v37 = KeGetCurrentPrcb();
          v38 = v37->SchedulerAssist;
          v9 = v41;
          v39 = ~(unsigned __int16)(-1LL << (v41 + 1));
          v22 = (v39 & v38[5]) == 0;
          v38[5] &= v39;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick((__int64)v37);
        }
      }
    }
    __writecr8(v9);
  }
  else
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v32 = KeGetCurrentIrql();
        if ( v32 <= 0xFu && v9 <= 0xFu && v32 >= 2u )
        {
          v33 = KeGetCurrentPrcb();
          v34 = v33->SchedulerAssist;
          v9 = v41;
          v35 = ~(unsigned __int16)(-1LL << (v41 + 1));
          v22 = (v35 & v34[5]) == 0;
          v34[5] &= v35;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick((__int64)v33);
        }
      }
    }
    __writecr8(v9);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  }
  if ( v42 )
    IoProcessPassiveInterrupts();
  if ( (unsigned __int8)CurrentIrql < 2u )
    KiProcessDisconnectList(v7);
  if ( v52 )
    *v52 = v44;
  return v8;
}
