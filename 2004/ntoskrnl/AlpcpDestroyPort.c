/*
 * XREFs of AlpcpDestroyPort @ 0x1406568AC
 * Callers:
 *     AlpcpDeletePort @ 0x1406566D0 (AlpcpDeletePort.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExFreeToNPagedLookasideList @ 0x140269FBC (ExFreeToNPagedLookasideList.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 */

void __fastcall AlpcpDestroyPort(__int64 *a1)
{
  __int64 *v2; // rcx
  __int64 **v3; // rax
  char v4; // al
  void *v5; // rdx

  if ( *a1 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpPortListLock, 0LL);
    v2 = (__int64 *)*a1;
    if ( *(__int64 **)(*a1 + 8) != a1 || (v3 = (__int64 **)a1[1], *v3 != a1) )
      __fastfail(3u);
    *v3 = v2;
    v2[1] = (__int64)v3;
    v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpPortListLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpPortListLock);
    KeAbPostRelease((ULONG_PTR)&AlpcpPortListLock);
  }
  if ( (a1[52] & 0x200) != 0 )
  {
    v5 = (void *)a1[31];
    if ( v5 )
      ExFreeToNPagedLookasideList(&AlpcpNPLookasides, v5);
  }
}
