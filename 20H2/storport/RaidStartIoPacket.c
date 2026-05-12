/*
 * XREFs of RaidStartIoPacket @ 0x1C0009FE0
 * Callers:
 *     RaidUnitSubmitRequest @ 0x1C0009A14 (RaidUnitSubmitRequest.c)
 *     RaUnitScsiIrp @ 0x1C0009B80 (RaUnitScsiIrp.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0014B64 (RaidUnitProcessBusyRequest.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0006350 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidCompleteRequestEx @ 0x1C0008FD0 (RaidCompleteRequestEx.c)
 *     RaidInsertDeviceQueue @ 0x1C000A8B0 (RaidInsertDeviceQueue.c)
 *     RaAllocateIoResource @ 0x1C000B0B0 (RaAllocateIoResource.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000B600 (RaUnitReleaseRemoveLock.c)
 *     RaidAllocatePool @ 0x1C000BD70 (RaidAllocatePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001F8C0 (memset.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C002D41C (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C002D480 (RaidAdapterPoFxIdleComponent.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C003490C (RaidGetQosEntryForDeviceEntry.c)
 *     RaidUpdateZoneIoReceiveWithStatus @ 0x1C0034B00 (RaidUpdateZoneIoReceiveWithStatus.c)
 *     RaidIsUnresponsiveBlockedCmd @ 0x1C0036404 (RaidIsUnresponsiveBlockedCmd.c)
 *     RaidQosSupportedCommand @ 0x1C0036504 (RaidQosSupportedCommand.c)
 *     RaUnitRequestPowerUp @ 0x1C003E610 (RaUnitRequestPowerUp.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C004D998 (RaAttemptHighWaterMarkIncrease.c)
 *     PortSrbGetLbaFromCdb @ 0x1C00593DC (PortSrbGetLbaFromCdb.c)
 */

