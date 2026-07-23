/*
 * XREFs of PopDirectedDripsDiagBroadcastTreeBegin @ 0x1408F6C98
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreePartial @ 0x1408F8E50 (PopDirectedDripsBuildBroadcastTreePartial.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopDirectedDripsDiagGetDeviceActiveStamp @ 0x14057C988 (PopDirectedDripsDiagGetDeviceActiveStamp.c)
 *     PopDirectedDripsDiagCreateDeviceDiagnostic @ 0x1408F70B0 (PopDirectedDripsDiagCreateDeviceDiagnostic.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char __fastcall PopDirectedDripsDiagBroadcastTreeBegin(__int64 a1, char a2, __int64 *a3)
{
  __int64 DeviceDiagnostic; // rdi
  int v7; // esi
  PVOID *v8; // rax
  __int64 v9; // rbx
  PVOID PoolWithTag; // rax
  __int64 *v11; // rax
  char v12; // al

  *a3 = 0LL;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopDirectedDripsDiagLock, 0LL);
  DeviceDiagnostic = *(_QWORD *)(a1 + 776);
  if ( DeviceDiagnostic || (DeviceDiagnostic = PopDirectedDripsDiagCreateDeviceDiagnostic(a1)) != 0 )
  {
    v7 = *(_DWORD *)(DeviceDiagnostic + 148);
    if ( v7 == -1 )
    {
      *(_DWORD *)(DeviceDiagnostic + 148) = dword_140C1EBC4++;
      v7 = *(_DWORD *)(DeviceDiagnostic + 148);
    }
    v8 = (PVOID *)PopDirectedDripsDiagSessionContext;
    if ( PopDirectedDripsDiagSessionContext == &PopDirectedDripsDiagSessionContext )
      goto LABEL_9;
    do
    {
      v9 = (__int64)v8;
      if ( *((_DWORD *)v8 + 8) == v7 )
        break;
      v8 = (PVOID *)*v8;
      v9 = 0LL;
    }
    while ( v8 != &PopDirectedDripsDiagSessionContext );
    if ( !v9 )
    {
LABEL_9:
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xE8uLL, 0x67696450u);
      v9 = (__int64)PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_14;
      memset(PoolWithTag, 0, 0xE8uLL);
      *(_DWORD *)(v9 + 32) = v7;
      *(_QWORD *)(v9 + 16) = DeviceDiagnostic;
      v11 = (__int64 *)qword_140C1E9C8;
      if ( *(PVOID **)qword_140C1E9C8 != &PopDirectedDripsDiagSessionContext )
        __fastfail(3u);
      *(_QWORD *)v9 = &PopDirectedDripsDiagSessionContext;
      *(_QWORD *)(v9 + 8) = v11;
      *v11 = v9;
      qword_140C1E9C8 = v9;
    }
    *(_QWORD *)(v9 + 48) = PopDirectedDripsDiagGetDeviceActiveStamp(*(_QWORD *)(a1 + 80));
    *(_DWORD *)(v9 + 36) = dword_140C1EBC8;
    v12 = a2 ^ *(_DWORD *)(v9 + 40);
    *a3 = v9;
    *(_DWORD *)(v9 + 40) ^= v12 & 0xF;
    *(_DWORD *)(DeviceDiagnostic + 152) |= 0x60000u;
  }
LABEL_14:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PopDirectedDripsDiagLock);
  return KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
}
