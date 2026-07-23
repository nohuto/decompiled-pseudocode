/*
 * XREFs of PipProcessPendingOsExtensionResources @ 0x140A54388
 * Callers:
 *     PipProcessPendingOperations @ 0x140A54368 (PipProcessPendingOperations.c)
 * Callees:
 *     _PnpCtxRegCloseKey @ 0x1406306B4 (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegOpenKey @ 0x14063562C (_PnpCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140637618 (_PnpCtxGetCachedContextBaseKey.c)
 *     PipProcessPendingObjects @ 0x140A920E0 (PipProcessPendingObjects.c)
 */

__int64 PipProcessPendingOsExtensionResources()
{
  __int64 v0; // rcx
  int CachedContextBaseKey; // ebx
  int v2; // eax
  __int64 v3; // r8
  void *v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  v5 = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v6);
  if ( CachedContextBaseKey >= 0 )
  {
    v2 = PnpCtxRegOpenKey(
           *(__int64 *)&PiPnpRtlCtx,
           v6,
           (int)L"Control\\PendingDriverOperations\\OsExtensionDatabase",
           0,
           131103,
           (__int64)&v5);
    CachedContextBaseKey = v2;
    if ( v2 == -1073741772 || v2 == -1073741444 )
    {
      CachedContextBaseKey = 0;
    }
    else if ( v2 >= 0 )
    {
      CachedContextBaseKey = PipProcessPendingObjects(v5, 0LL, v3, PipCommitPendingOsExtensionResource);
    }
  }
  if ( v5 )
    PnpCtxRegCloseKey(v0, v5);
  return (unsigned int)CachedContextBaseKey;
}