__int64 __fastcall RaidStartIoPacket(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v6; // r14
  int v7; // ebx
  signed __int32 v8; // r15d
  int v9; // edx
  int v10; // eax
  __int64 v11; // rbx
  char v12; // al
  __int64 v13; // r15
  unsigned __int8 v14; // bl
  int Number; // r9d
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  char v18; // r15
  __int64 v19; // rax
  __int64 v20; // r15
  char inserted; // bl
  __int64 v22; // r15
  __int64 v23; // rbx
  int v24; // ecx
  __int64 v25; // rax
  int v26; // r15d
  PSLIST_ENTRY IoResource; // rcx
  PSLIST_ENTRY v28; // rbx
  void *v29; // r9
  unsigned int v30; // edx
  _SLIST_ENTRY *Next; // r14
  char v32; // al
  unsigned int v33; // r14d
  unsigned __int64 v34; // rcx
  char *v35; // rdx
  PSLIST_ENTRY v36; // rbx
  unsigned int v38; // r12d
  unsigned __int64 v39; // r14
  KSPIN_LOCK *v40; // rbx
  __int64 v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // r8
  bool v44; // zf
  PSLIST_ENTRY v45; // rsi
  unsigned __int8 v46; // cl
  BOOLEAN v47; // al
  __int64 v48; // rcx
  char v49; // al
  char v50; // al
  char v51; // dl
  __int64 v52; // rdx
  __int64 v53; // rdx
  char v54; // r10
  _BYTE *v56; // r9
  unsigned int v57; // r11d
  unsigned int v58; // r10d
  __int64 v59; // rcx
  unsigned __int64 v60; // r8
  __int64 v61; // r9
  int v62; // ecx
  int v63; // ecx
  int v64; // eax
  unsigned __int8 v65; // r8
  unsigned int v66; // r11d
  __int64 v67; // rcx
  unsigned __int64 v68; // r9
  __int64 v69; // r10
  int v70; // ecx
  int v71; // ecx
  int v72; // eax
  __int64 v73; // rax
  _QWORD *v74; // rcx
  __int64 v75; // rax
  ULONGLONG UnbiasedInterruptTime; // rax
  __int64 v77; // r14
  int v78; // eax
  char *v79; // rdx
  unsigned int v80; // r11d
  unsigned int v81; // r10d
  __int64 v82; // rcx
  unsigned __int64 v83; // r8
  __int64 v84; // r9
  int v85; // ecx
  int v86; // ecx
  char v87; // cl
  __int64 v88; // rdx
  __int64 v89; // r8
  unsigned int v90; // r8d
  unsigned int v91; // eax
  PSLIST_ENTRY v92; // rax
  _QWORD *v93; // rcx
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v95; // rbx
  _QWORD *v96; // rcx
  _QWORD *v97; // rcx
  char v98; // [rsp+40h] [rbp-89h]
  KIRQL v99; // [rsp+40h] [rbp-89h]
  char v100; // [rsp+41h] [rbp-88h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+44h] [rbp-85h] BYREF
  __int64 v102; // [rsp+48h] [rbp-81h]
  unsigned int v103; // [rsp+50h] [rbp-79h]
  int v104; // [rsp+58h] [rbp-71h] BYREF
  int v105; // [rsp+5Ch] [rbp-6Dh] BYREF
  __int64 v106; // [rsp+60h] [rbp-69h]
  __int64 v107; // [rsp+68h] [rbp-61h] BYREF
  __int64 v108; // [rsp+70h] [rbp-59h]
  struct _KLOCK_QUEUE_HANDLE v109; // [rsp+78h] [rbp-51h] BYREF
  int v110; // [rsp+90h] [rbp-39h]
  __int64 v111; // [rsp+98h] [rbp-31h]
  __int128 v112; // [rsp+A0h] [rbp-29h] BYREF
  __int128 v113; // [rsp+B0h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C0h] [rbp-9h] BYREF
  char v115; // [rsp+138h] [rbp+6Fh]
  __int64 v117; // [rsp+148h] [rbp+7Fh]
  char v118; // [rsp+148h] [rbp+7Fh]
  unsigned __int8 v119; // [rsp+148h] [rbp+7Fh]
  char v120; // [rsp+148h] [rbp+7Fh]
  unsigned __int64 v121; // [rsp+148h] [rbp+7Fh]
  __int64 Pool; // [rsp+148h] [rbp+7Fh]

  v3 = *(_QWORD *)(a2 + 184);
  ProcNumber = 0;
  v112 = 0LL;
  v108 = v3;
  v113 = 0LL;
  v6 = *(_QWORD *)(v3 + 8);
  v111 = v6;
  v106 = 0LL;
  v107 = 0LL;
  v105 = 0;
  v104 = 0;
  if ( !*(_BYTE *)(a1 + 3216) || (v98 = 1, !(unsigned __int8)RaidQosSupportedCommand(v6, a2)) )
    v98 = 0;
  if ( *(_BYTE *)(v6 + 2) == 40 )
    v7 = *(_DWORD *)(v6 + 24);
  else
    v7 = *(_DWORD *)(v6 + 12);
  if ( (*(_BYTE *)(a1 + 450) & 2) != 0 && (unsigned __int8)RaidIsUnresponsiveBlockedCmd(v6) )
  {
    RaUnitReleaseRemoveLock(a1);
    v49 = *(_BYTE *)(v6 + 3);
    if ( *(_BYTE *)(v6 + 2) == 40 )
    {
      v50 = ((v49 >> 7) & 0x80) + 56;
    }
    else
    {
      v51 = 56;
      if ( v49 < 0 )
        v51 = -72;
      v50 = v51;
    }
    *(_BYTE *)(v6 + 3) = v50;
    RaidCompleteRequestEx((PIRP)a2, 0, 0xC000050A);
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2104));
    return 1LL;
  }
  KeGetCurrentProcessorNumberEx(&ProcNumber);
  if ( *(_BYTE *)(v6 + 2) == 40 )
  {
    *(struct _PROCESSOR_NUMBER *)(v6 + 96) = ProcNumber;
    v106 = v6;
  }
  else
  {
    if ( !*(_QWORD *)(v6 + 40) )
      *(_QWORD *)(v6 + 40) = *(_QWORD *)(v6 + 56);
    *(struct _PROCESSOR_NUMBER *)(v6 + 56) = ProcNumber;
  }
  v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 784), 0, 0);
  if ( !*(_BYTE *)(a1 + 129) )
    goto LABEL_9;
  v52 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v52 != 15 )
    goto LABEL_9;
  v53 = *(_QWORD *)(v52 + 8);
  v54 = *(_BYTE *)(v53 + 2);
  v120 = v54;
  if ( v54 == 40 ? *(_DWORD *)(v53 + 20) : *(unsigned __int8 *)(v53 + 2) )
    goto LABEL_9;
  if ( v54 == 40 )
  {
    v56 = 0LL;
    v102 = 0LL;
    if ( *(_DWORD *)(v53 + 20) )
      goto LABEL_154;
    v57 = *(_DWORD *)(v53 + 56);
    v58 = 0;
    if ( !v57 )
    {
LABEL_150:
      v54 = v120;
      goto LABEL_154;
    }
    while ( 1 )
    {
      v59 = *(unsigned int *)(v53 + 4LL * v58 + 120);
      if ( (unsigned int)v59 >= 0x80 )
      {
        v60 = *(unsigned int *)(v53 + 16);
        if ( (unsigned int)v59 < (unsigned int)v60 )
        {
          v61 = (unsigned int)v59;
          v62 = *(_DWORD *)(v59 + v53) - 64;
          if ( v62 )
          {
            v63 = v62 - 1;
            if ( v63 )
            {
              if ( v63 == 1 && v61 + 40 <= v60 )
              {
                v64 = *(_DWORD *)(v61 + v53 + 12);
                v54 = v120;
                v56 = (_BYTE *)(v53 + v61 + 32);
                if ( !v64 )
                  v56 = 0LL;
                goto LABEL_153;
              }
            }
            else if ( v61 + 56 <= v60 )
            {
              goto LABEL_145;
            }
          }
          else if ( v61 + 40 <= v60 )
          {
LABEL_145:
            v54 = v120;
            if ( *(_BYTE *)(v61 + v53 + 10) )
            {
              v56 = (_BYTE *)(v53 + v61 + 24);
              goto LABEL_153;
            }
            v56 = 0LL;
            goto LABEL_154;
          }
        }
      }
      if ( ++v58 >= v57 )
      {
        v56 = 0LL;
        goto LABEL_150;
      }
    }
  }
  v56 = (_BYTE *)(v53 + 72);
