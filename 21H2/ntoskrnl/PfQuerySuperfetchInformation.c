/*
 * XREFs of PfQuerySuperfetchInformation @ 0x140654810
 * Callers:
 *     ExpQuerySystemInformation @ 0x140651070 (ExpQuerySystemInformation.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x140206338 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     SepPrivilegeCheck @ 0x14027C450 (SepPrivilegeCheck.c)
 *     ObFastDereferenceObject @ 0x14027C610 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x14027C6E0 (ObFastReferenceObject.c)
 *     RtlEqualSid @ 0x14027C9E0 (RtlEqualSid.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     ObfReferenceObject @ 0x14034B230 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     PfpMemoryListQuery @ 0x14037A180 (PfpMemoryListQuery.c)
 *     PfpMemoryRangesQuery @ 0x14037EE5C (PfpMemoryRangesQuery.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140627808 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     ProbeForWrite @ 0x1406547A0 (ProbeForWrite.c)
 *     SepFilterPrivilegeAudits @ 0x14069C548 (SepFilterPrivilegeAudits.c)
 *     PfpQueryGpuUtilization @ 0x1406BBE6C (PfpQueryGpuUtilization.c)
 *     PfGetCompletedTrace @ 0x1406CD47C (PfGetCompletedTrace.c)
 *     PfpPrivSourceEnum @ 0x1406CE0D0 (PfpPrivSourceEnum.c)
 *     PfpPfnPrioRequest @ 0x1406F2BB0 (PfpPfnPrioRequest.c)
 *     PfpVirtualQuery @ 0x140733638 (PfpVirtualQuery.c)
 *     PfpQueryScenarioInformation @ 0x140778A94 (PfpQueryScenarioInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BDF0 (ExRaiseDatatypeMisalignment.c)
 *     MmLogQueryCombineStats @ 0x1408D9C00 (MmLogQueryCombineStats.c)
 *     PfpQueryFileExtentsRequest @ 0x1408DFD0C (PfpQueryFileExtentsRequest.c)
 */

