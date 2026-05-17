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

int __stdcall RtlUnhandledExceptionFilter2(const void **a1, int a2)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // ecx
  const wchar_t *Buffer; // ecx
  int *v4; // ebx
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  int v7; // ecx
  int v8; // eax
  const char *v9; // ecx
  int v10; // ecx
  _DWORD *v12; // [esp+18h] [ebp-20h]
  const wchar_t *v13; // [esp+1Ch] [ebp-1Ch]

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  if ( ProcessParameters )
    Buffer = ProcessParameters->CommandLine.Buffer;
  else
    Buffer = L"<unknown>";
  v13 = Buffer;
  if ( NtCurrentPeb()->BeingDebugged || (MEMORY[0x7FFE02D4] & 3) == 3 )
  {
    v4 = (int *)a1;
    v5 = *a1;
    if ( *(_DWORD *)*a1 == -1073741819 )
    {
      DbgPrintEx(101, 0, "\n\n *** An Access Violation occurred in %ws:%s\n\n", Buffer, a2);
      v9 = "write to";
      if ( !*((_DWORD *)*a1 + 5) )
        v9 = "read from";
      DbgPrintEx(101, 0, "The instruction at %p tried to %s ", *((const void **)*a1 + 3), v9);
      if ( *((_DWORD *)*a1 + 6) )
        DbgPrintEx(101, 0, "an invalid address, %p\n\n", *((const void **)*a1 + 6));
      else
        DbgPrintEx(101, 0, "a NULL pointer\n\n");
    }
    else
    {
      switch ( *v5 )
      {
        case 0xC0000006:
          DbgPrintEx(101, 0, "\n\n *** Inpage error in %ws:%s\n\n", Buffer, a2);
          DbgPrintEx(
            101,
            0,
            "The instruction at %p referenced memory at %p.\n",
            *((const void **)*a1 + 3),
            *((const void **)*a1 + 6));
          DbgPrintEx(101, 0, "This failed because of error %Ix.\n\n", *((_DWORD *)*a1 + 7));
          v8 = *((_DWORD *)*a1 + 7);
          switch ( v8 )
          {
            case -1073741670:
              DbgPrintEx(
                101,
                0,
                "This means the machine is out of memory.  Use !vm to see where all the memory is being used.\n\n");
              break;
            case -1073741668:
            case -1073741462:
              DbgPrintEx(
                101,
                0,
                "This means the data could not be read, typically because of a bad block on the disk.  Check your hardware.\n\n");
              break;
            case -1073741435:
              DbgPrintEx(101, 0, "This means that the I/O device reported an I/O error.  Check your hardware.");
              break;
          }
          break;
        case 0xC0000194:
          v6 = (_DWORD *)v5[5];
          v12 = v6;
          if ( v6 )
          {
            if ( *v6 && *(_WORD *)*v6 == 1 )
            {
              DbgPrintEx(101, 0, "\n\n *** Resource timeout (%p) in %ws:%s\n\n", v6, Buffer, a2);
              v7 = v12[10];
              if ( v7 >= 0 )
              {
                if ( v7 <= 0 )
                  DbgPrintEx(
                    101,
                    0,
                    "The resource is unowned.  This usually implies a slow-moving machine due to memory pressure\n\n");
                else
                  DbgPrintEx(101, 0, "The resource is owned shared by %d threads\n", v7);
              }
              else
              {
                DbgPrintEx(101, 0, "The resource is owned exclusively by thread %p\n", v12[11]);
              }
            }
            else
            {
              DbgPrintEx(101, 0, "\n\n *** Critical Section Timeout (%p) in %ws:%s\n\n", v6, Buffer, a2);
              if ( v12[3] )
              {
                DbgPrintEx(101, 0, "The critical section is owned by thread %p.\n", (const void *)v12[3]);
                DbgPrintEx(101, 0, "Go determine why that thread has not released the critical section.\n\n");
              }
              else
              {
                DbgPrintEx(
                  101,
                  0,
                  "The critical section is unowned.  This usually implies a slow-moving machine due to memory pressure\n"
                  "\n");
              }
            }
          }
          break;
        case 0xC0000409:
          DbgPrintEx(101, 0, "\n\n *** A stack buffer overrun occurred in %ws:%s\n\n", Buffer, a2);
          DbgPrintEx(
            101,
            0,
            "This is usually the result of a memory copy to a local buffer or structure where the size is not properly ca"
            "lculated/checked.\n");
          DbgPrintEx(101, 0, "If this bug ends up in the shipping product, it could be a severe security hole.\n");
          DbgPrintEx(
            101,
            0,
            "The stack trace should show the guilty function (the function directly above __report_gsfailure).\n");
          break;
        default:
          DbgPrintEx(101, 0, "\n\n *** Unhandled exception 0x%08lx, hit in %ws:%s\n\n", *v5, Buffer, a2);
          break;
      }
    }
    DbgPrintEx(101, 0, " *** enter .exr %p for the exception record\n", *a1);
    if ( *(_DWORD *)*a1 != -1073740791 )
      DbgPrintEx(101, 0, " ***  enter .cxr %p for the context\n", a1[1]);
    DbgPrintEx(101, 0, " *** then kb to get the faulting stack\n\n");
    __debugbreak();
    if ( *(_DWORD *)*a1 == -1073741420 )
      DbgPrintEx(
        101,
        0,
        " *** Restarting wait on critsec or resource at %p (in %ws:%s)\n\n",
        *((_DWORD *)*a1 + 5),
        v13,
        a2);
  }
  else
  {
    v4 = (int *)a1;
  }
  v10 = *(_DWORD *)*v4;
  if ( v10 == -1073740791 )
  {
    RtlReportException(*v4, v4[1], 0);
    v10 = *(_DWORD *)*v4;
  }
  return (v10 != -1073741420) - 1;
}