LABEL_153:
  v102 = (__int64)v56;
LABEL_154:
  v65 = 0;
  if ( v54 != 40 )
  {
    v65 = *(_BYTE *)(v53 + 10);
    goto LABEL_164;
  }
  if ( *(_DWORD *)(v53 + 20) )
    goto LABEL_164;
  v66 = 0;
  v103 = *(_DWORD *)(v53 + 56);
  if ( !v103 )
    goto LABEL_164;
  while ( 1 )
  {
    v67 = *(unsigned int *)(v53 + 4LL * v66 + 120);
    if ( (unsigned int)v67 < 0x80 )
      goto LABEL_172;
    v68 = *(unsigned int *)(v53 + 16);
    if ( (unsigned int)v67 >= (unsigned int)v68 )
      goto LABEL_172;
    v69 = (unsigned int)v67;
    v70 = *(_DWORD *)(v67 + v53) - 64;
    if ( !v70 )
      break;
    v71 = v70 - 1;
    if ( v71 )
    {
      if ( v71 == 1 && v69 + 40 <= v68 )
        goto LABEL_163;
    }
    else if ( v69 + 56 <= v68 )
    {
      goto LABEL_170;
    }
LABEL_172:
    if ( ++v66 >= v103 )
      goto LABEL_163;
  }
  if ( v69 + 40 > v68 )
    goto LABEL_172;
LABEL_170:
  v65 = *(_BYTE *)(v69 + v53 + 10);