__int64 __fastcall PfQuerySuperfetchInformation(__int64 a1, __int128 *a2, int a3, unsigned __int8 a4, _DWORD *a5)
{
  _DWORD *v6; // rdi
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // ecx
  LUID v10; // rbx
  _KPROCESS *Process; // r15
  struct _KTHREAD *CurrentThread; // rdi
  struct _KTHREAD *v13; // r12
  struct _DMA_ADAPTER *v14; // rsi
  unsigned __int64 *v15; // r14
  struct _DMA_ADAPTER *v16; // rdi
  __int64 v17; // rcx
  char v18; // bl
  struct _DMA_ADAPTER *v19; // rax
  void *v20; // r14
  __int64 v23; // rcx
  PSE_EXPORTS v24; // r15
  struct _KTHREAD *v25; // rcx
  __int64 v26; // rcx
  _QWORD *v27; // rcx
  __int64 v28; // rcx
  struct _KTHREAD *v29; // rsi
  signed __int64 *p_Lock; // r15
  _QWORD *v31; // rdi
  __int128 v32; // [rsp+48h] [rbp-F0h] BYREF
  volatile void *Address[2]; // [rsp+58h] [rbp-E0h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+70h] [rbp-C8h]
  struct _DMA_ADAPTER *v36; // [rsp+78h] [rbp-C0h]
  struct _LIST_ENTRY *Flink; // [rsp+80h] [rbp-B8h]
  __int128 v38; // [rsp+90h] [rbp-A8h]
  __int64 v39; // [rsp+A0h] [rbp-98h]
  volatile void *v40; // [rsp+A8h] [rbp-90h]
  __int128 v41; // [rsp+B0h] [rbp-88h]
  __int64 v42; // [rsp+C0h] [rbp-78h]
  int v43; // [rsp+C8h] [rbp-70h]
  int v44[2]; // [rsp+D0h] [rbp-68h] BYREF
  LUID v45; // [rsp+D8h] [rbp-60h] BYREF
  int v46; // [rsp+E0h] [rbp-58h]
  __int128 v47; // [rsp+E8h] [rbp-50h] BYREF
  __int128 v48; // [rsp+F8h] [rbp-40h]

  v6 = a5;
  v39 = (__int64)a5;
  v47 = 0LL;
  v48 = 0LL;
  v40 = 0LL;
  if ( a3 != 32 )
    return (unsigned int)-1073741820;
  v7 = 0;
  v32 = *a2;
  *(_OWORD *)Address = a2[1];
  if ( (_QWORD)v32 != 0x6B7568430000002DLL )
    return (unsigned int)-1073741811;
  v8 = DWORD2(v32);
  if ( DWORD2(v32) <= 0x1C )
  {
    v9 = 268501248;
    if ( _bittest(&v9, DWORD2(v32)) )
      goto LABEL_29;
  }
  v10 = SeProfileSingleProcessPrivilege;
  v35 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  CurrentThread = KeGetCurrentThread();
  Flink = Process[1].Header.WaitListHead.Flink;
  if ( CurrentThread )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v13 = KeGetCurrentThread();
      --v13->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v14 = (struct _DMA_ADAPTER *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObject(v14);
        LODWORD(v35) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
      }
      else
      {
        v14 = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&CurrentThread[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&CurrentThread[1].WaitBlockList);
      KeLeaveCriticalRegionThread((__int64)v13);
    }
    else
    {
      v14 = 0LL;
    }
    DmaAdapter = v14;
  }
  else
  {
    v14 = 0LL;
    DmaAdapter = 0LL;
  }
  v15 = &Process[1].Affinity.Bitmap[5];
  v16 = (struct _DMA_ADAPTER *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v16 )
  {
    v29 = KeGetCurrentThread();
    --v29->KernelApcDisable;
    p_Lock = (signed __int64 *)&Process[1].Header.Lock;
    ExAcquirePushLockSharedEx((ULONG_PTR)p_Lock, 0LL);
    v16 = (struct _DMA_ADAPTER *)ObFastReferenceObjectLocked(v15);
    if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Lock);
    KeAbPostRelease((ULONG_PTR)p_Lock);
    KeLeaveCriticalRegionThread((__int64)v29);
    v14 = DmaAdapter;
  }
  v36 = v16;
  if ( SeTokenLeakTracking )
  {
    if ( v16 )
    {
      _InterlockedIncrement((volatile signed __int32 *)&v16[71].DmaOperations->AllocateCommonBufferVector + 1);
      if ( v16 == (struct _DMA_ADAPTER *)SepTokenLeakToken )
        __debugbreak();
      v14 = DmaAdapter;
      v16 = v36;
    }
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)&v14[71].DmaOperations->AllocateCommonBufferVector + 1);
      v14 = DmaAdapter;
      if ( DmaAdapter == (PADAPTER_OBJECT)SepTokenLeakToken )
        __debugbreak();
      v16 = v36;
    }
  }
  v44[0] = 1;
  v44[1] = 1;
  v45 = v10;
  v46 = 0;
  if ( a4 )
  {
    if ( !v14 )
    {
      v17 = (__int64)v16;
      goto LABEL_19;
    }
    if ( (int)v35 >= 2 )
    {
      v17 = (__int64)v14;
LABEL_19:
      v18 = SepPrivilegeCheck(v17, (__int64)&v45, 1u, 1, a4);
      goto LABEL_20;
    }
    v18 = 0;
  }
  else
  {
    v18 = 1;
  }
LABEL_20:
  if ( a4 )
  {
    v19 = v14 ? v14 : v16;
    v20 = *(void **)v19[9].DmaOperations;
    if ( !RtlEqualSid(SeLocalSystemSid, v20) )
    {
      if ( (v24 = SeExports, !RtlEqualSid(SeExports->SeNetworkServiceSid, v20))
        && !RtlEqualSid(v24->SeLocalServiceSid, v20)
        || (unsigned __int8)SepFilterPrivilegeAudits(1LL, v44) )
      {
        SepAdtPrivilegedServiceAuditAlarm((int)&DmaAdapter, &SeSubsystemName, 0LL, (__int64)v14, (__int64)v16, v44, v18);
        v16 = v36;
        v14 = DmaAdapter;
      }
    }
  }
  if ( SeTokenLeakTracking )
  {
    if ( v16 )
    {
      _InterlockedDecrement((volatile signed __int32 *)&v16[71].DmaOperations->AllocateCommonBufferVector + 1);
      if ( v36 == (struct _DMA_ADAPTER *)SepTokenLeakToken )
        __debugbreak();
      v14 = DmaAdapter;
    }
    if ( v14 )
    {
      _InterlockedDecrement((volatile signed __int32 *)&v14[71].DmaOperations->AllocateCommonBufferVector + 1);
      if ( DmaAdapter == (PADAPTER_OBJECT)SepTokenLeakToken )
        __debugbreak();
    }
  }
  ObFastDereferenceObject((signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5], v36);
  v36 = 0LL;
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  DmaAdapter = 0LL;
  if ( !v18 )
    return (unsigned int)-1073741790;
  v8 = DWORD2(v32);
  v7 = 0;
  v6 = (_DWORD *)v39;
