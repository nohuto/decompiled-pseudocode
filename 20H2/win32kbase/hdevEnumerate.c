/*
 * XREFs of hdevEnumerate @ 0x1C0011850
 * Callers:
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C000E7DC (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     DxgkEngAssertGdiOutput @ 0x1C0010790 (DxgkEngAssertGdiOutput.c)
 *     DxgkEngAcquireWin32kAndPDEVLocks @ 0x1C0010CB0 (DxgkEngAcquireWin32kAndPDEVLocks.c)
 *     DxgkEngReleaseWin32kAndPDEVLocks @ 0x1C0010F90 (DxgkEngReleaseWin32kAndPDEVLocks.c)
 *     GreSuspendDirectDraw @ 0x1C0011120 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C00112A8 (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C00113EC (DrvNotifyModeChangeStartStop.c)
 *     DxgkEngFindViewDesktopPosition @ 0x1C00115B0 (DxgkEngFindViewDesktopPosition.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0011738 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C004BD80 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C014DDC8 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C014DE80 (McTemplateK0pz_EtwWriteTransfer.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C014EBE8 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

struct PDEV *__fastcall hdevEnumerate(struct PDEV *a1, int a2, int a3)
{
  struct _ERESOURCE *v3; // rbx
  struct PDEV *v4; // rsi
  struct PDEV *v5; // rdi
  struct PDEV *v6; // rbx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v7; // rdx
  unsigned int v8; // eax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v9; // rdx
  struct PDEV *v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = (struct _ERESOURCE *)ghsemDriverMgmt;
  v4 = a1;
  if ( ghsemDriverMgmt )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v3);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer((_DWORD)a1, a2, a3, (_DWORD)ghsemDriverMgmt, 13, (__int64)L"ghsemDriverMgmt");
  v5 = gppdevList;
  if ( v4 )
    v5 = v4;
  v11 = v5;
  if ( v4 )
    v6 = *(struct PDEV **)v5;
  else
    v6 = v5;
  while ( v6 )
  {
    if ( (*((_DWORD *)v6 + 10) & 1) != 0 )
    {
      ++*((_DWORD *)v6 + 2);
      v7 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v6 + 443);
      LODWORD(a1) = (_DWORD)qword_1C02453E8;
      if ( v7 && qword_1C02453E8 )
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C02453E8, v7, 1);
      break;
    }
    v6 = *(struct PDEV **)v6;
  }
  if ( !v4 )
    goto LABEL_16;
  v8 = *((_DWORD *)v5 + 2);
  if ( v8 > 1 )
  {
    v9 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v5 + 443);
    LODWORD(a1) = (_DWORD)qword_1C02453E8;
    if ( v9 && qword_1C02453E8 )
    {
      NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C02453E8, v9, 0);
      v8 = *((_DWORD *)v5 + 2);
    }
    *((_DWORD *)v5 + 2) = v8 - 1;
LABEL_16:
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        (_DWORD)a1,
        (unsigned int)&LockRelease,
        a3,
        (_DWORD)ghsemDriverMgmt,
        (__int64)L"ghsemDriverMgmt");
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
      PsLeavePriorityRegion();
    }
    return v6;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
    PsLeavePriorityRegion();
  }
  PDEVOBJ::vUnreferencePdev(&v11, 0LL);
  return v6;
}
