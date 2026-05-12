/*
 * XREFs of RaUnitStartIo @ 0x1C0005020
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitClaimIrp @ 0x1C0005540 (RaidUnitClaimIrp.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00060E0 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidUnitReleaseIrp @ 0x1C00087C8 (RaidUnitReleaseIrp.c)
 *     StorRemoveIoGatewayItem @ 0x1C0009CC0 (StorRemoveIoGatewayItem.c)
 *     RaidCompleteRequestEx @ 0x1C0009F40 (RaidCompleteRequestEx.c)
 *     IsUntaggedRequest @ 0x1C000B908 (IsUntaggedRequest.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000C340 (RaUnitReleaseRemoveLock.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000C6C0 (RaidSrbStatusToNtStatus.c)
 *     RaidProcessDeferredItemsWorker @ 0x1C001079C (RaidProcessDeferredItemsWorker.c)
 *     RaidDeleteDeviceQueueEntry @ 0x1C00138F8 (RaidDeleteDeviceQueueEntry.c)
 *     RaidDmaFlushDmaBuffers @ 0x1C001BCDC (RaidDmaFlushDmaBuffers.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D730 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterAcquireCryptoKeyResources @ 0x1C002A2EC (RaidAdapterAcquireCryptoKeyResources.c)
 *     RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x1C002D870 (RaidAdapterScatterGatherExecuteBidirectionalRequest.c)
 *     WPP_SF_qqD @ 0x1C00326A0 (WPP_SF_qqD.c)
 *     RaidIsUnresponsiveBlockedCmd @ 0x1C0035594 (RaidIsUnresponsiveBlockedCmd.c)
 *     RaidSrbIsPowerRequired @ 0x1C0035790 (RaidSrbIsPowerRequired.c)
 *     RaidNtStatusToSrbStatus @ 0x1C00444AC (RaidNtStatusToSrbStatus.c)
 *     McTemplateK0zqjuuujssstsxx_EtwWriteTransfer @ 0x1C004573C (McTemplateK0zqjuuujssstsxx_EtwWriteTransfer.c)
 *     RaidUnitEndDeviceBusy @ 0x1C0049878 (RaidUnitEndDeviceBusy.c)
 */

