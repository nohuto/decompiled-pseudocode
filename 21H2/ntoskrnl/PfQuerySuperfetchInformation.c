/*
 * XREFs of PfQuerySuperfetchInformation @ 0x140649630
 * Callers:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     SepPrivilegeCheck @ 0x14026A3F0 (SepPrivilegeCheck.c)
 *     ObFastDereferenceObject @ 0x14026A5B0 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x14026A680 (ObFastReferenceObject.c)
 *     RtlEqualSid @ 0x14026A980 (RtlEqualSid.c)
 *     ObFastReferenceObjectLocked @ 0x1402AAC68 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     PfpMemoryListQuery @ 0x140379CD0 (PfpMemoryListQuery.c)
 *     PfpMemoryRangesQuery @ 0x14037E9AC (PfpMemoryRangesQuery.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PfpQueryGpuUtilization @ 0x14061AEEC (PfpQueryGpuUtilization.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     PfGetCompletedTrace @ 0x14067C10C (PfGetCompletedTrace.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140693918 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepFilterPrivilegeAudits @ 0x140693E40 (SepFilterPrivilegeAudits.c)
 *     PfpPrivSourceEnum @ 0x1406A53B4 (PfpPrivSourceEnum.c)
 *     PfpPfnPrioRequest @ 0x140709F90 (PfpPfnPrioRequest.c)
 *     PfpVirtualQuery @ 0x1407337F8 (PfpVirtualQuery.c)
 *     PfpQueryScenarioInformation @ 0x140778C54 (PfpQueryScenarioInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     MmLogQueryCombineStats @ 0x1408D9D60 (MmLogQueryCombineStats.c)
 *     PfpQueryFileExtentsRequest @ 0x1408DFE6C (PfpQueryFileExtentsRequest.c)
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
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 *v18; // r14
  struct _DMA_ADAPTER *v19; // rdi
  __int64 v20; // rcx
  char v21; // bl
  struct _DMA_ADAPTER *v22; // rax
  void *v23; // r14
  __int64 v26; // rcx
  PSE_EXPORTS v27; // r15
  struct _KTHREAD *v28; // rcx
  __int64 v29; // rcx
  _QWORD *v30; // rcx
  __int64 v31; // rcx
  struct _KTHREAD *v32; // rsi
  signed __int64 *p_Lock; // r15
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  _QWORD *v37; // rdi
  __int128 v38; // [rsp+48h] [rbp-F0h] BYREF
  volatile void *Address[2]; // [rsp+58h] [rbp-E0h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v41; // [rsp+70h] [rbp-C8h]
  struct _DMA_ADAPTER *v42; // [rsp+78h] [rbp-C0h]
  struct _LIST_ENTRY *Flink; // [rsp+80h] [rbp-B8h]
  __int128 v44; // [rsp+90h] [rbp-A8h]
  __int64 v45; // [rsp+A0h] [rbp-98h]
  volatile void *v46; // [rsp+A8h] [rbp-90h]
  __int128 v47; // [rsp+B0h] [rbp-88h]
  __int64 v48; // [rsp+C0h] [rbp-78h]
  int v49; // [rsp+C8h] [rbp-70h]
  _DWORD v50[2]; // [rsp+D0h] [rbp-68h] BYREF
  LUID v51; // [rsp+D8h] [rbp-60h] BYREF
  int v52; // [rsp+E0h] [rbp-58h]
  __int128 v53; // [rsp+E8h] [rbp-50h] BYREF
  __int128 v54; // [rsp+F8h] [rbp-40h]

  v6 = a5;
  v45 = (__int64)a5;
  v53 = 0LL;
  v54 = 0LL;
  v46 = 0LL;
  if ( a3 != 32 )
    return (unsigned int)-1073741820;
  v7 = 0;
  v38 = *a2;
  *(_OWORD *)Address = a2[1];
  if ( (_QWORD)v38 != 0x6B7568430000002DLL )
    return (unsigned int)-1073741811;
  v8 = DWORD2(v38);
  if ( DWORD2(v38) <= 0x1C )
  {
    v9 = 268501248;
    if ( _bittest(&v9, DWORD2(v38)) )
      goto LABEL_29;
  }
  v10 = SeProfileSingleProcessPrivilege;
  v41 = 0LL;
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
        LODWORD(v41) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
      }
      else
      {
        v14 = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&CurrentThread[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&CurrentThread[1].WaitBlockList);
      KeLeaveCriticalRegionThread((__int64)v13, v15, v16, v17);
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
  v18 = &Process[1].Affinity.Bitmap[5];
  v19 = (struct _DMA_ADAPTER *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v19 )
  {
    v32 = KeGetCurrentThread();
    --v32->KernelApcDisable;
    p_Lock = (signed __int64 *)&Process[1].Header.Lock;
    ExAcquirePushLockSharedEx((ULONG_PTR)p_Lock, 0LL);
    v19 = (struct _DMA_ADAPTER *)ObFastReferenceObjectLocked(v18);
    if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Lock);
    KeAbPostRelease((ULONG_PTR)p_Lock);
    KeLeaveCriticalRegionThread((__int64)v32, v34, v35, v36);
    v14 = DmaAdapter;
  }
  v42 = v19;
  if ( SeTokenLeakTracking )
  {
    if ( v19 )
    {
      _InterlockedIncrement((volatile signed __int32 *)&v19[71].DmaOperations->AllocateCommonBufferVector + 1);
      if ( v19 == (struct _DMA_ADAPTER *)SepTokenLeakToken )
        __debugbreak();
      v14 = DmaAdapter;
      v19 = v42;
    }
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)&v14[71].DmaOperations->AllocateCommonBufferVector + 1);
      v14 = DmaAdapter;
      if ( DmaAdapter == (PADAPTER_OBJECT)SepTokenLeakToken )
        __debugbreak();
      v19 = v42;
    }
  }
  v50[0] = 1;
  v50[1] = 1;
  v51 = v10;
  v52 = 0;
  if ( a4 )
  {
    if ( !v14 )
    {
      v20 = (__int64)v19;
      goto LABEL_19;
    }
    if ( (int)v41 >= 2 )
    {
      v20 = (__int64)v14;
LABEL_19:
      v21 = SepPrivilegeCheck(v20, (__int64)&v51, 1u, 1, a4);
      goto LABEL_20;
    }
    v21 = 0;
  }
  else
  {
    v21 = 1;
  }
LABEL_20:
  if ( a4 )
  {
    v22 = v14 ? v14 : v19;
    v23 = *(void **)v22[9].DmaOperations;
    if ( !RtlEqualSid(SeLocalSystemSid, v23) )
    {
      if ( (v27 = SeExports, !RtlEqualSid(SeExports->SeNetworkServiceSid, v23))
        && !RtlEqualSid(v27->SeLocalServiceSid, v23)
        || (unsigned __int8)SepFilterPrivilegeAudits(1LL, v50) )
      {
        SepAdtPrivilegedServiceAuditAlarm(
          (unsigned int)&DmaAdapter,
          (unsigned int)&SeSubsystemName,
          0,
          (_DWORD)v14,
          (__int64)v19,
          (__int64)v50,
          v21);
        v19 = v42;
        v14 = DmaAdapter;
      }
    }
  }
  if ( SeTokenLeakTracking )
  {
    if ( v19 )
    {
      _InterlockedDecrement((volatile signed __int32 *)&v19[71].DmaOperations->AllocateCommonBufferVector + 1);
      if ( v42 == (struct _DMA_ADAPTER *)SepTokenLeakToken )
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
  ObFastDereferenceObject((signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5], v42);
  v42 = 0LL;
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  DmaAdapter = 0LL;
  if ( !v21 )
    return (unsigned int)-1073741790;
  v8 = DWORD2(v38);
  v7 = 0;
  v6 = (_DWORD *)v45;
LABEL_29:
  if ( v8 == 6 )
  {
    return (unsigned int)PfpPfnPrioRequest(&v38, a4, v6);
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
        v28 = KeGetCurrentThread();
        --v28->KernelApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)qword_140C502F8, 0LL);
        v47 = xmmword_140C50144;
        v48 = qword_140C50154;
        v49 = dword_140C5015C;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_140C502F8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)qword_140C502F8);
        KeAbPostRelease((ULONG_PTR)qword_140C502F8);
        KeLeaveCriticalRegion();
        if ( a4 )
        {
          v29 = (__int64)Address[0];
          if ( ((__int64)Address[0] & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( Address[0] >= (volatile void *)0x7FFFFFFF0000LL )
            v29 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v29 = *(_BYTE *)v29;
          *(_BYTE *)(v29 + 27) = *(_BYTE *)(v29 + 27);
        }
        v30 = Address[0];
        *(_OWORD *)Address[0] = v47;
        v30[2] = v48;
        *((_DWORD *)v30 + 6) = v49;
        *v6 = 28;
        v7 = 0;
        break;
      case 8:
        return (unsigned int)PfpPrivSourceEnum(&v38, a4, v6);
      case 9:
        if ( LODWORD(Address[1]) != 4 )
          goto LABEL_107;
        if ( a4 )
        {
          v31 = (__int64)Address[0];
          if ( ((__int64)Address[0] & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( Address[0] >= (volatile void *)0x7FFFFFFF0000LL )
            v31 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v31 = *(_BYTE *)v31;
          *(_BYTE *)(v31 + 3) = *(_BYTE *)(v31 + 3);
          v7 = 0;
        }
        *(_DWORD *)Address[0] = dword_140CEC390;
        *v6 = 4;
        break;
      case 12:
        return (unsigned int)PfpQueryScenarioInformation(&v38, a4, v6);
      case 16:
        return (unsigned int)PfpMemoryListQuery((__int64)&v38, a4, v6);
      case 17:
        return (unsigned int)PfpMemoryRangesQuery((__int64)&v38, a4, v6);
      case 20:
        if ( LODWORD(Address[1]) != 16 )
          goto LABEL_107;
        *(_QWORD *)&v44 = 0LL;
        if ( a4 )
        {
          v26 = (__int64)Address[0];
          if ( ((__int64)Address[0] & 7) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( Address[0] >= (volatile void *)0x7FFFFFFF0000LL )
            v26 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v26 = *(_BYTE *)v26;
          *(_BYTE *)(v26 + 15) = *(_BYTE *)(v26 + 15);
          v7 = 0;
        }
        v44 = *(_OWORD *)Address[0];
        if ( (_DWORD)v44 == 1 )
        {
          *((_QWORD *)&v44 + 1) = qword_140C50470;
          *(_OWORD *)Address[0] = v44;
          *v6 = 16;
        }
        else
        {
          v7 = -1073741735;
        }
        break;
      case 23:
        return (unsigned int)PfpVirtualQuery(&v38, a4, v6);
      case 24:
        if ( LODWORD(Address[1]) == 16 )
        {
          MmLogQueryCombineStats(0LL, 0LL, &v53);
          v37 = Address[0];
          if ( a4 )
            ProbeForWrite(Address[0], 0x10uLL, 4u);
          v46 = Address[0];
          if ( *(_DWORD *)Address[0] == 1 )
          {
            *((_DWORD *)Address[0] + 1) = DWORD1(v53);
            v37[1] = *((_QWORD *)&v54 + 1);
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
        return (unsigned int)PfpQueryFileExtentsRequest(&v38, a4, v6);
      case 28:
        return (unsigned int)PfpQueryGpuUtilization((__int64)&v38, a4, v6);
      default:
        v7 = -1073741821;
        break;
    }
  }
  return v7;
}
