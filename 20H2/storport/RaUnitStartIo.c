/*
 * XREFs of RaUnitStartIo @ 0x1C0003A20
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitClaimIrp @ 0x1C0004450 (RaidUnitClaimIrp.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0004FF0 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidSrbStatusToNtStatus @ 0x1C0007340 (RaidSrbStatusToNtStatus.c)
 *     RaidUnitReleaseIrp @ 0x1C00077B8 (RaidUnitReleaseIrp.c)
 *     StorRemoveIoGatewayItem @ 0x1C0008D50 (StorRemoveIoGatewayItem.c)
 *     RaidCompleteRequestEx @ 0x1C0008FD0 (RaidCompleteRequestEx.c)
 *     IsUntaggedRequest @ 0x1C000ABC8 (IsUntaggedRequest.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000B600 (RaUnitReleaseRemoveLock.c)
 *     RaidProcessDeferredItemsWorker @ 0x1C00110AC (RaidProcessDeferredItemsWorker.c)
 *     RaidDeleteDeviceQueueEntry @ 0x1C0014E58 (RaidDeleteDeviceQueueEntry.c)
 *     RaidDmaFlushDmaBuffers @ 0x1C001C97C (RaidDmaFlushDmaBuffers.c)
 *     RaidUpdateZoneIoMetadata @ 0x1C001D968 (RaidUpdateZoneIoMetadata.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F5F0 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterAcquireCryptoKeyResources @ 0x1C002B13C (RaidAdapterAcquireCryptoKeyResources.c)
 *     RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x1C002E6D0 (RaidAdapterScatterGatherExecuteBidirectionalRequest.c)
 *     WPP_SF_qqD @ 0x1C0033520 (WPP_SF_qqD.c)
 *     RaidIsUnresponsiveBlockedCmd @ 0x1C0036404 (RaidIsUnresponsiveBlockedCmd.c)
 *     RaidSrbIsPowerRequired @ 0x1C0036600 (RaidSrbIsPowerRequired.c)
 *     RaidNtStatusToSrbStatus @ 0x1C00453B0 (RaidNtStatusToSrbStatus.c)
 *     McTemplateK0zqjuuujssstsxx_EtwWriteTransfer @ 0x1C0046640 (McTemplateK0zqjuuujssstsxx_EtwWriteTransfer.c)
 *     RaidUnitEndDeviceBusy @ 0x1C004A688 (RaidUnitEndDeviceBusy.c)
 */

