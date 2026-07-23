/*
 * XREFs of ExpTimeZoneInitSiloState @ 0x1405C9844
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409030A0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x14026BA30 (HalSystemVectorDispatchEntry.c)
 *     PsGetServerSiloGlobals @ 0x14026D714 (PsGetServerSiloGlobals.c)
 *     PsDetachSiloFromCurrentThread @ 0x140272080 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402720A0 (PsAttachSiloToCurrentThread.c)
 *     ZwSetSystemTime @ 0x1403F6B40 (ZwSetSystemTime.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ExpReadTimeZoneInformation @ 0x1405C970C (ExpReadTimeZoneInformation.c)
 *     ExAcquireTimeRefreshLock @ 0x1406AA348 (ExAcquireTimeRefreshLock.c)
 *     ExReleaseTimeRefreshLock @ 0x1406ABD00 (ExReleaseTimeRefreshLock.c)
 *     ExpRefreshTimeZoneInformation @ 0x140792C10 (ExpRefreshTimeZoneInformation.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpTimeZoneInitSiloState(__int64 a1)
{
  unsigned int v1; // ebx
  _QWORD *ServerSiloGlobals; // rdi
  struct _LIST_ENTRY *v3; // rcx
  struct _LIST_ENTRY *v4; // rsi
  PVOID PoolWithTag; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v11 = 0;
  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  v4 = PsAttachSiloToCurrentThread(v3);
  ExpReadTimeZoneInformation(L"TimeZoneVirtualizationSupported", 0, &v11);
  if ( v11 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x3F0uLL, 0x5A547845u);
    ServerSiloGlobals[132] = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x3F0uLL);
      v6 = ServerSiloGlobals[132];
      *((_BYTE *)ServerSiloGlobals + 1049) = 1;
      *(_DWORD *)(v6 + 432) = -1;
      ExpReadTimeZoneInformation(L"ActiveTimeBias", -1, (void *)(ServerSiloGlobals[132] + 436LL));
      LOBYTE(v7) = 1;
      ExAcquireTimeRefreshLock(v7);
      LOBYTE(v8) = 1;
      ExpRefreshTimeZoneInformation(v8);
      ExReleaseTimeRefreshLock();
      ZwSetSystemTime(0LL, 0LL);
    }
    else
    {
      v1 = -1073741670;
    }
  }
  else
  {
    v9 = HalSystemVectorDispatchEntry();
    ServerSiloGlobals[132] = *((_QWORD *)PsGetServerSiloGlobals(v9) + 132);
  }
  PsDetachSiloFromCurrentThread(v4);
  return v1;
}
