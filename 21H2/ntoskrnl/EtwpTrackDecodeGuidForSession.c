/*
 * XREFs of EtwpTrackDecodeGuidForSession @ 0x140941364
 * Callers:
 *     EtwpUpdateRegEntryEnableMask @ 0x1406BB9AC (EtwpUpdateRegEntryEnableMask.c)
 *     AddDecodeGuidToSessions @ 0x140941D1C (AddDecodeGuidToSessions.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

bool __fastcall EtwpTrackDecodeGuidForSession(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  volatile signed __int64 *v3; // rsi
  __int64 v4; // r14
  bool v6; // bl
  _QWORD *i; // rdx
  __int64 v8; // rcx
  unsigned int v9; // eax
  char *PoolWithTag; // rcx
  __int128 v11; // xmm1
  __int64 v13; // rcx

  v2 = *(_QWORD *)(a2 + 104);
  v3 = (volatile signed __int64 *)(a1 + 704);
  v4 = *(_QWORD *)(a2 + 32);
  v6 = 0;
  ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
  for ( i = *(_QWORD **)(a1 + 128); ; i = (_QWORD *)*i )
  {
    if ( !i )
    {
      v9 = *(_DWORD *)(a1 + 340) + 2048;
      if ( v9 <= *(_DWORD *)(a1 + 4) && v9 <= 0x10000 )
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x62777445u);
        if ( PoolWithTag )
        {
          *(_QWORD *)PoolWithTag = *(_QWORD *)(a1 + 128);
          *(_OWORD *)(PoolWithTag + 8) = *(_OWORD *)(v2 + 34);
          v11 = *(_OWORD *)(v4 + 40);
          PoolWithTag[40] = 0;
          *(_OWORD *)(PoolWithTag + 24) = v11;
          ++*(_DWORD *)(a1 + 136);
          *(_DWORD *)(a1 + 340) += 32;
          *(_QWORD *)(a1 + 128) = PoolWithTag;
          _InterlockedOr((volatile signed __int32 *)(a1 + 836), 0x8C0u);
          v6 = 1;
        }
      }
      goto LABEL_11;
    }
    v8 = *(_QWORD *)(v2 + 34) - i[1];
    if ( !v8 )
      v8 = *(_QWORD *)(v2 + 42) - i[2];
    if ( !v8 )
      break;
  }
  v13 = *(_QWORD *)(v4 + 40) - i[3];
  if ( !v13 )
    v13 = *(_QWORD *)(v4 + 48) - i[4];
  v6 = v13 == 0;
LABEL_11:
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  return v6;
}