char __fastcall RaUnitStartIo(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  char v5; // r12
  unsigned __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rbx
  char v10; // bl
  int v11; // edx
  unsigned int v12; // r11d
  unsigned int v13; // r10d
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r8
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  char *v21; // r9
  unsigned __int64 v22; // rcx
  int v23; // eax
  _QWORD *v24; // rbx
  char v25; // cl
  char v26; // cl
  char v27; // al
  int v28; // ebp
  USHORT CurrentNodeNumber; // ax
  PSLIST_ENTRY v30; // rax
  int v31; // r14d
  unsigned int v32; // ebp
  unsigned int v33; // ebx
  int v34; // eax
  __int64 v35; // r14
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rbx
  _QWORD *v39; // rbx
  __int64 v40; // r12
  bool v41; // zf
  LARGE_INTEGER v42; // r15
  const char *v43; // r14
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // r15
  __int64 v49; // rcx
  __int64 v50; // r14
  __int64 v51; // rcx
  __int64 v52; // rdx
  int v53; // esi
  __int64 v54; // rax
  int v55; // r15d
  unsigned int v56; // esi
  int v57; // ebp
  int v58; // ecx
  bool v59; // r15
  __int64 *v60; // r12
  __int64 v61; // rcx
  __int64 v62; // rcx
  bool v63; // si
  __int64 v64; // rcx
  __int64 v65; // rax
  void (__fastcall *v66)(__int64, _QWORD, bool); // rax
  __int64 v67; // rdx
  __int64 v68; // rbx
  BOOL v69; // r14d
  unsigned int v70; // ebx
  unsigned int HighestNodeNumber; // r8d
  unsigned __int8 v72; // al
  int v73; // ebx
  char v74; // al
  struct _KDPC *v75; // rcx
  int v77; // [rsp+38h] [rbp-C0h]
  __int64 v78; // [rsp+90h] [rbp-68h]
  __int64 v79; // [rsp+98h] [rbp-60h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v81; // [rsp+A8h] [rbp-50h]
  int v82; // [rsp+100h] [rbp+8h]
  int v83; // [rsp+108h] [rbp+10h]
  int v85; // [rsp+118h] [rbp+20h]

  v3 = *(_QWORD *)(a2 + 184);
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v85 = 0;
  v7 = 0LL;
  v8 = *(_QWORD *)(v3 + 8);
  v9 = *(_QWORD *)(v4 + 24);
  v83 = 0;
  v78 = 0LL;
  *(_BYTE *)(v8 + 3) = 0;
  if ( *(int *)(v9 + 4264) <= 0 && ExQueryDepthSList((PSLIST_HEADER)(v9 + 1248)) )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)(v9 + 4264)) == 1 )
      RaidProcessDeferredItemsWorker(v9 + 1152, *(_QWORD *)(v9 + 8));
    _InterlockedDecrement((volatile signed __int32 *)(v9 + 4264));
  }
  v10 = *(_BYTE *)(v8 + 2);
  if ( v10 != 40 )
  {
    v23 = *(_DWORD *)(v8 + 12);
    v5 = *(_BYTE *)(v8 + 72);
    v81 = *(_QWORD *)(v8 + 40);
    v82 = v23;
    if ( v81 )
      *(_QWORD *)(v8 + 40) = 0LL;
    goto LABEL_29;
  }
  v11 = *(_DWORD *)(v8 + 24);
  v81 = *(_QWORD *)(v8 + 104);
  v78 = v8;
  v82 = v11;
  if ( *(_DWORD *)(v8 + 20) )
    goto LABEL_29;
  v12 = *(_DWORD *)(v8 + 56);
  v13 = 0;
  if ( !v12 )
    goto LABEL_29;
  while ( 1 )
  {
    v14 = *(unsigned int *)(v8 + 4LL * v13 + 120);
    if ( (unsigned int)v14 < 0x80 )
      goto LABEL_21;
    v15 = *(unsigned int *)(v8 + 16);
    if ( (unsigned int)v14 > (unsigned int)v15 )
      goto LABEL_21;
    v16 = v14 + v8;
    v17 = (unsigned int)v14;
    v18 = *(_DWORD *)(v14 + v8) - 64;
    if ( !v18 )
      break;
    v19 = v18 - 1;
    if ( !v19 )
    {
      v22 = v17 + 56;
      goto LABEL_20;
    }
    if ( v19 == 1 && v17 + 40 <= v15 )
    {
      v20 = *(_DWORD *)(v16 + 12);
      v21 = (char *)(v16 + 32);
      if ( !v20 )
        v21 = 0LL;
      goto LABEL_25;
    }
LABEL_21:
    if ( ++v13 >= v12 )
      goto LABEL_29;
  }
  v22 = v17 + 40;
LABEL_20:
  if ( v22 > v15 )
    goto LABEL_21;
  if ( !*(_BYTE *)(v16 + 10) )
    goto LABEL_29;
  v21 = (char *)(v16 + 24);
LABEL_25:
  if ( v21 )
    v5 = *v21;
