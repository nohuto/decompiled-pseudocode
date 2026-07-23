/*
 * XREFs of ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140980200
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostReleaseEx @ 0x14020AFB0 (KeAbPostReleaseEx.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     LookUpTableFlushComplete @ 0x1407D4110 (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateInternalProviderCallback(const struct _GUID *a1, int a2, __int64 a3, __int64 a4)
{
  PRTL_BALANCED_NODE v4; // rax
  __int64 i; // rbx

  if ( a2 == 2 && a4 == 32 )
  {
    v4 = KeAbPreAcquire((ULONG_PTR)&qword_140CDB710, 0LL, 1);
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140CDB710, 0LL) )
    {
      if ( v4 )
        KeAbPostReleaseEx((ULONG_PTR)&qword_140CDB710, (ULONG_PTR)v4);
    }
    else
    {
      if ( v4 )
        BYTE2(v4[1].Left) |= 1u;
      for ( i = qword_140CF4BE0; i; i = *(_QWORD *)(i + 352) )
        LookUpTableFlushComplete(i);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140CDB710, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140CDB710);
      KeAbPostRelease((ULONG_PTR)&qword_140CDB710);
    }
  }
}
