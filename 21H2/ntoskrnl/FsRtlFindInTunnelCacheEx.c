/*
 * XREFs of FsRtlFindInTunnelCacheEx @ 0x1405E7E80
 * Callers:
 *     FsRtlFindInTunnelCache @ 0x14088B890 (FsRtlFindInTunnelCache.c)
 * Callees:
 *     FsRtlCompareNodeAndKey @ 0x14021D428 (FsRtlCompareNodeAndKey.c)
 *     FsRtlEmptyFreePoolList @ 0x14021D494 (FsRtlEmptyFreePoolList.c)
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     RtlCopyUnicodeString @ 0x14035E210 (RtlCopyUnicodeString.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     FsRtlPruneTunnelCache @ 0x1405E8314 (FsRtlPruneTunnelCache.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char __fastcall FsRtlFindInTunnelCacheEx(
        PKGUARDED_MUTEX Mutex,
        unsigned __int64 a2,
        const UNICODE_STRING *a3,
        UNICODE_STRING *a4,
        PUNICODE_STRING DestinationString,
        char a6,
        _DWORD *a7,
        void *a8)
{
  PKGUARDED_MUTEX v10; // r14
  char v11; // bl
  __int64 v12; // rsi
  __int64 v13; // rdi
  LONG v14; // eax
  unsigned __int16 *v15; // rdi
  wchar_t *PoolWithTag; // rcx
  unsigned __int16 v17; // ax
  _QWORD *v19[7]; // [rsp+20h] [rbp-38h] BYREF

  v10 = Mutex;
  v11 = 0;
  v12 = 0LL;
  if ( !TunnelMaxEntries )
    return 0;
  v19[1] = v19;
  v19[0] = v19;
  ExAcquireFastMutex(Mutex);
  FsRtlPruneTunnelCache(v10, v19);
  v13 = *(_QWORD *)&v10[1].Count;
  if ( v13 )
  {
    do
    {
      v12 = v13;
      v14 = FsRtlCompareNodeAndKey(v13, a2, a3, a6 & 1);
      if ( v14 > 0 )
      {
        v13 = *(_QWORD *)(v13 + 8);
      }
      else
      {
        if ( v14 >= 0 )
          break;
        v13 = *(_QWORD *)(v13 + 16);
      }
    }
    while ( v13 );
    v10 = Mutex;
  }
  if ( v13 )
  {
    RtlCopyUnicodeString(a4, (PCUNICODE_STRING)(v12 + 80));
    v15 = (unsigned __int16 *)(v12 + 64);
    if ( DestinationString->MaximumLength < *(_WORD *)(v12 + 64) )
    {
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag((POOL_TYPE)17, *(unsigned __int16 *)(v12 + 64), 0x346E7554u);
      DestinationString->Buffer = PoolWithTag;
      v17 = *v15;
      DestinationString->MaximumLength = *v15;
      DestinationString->Length = v17;
      memmove(PoolWithTag, *(const void **)(v12 + 72), *v15);
    }
    else
    {
      RtlCopyUnicodeString(DestinationString, (PCUNICODE_STRING)(v12 + 64));
    }
    memmove(a8, *(const void **)(v12 + 96), *(unsigned int *)(v12 + 104));
    *a7 = *(_DWORD *)(v12 + 104);
    v11 = 1;
  }
  KeReleaseGuardedMutex(v10);
  FsRtlEmptyFreePoolList(v19);
  return v11;
}