char __fastcall RaUnitStartIo(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  char v5; // r12
  unsigned __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rdi
  char v10; // dl
  int v11; // edi
  __int64 v12; // r15
  unsigned int v13; // r10d
  unsigned int v14; // r11d
  __int64 v15; // rcx
  unsigned __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ecx
  char *v19; // rcx
  USHORT CurrentNodeNumber; // ax
  PSLIST_ENTRY v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  int v24; // ebp
  __int64 v25; // rdi
  _QWORD *v26; // rdi
  __int64 v27; // r15
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // rdx
  int v32; // ebp
  bool v33; // bp
  __int64 v34; // rcx
  __int64 v35; // rax
  void (__fastcall *v36)(__int64, _QWORD, bool); // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdi
  int v40; // r14d
  int v41; // ebp
  unsigned int v42; // r12d
  int v43; // ecx
  bool v44; // r14
  __int64 *v45; // r15
  __int64 v46; // rcx
  __int64 v47; // rcx
  int v48; // ecx
  _QWORD *v49; // rdi
  char v50; // cl
  char v51; // cl
  char v52; // al
  __int64 v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // r12
  __int64 v56; // rcx
  unsigned int v57; // edi
  int v58; // r12d
  unsigned int v59; // ebp
  char IsPowerRequired; // al
  bool v61; // zf
  LARGE_INTEGER v62; // r14
  const char *v63; // r14
  BOOL v64; // r14d
  unsigned int v65; // edi
  unsigned int HighestNodeNumber; // r8d
  int v67; // edi
  char v68; // al
  struct _KDPC *v69; // rcx
  int v71; // [rsp+38h] [rbp-C0h]
  int v72; // [rsp+90h] [rbp-68h]
  __int64 v73; // [rsp+98h] [rbp-60h]
  __int64 v74; // [rsp+A0h] [rbp-58h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+A8h] [rbp-50h] BYREF
  char v76; // [rsp+100h] [rbp+8h]
  int v77; // [rsp+108h] [rbp+10h]
  int v79; // [rsp+118h] [rbp+20h]

  v3 = *(_QWORD *)(a2 + 184);
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v72 = 0;
  v7 = 0LL;
  v8 = *(_QWORD *)(v3 + 8);
  v9 = *(_QWORD *)(v4 + 24);
  v79 = 0;
  v73 = 0LL;
  *(_BYTE *)(v8 + 3) = 0;
  v76 = 0;
  if ( *(int *)(v9 + 4264) <= 0 && ExQueryDepthSList((PSLIST_HEADER)(v9 + 1248)) )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)(v9 + 4264)) == 1 )
      RaidProcessDeferredItemsWorker(v9 + 1152, *(_QWORD *)(v9 + 8));
    _InterlockedDecrement((volatile signed __int32 *)(v9 + 4264));
  }
  v10 = *(_BYTE *)(v8 + 2);
  if ( v10 != 40 )
  {
    v12 = *(_QWORD *)(v8 + 40);
    v5 = *(_BYTE *)(v8 + 72);
    v11 = *(_DWORD *)(v8 + 12);
    v77 = v11;
    v76 = v5;
    if ( v12 )
      *(_QWORD *)(v8 + 40) = 0LL;
    goto LABEL_14;
  }
  v11 = *(_DWORD *)(v8 + 24);
  v12 = *(_QWORD *)(v8 + 104);
  v77 = v11;
  v73 = v8;
  if ( *(_DWORD *)(v8 + 20) )
    goto LABEL_14;
  v13 = *(_DWORD *)(v8 + 56);
  v14 = 0;
  if ( !v13 )
    goto LABEL_14;
  while ( 1 )
  {
    v15 = *(unsigned int *)(v8 + 4LL * v14 + 120);
    if ( (unsigned int)v15 < 0x80 )
      goto LABEL_89;
    v16 = *(unsigned int *)(v8 + 16);
    if ( (unsigned int)v15 > (unsigned int)v16 )
      goto LABEL_89;
    v17 = (unsigned int)v15;
    v18 = *(_DWORD *)(v15 + v8);
    if ( v18 == 64 )
    {
      if ( v17 + 40 <= v16 )
      {
        if ( !*(_BYTE *)(v17 + v8 + 10) )
          goto LABEL_14;
LABEL_11:
        v19 = (char *)(v17 + v8 + 24);
        goto LABEL_12;
      }
      goto LABEL_89;
    }
    v48 = v18 - 65;
    if ( v48 )
      break;
    if ( v17 + 56 <= v16 )
    {
      if ( !*(_BYTE *)(v17 + v8 + 10) )
        goto LABEL_14;
      goto LABEL_11;
    }
LABEL_89:
    if ( ++v14 >= v13 )
      goto LABEL_14;
  }
  if ( v48 != 1 || v17 + 40 > v16 )
    goto LABEL_89;
  v19 = (char *)(v17 + v8 + 32);
  if ( !*(_DWORD *)(v17 + v8 + 12) )
    v19 = 0LL;
LABEL_12:
  if ( v19 )
  {
    v5 = *v19;
    v76 = *v19;
  }
LABEL_14:
  if ( (*(_BYTE *)(a2 + 142) & 0x20) != 0 )
  {
    if ( v10 == 40 )
    {
      v49 = *(_QWORD **)(v8 + 96);
      v73 = v8;
      *(_QWORD *)(v8 + 96) = v49[2];
    }
    else
    {
      v49 = *(_QWORD **)(v8 + 48);
      *(_QWORD *)(v8 + 48) = v49[2];
    }
    if ( v49[1] != -1LL )
      v7 = KeQueryUnbiasedInterruptTime() + (unsigned int)(5000000 * *(_DWORD *)(v4 + 3240)) - v49[1];
    ExFreePoolWithTag(v49, 0x54436152u);
    v11 = v77;
  }
  if ( (*(_BYTE *)(v4 + 450) & 2) == 0 || !(unsigned __int8)RaidIsUnresponsiveBlockedCmd(v8) )
  {
    CurrentNodeNumber = KeGetCurrentNodeNumber();
    v21 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v4 + 512) + ((unsigned __int64)CurrentNodeNumber << 6)));
    if ( !v21 )
    {
      v57 = 0;
      v58 = 0;
      v59 = KeQueryHighestNodeNumber() + 1;
      while ( !v59 )
      {
LABEL_110:
        ++v58;
        v57 = 0;
        if ( v58 == 10 )
        {
          v5 = v76;
          v22 = -1;
          v11 = v77;
          goto LABEL_18;
        }
      }
      while ( 1 )
      {
        v21 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v4 + 512) + ((unsigned __int64)v57 << 6)));
        if ( v21 )
          break;
        if ( ++v57 >= v59 )
          goto LABEL_110;
      }
      v5 = v76;
      v11 = v77;
    }
    v22 = *((_DWORD *)&v21->Next + 2);
