/*
 * XREFs of ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0083BD0
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C0014780 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C0014A40 (NtGdiCreateRectRgn.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0079C20 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C007AAC0 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C0080988 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 * Callees:
 *     ?TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z @ 0x1C0044558 (-TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z.c)
 *     EtwTraceGdiCreateHandle @ 0x1C00808EC (EtwTraceGdiCreateHandle.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00821C0 (GreReleaseHmgrSemaphore.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C0083740 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C0083920 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C00864EC (HmgDecProcessHandleCount.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C0086970 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     HmgIncProcessHandleCountEx @ 0x1C00CF930 (HmgIncProcessHandleCountEx.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C0150378 (McTemplateK0pqz_EtwWriteTransfer.c)
 */

struct HOBJ__ *__fastcall HmgInsertObjectInternal(struct OBJECT *a1, unsigned __int16 a2, char a3)
{
  struct HOBJ__ *v4; // r14
  unsigned int CurrentProcessId; // eax
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v15; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v17; // rdx
  GdiHandleManager *v18; // rcx
  int v19; // r8d
  __int64 *ThreadWin32Thread; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  struct _ERESOURCE *v23; // rbx
  __int64 v24; // rdx
  int v25; // r8d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v30; // rdx
  unsigned int v31; // ecx
  char EtwGdiHandleType; // al
  unsigned int v34; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0LL;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  CurrentThread = KeGetCurrentThread();
  v9 = CurrentProcessId & 0xFFFFFFFC;
  if ( (!(unsigned __int8)KeIsAttachedProcess(v10)
     || (CurrentProcess = PsGetCurrentProcess(v12, v11),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(v15),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) != 0LL
    && (v21 = *ThreadWin32Thread) != 0 )
  {
    v22 = *(_QWORD *)(v21 + 72);
  }
  else
  {
    v22 = 0LL;
  }
  if ( v22 )
    v9 = *(_DWORD *)(v22 + 8);
  v23 = ghsemHmgr;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion(v18);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v23);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer((_DWORD)v18, v17, v19, (_DWORD)ghsemHmgr, 17, (__int64)L"ghsemHmgr");
  if ( (a2 & 8) != 0 || (unsigned int)HmgIncProcessHandleCountEx(v9, v17, 0LL) )
  {
    v34 = 0;
    if ( GdiHandleManager::AcquireEntryIndex(v18, &v34) )
    {
      v4 = ENTRYOBJ::hSetup((__int64)a1, a3, a2, v34);
      if ( a3 == 5 )
      {
        v30 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)a1 + 85);
        v31 = 0;
      }
      else
      {
        if ( a3 != 16 )
        {
LABEL_22:
          LOBYTE(v27) = a3;
          if ( (a2 & 8) != 0 )
            v9 = 0;
          EtwGdiHandleType = GetEtwGdiHandleType(v27, v26, v28, v29);
          EtwTraceGdiCreateHandle((int)v4, EtwGdiHandleType, v9);
          goto LABEL_27;
        }
        v30 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)a1 + 17);
        v31 = 2;
      }
      TrackObjectReferenceInitialization(v31, v30, *((_DWORD *)a1 + 2));
      goto LABEL_22;
    }
    if ( (a2 & 8) == 0 )
      HmgDecProcessHandleCount(v9);
  }
LABEL_27:
  GreReleaseHmgrSemaphore((int)v18, v24, v25);
  return v4;
}