LABEL_163:
  v54 = v120;
  v56 = (_BYTE *)v102;
LABEL_164:
  if ( !v56
    || ((*v56 - 10) & 0x5F) != 0
    || !*(_DWORD *)(a1 + 812)
    || (v54 != 40 ? (v72 = *(_DWORD *)(v53 + 12)) : (v72 = *(_DWORD *)(v53 + 24)),
        (v72 & 0x1000) == 0 || !*(_QWORD *)(a1 + 3288)) )
  {
LABEL_9:
    v9 = a3;
    goto LABEL_10;
  }
  v121 = (unsigned __int64)*(unsigned int *)(a1 + 812) * PortSrbGetLbaFromCdb(v56, v65) / *(_QWORD *)(a1 + 3264);
  v110 = v121;
  if ( !(unsigned __int8)RaidUpdateZoneIoReceiveWithStatus(a1 + 656, a2) && !v8 )
  {
    RtlInterlockedSetBitRun(a1 + 3296, (unsigned int)v121, 1LL);
    goto LABEL_9;
  }
  v9 = a3 | 0x20;
  a3 |= 0x20u;
LABEL_10:
  v10 = *(unsigned __int8 *)(v6 + 2);
  if ( (_BYTE)v10 == 40 )
    v10 = *(_DWORD *)(v6 + 20);
  if ( v10 )
  {
    switch ( v10 )
    {
      case 2:
      case 7:
      case 9:
      case 18:
      case 19:
      case 23:
      case 32:
      case 36:
      case 37:
        break;
      case 8:
        if ( !*(_BYTE *)(*(_QWORD *)(a1 + 24) + 411LL) )
          goto LABEL_14;
        break;
      case 16:
        v73 = *(_QWORD *)(a1 + 24);
        if ( v73 && (*(_BYTE *)(v73 + 548) & 0x10) != 0 )
          break;
        goto LABEL_14;
      default:
        goto LABEL_14;
    }
  }
  if ( (v7 & 0x100800) == 0 )
  {
    v11 = *(_QWORD *)(a1 + 24);
    v117 = v11;
LABEL_25:
    if ( KeGetCurrentIrql() >= 2u || *(char *)(a1 + 448) < 0 || (v12 = *(_BYTE *)(a1 + 449), (v12 & 1) != 0) )
    {
      v102 = *(_QWORD *)(a2 + 184);
      v100 = 0;
      if ( *(_QWORD *)(v11 + 5088) )
      {
        RaidAdapterPoFxActivateComponent(v11, 0LL, 2LL);
        v46 = 2;
        v100 = 2;
      }
      else
      {
        v46 = 0;
      }
      v119 = v46;
      if ( *(char *)(a1 + 449) < 0 )
      {
        v47 = ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
        v46 = v119;
        if ( v47 )
        {
          if ( *(char *)(v11 + 108) < 0 )
          {
            _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2040));
            if ( (*(_BYTE *)(v11 + 109) & 1) != 0 )
              _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2048));
          }
          v48 = *(_QWORD *)(a1 + 1744);
          if ( (*(_DWORD *)(v48 + 140) & 1) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v48 + 136));
            v48 = *(_QWORD *)(a1 + 1744);
          }
          PoFxActivateComponent(*(_QWORD *)v48, 0LL, 2LL);
          ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
          v46 = v100 | 1;
        }
      }
      *(_QWORD *)(v102 + 16) = v46 & 1 | (unsigned __int64)(2 * ((v46 >> 1) & 1u));
    }
    else
    {
      v13 = *(_QWORD *)(a2 + 184);
      v115 = 0;
      if ( *(_QWORD *)(v11 + 5088) )
      {
        RaidAdapterPoFxActivateComponent(v11, 0LL, 1LL);
        v12 = *(_BYTE *)(a1 + 449);
        v14 = 2;
        v115 = 2;
      }
      else
      {
        v14 = 0;
      }
      if ( v12 < 0 && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736)) )
      {
        if ( *(char *)(v117 + 108) < 0 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2040));
          if ( (*(_BYTE *)(v117 + 109) & 1) != 0 )
            _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2048));
        }
        v42 = *(_QWORD *)(a1 + 1744);
        if ( (*(_DWORD *)(v42 + 140) & 1) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v42 + 136));
          v42 = *(_QWORD *)(a1 + 1744);
        }
        if ( *(_DWORD *)(a1 + 916) )
          v43 = 5LL;
        else
          v43 = 1LL;
        PoFxActivateComponent(*(_QWORD *)v42, 0LL, v43);
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
        v14 = v115 | 1;
      }
      *(_QWORD *)(v13 + 16) = v14 & 1 | (unsigned __int64)(2 * ((v14 >> 1) & 1u));
    }
    goto LABEL_32;
  }
