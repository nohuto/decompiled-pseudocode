/*
 * XREFs of RtlReportExceptionEx @ 0x1800DCB30
 * Callers:
 *     WerReportExceptionWorker @ 0x1800DD7F0 (WerReportExceptionWorker.c)
 * Callees:
 *     WerpProcessId @ 0x180061E3C (WerpProcessId.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtClose @ 0x18009D7E0 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x18009DB40 (NtUnmapViewOfSection.c)
 *     ZwTerminateProcess @ 0x18009DB80 (ZwTerminateProcess.c)
 *     ZwDuplicateObject @ 0x18009DD80 (ZwDuplicateObject.c)
 *     memset @ 0x1800A4740 (memset.c)
 *     ReportExceptionInternal @ 0x1800DC928 (ReportExceptionInternal.c)
 *     RtlReportException @ 0x1800DCA60 (RtlReportException.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x1800DD98C (WerpBreakIntoDebuggerIfPresent.c)
 *     WerpCreateCompletionEvent @ 0x1800DD9E0 (WerpCreateCompletionEvent.c)
 *     WerpCreateCrashDataSection @ 0x1800DDA44 (WerpCreateCrashDataSection.c)
 *     WerpSetProcessFaultInformation @ 0x1800DDC38 (WerpSetProcessFaultInformation.c)
 *     WerpThreadId @ 0x1800DDC78 (WerpThreadId.c)
 *     WerpWaitForCrashReporting @ 0x1800DDCB0 (WerpWaitForCrashReporting.c)
 */

