/*
 * XREFs of RtlUnhandledExceptionFilter2 @ 0x180100940
 * Callers:
 *     RtlUserThreadStart @ 0x18004CC70 (RtlUserThreadStart.c)
 *     RtlUnhandledExceptionFilter @ 0x18009CEA0 (RtlUnhandledExceptionFilter.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800CF4F0 (LdrpLogFatalUserCallbackException.c)
 *     LdrpFatalExceptionFilter @ 0x1800D5470 (LdrpFatalExceptionFilter.c)
 *     TppExceptionFilter @ 0x180112354 (TppExceptionFilter.c)
 * Callees:
 *     DbgPrintEx @ 0x180051450 (DbgPrintEx.c)
 *     RtlReportException @ 0x1800DCA60 (RtlReportException.c)
 *     RtlIsAnyDebuggerPresent @ 0x1800FF370 (RtlIsAnyDebuggerPresent.c)
 */

LONG __cdecl RtlUnhandledExceptionFilter2(PEXCEPTION_POINTERS ExceptionPointers, ULONG Flags)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r15
  int v4; // esi
  const wchar_t *Buffer; // r15
  __int64 v6; // rdx
  unsigned int **v7; // rcx
  unsigned int *v8; // r12
  __int64 v9; // r12
  int v10; // r9d
  const void *v11; // r9
  unsigned __int64 v12; // rcx
  const char *v13; // rax
  const void *v14; // r9
  int ExceptionCode; // eax
  _WORD *v17; // [rsp+30h] [rbp-48h]

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v4 = 0;
  if ( ProcessParameters )
    Buffer = ProcessParameters->CommandLine.Buffer;
  else
    Buffer = L"<unknown>";
  if ( RtlIsAnyDebuggerPresent() )
  {
    v8 = *v7;
    if ( **v7 == -1073741819 )
    {
      DbgPrintEx(0x65u, 0, "\n\n *** An Access Violation occurred in %ws:%s\n\n", Buffer, v6);
      v13 = "write to";
      if ( !ExceptionPointers->ExceptionRecord->ExceptionInformation[0] )
        v13 = "read from";
      DbgPrintEx(
        0x65u,
        0,
        "The instruction at %p tried to %s ",
        ExceptionPointers->ExceptionRecord->ExceptionAddress,
        v13);
      v14 = (const void *)ExceptionPointers->ExceptionRecord->ExceptionInformation[1];
      if ( v14 )
        DbgPrintEx(0x65u, 0, "an invalid address, %p\n\n", v14);
      else
        DbgPrintEx(0x65u, 0, "a NULL pointer\n\n");
    }
    else
    {
      switch ( *v8 )
      {
        case 0xC0000006:
          DbgPrintEx(0x65u, 0, "\n\n *** Inpage error in %ws:%s\n\n", Buffer, v6);
          DbgPrintEx(
            0x65u,
            0,
            "The instruction at %p referenced memory at %p.\n",
            ExceptionPointers->ExceptionRecord->ExceptionAddress,
            (const void *)ExceptionPointers->ExceptionRecord->ExceptionInformation[1]);
          DbgPrintEx(
            0x65u,
            0,
            "This failed because of error %Ix.\n\n",
            ExceptionPointers->ExceptionRecord->ExceptionInformation[2]);
          v12 = ExceptionPointers->ExceptionRecord->ExceptionInformation[2];
          switch ( v12 )
          {
            case 0xFFFFFFFFC000009AuLL:
              DbgPrintEx(
                0x65u,
                0,
                "This means the machine is out of memory.  Use !vm to see where all the memory is being used.\n\n");
              break;
            case 0xFFFFFFFFC000009CuLL:
            case 0xFFFFFFFFC000016AuLL:
              DbgPrintEx(
                0x65u,
                0,
                "This means the data could not be read, typically because of a bad block on the disk.  Check your hardware.\n\n");
              break;
            case 0xFFFFFFFFC0000185uLL:
              DbgPrintEx(0x65u, 0, "This means that the I/O device reported an I/O error.  Check your hardware.");
              break;
          }
          break;
        case 0xC0000194:
          v9 = *((_QWORD *)v8 + 4);
          if ( v9 )
          {
            v17 = *(_WORD **)v9;
            if ( *(_QWORD *)v9 && **(_WORD **)v9 == 1 )
            {
              DbgPrintEx(0x65u, 0, "\n\n *** Resource timeout (%p) in %ws:%s\n\n", v9, Buffer, v6, v17);
              v10 = *(_DWORD *)(v9 + 68);
              if ( v10 >= 0 )
              {
                if ( v10 <= 0 )
                  DbgPrintEx(
                    0x65u,
                    0,
                    "The resource is unowned.  This usually implies a slow-moving machine due to memory pressure\n\n");
                else
                  DbgPrintEx(0x65u, 0, "The resource is owned shared by %d threads\n", v10);
              }
              else
              {
                DbgPrintEx(0x65u, 0, "The resource is owned exclusively by thread %p\n", *(const void **)(v9 + 72));
              }
            }
            else
            {
              DbgPrintEx(0x65u, 0, "\n\n *** Critical Section Timeout (%p) in %ws:%s\n\n", v9, Buffer, v6, v17);
              v11 = *(const void **)(v9 + 16);
              if ( v11 )
              {
                DbgPrintEx(0x65u, 0, "The critical section is owned by thread %p.\n", v11);
                DbgPrintEx(0x65u, 0, "Go determine why that thread has not released the critical section.\n\n");
              }
              else
              {
                DbgPrintEx(
                  0x65u,
                  0,
                  "The critical section is unowned.  This usually implies a slow-moving machine due to memory pressure\n"
                  "\n");
              }
            }
          }
          break;
        case 0xC0000409:
          DbgPrintEx(0x65u, 0, "\n\n *** A stack buffer overrun occurred in %ws:%s\n\n", Buffer, v6);
          DbgPrintEx(
            0x65u,
            0,
            "This is usually the result of a memory copy to a local buffer or structure where the size is not properly ca"
            "lculated/checked.\n");
          DbgPrintEx(0x65u, 0, "If this bug ends up in the shipping product, it could be a severe security hole.\n");
          DbgPrintEx(
            0x65u,
            0,
            "The stack trace should show the guilty function (the function directly above __report_gsfailure).\n");
          break;
        default:
          DbgPrintEx(0x65u, 0, "\n\n *** Unhandled exception 0x%08lx, hit in %ws:%s\n\n", *v8, Buffer, v6);
          break;
      }
    }
    DbgPrintEx(0x65u, 0, " *** enter .exr %p for the exception record\n", ExceptionPointers->ExceptionRecord);
    if ( ExceptionPointers->ExceptionRecord->ExceptionCode != -1073740791 )
      DbgPrintEx(0x65u, 0, " ***  enter .cxr %p for the context\n", ExceptionPointers->ContextRecord);
    DbgPrintEx(0x65u, 0, " *** then kb to get the faulting stack\n\n");
    __debugbreak();
  }
  ExceptionCode = ExceptionPointers->ExceptionRecord->ExceptionCode;
  if ( ExceptionCode == -1073740791 )
  {
    RtlReportException(ExceptionPointers->ExceptionRecord, ExceptionPointers->ContextRecord, 0);
    ExceptionCode = ExceptionPointers->ExceptionRecord->ExceptionCode;
  }
  LOBYTE(v4) = ExceptionCode != -1073741420;
  return v4 - 1;
}