LABEL_14:
  a3 = v9 | 8;
  *(_QWORD *)(v108 + 16) = 0LL;
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
    goto LABEL_32;
  }
  v11 = *(_QWORD *)(a1 + 24);
  v117 = v11;
  if ( *(_QWORD *)(v11 + 5088) )
    goto LABEL_25;
LABEL_32:
  v102 = -1LL;
  if ( v98 )
  {
    v74 = 0LL;
    if ( *(_DWORD *)(a1 + 3240) != -1 || *(_DWORD *)(a1 + 3224) != -1 || *(_DWORD *)(a1 + 3228) )
    {
      Pool = RaidAllocatePool(512LL, 56LL, 1413701970LL, *(_QWORD *)(a1 + 8));
      v74 = (_QWORD *)Pool;
      if ( Pool )
      {
        *(_OWORD *)Pool = 0LL;
        *(_OWORD *)(Pool + 16) = 0LL;
        *(_OWORD *)(Pool + 32) = 0LL;
        *(_QWORD *)(Pool + 48) = 0LL;
        *(_DWORD *)Pool = 300819165;
        if ( *(_DWORD *)(a1 + 3240) == -1 )
        {
          v75 = -1LL;
        }
        else
        {
          UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
          v74 = (_QWORD *)Pool;
          v75 = (unsigned int)(5000000 * *(_DWORD *)(a1 + 3240)) + UnbiasedInterruptTime;
        }
        v74[1] = v75;
        a3 |= 0x10u;
        v74[6] = a1;
        v74[5] = a2;
      }
    }
    if ( *(_BYTE *)(v6 + 2) == 40 )
    {
      v106 = v6;
      if ( v74 )
      {
        v74[2] = *(_QWORD *)(v6 + 96);
        *(_QWORD *)(v6 + 96) = v74;
      }
      *(_DWORD *)(v6 + 40) = *(_DWORD *)(a1 + 3232);
    }
    else
    {
      if ( v74 )
      {
        v74[2] = *(_QWORD *)(v6 + 48);
        *(_QWORD *)(v6 + 48) = v74;
      }
      *(_DWORD *)(v6 + 20) = *(_DWORD *)(a1 + 3232);
    }
  }
  v99 = KfRaiseIrql(2u);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4804LL) & 1) == 0
    || ProcNumber.Group >= (unsigned int)g_RaidPerfRedirectGroupCount
    || (Number = ProcNumber.Number,
        (unsigned int)ProcNumber.Number >= *((_DWORD *)g_RaidDPCRedirectionProcessors + ProcNumber.Group))
    || (v16 = (unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6)) << 7,
        *(_DWORD *)((char *)g_RaidPerProcessorState + v16 + 80)) )
  {
    v118 = 0;
  }
  else
  {
    _InterlockedExchange((volatile __int32 *)((char *)g_RaidPerProcessorState + v16 + 80), 2);
    v118 = 1;
  }
  v17 = v108;
  v18 = 0;
  *(_BYTE *)(a2 + 141) = -87;
  *(_QWORD *)(v17 + 32) = a1;
  v19 = *(_QWORD *)(a1 + 24);
  if ( v19 )
  {
    v20 = *(_QWORD *)(a1 + 504);
    if ( !v20 || !*(_QWORD *)(v19 + 5048) )
      goto LABEL_41;
    v38 = 0;
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( *(_DWORD *)(v20 + 8) )
    {
      v39 = -1LL;
      do
      {
        v40 = (KSPIN_LOCK *)(v20 + ((v38 + 1LL) << 6));
        KeAcquireInStackQueuedSpinLock(v40 + 5, &LockHandle);
        if ( (KSPIN_LOCK *)*v40 != v40 && *(_QWORD *)(*v40 + 40) < v39 )
          v39 = *(_QWORD *)(*v40 + 40);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        ++v38;
      }
      while ( v38 < *(_DWORD *)(v20 + 8) );
      v102 = v39;
      v6 = v111;
    }
    v41 = 0LL;
    if ( v102 != -1 )
      v41 = v102;
    if ( v41 && KeQueryUnbiasedInterruptTime() - v41 > *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5048LL) )
      v18 = 1;
    else
