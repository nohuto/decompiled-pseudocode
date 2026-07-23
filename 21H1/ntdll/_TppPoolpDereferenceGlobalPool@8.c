/*
 * XREFs of _TppPoolpDereferenceGlobalPool@8 @ 0x4B2B26D2
 * Callers:
 *     _TpReleasePool@4 @ 0x4B2AAE00 (_TpReleasePool@4.c)
 *     _TppCleanupGroupMemberDestroy@4 @ 0x4B2B250C (_TppCleanupGroupMemberDestroy@4.c)
 *     _TppCleanupGroupMemberInitialize@20 @ 0x4B2B4A71 (_TppCleanupGroupMemberInitialize@20.c)
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 *     _RtlQueueWorkItem@12 @ 0x4B2E8AE0 (_RtlQueueWorkItem@12.c)
 *     _RtlpTpWorkCallback@8 @ 0x4B2E9340 (_RtlpTpWorkCallback@8.c)
 *     _RtlpTpWorkUnposted@8 @ 0x4B2E9550 (_RtlpTpWorkUnposted@8.c)
 *     _TpSetDefaultPoolMaxThreads@4 @ 0x4B383C20 (_TpSetDefaultPoolMaxThreads@4.c)
 *     _TpSetDefaultPoolStackInformation@4 @ 0x4B383D40 (_TpSetDefaultPoolStackInformation@4.c)
 *     _RtlpTpIoAlloc@12 @ 0x4B3855A8 (_RtlpTpIoAlloc@12.c)
 *     _RtlpTpIoDllLoaded@4 @ 0x4B385807 (_RtlpTpIoDllLoaded@4.c)
 * Callees:
 *     _TpReleasePool@4 @ 0x4B2AAE00 (_TpReleasePool@4.c)
 *     _TppPoolpDereferenceGlobalPool@8 @ 0x4B2B26D2 (_TppPoolpDereferenceGlobalPool@8.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

void __fastcall TppPoolpDereferenceGlobalPool(signed __int32 **a1, _RTL_SRWLOCK *a2)
{
  volatile signed __int32 *v4; // edx
  signed __int32 v5; // esi
  signed __int32 v6; // ecx
  signed __int32 v7; // eax
  volatile signed __int32 *v8; // edx
  signed __int32 v9; // ecx
  signed __int32 v10; // esi
  signed __int32 v11; // eax
  _TP_POOL *Pool; // [esp+14h] [ebp-1Ch]

  Pool = 0;
  v4 = *a1;
  v5 = **a1;
  while ( v5 > 1 )
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange(v4, v5 - 1, v5);
    if ( v5 == v6 )
    {
      v7 = v6 - 1;
      goto LABEL_5;
    }
  }
  v7 = 0;
LABEL_5:
  if ( !v7 )
  {
    RtlAcquireSRWLockExclusive(a2);
    v8 = *a1;
    v9 = **a1;
    while ( v9 > 1 )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange(v8, v9 - 1, v9);
      if ( v9 == v10 )
      {
        v11 = v10 - 1;
        goto LABEL_13;
      }
    }
    v11 = 0;
LABEL_13:
    if ( !v11 )
    {
      Pool = (_TP_POOL *)*a1;
      *a1 = 0;
    }
    RtlReleaseSRWLockExclusive(a2);
    if ( Pool )
      TpReleasePool(Pool);
  }
}