LABEL_29:
  if ( (*(_BYTE *)(a2 + 142) & 0x20) != 0 )
  {
    if ( v10 == 40 )
    {
      v24 = *(_QWORD **)(v8 + 96);
      v78 = v8;
      *(_QWORD *)(v8 + 96) = v24[2];
    }
    else
    {
      v24 = *(_QWORD **)(v8 + 48);
      *(_QWORD *)(v8 + 48) = v24[2];
    }
    if ( v24[1] != -1LL )
      v7 = KeQueryUnbiasedInterruptTime() + (unsigned int)(5000000 * *(_DWORD *)(v4 + 3240)) - v24[1];
    ExFreePoolWithTag(v24, 0x54436152u);
  }
  if ( (*(_BYTE *)(v4 + 450) & 2) != 0 && (unsigned __int8)RaidIsUnresponsiveBlockedCmd(v8) )
  {
    RaUnitReleaseRemoveLock(v4);
    v25 = *(_BYTE *)(v8 + 3);
    if ( *(_BYTE *)(v8 + 2) == 40 )
    {
      v26 = ((v25 >> 7) & 0x80) + 56;
    }
    else
    {
      v27 = 56;
      if ( v25 < 0 )
        v27 = -72;
      v26 = v27;
    }
    *(_BYTE *)(v8 + 3) = v26;
    v28 = -1073740534;
    _InterlockedIncrement64((volatile signed __int64 *)(v4 + 2104));
LABEL_98:
    RaidUpdateZoneIoMetadata(v4, a2, 0LL);
LABEL_99:
    v46 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
    if ( *(_BYTE *)(v46 + 2) == 40 )
    {
      v47 = *(unsigned int *)(v46 + 20);
      v48 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
      v49 = *(unsigned int *)(v46 + 24);
    }
    else
    {
      v49 = *(unsigned int *)(v46 + 12);
      v47 = *(unsigned __int8 *)(v46 + 2);
      v48 = v78;
    }
    v69 = IsUntaggedRequest(v49, v47) != 0;
    if ( v83 )
    {
      v70 = *a3;
      HighestNodeNumber = KeQueryHighestNodeNumber();
      if ( v70 / *(_DWORD *)(v4 + 584) < HighestNodeNumber + 1 )
        HighestNodeNumber = v70 / *(_DWORD *)(v4 + 584);
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*(_QWORD *)(v4 + 512) + ((unsigned __int64)HighestNodeNumber << 6)),
        (PSLIST_ENTRY)(*(_QWORD *)(v4 + 576) + 16LL * v70));
    }
    RaidDeleteDeviceQueueEntry(v4 + 656, v69);
    if ( v85 )
      RaidUnitReleaseIrp(a2);
    v72 = StorRemoveIoGatewayItem(*(PKSPIN_LOCK *)(v4 + 664));
    *(_QWORD *)(a2 + 56) = 0LL;
    v73 = v72;
    if ( (*(_BYTE *)(v46 + 3) & 0x3F) == 0 )
    {
      v74 = RaidNtStatusToSrbStatus((unsigned int)v28);
      *(_BYTE *)(v46 + 3) = v74;
      if ( (v74 & 0x3F) == 0x30 )
      {
        if ( *(_BYTE *)(v46 + 2) == 40 )
          *(_DWORD *)(v48 + 44) = -1073741670;
        else
          *(_DWORD *)(v46 + 64) = -1073741670;
      }
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        24LL,
        &WPP_af1ac7e2487a3dc41c42fd4890c580b6_Traceguids,
        *(_QWORD *)(v4 + 8),
        a2,
        *(_DWORD *)(a2 + 48));
    }
    RaidUnitEndDeviceBusy(v4, a2);
    RaidCompleteRequestEx((PIRP)a2);
    if ( v73 )
      v75 = (struct _KDPC *)(*(_QWORD *)(v4 + 24) + 1856LL);
    else
      v75 = (struct _KDPC *)(v4 + 1184);
    LOBYTE(v54) = KeInsertQueueDpc(v75, 0LL, 0LL);
    return v54;
  }
  CurrentNodeNumber = KeGetCurrentNodeNumber();
  v30 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v4 + 512) + ((unsigned __int64)CurrentNodeNumber << 6)));
  if ( !v30 )
  {
    v31 = 0;
    v32 = KeQueryHighestNodeNumber() + 1;
    while ( 1 )
    {
      v33 = 0;
      if ( v32 )
        break;
LABEL_49:
      if ( ++v31 == 10 )
      {
        v34 = -1;
        goto LABEL_52;
      }
    }
    while ( 1 )
    {
      v30 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(v4 + 512) + ((unsigned __int64)v33 << 6)));
      if ( v30 )
        break;
      if ( ++v33 >= v32 )
        goto LABEL_49;
    }
  }
  v34 = *((_DWORD *)&v30->Next + 2);