LABEL_29:
  if ( v8 == 6 )
  {
    return (unsigned int)PfpPfnPrioRequest(&v32, a4, v6);
  }
  else
  {
    switch ( v8 )
    {
      case 1:
        return (unsigned int)PfGetCompletedTrace(Address[0], LODWORD(Address[1]), a4, v6);
      case 2:
        if ( LODWORD(Address[1]) != 28 )
          goto LABEL_107;
        v25 = KeGetCurrentThread();
        --v25->KernelApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)qword_140C502B8, 0LL);
        v41 = xmmword_140C50104;
        v42 = qword_140C50114;
        v43 = dword_140C5011C;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_140C502B8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)qword_140C502B8);
        KeAbPostRelease((ULONG_PTR)qword_140C502B8);
        KeLeaveCriticalRegion();
        if ( a4 )
        {
          v26 = (__int64)Address[0];
          if ( ((__int64)Address[0] & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( Address[0] >= (volatile void *)0x7FFFFFFF0000LL )
            v26 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v26 = *(_BYTE *)v26;
          *(_BYTE *)(v26 + 27) = *(_BYTE *)(v26 + 27);
        }
        v27 = Address[0];
        *(_OWORD *)Address[0] = v41;
        v27[2] = v42;
        *((_DWORD *)v27 + 6) = v43;
        *v6 = 28;
        v7 = 0;
        break;
      case 8:
        return (unsigned int)PfpPrivSourceEnum(&v32, a4, v6);
      case 9:
        if ( LODWORD(Address[1]) != 4 )
          goto LABEL_107;
        if ( a4 )
        {
          v28 = (__int64)Address[0];
          if ( ((__int64)Address[0] & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( Address[0] >= (volatile void *)0x7FFFFFFF0000LL )
            v28 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v28 = *(_BYTE *)v28;
          *(_BYTE *)(v28 + 3) = *(_BYTE *)(v28 + 3);
          v7 = 0;
        }
        *(_DWORD *)Address[0] = dword_140CEC350;
        *v6 = 4;
        break;
      case 12:
        return (unsigned int)PfpQueryScenarioInformation(&v32, a4, v6);
      case 16:
        return (unsigned int)PfpMemoryListQuery((__int64)&v32, a4, v6);
      case 17:
        return (unsigned int)PfpMemoryRangesQuery((__int64)&v32, a4, v6);
      case 20:
        if ( LODWORD(Address[1]) != 16 )
          goto LABEL_107;
        *(_QWORD *)&v38 = 0LL;
        if ( a4 )
        {
          v23 = (__int64)Address[0];
          if ( ((__int64)Address[0] & 7) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( Address[0] >= (volatile void *)0x7FFFFFFF0000LL )
            v23 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v23 = *(_BYTE *)v23;
          *(_BYTE *)(v23 + 15) = *(_BYTE *)(v23 + 15);
          v7 = 0;
        }
        v38 = *(_OWORD *)Address[0];
        if ( (_DWORD)v38 == 1 )
        {
          *((_QWORD *)&v38 + 1) = qword_140C50430;
          *(_OWORD *)Address[0] = v38;
          *v6 = 16;
        }
        else
        {
          v7 = -1073741735;
        }
        break;
      case 23:
        return (unsigned int)PfpVirtualQuery(&v32, a4, v6);
      case 24:
        if ( LODWORD(Address[1]) == 16 )
        {
          MmLogQueryCombineStats(0LL, 0LL, &v47);
          v31 = Address[0];
          if ( a4 )
            ProbeForWrite(Address[0], 0x10uLL, 4u);
          v40 = Address[0];
          if ( *(_DWORD *)Address[0] == 1 )
          {
            *((_DWORD *)Address[0] + 1) = DWORD1(v47);
            v31[1] = *((_QWORD *)&v48 + 1);
          }
          else
          {
            v7 = -1073741811;
          }
        }
        else
        {
LABEL_107:
          v7 = -1073741306;
        }
        break;
      case 27:
        return (unsigned int)PfpQueryFileExtentsRequest(&v32, a4, v6);
      case 28:
        return (unsigned int)PfpQueryGpuUtilization(&v32, a4, v6);
      default:
        v7 = -1073741821;
        break;
    }
  }
  return v7;
}