LABEL_18:
    v79 = 1;
    *a3 = v22;
    v24 = RaidUnitClaimIrp(v4, a2, v12, a3);
    if ( v24 < 0 )
    {
      LOBYTE(v38) = RaUnitReleaseRemoveLock(v4);
      goto LABEL_48;
    }
    v72 = 1;
    if ( !*(_DWORD *)(*(_QWORD *)(v4 + 24) + 2220LL) && v5 != 18 && v5 != -96 )
    {
      LOBYTE(v23) = 37;
      *(_BYTE *)(v8 + 3) = 37;
      LODWORD(v38) = RaidSrbStatusToNtStatus(v23);
      v24 = v38;
      goto LABEL_48;
    }
    if ( *(char *)(v4 + 449) < 0 && *(_DWORD *)(v4 + 492) != 1 )
    {
      IsPowerRequired = RaidSrbIsPowerRequired(v4, v8);
      if ( IsPowerRequired && (v11 & 0x100000) != 0 )
      {
        v24 = -1073741823;
        *(_BYTE *)(v8 + 3) = 36;
        goto LABEL_104;
      }
    }
    v25 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
    if ( *(_BYTE *)(v25 + 2) == 40 )
      v26 = *(_QWORD **)(v25 + 96);
    else
      v26 = *(_QWORD **)(v25 + 48);
    v26[96] = v12;
    v26[82] = RaidUnitCompleteRequest;
    if ( v7 || *(_BYTE *)(v8 + 2) != 40 )
    {
      v27 = v73;
      goto LABEL_27;
    }
    v27 = v8;
    v73 = v8;
    if ( !*(_DWORD *)(v8 + 4) && !*(_DWORD *)(v8 + 28) )
    {
LABEL_27:
      v26[86] = v7;
      if ( v7 >= DeviceQueueIoWaitThreshold )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 2232)) != 1 )
          goto LABEL_29;
        v63 = "Start";
      }
      else
      {
        if ( !_InterlockedExchange64((volatile __int64 *)(v4 + 2232), 0LL) )
        {
LABEL_29:
          v28 = *(_QWORD *)(v4 + 24);
          if ( *(_QWORD *)(v28 + 5736) )
          {
            LODWORD(v38) = RaidAdapterAcquireCryptoKeyResources(v28, v26);
            v24 = v38;
            if ( (_DWORD)v38 == 259 )
              return v38;
            if ( (int)v38 < 0 )
            {
              if ( *(_BYTE *)(v8 + 2) == 40 )
              {
                *(_BYTE *)(v27 + 3) = 48;
                *(_DWORD *)(v27 + 44) = v38;
              }
              else
              {
                *(_BYTE *)(v8 + 3) = 48;
                *(_DWORD *)(v8 + 64) = v38;
              }
              goto LABEL_48;
            }
          }
          v29 = *(_QWORD *)(v4 + 24);
          if ( *(_BYTE *)(v29 + 4514) )
          {
            v30 = v26[21];
            v31 = *(unsigned __int8 *)(v30 + 2);
            if ( (_BYTE)v31 == 40 )
              v32 = *(_DWORD *)(v30 + 24);
            else
              v32 = *(_DWORD *)(v30 + 12);
            if ( (*(_BYTE *)(v29 + 4515) & 4) != 0 )
            {
              v33 = (v32 & 0x40) != 0;
              if ( v26[13] )
              {
                if ( v29 != -712 )
                {
                  v34 = *(_QWORD *)(v29 + 712);
                  if ( v34 )
                  {
                    v35 = *(_QWORD *)(v34 + 8);
                    if ( v35 )
                    {
                      if ( *(int *)(v29 + 740) >= 3
                        && (v36 = *(void (__fastcall **)(__int64, _QWORD, bool))(v35 + 240)) != 0LL )
                      {
                        v36(v34, v26[13], v33);
                      }
                      else
                      {
                        KeFlushIoBuffers(v26[13], v33);
                      }
                    }
                  }
                }
              }
              v37 = v26[17];
              if ( v37 )
                RaidDmaFlushDmaBuffers(v29 + 712, v37, v33);
            }
            else
            {
              if ( v26[17] )
              {
                LODWORD(v38) = RaidAdapterScatterGatherExecuteBidirectionalRequest(*(_QWORD *)(v4 + 24), v26);
                goto LABEL_44;
              }
              if ( (v32 & 0xC0) != 0 )
              {
                if ( (_BYTE)v31 == 40 )
                {
                  v40 = *(_DWORD *)(v30 + 24);
                  v42 = *(_DWORD *)(v30 + 60);
                  v41 = *(_DWORD *)(v30 + 20);
                }
                else
                {
                  v40 = *(_DWORD *)(v30 + 12);
                  v41 = *(unsigned __int8 *)(v30 + 2);
                  v42 = *(_DWORD *)(v30 + 16);
                }
                LODWORD(v38) = *(_DWORD *)(v29 + 532);
                v43 = v40 & 0x40;
                v44 = (v40 & 0x80) != 0;
                if ( (v38 & 8) == 0 && (*(_BYTE *)(v29 + 109) & 2) == 0 )
                {
                  LOBYTE(v31) = v43 != 0;
                  LOBYTE(v38) = KeFlushIoBuffers(v26[13], v31);
                }
                if ( v41 == 23 )
                {
                  v38 = v26[13];
                  if ( *(_DWORD *)(v38 + 40) > v42 )
                    v42 = *(_DWORD *)(v38 + 40);
                }
                v45 = (__int64 *)(v29 + 712);
                if ( v29 != -712
                  && (v46 = *v45) != 0
                  && (v38 = *(_QWORD *)(v46 + 8)) != 0
                  && (v38 = *(_QWORD *)(v38 + 112)) != 0 )
                {
                  LOBYTE(v71) = v44;
                  LODWORD(v38) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, void (__fastcall *)(__int64, __int64, __int64, _QWORD *), _QWORD *, int, _QWORD *, int))v38)(
                                   v46,
                                   *(_QWORD *)(v29 + 8),
                                   v26[13],
                                   v26[23],
                                   v42,
                                   RaidpAdapterContinueScatterGather,
                                   v26,
                                   v71,
                                   v26 + 29,
                                   424);
                  v24 = v38;
                }
                else
                {
                  v24 = -1073741811;
                }
                if ( v24 != -1073741789 )
                  goto LABEL_45;
                if ( v29 == -712
                  || (v47 = *v45) == 0
                  || (v38 = *(_QWORD *)(v47 + 8)) == 0
                  || (v38 = *(_QWORD *)(v38 + 88)) == 0 )
                {
                  v24 = -1073741811;
                  goto LABEL_45;
                }
                LOBYTE(v71) = v44;
                LODWORD(v38) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, void (__fastcall *)(__int64, __int64, __int64, _QWORD *), _QWORD *, int))v38)(
                                 v47,
                                 *(_QWORD *)(v29 + 8),
                                 v26[13],
                                 v26[23],
                                 v42,
                                 RaidpAdapterContinueScatterGather,
                                 v26,
                                 v71);
