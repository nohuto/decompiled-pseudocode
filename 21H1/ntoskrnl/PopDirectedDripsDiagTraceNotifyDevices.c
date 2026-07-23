/*
 * XREFs of PopDirectedDripsDiagTraceNotifyDevices @ 0x1405771C0
 * Callers:
 *     PopDirectedDripsResumeDevices @ 0x1408DEFE0 (PopDirectedDripsResumeDevices.c)
 *     PopDirectedDripsSuspendDevices @ 0x1408DF1D8 (PopDirectedDripsSuspendDevices.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C70 (EtwWriteEx.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     IoDiagTraceDirectedDripsCandidateDevices @ 0x1408B0178 (IoDiagTraceDirectedDripsCandidateDevices.c)
 */

char __fastcall PopDirectedDripsDiagTraceNotifyDevices(unsigned __int8 a1, int a2, __int64 a3)
{
  $C774EFD68449142D8271B1EC1EB7FB26 *v3; // rax
  int v4; // esi
  _BYTE *v5; // rdi
  PVOID *v6; // rdx
  _BYTE *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  char *v10; // r8
  PVOID *v11; // r10
  unsigned __int64 v12; // r9
  unsigned int v13; // r11d
  signed __int64 v14; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v17; // r14
  unsigned int v18; // r8d
  __int64 v19; // rdi
  bool v20; // zf
  __int64 v21; // rcx
  int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  _DWORD *v28; // r9
  REGHANDLE v29; // rbx
  int v31; // [rsp+4Ch] [rbp-35h] BYREF
  int v32; // [rsp+50h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-29h] BYREF
  int *v34; // [rsp+68h] [rbp-19h]
  __int64 v35; // [rsp+70h] [rbp-11h]
  int *v36; // [rsp+78h] [rbp-9h]
  __int64 v37; // [rsp+80h] [rbp-1h]
  __int64 *v38; // [rsp+88h] [rbp+7h]
  __int64 v39; // [rsp+90h] [rbp+Fh]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+5Fh] BYREF
  int v41; // [rsp+F0h] [rbp+6Fh] BYREF
  __int64 v42; // [rsp+F8h] [rbp+77h] BYREF

  v3 = ($C774EFD68449142D8271B1EC1EB7FB26 *)&retaddr;
  v42 = a3;
  v41 = a2;
  v4 = a1;
  v32 = 0;
  if ( a2 >= 0 )
  {
    if ( a1 )
    {
      LOBYTE(v3) = IoDiagTraceDirectedDripsCandidateDevices();
      a2 = v41;
    }
    if ( a2 >= 0 )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopDirectedDripsDiagLock, 0LL);
      v5 = (_BYTE *)MEMORY[0xFFFFF78000000008];
      v6 = (PVOID *)PopDirectedDripsDiagSessionContext;
      if ( PopDirectedDripsDiagSessionContext != &PopDirectedDripsDiagSessionContext )
      {
        do
        {
          if ( (_BYTE)v4 )
          {
            v7 = v6[6];
            v8 = 7LL;
            v6[6] = 0LL;
            v9 = 10LL;
          }
          else
          {
            v7 = v6[15];
            v8 = 16LL;
            v6[15] = 0LL;
            v9 = 19LL;
          }
          v10 = (char *)&v6[v9];
          v11 = &v6[v8];
          if ( *((_DWORD *)v6 + 9) == dword_140C1EBA8 && v7 && ((_DWORD)v6[5] & 0x100) == 0 )
          {
            v12 = v5 - v7;
            v13 = 0;
            v14 = (char *)PopFxAccountingBucketLimits - v10;
            do
            {
              if ( v12 >= *(_QWORD *)&v10[v14] && v12 < PopFxAccountingBucketLimits[v13 + 1] )
              {
                ++*(_DWORD *)v11;
                *(_QWORD *)v10 += v12;
              }
              ++v13;
              v11 = (PVOID *)((char *)v11 + 4);
              v10 += 8;
            }
            while ( v13 < 5 );
            if ( (_BYTE)v4 )
              v6[15] = v5;
          }
          v6 = (PVOID *)*v6;
        }
        while ( v6 != &PopDirectedDripsDiagSessionContext );
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&PopDirectedDripsDiagLock);
      CurrentThread = KeGetCurrentThread();
      v31 = 0;
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopDirectedDripsDiagLock) == 1 )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      --CurrentThread->SpecialApcDisable;
      v17 = ++CurrentThread->AbAllocationRegionCount;
      v18 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v20 = !_BitScanReverse((unsigned int *)&v21, v18);
        if ( v20 )
          goto LABEL_32;
        v19 = (__int64)&CurrentThread->LockEntries[v21];
        v18 &= ~(1 << v21);
        if ( (*(_BYTE *)(v19 + 26) & 1) != 0
          && (*(_DWORD *)(v19 + 32) & 1) == 0
          && (*(_QWORD *)(v19 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopDirectedDripsDiagLock & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v19 + 40) == SessionId )
        {
          *(_BYTE *)(v19 + 26) &= ~1u;
          if ( *(_QWORD *)(v19 + 32) )
            break;
        }
      }
      if ( !v19 )
      {
LABEL_32:
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&PopDirectedDripsDiagLock, SessionId, 0LL);
        goto LABEL_39;
      }
      *(_BYTE *)(v19 + 32) |= 2u;
      if ( *(__int64 *)(v19 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v19);
      v22 = *(_DWORD *)(v19 + 88) & 0x1FFFF;
      v23 = *(_DWORD *)(v19 + 88) & 0xFFFE0000;
      *(_BYTE *)(v19 + 25) &= ~1u;
      v31 = v22;
      *(_DWORD *)(v19 + 88) = v23;
      *(_QWORD *)(v19 + 32) = 0LL;
      v24 = (signed __int64)(v19 - (unsigned __int64)CurrentThread->LockEntries) / 96;
      if ( v17 == 1 )
        CurrentThread->AbEntrySummary |= 1 << v24;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v24);
LABEL_39:
      --CurrentThread->AbAllocationRegionCount;
      LOBYTE(v3) = KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&PopDirectedDripsDiagLock, &v31);
      v20 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v20 )
      {
        v3 = &CurrentThread->152;
        if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v3->ApcState.ApcListHead[0].Flink != v3 )
          LOBYTE(v3) = KiCheckForKernelApcDelivery(v26, v25, v27, v28);
      }
    }
  }
  if ( PopDiagHandleRegistered )
  {
    v29 = PopDiagHandle;
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_NOTIFY_DEVICES);
    if ( (_BYTE)v3 )
    {
      v32 = v4;
      UserData.Ptr = (ULONGLONG)&PopWnfCsEnterScenarioId;
      *(_QWORD *)&UserData.Size = 1LL;
      v34 = &v32;
      v35 = 4LL;
      v36 = &v41;
      v37 = 4LL;
      v38 = &v42;
      v39 = 8LL;
      LOBYTE(v3) = EtwWriteEx(v29, &POP_ETW_EVENT_DIRECTED_DRIPS_NOTIFY_DEVICES, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
  }
  return (char)v3;
}
