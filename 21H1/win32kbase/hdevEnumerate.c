/*
 * XREFs of hdevEnumerate @ 0x1C00B4FA0
 * Callers:
 *     DxgkEngAcquireWin32kAndPDEVLocks @ 0x1C0046DB0 (DxgkEngAcquireWin32kAndPDEVLocks.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C00479E8 (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     DxgkEngAssertGdiOutput @ 0x1C004B640 (DxgkEngAssertGdiOutput.c)
 *     DxgkEngReleaseWin32kAndPDEVLocks @ 0x1C00B1560 (DxgkEngReleaseWin32kAndPDEVLocks.c)
 *     GreSuspendDirectDraw @ 0x1C00B2010 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C00B2198 (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C00B2230 (DrvNotifyModeChangeStartStop.c)
 *     DxgkEngFindViewDesktopPosition @ 0x1C00B4310 (DxgkEngFindViewDesktopPosition.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C00B4E88 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C008B8E0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C01566C8 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0156780 (McTemplateK0pz_EtwWriteTransfer.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C01574E8 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
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
  __int64 v10; // rcx
  int v12; // r8d
  __int64 v13; // rcx
  struct PDEV *v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = ghsemDriverMgmt;
  v4 = a1;
  if ( ghsemDriverMgmt )
  {
    PsEnterPriorityRegion(a1);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v3);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer((_DWORD)a1, a2, a3, (_DWORD)ghsemDriverMgmt, 13, (__int64)L"ghsemDriverMgmt");
  v5 = gppdevList;
  if ( v4 )
    v5 = v4;
  v14 = v5;
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
      LODWORD(a1) = (_DWORD)qword_1C024D3E8;
      if ( v7 && qword_1C024D3E8 )
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C024D3E8, v7, 1);
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
    LODWORD(a1) = (_DWORD)qword_1C024D3E8;
    if ( v9 && qword_1C024D3E8 )
    {
      NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C024D3E8, v9, 0);
      v8 = *((_DWORD *)v5 + 2);
    }
    *((_DWORD *)v5 + 2) = v8 - 1;
LABEL_16:
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer((_DWORD)a1, (unsigned int)&LockRelease, a3, (__int64)ghsemDriverMgmt);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
      PsLeavePriorityRegion(v10);
    }
    return v6;
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, a3);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
    PsLeavePriorityRegion(v13);
  }
  PDEVOBJ::vUnreferencePdev(&v14, 0, v12);
  return v6;
}