LABEL_44:
                v24 = v38;
LABEL_45:
                if ( v24 < 0 )
                  goto LABEL_104;
                v39 = *(_QWORD *)(v4 + 24);
                if ( *(int *)(v39 + 4264) <= 0 )
                {
                  LOWORD(v38) = ExQueryDepthSList((PSLIST_HEADER)(v39 + 1248));
                  if ( (_WORD)v38 )
                  {
                    LODWORD(v38) = _InterlockedIncrement((volatile signed __int32 *)(v39 + 4264));
                    if ( (_DWORD)v38 == 1 )
                      LOBYTE(v38) = RaidProcessDeferredItemsWorker(v39 + 1152, *(_QWORD *)(v39 + 8));
                    _InterlockedDecrement((volatile signed __int32 *)(v39 + 4264));
                  }
                }
LABEL_48:
                if ( v24 < 0 )
                  goto LABEL_104;
                return v38;
              }
            }
          }
          LODWORD(v38) = RaidAdapterPostScatterGatherExecute(v29, v26);
          goto LABEL_44;
        }
        v63 = "End";
      }
      if ( (byte_1C0068845 & 0x40) != 0 )
        McTemplateK0zqjuuujssstsxx_EtwWriteTransfer(
          v4 + 169,
          v4 + 160,
          v4 + 1976,
          *(_QWORD *)(*(_QWORD *)(v4 + 24) + 4864LL),
          *(_DWORD *)(*(_QWORD *)(v4 + 24) + 56LL),
          *(_QWORD *)(v4 + 24) + 5192LL,
          *(_BYTE *)(v4 + 96),
          *(_BYTE *)(v4 + 97),
          *(_BYTE *)(v4 + 98),
          v4 + 1976,
          v4 + 160,
          v4 + 169,
          v4 + 186,
          *(_BYTE *)(v4 + 450) & 1,
          (__int64)v63);
      goto LABEL_29;
    }
    LODWORD(v74) = *(_DWORD *)(v8 + 4);
    HIDWORD(v74) = *(_DWORD *)(v8 + 28);
    v61 = StorEtwLoggingEnabled == 0;
    *(_DWORD *)(v8 + 4) = 0;
    *(_DWORD *)(v8 + 28) = 0;
    if ( v61 )
    {
      if ( !g_StorpTraceLoggingPerformanceEnabled )
      {
        v62.QuadPart = 0LL;
        goto LABEL_129;
      }
      if ( !UseQPCTime )
        goto LABEL_127;
      v61 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
    }
    else
    {
      v61 = UseQPCTime == 0;
    }
    if ( !v61 )
    {
      v62 = KeQueryPerformanceCounter(&PerformanceFrequency);
LABEL_129:
      v7 = v62.QuadPart - v74;
      if ( UseQPCTime && (g_StorpTraceLoggingPerformanceHighResolutionTimer || StorEtwLoggingEnabled) )
        v7 = 10000000 * v7 / PerformanceFrequency.QuadPart;
      goto LABEL_27;
    }
