/*
 * XREFs of McTemplateK0pz_EtwWriteTransfer @ 0x1C0156780
 * Callers:
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C00089F0 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAllocMem @ 0x1C0009B50 (EngAllocMem.c)
 *     EngFreeMem @ 0x1C000D2D0 (EngFreeMem.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0016870 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EngReleaseSemaphore @ 0x1C0016E10 (EngReleaseSemaphore.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C00177C0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ??1SPRITELOCK@@QEAA@XZ @ 0x1C001B980 (--1SPRITELOCK@@QEAA@XZ.c)
 *     GreUnlockVisRgnPublish @ 0x1C001C170 (GreUnlockVisRgnPublish.c)
 *     NtGdiDeleteObjectApp @ 0x1C006C610 (NtGdiDeleteObjectApp.c)
 *     GreLockVisRgn @ 0x1C0076BF0 (GreLockVisRgn.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00779B0 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     GreUnlockVisRgn @ 0x1C007A540 (GreUnlockVisRgn.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C007B7C8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C007B8A0 (GreReleaseHmgrSemaphore.c)
 *     ReleaseCacheDC @ 0x1C0084AB0 (ReleaseCacheDC.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00865B0 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     _GetDCEx @ 0x1C0086DA0 (_GetDCEx.c)
 *     GreCreateDisplayDC @ 0x1C008A9B0 (GreCreateDisplayDC.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C008B8E0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C008F8F0 (--1SURFMEM@@QEAA@XZ.c)
 *     hdevEnumerate @ 0x1C00B4FA0 (hdevEnumerate.c)
 *     EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive @ 0x1C00CC150 (EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C00A2A70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
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
