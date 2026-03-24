/*
 * XREFs of PopDirectedDripsDiagTraceNotifyDevices @ 0x14057CC50
 * Callers:
 *     PopDirectedDripsResumeDevices @ 0x1408E3880 (PopDirectedDripsResumeDevices.c)
 *     PopDirectedDripsSuspendDevices @ 0x1408E3A78 (PopDirectedDripsSuspendDevices.c)
 * Callees:
 *     EtwEventEnabled @ 0x14021BF30 (EtwEventEnabled.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     EtwWriteEx @ 0x14025DD10 (EtwWriteEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     IoDiagTraceDirectedDripsCandidateDevices @ 0x1408B4598 (IoDiagTraceDirectedDripsCandidateDevices.c)
 */

char __fastcall PopDirectedDripsDiagTraceNotifyDevices(unsigned __int8 a1, int a2, __int64 a3)
{
  $C459BD0D405E8E46662177FB3D0A143F *v3; // rax
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
  _DWORD *v18; // r9
  unsigned int v19; // r8d
  __int64 v20; // rdi
  bool v21; // zf
  __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rcx
  REGHANDLE v27; // rbx
  int v29; // [rsp+4Ch] [rbp-35h] BYREF
  int v30; // [rsp+50h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-29h] BYREF
  int *v32; // [rsp+68h] [rbp-19h]
  __int64 v33; // [rsp+70h] [rbp-11h]
  int *v34; // [rsp+78h] [rbp-9h]
  __int64 v35; // [rsp+80h] [rbp-1h]
  __int64 *v36; // [rsp+88h] [rbp+7h]
  __int64 v37; // [rsp+90h] [rbp+Fh]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+5Fh] BYREF
  int v39; // [rsp+F0h] [rbp+6Fh] BYREF
  __int64 v40; // [rsp+F8h] [rbp+77h] BYREF

  v3 = ($C459BD0D405E8E46662177FB3D0A143F *)&retaddr;
  v40 = a3;
  v39 = a2;
  v4 = a1;
  v30 = 0;
  if ( a2 >= 0 )
  {
    if ( a1 )
    {
      LOBYTE(v3) = IoDiagTraceDirectedDripsCandidateDevices();
      a2 = v39;
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
          if ( *((_DWORD *)v6 + 9) == dword_140C1ED88 && v7 && ((_DWORD)v6[5] & 0x100) == 0 )
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
      v29 = 0;
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopDirectedDripsDiagLock) == 1 )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      --CurrentThread->SpecialApcDisable;
      v17 = ++CurrentThread->AbAllocationRegionCount;
      v18 = (_DWORD *)((unsigned __int64)&PopDirectedDripsDiagLock & 0x7FFFFFFFFFFFFFFCLL);
      v19 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v21 = !_BitScanReverse((unsigned int *)&v22, v19);
        if ( v21 )
          goto LABEL_32;
        v20 = (__int64)&CurrentThread->LockEntries[v22];
        v19 &= ~(1 << v22);
        if ( (*(_BYTE *)(v20 + 26) & 1) != 0
          && (*(_DWORD *)(v20 + 32) & 1) == 0
          && (_DWORD *)(*(_QWORD *)(v20 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v18
          && *(_DWORD *)(v20 + 40) == SessionId )
        {
          *(_BYTE *)(v20 + 26) &= ~1u;
          if ( *(_QWORD *)(v20 + 32) )
            break;
        }
      }
      if ( !v20 )
      {
LABEL_32:
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&PopDirectedDripsDiagLock, SessionId, 0LL);
        goto LABEL_39;
      }
      *(_BYTE *)(v20 + 32) |= 2u;
      if ( *(__int64 *)(v20 + 32) < 0 )
        KiAbEntryRemoveFromTree(v20);
      v23 = *(_DWORD *)(v20 + 88) & 0x1FFFF;
      v24 = *(_DWORD *)(v20 + 88) & 0xFFFE0000;
      *(_BYTE *)(v20 + 25) &= ~1u;
      v29 = v23;
      *(_DWORD *)(v20 + 88) = v24;
      *(_QWORD *)(v20 + 32) = 0LL;
      v25 = (signed __int64)(v20 - (unsigned __int64)CurrentThread->LockEntries) / 96;
      if ( v17 == 1 )
        CurrentThread->AbEntrySummary |= 1 << v25;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v25);
LABEL_39:
      --CurrentThread->AbAllocationRegionCount;
      LOBYTE(v3) = KiAbThreadRemoveBoosts(
                     (ULONG_PTR)CurrentThread,
                     (__int64)&PopDirectedDripsDiagLock,
                     (__int64)&v29,
                     v18);
      v21 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v21 )
      {
        v3 = &CurrentThread->152;
        if ( ($C459BD0D405E8E46662177FB3D0A143F *)v3->ApcState.ApcListHead[0].Flink != v3 )
          LOBYTE(v3) = KiCheckForKernelApcDelivery(v26);
      }
    }
  }
  if ( PopDiagHandleRegistered )
  {
    v27 = PopDiagHandle;
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_NOTIFY_DEVICES);
    if ( (_BYTE)v3 )
    {
      v30 = v4;
      UserData.Ptr = (ULONGLONG)&PopWnfCsEnterScenarioId;
      *(_QWORD *)&UserData.Size = 1LL;
      v32 = &v30;
      v33 = 4LL;
      v34 = &v39;
      v35 = 4LL;
      v36 = &v40;
      v37 = 8LL;
      LOBYTE(v3) = EtwWriteEx(v27, &POP_ETW_EVENT_DIRECTED_DRIPS_NOTIFY_DEVICES, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
  }
  return (char)v3;
}
