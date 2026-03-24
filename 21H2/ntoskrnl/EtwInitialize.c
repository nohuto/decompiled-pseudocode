/*
 * XREFs of EtwInitialize @ 0x140798D94
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1407900CC (CmCompleteRegistryInitialization.c)
 *     IoInitSystemPreDrivers @ 0x140A3EB60 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x14021FD40 (KeInsertQueueDpc.c)
 *     ObGetCurrentIrql @ 0x14025F590 (ObGetCurrentIrql.c)
 *     EtwpBuffersFlushRequired @ 0x1402C7BAC (EtwpBuffersFlushRequired.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140360770 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1403609B0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpInitialize @ 0x140A42414 (EtwpInitialize.c)
 */

void __fastcall EtwInitialize(unsigned int a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  __int64 v3; // rbx

  if ( a1 >= 2 )
  {
    if ( a1 == 2 )
    {
      v1 = EtwpHostSiloState;
      v2 = 0LL;
      for ( EtwpFileSystemReady = 1; (unsigned int)v2 < *(_DWORD *)(EtwpHostSiloState + 16); v2 = (unsigned int)(v2 + 1) )
      {
        if ( ExAcquireRundownProtectionCacheAwareEx(
               *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v1 + 448) + 8 * v2),
               1u) )
        {
          if ( (unsigned int)v2 >= *(_DWORD *)(EtwpHostSiloState + 16) )
            v3 = 1LL;
          else
            v3 = *(_QWORD *)(*(_QWORD *)(EtwpHostSiloState + 456) + 8 * v2);
          if ( (v3 & 1) == 0 && (*(_DWORD *)(v3 + 12) & 0x400) == 0 && EtwpBuffersFlushRequired((_DWORD *)v3) )
          {
            if ( ObGetCurrentIrql() > 2u )
            {
              if ( !_interlockedbittestandset((volatile signed __int32 *)(v3 + 836), 8u) )
                KeInsertQueueDpc((PRKDPC)(v3 + 584), 0LL, 0LL);
            }
            else
            {
              KeSetEvent((PRKEVENT)(v3 + 496), 0, 0);
            }
          }
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(EtwpHostSiloState + 448) + 8 * v2),
            1u);
        }
        v1 = EtwpHostSiloState;
      }
    }
  }
  else
  {
    EtwpInitialize();
  }
}
