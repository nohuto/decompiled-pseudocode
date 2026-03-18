/*
 * XREFs of FsRtlAcquireToCreateMappedSection @ 0x1405FBC40
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x140266E80 (FsRtlCreateSectionForDataScan.c)
 *     MiCallCreateSectionFilters @ 0x1405FBB40 (MiCallCreateSectionFilters.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1405FBF10 (FsRtlAcquireFileExclusiveCommon.c)
 */

__int64 __fastcall FsRtlAcquireToCreateMappedSection(
        struct _FILE_OBJECT *a1,
        char a2,
        __int64 a3,
        _DWORD *a4,
        _DWORD *a5)
{
  int v8; // edi
  PFAST_MUTEX *FsContext; // rbx
  struct _FAST_MUTEX *v11; // rcx
  __int64 v12[2]; // [rsp+30h] [rbp-48h] BYREF

  *a4 = 0;
  *a5 = 0;
  *(_OWORD *)v12 = 0LL;
  LODWORD(v12[0]) = 16;
  v8 = FsRtlAcquireFileExclusiveCommon(a1, (__int64)v12);
  if ( v8 >= 0 )
  {
    if ( (a2 & 0x44) != 0 )
    {
      FsContext = (PFAST_MUTEX *)a1->FsContext;
      if ( FsContext )
      {
        ExAcquireFastMutex(FsContext[6]);
        v11 = FsContext[6];
        *((_BYTE *)FsContext + 6) |= 0x10u;
        KeReleaseGuardedMutex(v11);
      }
    }
    if ( HIDWORD(v12[0]) >= 0xC )
      *a4 = v12[1];
    if ( HIDWORD(v12[0]) >= 0x10 )
      *a5 = HIDWORD(v12[1]);
  }
  return (unsigned int)v8;
}
