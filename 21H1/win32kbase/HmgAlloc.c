/*
 * XREFs of HmgAlloc @ 0x1C007AF10
 * Callers:
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C000FBF0 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C0079A60 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 * Callees:
 *     EtwTraceGdiCreateHandle @ 0x1C007A40C (EtwTraceGdiCreateHandle.c)
 *     AllocateObject @ 0x1C007B100 (AllocateObject.c)
 *     GreReleaseHmgrSemaphore @ 0x1C007B8A0 (GreReleaseHmgrSemaphore.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C007CE20 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C007D000 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C007F53C (HmgDecProcessHandleCount.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C007F9C0 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     FreeObject @ 0x1C008BB90 (FreeObject.c)
 *     HmgIncProcessHandleCountEx @ 0x1C00CEF34 (HmgIncProcessHandleCountEx.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C01566C8 (McTemplateK0pqz_EtwWriteTransfer.c)
 */

struct HOBJ__ *__fastcall HmgAlloc(size_t a1, unsigned __int8 a2, unsigned __int16 a3)
{
  unsigned int v4; // r12d
  struct OBJECT *Object; // r14
  unsigned int CurrentProcessId; // eax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v14; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v16; // rdx
  GdiHandleManager *v17; // rcx
  int v18; // r8d
  __int64 *ThreadWin32Thread; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  struct _ERESOURCE *v22; // rbx
  __int64 v23; // rdx
  struct HOBJ__ *v24; // rbx
  __int64 v25; // r8
  __int64 v26; // r9
  char EtwGdiHandleType; // al
  unsigned int v29; // [rsp+68h] [rbp+10h] BYREF

  v4 = a2;
  Object = (struct OBJECT *)AllocateObject(a1);
  if ( !Object )
    return 0LL;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  CurrentThread = KeGetCurrentThread();
  v8 = CurrentProcessId & 0xFFFFFFFC;
  if ( !(unsigned __int8)KeIsAttachedProcess(v9)
    || (CurrentProcess = PsGetCurrentProcess(v11, v10),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v14),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v20 = *ThreadWin32Thread;
      if ( v20 )
      {
        if ( (a3 & 0x10) == 0 )
        {
          v21 = *(_QWORD *)(v20 + 72);
          if ( v21 )
            v8 = *(_DWORD *)(v21 + 8);
        }
      }
    }
  }
  v22 = ghsemHmgr;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion(v17);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v22);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer((_DWORD)v17, v16, v18, (_DWORD)ghsemHmgr, 17, (__int64)L"ghsemHmgr");
  if ( (a3 & 8) == 0 && !(unsigned int)HmgIncProcessHandleCountEx(v8, v16, 0LL) )
  {
LABEL_24:
    GreReleaseHmgrSemaphore();
    FreeObject(Object, v4);
    return 0LL;
  }
  v29 = 0;
  if ( !GdiHandleManager::AcquireEntryIndex(v17, &v29) )
  {
    if ( (a3 & 8) == 0 )
      HmgDecProcessHandleCount(v8);
    goto LABEL_24;
  }
  v24 = ENTRYOBJ::hSetup(Object, v4, a3, v29);
  if ( (a3 & 8) != 0 )
    v8 = 0;
  EtwGdiHandleType = GetEtwGdiHandleType((unsigned __int8)v4, v23, v25, v26);
  EtwTraceGdiCreateHandle((int)v24, EtwGdiHandleType, v8);
  if ( (a3 & 3) != 0 )
    v24 = Object;
  GreReleaseHmgrSemaphore();
  return v24;
}