LABEL_52:
  v35 = v81;
  v36 = v81;
  v83 = 1;
  *a3 = v34;
  v28 = RaidUnitClaimIrp(v4, a2, v36, a3);
  if ( v28 < 0 )
  {
    RaUnitReleaseRemoveLock(v4);
    goto LABEL_98;
  }
  v85 = 1;
  if ( !*(_DWORD *)(*(_QWORD *)(v4 + 24) + 2220LL) && v5 != 18 && v5 != -96 )
  {
    LOBYTE(v37) = 37;
    *(_BYTE *)(v8 + 3) = 37;
    v28 = RaidSrbStatusToNtStatus(v37);
    goto LABEL_98;
  }
  if ( *(char *)(v4 + 449) < 0
    && *(_DWORD *)(v4 + 492) != 1
    && (unsigned __int8)RaidSrbIsPowerRequired(v4, v8)
    && (v82 & 0x100000) != 0 )
  {
    v28 = -1073741823;
    *(_BYTE *)(v8 + 3) = 36;
    goto LABEL_98;
  }
  v38 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_BYTE *)(v38 + 2) == 40 )
    v39 = *(_QWORD **)(v38 + 96);
  else
    v39 = *(_QWORD **)(v38 + 48);
  v39[96] = v35;
  v39[82] = RaidUnitCompleteRequest;
  if ( v7 || *(_BYTE *)(v8 + 2) != 40 )
  {
    v40 = v78;
  }
  else
  {
    v40 = v8;
    v78 = v8;
    if ( *(_DWORD *)(v8 + 4) || *(_DWORD *)(v8 + 28) )
    {
      v41 = StorEtwLoggingEnabled == 0;
      LODWORD(v79) = *(_DWORD *)(v8 + 4);
      HIDWORD(v79) = *(_DWORD *)(v8 + 28);
      *(_DWORD *)(v8 + 28) = 0;
      *(_DWORD *)(v8 + 4) = 0;
      if ( !v41 )
      {
        v41 = UseQPCTime == 0;
        goto LABEL_72;
      }
      if ( g_StorpTraceLoggingPerformanceEnabled )
      {
        if ( !UseQPCTime )
          goto LABEL_77;
        v41 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
LABEL_72:
        if ( v41 )
LABEL_77:
          v42.QuadPart = KeQueryUnbiasedInterruptTime();
        else
          v42 = KeQueryPerformanceCounter(&PerformanceFrequency);
      }
      else
      {
        v42.QuadPart = 0LL;
      }
      v7 = v42.QuadPart - v79;
      if ( UseQPCTime && (g_StorpTraceLoggingPerformanceHighResolutionTimer || StorEtwLoggingEnabled) )
        v7 = 10000000 * v7 / PerformanceFrequency.QuadPart;
    }
  }
  v39[86] = v7;
  if ( v7 < DeviceQueueIoWaitThreshold )
  {
    if ( _InterlockedExchange64((volatile __int64 *)(v4 + 2232), 0LL) )
    {
      v43 = "End";
      goto LABEL_89;
    }
  }
  else if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 2232)) == 1 )
  {
    v43 = "Start";
LABEL_89:
    if ( (byte_1C0069845 & 0x40) != 0 )
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
        (__int64)v43);
  }
  v44 = *(_QWORD *)(v4 + 24);
  if ( *(_QWORD *)(v44 + 5736) )
  {
    v45 = RaidAdapterAcquireCryptoKeyResources(v44, v39);
    v28 = v45;
    if ( v45 == 259 )
    {
      v28 = 0;
      goto LABEL_98;
    }
    if ( v45 < 0 )
    {
      if ( *(_BYTE *)(v8 + 2) == 40 )
      {
        *(_BYTE *)(v40 + 3) = 48;
        *(_DWORD *)(v40 + 44) = v45;
      }
      else
      {
        *(_BYTE *)(v8 + 3) = 48;
        *(_DWORD *)(v8 + 64) = v45;
      }
      goto LABEL_98;
    }
  }
  v50 = *(_QWORD *)(v4 + 24);
  if ( !*(_BYTE *)(v50 + 4514) )
    goto LABEL_141;
  v51 = v39[21];
  v52 = *(unsigned __int8 *)(v51 + 2);
  if ( (_BYTE)v52 == 40 )
    v53 = *(_DWORD *)(v51 + 24);
  else
    v53 = *(_DWORD *)(v51 + 12);
  if ( (*(_BYTE *)(v50 + 4515) & 4) != 0 )
  {
    v63 = (v53 & 0x40) != 0;
    if ( v39[13] )
    {
      if ( v50 != -728 )
      {
        v64 = *(_QWORD *)(v50 + 728);
        if ( v64 )
        {
          v65 = *(_QWORD *)(v64 + 8);
          if ( v65 )
          {
            if ( *(int *)(v50 + 756) >= 3 && (v66 = *(void (__fastcall **)(__int64, _QWORD, bool))(v65 + 240)) != 0LL )
              v66(v64, v39[13], v63);
            else
              KeFlushIoBuffers(v39[13], v63);
          }
        }
      }
    }
    v67 = v39[17];
    if ( v67 )
      RaidDmaFlushDmaBuffers(v50 + 728, v67, v63);
    goto LABEL_141;
  }
  if ( v39[17] )
  {
    LODWORD(v54) = RaidAdapterScatterGatherExecuteBidirectionalRequest(*(_QWORD *)(v4 + 24), v39);
    goto LABEL_142;
  }
  if ( (v53 & 0xC0) == 0 )
  {
LABEL_141:
    LODWORD(v54) = RaidAdapterPostScatterGatherExecute(v50, v39);
LABEL_142:
    v28 = v54;
    goto LABEL_143;
  }
  if ( (_BYTE)v52 == 40 )
  {
    v55 = *(_DWORD *)(v51 + 24);
    v56 = *(_DWORD *)(v51 + 60);
    v57 = *(_DWORD *)(v51 + 20);
  }
  else
  {
    v55 = *(_DWORD *)(v51 + 12);
    v57 = *(unsigned __int8 *)(v51 + 2);
    v56 = *(_DWORD *)(v51 + 16);
  }
  LODWORD(v54) = *(_DWORD *)(v50 + 548);
  v58 = v55 & 0x40;
  v59 = (v55 & 0x80) != 0;
  if ( (v54 & 8) == 0 && (*(_BYTE *)(v50 + 109) & 2) == 0 )
  {
    LOBYTE(v52) = v58 != 0;
    LOBYTE(v54) = KeFlushIoBuffers(v39[13], v52);
  }
  if ( v57 == 23 )
  {
    v54 = v39[13];
    if ( *(_DWORD *)(v54 + 40) > v56 )
      v56 = *(_DWORD *)(v54 + 40);
  }
  v60 = (__int64 *)(v50 + 728);
  if ( v50 != -728 && (v61 = *v60) != 0 && (v54 = *(_QWORD *)(v61 + 8)) != 0 && (v54 = *(_QWORD *)(v54 + 112)) != 0 )
  {
    LOBYTE(v77) = v59;
    LODWORD(v54) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, void (__fastcall *)(__int64, __int64, __int64, _QWORD *), _QWORD *, int, _QWORD *, int))v54)(
                     v61,
                     *(_QWORD *)(v50 + 8),
                     v39[13],
                     v39[23],
                     v56,
                     RaidpAdapterContinueScatterGather,
                     v39,
                     v77,
                     v39 + 29,
                     424);
    v28 = v54;
  }
  else
  {
    v28 = -1073741811;
  }
  if ( v28 == -1073741789 )
  {
    if ( v50 != -728 )
    {
      v62 = *v60;
      if ( *v60 )
      {
        v54 = *(_QWORD *)(v62 + 8);
        if ( v54 )
        {
          v54 = *(_QWORD *)(v54 + 88);
          if ( v54 )
          {
            LOBYTE(v77) = v59;
            LODWORD(v54) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, void (__fastcall *)(__int64, __int64, __int64, _QWORD *), _QWORD *, int))v54)(
                             v62,
                             *(_QWORD *)(v50 + 8),
                             v39[13],
                             v39[23],
                             v56,
                             RaidpAdapterContinueScatterGather,
                             v39,
                             v77);
            goto LABEL_142;
          }
        }
      }
    }
    v28 = -1073741811;
  }
LABEL_143:
  if ( v28 < 0 )
    goto LABEL_99;
  v68 = *(_QWORD *)(v4 + 24);
  if ( *(int *)(v68 + 4264) <= 0 )
  {
    LOWORD(v54) = ExQueryDepthSList((PSLIST_HEADER)(v68 + 1248));
    if ( (_WORD)v54 )
    {
      LODWORD(v54) = _InterlockedIncrement((volatile signed __int32 *)(v68 + 4264));
      if ( (_DWORD)v54 == 1 )
        LOBYTE(v54) = RaidProcessDeferredItemsWorker(v68 + 1152, *(_QWORD *)(v68 + 8));
      _InterlockedDecrement((volatile signed __int32 *)(v68 + 4264));
    }
  }
  return v54;
}
