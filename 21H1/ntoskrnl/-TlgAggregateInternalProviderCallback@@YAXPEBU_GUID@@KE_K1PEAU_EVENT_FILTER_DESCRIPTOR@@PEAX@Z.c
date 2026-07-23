/*
 * XREFs of ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x14097B790
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KeAbPostReleaseEx @ 0x140340F60 (KeAbPostReleaseEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     LookUpTableFlushComplete @ 0x1407BE100 (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateInternalProviderCallback(const struct _GUID *a1, int a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rax
  __int64 i; // rbx

  if ( a2 == 2 && a4 == 32 )
  {
    v4 = KeAbPreAcquire((ULONG_PTR)&qword_140CDB450, 0LL, 1);
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140CDB450, 0LL) )
    {
      if ( v4 )
        KeAbPostReleaseEx((ULONG_PTR)&qword_140CDB450, v4);
    }
    else
    {
      if ( v4 )
        *(_BYTE *)(v4 + 26) |= 1u;
      for ( i = qword_140CF49A0; i; i = *(_QWORD *)(i + 352) )
        LookUpTableFlushComplete(i);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140CDB450, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140CDB450);
      KeAbPostRelease((ULONG_PTR)&qword_140CDB450);
    }
  }
}
