/*
 * XREFs of ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1408654C0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x140353BB0 (KeAbPostReleaseEx.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     LookUpTableFlushComplete @ 0x14085D380 (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateInternalProviderCallback(const struct _GUID *a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  __int64 i; // rbx

  if ( a2 == 2 && a4 == 32 )
  {
    v4 = KeAbPreAcquire((__int64)&qword_140CE21E0, 0LL);
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140CE21E0, 0LL) )
    {
      if ( v4 )
        KeAbPostReleaseEx((ULONG_PTR)&qword_140CE21E0, v4);
    }
    else
    {
      if ( v4 )
        *(_BYTE *)(v4 + 18) = 1;
      for ( i = qword_140D010B8; i; i = *(_QWORD *)(i + 352) )
        LookUpTableFlushComplete(i);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140CE21E0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140CE21E0);
      KeAbPostRelease((ULONG_PTR)&qword_140CE21E0);
    }
  }
}