LABEL_41:
      v18 = 0;
  }
  if ( *(_BYTE *)(v6 + 2) == 40 )
  {
    v106 = v6;
    *(_DWORD *)(v6 + 4) = 0;
    *(_DWORD *)(v6 + 28) = 0;
  }
  inserted = RaidInsertDeviceQueue((int)a1 + 656, a2, a3, Number, v18, (__int64)&v107, (__int64)&v105, (__int64)&v104);
  if ( !inserted )
    goto LABEL_45;
  if ( v18 )
    ++*(_QWORD *)(a1 + 1968);
  if ( *(_BYTE *)(v6 + 2) != 40 )
    goto LABEL_106;
  v77 = v106;
  v78 = HIDWORD(v107);
  *(_DWORD *)(v106 + 4) = v107;
  *(_DWORD *)(v77 + 28) = v78;
  if ( !*(_DWORD *)(a1 + 2244) )
    goto LABEL_106;
  if ( *(_BYTE *)(v77 + 2) != 40 )
  {
    v79 = (char *)(v77 + 72);
    goto LABEL_227;
  }
  v79 = 0LL;
  if ( *(_DWORD *)(v77 + 20) )
    goto LABEL_227;
  v80 = *(_DWORD *)(v77 + 56);
  v81 = 0;
  if ( !v80 )
    goto LABEL_227;
  while ( 2 )
  {
    v82 = *(unsigned int *)(v77 + 4LL * v81 + 120);
    if ( (unsigned int)v82 < 0x80 )
      goto LABEL_224;
    v83 = *(unsigned int *)(v77 + 16);
    if ( (unsigned int)v82 >= (unsigned int)v83 )
      goto LABEL_224;
    v84 = (unsigned int)v82;
    v85 = *(_DWORD *)(v82 + v77) - 64;
    if ( v85 )
    {
      v86 = v85 - 1;
      if ( v86 )
      {
        if ( v86 == 1 && v84 + 40 <= v83 )
        {
          v79 = (char *)(v84 + v77 + 32);
          if ( !*(_DWORD *)(v84 + v77 + 12) )
            v79 = 0LL;
          goto LABEL_227;
        }
      }
      else if ( v84 + 56 <= v83 )
      {
        break;
      }
      goto LABEL_224;
    }
    if ( v84 + 40 > v83 )
    {
LABEL_224:
      if ( ++v81 >= v80 )
        goto LABEL_227;
      continue;
    }
    break;
  }
  if ( *(_BYTE *)(v84 + v77 + 10) )
    v79 = (char *)(v84 + v77 + 24);
LABEL_227:
  if ( v79 )
  {
    v87 = *v79;
    if ( !*(_DWORD *)(v77 + 20) && (((v87 - 8) & 0x5D) == 0 || v87 == 66 || v87 == 53 || v87 == -111) )
      *(_DWORD *)(v77 + 48) = v104;
  }
LABEL_106:
  switch ( v105 )
  {
    case 1:
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2200));
      break;
    case 4:
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2208));
      break;
    case 5:
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2216));
      break;
    case 6:
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2224));
      break;
  }
