/*
 * XREFs of _RtlUnhandledExceptionFilter2@8 @ 0x4B3686E0
 * Callers:
 *     ___RtlUserThreadStart@8 @ 0x4B2E7A1F (___RtlUserThreadStart@8.c)
 *     _RtlUnhandledExceptionFilter@4 @ 0x4B3078D0 (_RtlUnhandledExceptionFilter@4.c)
 *     _LdrpLogFatalUserCallbackException@8 @ 0x4B330333 (_LdrpLogFatalUserCallbackException@8.c)
 *     _LdrpFatalExceptionFilter@4 @ 0x4B3348A9 (_LdrpFatalExceptionFilter@4.c)
 *     __FinalExceptionHandler@16 @ 0x4B3666F1 (__FinalExceptionHandler@16.c)
 *     _TppExceptionFilter@8 @ 0x4B384794 (_TppExceptionFilter@8.c)
 * Callees:
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlReportException@12 @ 0x4B33A4D0 (_RtlReportException@12.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

LONG __cdecl RtlUnhandledExceptionFilter2(PEXCEPTION_POINTERS ExceptionPointers, ULONG Flags)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // ecx
  const wchar_t *Buffer; // ecx
  PEXCEPTION_POINTERS v4; // ebx
  PEXCEPTION_RECORD ExceptionRecord; // eax
  int *v6; // eax
  int v7; // ecx
  unsigned int v8; // eax
  int ExceptionCode; // ecx
  int v11; // [esp-10h] [ebp-48h]
  int v12; // [esp+0h] [ebp-38h]
  int v13; // [esp+0h] [ebp-38h]
  int v14; // [esp+0h] [ebp-38h]
  int *v15; // [esp+18h] [ebp-20h]

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  if ( ProcessParameters )
    Buffer = ProcessParameters->CommandLine.Buffer;
  else
    Buffer = L"<unknown>";
  if ( NtCurrentPeb()->BeingDebugged || (MEMORY[0x7FFE02D4] & 3) == 3 )
  {
    v4 = ExceptionPointers;
    ExceptionRecord = ExceptionPointers->ExceptionRecord;
    if ( ExceptionPointers->ExceptionRecord->ExceptionCode == -1073741819 )
    {
      DbgPrintEx(0x65u, 0, (int)"\n\n *** An Access Violation occurred in %ws:%s\n\n", (int)Buffer);
      DbgPrintEx(
        0x65u,
        0,
        (int)"The instruction at %p tried to %s ",
        (int)ExceptionPointers->ExceptionRecord->ExceptionAddress);
      if ( ExceptionPointers->ExceptionRecord->ExceptionInformation[1] )
        DbgPrintEx(
          0x65u,
          0,
          (int)"an invalid address, %p\n\n",
          ExceptionPointers->ExceptionRecord->ExceptionInformation[1]);
      else
        DbgPrintEx(0x65u, 0, (int)"a NULL pointer\n\n", v12);
    }
    else
    {
      switch ( ExceptionRecord->ExceptionCode )
      {
        case 0xC0000006:
          DbgPrintEx(0x65u, 0, (int)"\n\n *** Inpage error in %ws:%s\n\n", (int)Buffer);
          DbgPrintEx(
            0x65u,
            0,
            (int)"The instruction at %p referenced memory at %p.\n",
            (int)ExceptionPointers->ExceptionRecord->ExceptionAddress);
          DbgPrintEx(
            0x65u,
            0,
            (int)"This failed because of error %Ix.\n\n",
            ExceptionPointers->ExceptionRecord->ExceptionInformation[2]);
          v8 = ExceptionPointers->ExceptionRecord->ExceptionInformation[2];
          switch ( v8 )
          {
            case 0xC000009A:
              DbgPrintEx(
                0x65u,
                0,
                (int)"This means the machine is out of memory.  Use !vm to see where all the memory is being used.\n\n",
                v12);
              break;
            case 0xC000009C:
            case 0xC000016A:
              DbgPrintEx(
                0x65u,
                0,
                (int)"This means the data could not be read, typically because of a bad block on the disk.  Check your hardware.\n\n",
                v12);
              break;
            case 0xC0000185:
              DbgPrintEx(
                0x65u,
                0,
                (int)"This means that the I/O device reported an I/O error.  Check your hardware.",
                v12);
              break;
          }
          break;
        case 0xC0000194:
          v6 = (int *)ExceptionRecord->ExceptionInformation[0];
          v15 = v6;
          if ( v6 )
          {
            if ( *v6 && *(_WORD *)*v6 == 1 )
            {
              DbgPrintEx(0x65u, 0, (int)"\n\n *** Resource timeout (%p) in %ws:%s\n\n", (int)v6);
              v7 = v15[10];
              if ( v7 >= 0 )
              {
                if ( v7 <= 0 )
                  DbgPrintEx(
                    0x65u,
                    0,
                    (int)"The resource is unowned.  This usually implies a slow-moving machine due to memory pressure\n"
                         "\n",
                    v12);
                else
                  DbgPrintEx(0x65u, 0, (int)"The resource is owned shared by %d threads\n", v7);
              }
              else
              {
                DbgPrintEx(0x65u, 0, (int)"The resource is owned exclusively by thread %p\n", v15[11]);
              }
            }
            else
            {
              DbgPrintEx(0x65u, 0, (int)"\n\n *** Critical Section Timeout (%p) in %ws:%s\n\n", (int)v6);
              if ( v15[3] )
              {
                DbgPrintEx(0x65u, 0, (int)"The critical section is owned by thread %p.\n", v15[3]);
                DbgPrintEx(
                  0x65u,
                  0,
                  (int)"Go determine why that thread has not released the critical section.\n\n",
                  v11);
              }
              else
              {
                DbgPrintEx(
                  0x65u,
                  0,
                  (int)"The critical section is unowned.  This usually implies a slow-moving machine due to memory pressure\n\n",
                  v12);
              }
            }
          }
          break;
        case 0xC0000409:
          DbgPrintEx(0x65u, 0, (int)"\n\n *** A stack buffer overrun occurred in %ws:%s\n\n", (int)Buffer);
          DbgPrintEx(
            0x65u,
            0,
            (int)"This is usually the result of a memory copy to a local buffer or structure where the size is not proper"
                 "ly calculated/checked.\n",
            v12);
          DbgPrintEx(
            0x65u,
            0,
            (int)"If this bug ends up in the shipping product, it could be a severe security hole.\n",
            v13);
          DbgPrintEx(
            0x65u,
            0,
            (int)"The stack trace should show the guilty function (the function directly above __report_gsfailure).\n",
            v14);
          break;
        default:
          DbgPrintEx(
            0x65u,
            0,
            (int)"\n\n *** Unhandled exception 0x%08lx, hit in %ws:%s\n\n",
            ExceptionRecord->ExceptionCode);
          break;
      }
    }
    DbgPrintEx(0x65u, 0, (int)" *** enter .exr %p for the exception record\n", (int)ExceptionPointers->ExceptionRecord);
    if ( ExceptionPointers->ExceptionRecord->ExceptionCode != -1073740791 )
      DbgPrintEx(0x65u, 0, (int)" ***  enter .cxr %p for the context\n", (int)ExceptionPointers->ContextRecord);
    DbgPrintEx(0x65u, 0, (int)" *** then kb to get the faulting stack\n\n", v12);
    __debugbreak();
    if ( ExceptionPointers->ExceptionRecord->ExceptionCode == -1073741420 )
      DbgPrintEx(
        0x65u,
        0,
        (int)" *** Restarting wait on critsec or resource at %p (in %ws:%s)\n\n",
        ExceptionPointers->ExceptionRecord->ExceptionInformation[0]);
  }
  else
  {
    v4 = ExceptionPointers;
  }
  ExceptionCode = v4->ExceptionRecord->ExceptionCode;
  if ( ExceptionCode == -1073740791 )
  {
    RtlReportException(v4->ExceptionRecord, v4->ContextRecord, 0);
    ExceptionCode = v4->ExceptionRecord->ExceptionCode;
  }
  return (ExceptionCode != -1073741420) - 1;
}