LABEL_127:
    v62.QuadPart = KeQueryUnbiasedInterruptTime();
    goto LABEL_129;
  }
  RaUnitReleaseRemoveLock(v4);
  v50 = *(_BYTE *)(v8 + 3);
  if ( *(_BYTE *)(v8 + 2) == 40 )
  {
    v51 = ((v50 >> 7) & 0x80) + 56;
  }
  else
  {
    v52 = 56;
    if ( v50 < 0 )
      v52 = -72;
    v51 = v52;
  }
  *(_BYTE *)(v8 + 3) = v51;
  v24 = -1073740534;
  _InterlockedIncrement64((volatile signed __int64 *)(v4 + 2104));
LABEL_104:
  v53 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_BYTE *)(v53 + 2) == 40 )
  {
    v54 = *(unsigned int *)(v53 + 20);
    v55 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
    v56 = *(unsigned int *)(v53 + 24);
  }
  else
  {
    v56 = *(unsigned int *)(v53 + 12);
    v54 = *(unsigned __int8 *)(v53 + 2);
    v55 = v73;
  }
  v64 = IsUntaggedRequest(v56, v54) != 0;
  if ( v79 )
  {
    v65 = *a3;
    HighestNodeNumber = KeQueryHighestNodeNumber();
    if ( v65 / *(_DWORD *)(v4 + 584) < HighestNodeNumber + 1 )
      HighestNodeNumber = v65 / *(_DWORD *)(v4 + 584);
    ExpInterlockedPushEntrySList(
      (PSLIST_HEADER)(*(_QWORD *)(v4 + 512) + ((unsigned __int64)HighestNodeNumber << 6)),
      (PSLIST_ENTRY)(*(_QWORD *)(v4 + 576) + 16LL * v65));
  }
  RaidDeleteDeviceQueueEntry(v4 + 656, v64);
  if ( v72 )
    RaidUnitReleaseIrp(a2);
  v67 = (unsigned __int8)StorRemoveIoGatewayItem(*(PKSPIN_LOCK *)(v4 + 664));
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( (*(_BYTE *)(v53 + 3) & 0x3F) == 0 )
  {
    v68 = RaidNtStatusToSrbStatus((unsigned int)v24);
    *(_BYTE *)(v53 + 3) = v68;
    if ( (v68 & 0x3F) == 0x30 )
    {
      if ( *(_BYTE *)(v53 + 2) == 40 )
        *(_DWORD *)(v55 + 44) = -1073741670;
      else
        *(_DWORD *)(v53 + 64) = -1073741670;
    }
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      24LL,
      &WPP_315ac634f457316aea96af95ee1292c6_Traceguids,
      *(_QWORD *)(v4 + 8),
      a2,
      *(_DWORD *)(a2 + 48));
  }
  RaidUnitEndDeviceBusy(v4, a2);
  RaidCompleteRequestEx((PIRP)a2);
  if ( v67 )
    v69 = (struct _KDPC *)(*(_QWORD *)(v4 + 24) + 1856LL);
  else
    v69 = (struct _KDPC *)(v4 + 1184);
  LOBYTE(v38) = KeInsertQueueDpc(v69, 0LL, 0LL);
  return v38;
}
