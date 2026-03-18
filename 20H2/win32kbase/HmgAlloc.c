/*
 * XREFs of HmgAlloc @ 0x1C003D700
 * Callers:
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C00871B0 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z @ 0x1C00CE94C (--0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z.c)
 * Callees:
 *     EtwTraceGdiCreateHandle @ 0x1C003A8DC (EtwTraceGdiCreateHandle.c)
 *     FreeObject @ 0x1C003C6B0 (FreeObject.c)
 *     AllocateObject @ 0x1C003D5C0 (AllocateObject.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003D970 (GreReleaseHmgrSemaphore.c)
 *     HmgDecProcessHandleCount @ 0x1C003E660 (HmgDecProcessHandleCount.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C003EAF0 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C0040C10 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C0040E60 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C005EA20 (GreAcquireHmgrSemaphore.c)
 *     HmgIncProcessHandleCountEx @ 0x1C00CF1F8 (HmgIncProcessHandleCountEx.c)
 */

struct HOBJ__ *__fastcall HmgAlloc(size_t a1, unsigned __int8 a2, unsigned int a3)
{
  unsigned __int16 v3; // bp
  int v4; // r12d
  struct OBJECT *Object; // r14
  unsigned int CurrentProcessId; // eax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  GdiHandleManager *v18; // rcx
  struct HOBJ__ *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  struct HOBJ__ *v24; // rbx
  char EtwGdiHandleType; // al
  unsigned int v27; // [rsp+58h] [rbp+10h] BYREF

  v3 = a3;
  v4 = a2;
  LOWORD(a3) = ~(_WORD)a3;
  Object = (struct OBJECT *)AllocateObject(a1, a2, (a3 >> 2) & 1);
  if ( !Object )
    return 0LL;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  CurrentThread = KeGetCurrentThread();
  v8 = CurrentProcessId & 0xFFFFFFFC;
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (CurrentProcess = PsGetCurrentProcess(v10, v9),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) != 0LL
    && (v15 = *ThreadWin32Thread) != 0
    && (v3 & 0x10) == 0 )
  {
    v16 = *(_QWORD *)(v15 + 72);
  }
  else
  {
    v16 = 0LL;
  }
  if ( v16 )
    v8 = *(_DWORD *)(v16 + 8);
  GreAcquireHmgrSemaphore();
  if ( (v3 & 8) == 0 && !(unsigned int)HmgIncProcessHandleCountEx(v8, v17, 0LL) )
  {
LABEL_21:
    GreReleaseHmgrSemaphore();
    FreeObject((__int64)Object, v4);
    return 0LL;
  }
  v27 = 0;
  if ( !GdiHandleManager::AcquireEntryIndex(v18, &v27) )
  {
    if ( (v3 & 8) == 0 )
      HmgDecProcessHandleCount(v8);
    goto LABEL_21;
  }
  v19 = ENTRYOBJ::hSetup(Object, v4, v3, v27);
  LOBYTE(v23) = v4;
  v24 = v19;
  if ( (v3 & 8) != 0 )
    v8 = 0;
  EtwGdiHandleType = GetEtwGdiHandleType(v23, v20, v21, v22);
  EtwTraceGdiCreateHandle((int)v24, EtwGdiHandleType, v8);
  if ( (v3 & 3) != 0 )
    v24 = Object;
  GreReleaseHmgrSemaphore();
  return v24;
}
