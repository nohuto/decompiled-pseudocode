/*
 * XREFs of McTemplateK0pz_EtwWriteTransfer @ 0x1C014DE80
 * Callers:
 *     hdevEnumerate @ 0x1C0011850 (hdevEnumerate.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0011970 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0038370 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C003A900 (NtGdiDeleteObjectApp.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C003B6E0 (--1SURFMEM@@QEAA@XZ.c)
 *     GreUnlockVisRgn @ 0x1C003CF80 (GreUnlockVisRgn.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003D970 (GreReleaseHmgrSemaphore.c)
 *     ReleaseCacheDC @ 0x1C00418A0 (ReleaseCacheDC.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00475D0 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     _GetDCEx @ 0x1C0047DC0 (_GetDCEx.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C004BD80 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     GreLockVisRgn @ 0x1C005E980 (GreLockVisRgn.c)
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C0082460 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAllocMem @ 0x1C00833F0 (EngAllocMem.c)
 *     EngFreeMem @ 0x1C0085900 (EngFreeMem.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C008B010 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EngReleaseSemaphore @ 0x1C0090610 (EngReleaseSemaphore.c)
 *     ??1SPRITELOCK@@QEAA@XZ @ 0x1C0095140 (--1SPRITELOCK@@QEAA@XZ.c)
 *     GreUnlockVisRgnPublish @ 0x1C00962F0 (GreUnlockVisRgnPublish.c)
 *     EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive @ 0x1C00CBC10 (EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C00287C0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0pz_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        __int64 a4,
        const wchar_t *a5)
{
  const wchar_t *v5; // rcx
  __int64 v7; // rax
  int v8; // edx
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v11; // [rsp+40h] [rbp-38h]
  __int64 v12; // [rsp+48h] [rbp-30h]
  const wchar_t *v13; // [rsp+50h] [rbp-28h]
  int v14; // [rsp+58h] [rbp-20h]
  int v15; // [rsp+5Ch] [rbp-1Ch]
  __int64 v16; // [rsp+98h] [rbp+20h] BYREF

  v16 = a4;
  v5 = a5;
  v11 = &v16;
  v12 = 8LL;
  if ( a5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a5[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  v14 = v8;
  v15 = 0;
  if ( !a5 )
    v5 = L"NULL";
  v13 = v5;
  return McGenEventWrite_EtwWriteTransfer((__int64)v5, a2, &W32kControlGuid, 3u, &v10);
}
