/*
 * XREFs of EtwpTracingProvEnableCallback @ 0x1407D5870
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     EtwpReleaseLoggerContext @ 0x140638848 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140638894 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpGetNextGuidEntry @ 0x1406B82EC (EtwpGetNextGuidEntry.c)
 *     EtwpEventWriteEnableInfo @ 0x140939974 (EtwpEventWriteEnableInfo.c)
 *     EtwpEventWriteGuidEntry @ 0x140939A6C (EtwpEventWriteGuidEntry.c)
 *     EtwpEventWriteRegEntry @ 0x140939BB8 (EtwpEventWriteRegEntry.c)
 *     EtwpEventWriteTemplateSession @ 0x14093A04C (EtwpEventWriteTemplateSession.c)
 */

void __fastcall EtwpTracingProvEnableCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 v4; // rcx
  char v5; // r14
  unsigned int i; // ebx
  signed __int64 *j; // rdx
  unsigned int *v8; // rax
  __int64 v9; // rcx
  unsigned int *v10; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v12; // rcx
  unsigned int v13; // edi
  _DWORD *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  signed __int64 *NextGuidEntry; // rax
  signed __int64 *v21; // rbx
  signed __int64 *k; // rdx
  signed __int64 v23; // rax
  struct _KTHREAD *v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // edi
  _DWORD *v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // r8
  signed __int64 *m; // rdi
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  signed __int64 *v35; // rax
  signed __int64 *v36; // rbx

  if ( ControlCode == 2 )
  {
    v4 = EtwpHostSiloState;
    v5 = 0;
    for ( i = 0; i < *(_DWORD *)(EtwpHostSiloState + 16); ++i )
    {
      v8 = EtwpAcquireLoggerContextByLoggerId(v4, i, 0);
      v10 = v8;
      if ( v8 )
      {
        EtwpEventWriteTemplateSession(v9, ETW_EVENT_SESSION_INFO, v8);
        EtwpReleaseLoggerContext(v10, 0);
      }
      v4 = EtwpHostSiloState;
    }
    for ( j = 0LL; ; j = v21 )
    {
      NextGuidEntry = EtwpGetNextGuidEntry(v4, j, 2);
      v21 = NextGuidEntry;
      if ( !NextGuidEntry )
        break;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(NextGuidEntry + 51), 0LL);
      v21[52] = (signed __int64)KeGetCurrentThread();
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_GROUP_ENTRY_INFO) )
        EtwpEventWriteGuidEntry(v12, &ETW_EVENT_GROUP_ENTRY_INFO, v21);
      v13 = 0;
      v14 = v21 + 16;
      do
      {
        if ( *v14 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_ENABLE_INFO) )
        {
          LOBYTE(v16) = v13;
          EtwpEventWriteEnableInfo(v15, v21, v16);
        }
        ++v13;
        v14 += 8;
      }
      while ( v13 < 8 );
      v21[52] = 0LL;
      ExReleasePushLockEx((ULONG_PTR)(v21 + 51), 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v17, v18, v19);
      v4 = EtwpHostSiloState;
    }
    for ( k = 0LL; ; k = v36 )
    {
      v35 = EtwpGetNextGuidEntry(EtwpHostSiloState, k, 0);
      v36 = v35;
      if ( !v35 )
        break;
      v23 = v35[5] - *(_QWORD *)&EventTracingProvGuid.Data1;
      if ( !v23 )
        v23 = v36[6] - *(_QWORD *)EventTracingProvGuid.Data4;
      if ( v23 )
      {
        v24 = KeGetCurrentThread();
        --v24->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v36 + 51), 0LL);
        v5 = 1;
        v36[52] = (signed __int64)KeGetCurrentThread();
      }
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_GUID_ENTRY_INFO) )
        EtwpEventWriteGuidEntry(v25, &ETW_EVENT_GUID_ENTRY_INFO, v36);
      v26 = 0;
      v27 = v36 + 16;
      do
      {
        if ( *v27 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_ENABLE_INFO) )
        {
          LOBYTE(v29) = v26;
          EtwpEventWriteEnableInfo(v28, v36, v29);
        }
        ++v26;
        v27 += 8;
      }
      while ( v26 < 8 );
      for ( m = (signed __int64 *)v36[7]; m != v36 + 7; m = (signed __int64 *)*m )
      {
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_REG_ENTRY_INFO) )
          EtwpEventWriteRegEntry(v31, m);
      }
      if ( v5 )
      {
        v36[52] = 0LL;
        ExReleasePushLockEx((ULONG_PTR)(v36 + 51), 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v32, v33, v34);
        v5 = 0;
      }
    }
  }
}