NTSTATUS __cdecl RtlReportExceptionEx(
        PEXCEPTION_RECORD ExceptionRecord,
        PCONTEXT ContextRecord,
        ULONG Flags,
        PLARGE_INTEGER Timeout)
{
  unsigned int v7; // r13d
  int v8; // eax
  __int64 v9; // rdx
  struct _TEB *v10; // r8
  NTSTATUS v12; // ebx
  _QWORD *v13; // rcx
  char *v14; // rdx
  _OWORD *v15; // r9
  __int64 v16; // rax
  HANDLE v17; // [rsp+40h] [rbp-A8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-A0h] BYREF
  HANDLE v19; // [rsp+50h] [rbp-98h] BYREF
  HANDLE TargetHandle; // [rsp+58h] [rbp-90h] BYREF
  HANDLE SourceHandle; // [rsp+60h] [rbp-88h]
  HANDLE Handle; // [rsp+68h] [rbp-80h] BYREF
  HANDLE v23; // [rsp+70h] [rbp-78h] BYREF
  int v24; // [rsp+78h] [rbp-70h]
  HANDLE v25; // [rsp+80h] [rbp-68h]
  _QWORD v26[4]; // [rsp+88h] [rbp-60h] BYREF
  void *v27; // [rsp+110h] [rbp+28h]

  SourceHandle = Timeout;
  v25 = v27;
  TargetHandle = 0LL;
  v19 = 0LL;
  v17 = 0LL;
  Handle = 0LL;
  v23 = 0LL;
  BaseAddress = 0LL;
  v7 = WerpProcessId(Timeout);
  v8 = WerpThreadId(v27);
  v24 = v8;
  v10 = NtCurrentTeb();
  if ( v7 == LODWORD(v10->ClientId.UniqueProcess) && v8 == LODWORD(v10->ClientId.UniqueThread) )
    return RtlReportException(ExceptionRecord, ContextRecord, Flags);
  if ( v7 == LODWORD(NtCurrentTeb()->ClientId.UniqueProcess) )
    WerpBreakIntoDebuggerIfPresent(ExceptionRecord, ContextRecord);
  if ( (Flags & 4) != 0 || (v12 = WerpSetProcessFaultInformation(SourceHandle, v9, v10), v12 >= 0) )
  {
    v12 = WerpCreateCompletionEvent(&v17, v9, v10);
    if ( v12 >= 0 )
    {
      v12 = WerpCreateCrashDataSection(&v23, &BaseAddress);
      if ( v12 >= 0 )
      {
        v12 = ZwDuplicateObject(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                SourceHandle,
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                &TargetHandle,
                0x1FFFFFu,
                2u,
                0);
        if ( v12 >= 0 )
        {
          v12 = ZwDuplicateObject(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  v25,
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  &v19,
                  0x1FFFFFu,
                  2u,
                  0);
          if ( v12 >= 0 )
          {
            v13 = BaseAddress;
            *(_DWORD *)BaseAddress = 248;
            v13[21] = 1LL;
            *((_DWORD *)v13 + 1) = v7;
            *((_DWORD *)v13 + 2) = v24;
            v13[23] = TargetHandle;
            v13[24] = v19;
            v13[26] = v17;
            v13[28] = 0LL;
            *((_DWORD *)v13 + 58) = -1073741823;
            *((_DWORD *)v13 + 59) = Flags;
            v14 = (char *)BaseAddress;
            *((_DWORD *)BaseAddress + 60) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
            v15 = v14 + 416;
            *((_QWORD *)v14 + 31) = 1LL;
            *(_OWORD *)(v14 + 264) = *(_OWORD *)&ExceptionRecord->ExceptionCode;
            *(_OWORD *)(v14 + 280) = *(_OWORD *)&ExceptionRecord->ExceptionAddress;
            *(_OWORD *)(v14 + 296) = *(_OWORD *)ExceptionRecord->ExceptionInformation;
            *(_OWORD *)(v14 + 312) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[2];
            *(_OWORD *)(v14 + 328) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[4];
            *(_OWORD *)(v14 + 344) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[6];
            *(_OWORD *)(v14 + 360) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[8];
            *(_OWORD *)(v14 + 376) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[10];
            *(_OWORD *)(v14 + 392) = *(_OWORD *)&ExceptionRecord->ExceptionInformation[12];
            *((_QWORD *)v14 + 51) = ExceptionRecord->ExceptionInformation[14];
            if ( ((unsigned __int64)ContextRecord & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
            {
              *((_QWORD *)v14 + 32) = 1LL;
              v16 = 9LL;
              do
              {
                *v15 = *(_OWORD *)&ContextRecord->P1Home;
                v15[1] = *(_OWORD *)&ContextRecord->P3Home;
                v15[2] = *(_OWORD *)&ContextRecord->P5Home;
                v15[3] = *(_OWORD *)&ContextRecord->ContextFlags;
                v15[4] = *(_OWORD *)&ContextRecord->SegGs;
                v15[5] = *(_OWORD *)&ContextRecord->Dr1;
                v15[6] = *(_OWORD *)&ContextRecord->Dr3;
                v15 += 8;
                *(v15 - 1) = *(_OWORD *)&ContextRecord->Dr7;
                ContextRecord = (PCONTEXT)((char *)ContextRecord + 128);
                --v16;
              }
              while ( v16 );
              *v15 = *(_OWORD *)&ContextRecord->P1Home;
              v15[1] = *(_OWORD *)&ContextRecord->P3Home;
              v15[2] = *(_OWORD *)&ContextRecord->P5Home;
              v15[3] = *(_OWORD *)&ContextRecord->ContextFlags;
              v15[4] = *(_OWORD *)&ContextRecord->SegGs;
            }
            else
            {
              *((_QWORD *)v14 + 32) = 2LL;
              memset(v15, 0, 0x4D0uLL);
            }
            v26[0] = v17;
            v26[1] = v23;
            v26[2] = TargetHandle;
            v26[3] = v19;
            v12 = ReportExceptionInternal(v7, v23, v26, 4u, Flags, &Handle);
            if ( v12 >= 0 )
            {
              v12 = WerpWaitForCrashReporting(SourceHandle, v17, Handle, 0LL);
              if ( v12 >= 0 )
              {
                if ( (Flags & 4) != 0
                  || (v12 = ZwTerminateProcess(SourceHandle, ExceptionRecord->ExceptionCode), v12 >= 0) )
                {
                  v12 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( Handle )
    NtClose(Handle);
  if ( BaseAddress )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  if ( v23 )
    NtClose(v23);
  if ( v17 )
  {
    NtClose(v17);
    v17 = 0LL;
  }
  if ( v19 )
    NtClose(v19);
  if ( TargetHandle )
    NtClose(TargetHandle);
  return v12;
}
