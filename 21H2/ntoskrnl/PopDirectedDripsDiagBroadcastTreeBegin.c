/*
 * XREFs of PopDirectedDripsDiagBroadcastTreeBegin @ 0x14099E2B4
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreePartial @ 0x14099F5D8 (PopDirectedDripsBuildBroadcastTreePartial.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     PopDirectedDripsDiagGetDeviceActiveStamp @ 0x1405DD5B0 (PopDirectedDripsDiagGetDeviceActiveStamp.c)
 *     PopDirectedDripsDiagCreateDeviceDiagnostic @ 0x14099E6B8 (PopDirectedDripsDiagCreateDeviceDiagnostic.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopDirectedDripsDiagBroadcastTreeBegin(__int64 a1, char a2, __int64 *a3)
{
  __int64 DeviceDiagnostic; // rdi
  int v7; // esi
  PVOID *v8; // rax
  __int64 v9; // rbx
  __int64 Pool2; // rax
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
      *(_DWORD *)(DeviceDiagnostic + 148) = dword_140C1CD84++;
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
      Pool2 = ExAllocatePool2(256LL, 232LL, 1734960208LL);
      v9 = Pool2;
      if ( !Pool2 )
        goto LABEL_14;
      *(_DWORD *)(Pool2 + 32) = v7;
      *(_QWORD *)(Pool2 + 16) = DeviceDiagnostic;
      v11 = (__int64 *)qword_140C1CB68;
      if ( *(PVOID **)qword_140C1CB68 != &PopDirectedDripsDiagSessionContext )
        __fastfail(3u);
      *(_QWORD *)v9 = &PopDirectedDripsDiagSessionContext;
      *(_QWORD *)(v9 + 8) = v11;
      *v11 = v9;
      qword_140C1CB68 = v9;
    }
    *(_QWORD *)(v9 + 48) = PopDirectedDripsDiagGetDeviceActiveStamp(*(_QWORD *)(a1 + 80));
    *(_DWORD *)(v9 + 36) = dword_140C1CD88;
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