LABEL_45:
  if ( (a3 & 8) == 0 && *(_BYTE *)(a1 + 695) && *(char *)(a1 + 449) >= 0 )
    RaUnitRequestPowerUp(a1);
  if ( inserted )
    goto LABEL_108;
  *(_BYTE *)(a2 + 141) = -88;
  v22 = a2 + 120;
  v23 = *(_QWORD *)(a1 + 664);
  memset(&v109, 0, sizeof(v109));
  if ( *(int *)(v23 + 44) > 0 || *(int *)(v23 + 40) > 0 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v23, &v109);
    if ( *(int *)(v23 + 44) <= 0 && *(int *)(v23 + 40) <= 0 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v109);
      goto LABEL_50;
    }
    v97 = *(_QWORD **)(v23 + 16);
    if ( *v97 == v23 + 8 )
    {
      *(_QWORD *)v22 = v23 + 8;
      *(_QWORD *)(a2 + 128) = v97;
      *v97 = v22;
      *(_QWORD *)(v23 + 16) = v22;
      ++*(_DWORD *)(v23 + 24);
      if ( (*(_BYTE *)(a2 + 142) & 0x20) == 0 )
        goto LABEL_248;
LABEL_246:
      QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(v22, v88, v89);
      v95 = v23 + 264;
      v96 = *(_QWORD **)(v95 + 8);
      if ( *v96 == v95 )
      {
        *QosEntryForDeviceEntry = v95;
        QosEntryForDeviceEntry[1] = v96;
        *v96 = QosEntryForDeviceEntry;
        *(_QWORD *)(v95 + 8) = QosEntryForDeviceEntry;
        goto LABEL_248;
      }
    }
    goto LABEL_252;
  }
LABEL_50:
  v24 = *(_DWORD *)(v23 + 128);
  if ( v24 )
  {
    v25 = (unsigned int)(v24 * HIDWORD(KeGetPcr()[1].LockArray)) / *(_DWORD *)(v23 + 132);
    v26 = v25;
    IoResource = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v23 + 64) + 8 * v25));
    if ( IoResource )
      goto LABEL_52;
    v90 = *(_DWORD *)(v23 + 128);
    v91 = 1;
    v103 = 1;
    if ( v90 > 1 )
    {
      while ( !IoResource )
      {
        v92 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v23 + 64) + 8LL * ((v26 + v91) % v90)));
        v90 = *(_DWORD *)(v23 + 128);
        IoResource = v92;
        v91 = v103 + 1;
        v103 = v91;
        if ( v91 >= v90 )
        {
          if ( !IoResource )
            goto LABEL_53;
          break;
        }
      }
LABEL_52:
      LODWORD(IoResource->Next) = v26;
    }
LABEL_53:
    v22 = a2 + 120;
  }
  else
  {
    IoResource = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v23 + 64));
  }
  if ( IoResource
    || *(_DWORD *)(v23 + 136) < *(_DWORD *)(v23 + 144)
    && (RaAttemptHighWaterMarkIncrease(v23),
        (IoResource = (PSLIST_ENTRY)RaAllocateIoResource((PSLIST_HEADER)(v23 + 64))) != 0LL) )
  {
    if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v23 + 192)) >= *(_DWORD *)(v23 + 36) )
      *(_DWORD *)(v23 + 36) = *(_DWORD *)(v23 + 192);
    v28 = IoResource + 2;
    *(_QWORD *)&v113 = IoResource + 2;
    *((_QWORD *)&v113 + 1) = IoResource + 52;
    *((_QWORD *)&v112 + 1) = IoResource + 68;
    v29 = (void *)*((_QWORD *)&IoResource[49].Next + 1);
    v30 = *((_DWORD *)&IoResource[48].Next + 2);
    LOBYTE(IoResource[3].Next) &= 0x9Cu;
    Next = IoResource[51].Next;
    WORD1(IoResource[3].Next) = -1;
    v32 = (char)IoResource[3].Next;
    LODWORD(IoResource[2].Next) = 523124044;
    *((_QWORD *)&IoResource[2].Next + 1) = 0LL;
    BYTE4(IoResource[3].Next) = -1;
    *((_DWORD *)&IoResource[3].Next + 2) = 0;
    *((_QWORD *)&IoResource[8].Next + 1) = 0LL;
    IoResource[9].Next = 0LL;
    *((_QWORD *)&IoResource[10].Next + 1) = 0LL;
    *((_QWORD *)&IoResource[11].Next + 1) = 0LL;
    IoResource[11].Next = 0LL;
    IoResource[14].Next = 0LL;
    IoResource[12].Next = 0LL;
    *((_QWORD *)&IoResource[12].Next + 1) = 0LL;
    *((_QWORD *)&IoResource[15].Next + 1) = 0LL;
    IoResource[16].Next = 0LL;
    *((_QWORD *)&IoResource[9].Next + 1) = 0LL;
    *((_QWORD *)&IoResource[45].Next + 1) = 0LL;
    IoResource[46].Next = 0LL;
    *((_QWORD *)&IoResource[46].Next + 1) = 0LL;
    IoResource[47].Next = 0LL;
    *((_DWORD *)&IoResource[48].Next + 2) = v30;
    *((_QWORD *)&IoResource[49].Next + 1) = v29;
    if ( v29 )
    {
      memset(v29, 0, v30);
      v32 = (char)v28[1].Next;
    }
    BYTE1(v28[1].Next) &= 0xF0u;
    v28[48].Next = 0LL;
    LOBYTE(v28[1].Next) = v32 & 0x7F;
    *((_DWORD *)&v28[46].Next + 3) = 0;
    *((_DWORD *)&v28[48].Next + 2) = 0;
    v28[49].Next = Next;
    (*(void (__fastcall **)(_QWORD, __int64, __int128 *))(a1 + 648))(*(_QWORD *)(a1 + 640), a2, &v112);
    v33 = 1;
    goto LABEL_60;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v23, &v109);
  v93 = *(_QWORD **)(v23 + 16);
  if ( *v93 != v23 + 8 )
LABEL_252:
    __fastfail(3u);
  *(_QWORD *)v22 = v23 + 8;
  *(_QWORD *)(v22 + 8) = v93;
  *v93 = v22;
  *(_QWORD *)(v23 + 16) = v22;
  ++*(_DWORD *)(v23 + 24);
  *(_DWORD *)(v23 + 40) = 1;
  if ( (*(_BYTE *)(v22 + 22) & 0x20) != 0 )
    goto LABEL_246;
LABEL_248:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v109);
LABEL_108:
  v33 = 0;
LABEL_60:
  if ( v118 == 1
    && (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4804LL) & 1) != 0
    && ProcNumber.Group < (unsigned int)g_RaidPerfRedirectGroupCount
    && (unsigned int)ProcNumber.Number < *((_DWORD *)g_RaidDPCRedirectionProcessors + ProcNumber.Group) )
  {
    v34 = (unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6)) << 7;
    v35 = (char *)g_RaidPerProcessorState + 64;
    _InterlockedExchange((volatile __int32 *)((char *)g_RaidPerProcessorState + v34 + 80), 1);
    v36 = ExpInterlockedFlushSList((PSLIST_HEADER)&v35[v34]);
    while ( v36 )
    {
      v44 = (BYTE1(v36[-1].Next) & 1) == 0;
      v45 = v36 - 2;
      v36 = v36->Next;
      if ( !v44 )
      {
        RaidAdapterPoFxIdleComponent(*((_QWORD *)&v45[13].Next + 1), *((unsigned int *)&v45[46].Next + 3), 0LL);
        BYTE1(v45[1].Next) &= ~1u;
      }
      ((void (__fastcall *)(PSLIST_ENTRY))v45[41].Next)(v45);
    }
    _InterlockedExchange(
      (volatile __int32 *)g_RaidPerProcessorState
    + 32 * (unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6))
    + 20,
      0);
  }
  KeLowerIrql(v99);
  return v33;
}
