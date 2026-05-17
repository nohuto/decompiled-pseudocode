/*
 * XREFs of _TpCheckTerminateWorker@4 @ 0x4B2EB4D0
 * Callers:
 *     _RtlExitUserThread@4 @ 0x4B2EB460 (_RtlExitUserThread@4.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtQueryInformationThread@20 @ 0x4B2F2BD0 (_NtQueryInformationThread@20.c)
 *     _ZwDuplicateObject@28 @ 0x4B2F2D40 (_ZwDuplicateObject@28.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     _RtlRaiseException@4 @ 0x4B308940 (_RtlRaiseException@4.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 *     _TppReportExceptionFilter@4 @ 0x4B384919 (_TppReportExceptionFilter@4.c)
 */

void __stdcall TpCheckTerminateWorker(const void *a1)
{
  bool v1; // bl
  struct _TEB *v2; // esi
  bool v3; // zf
  _BYTE ThreadInformation[8]; // [esp+10h] [ebp-A4h] BYREF
  void *v5; // [esp+18h] [ebp-9Ch]
  void *v6; // [esp+1Ch] [ebp-98h]
  _DWORD v7[3]; // [esp+2Ch] [ebp-88h] BYREF
  int v8; // [esp+38h] [ebp-7Ch] BYREF
  HANDLE ThreadHandle; // [esp+3Ch] [ebp-78h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [esp+40h] [ebp-74h] BYREF
  CPPEH_RECORD ms_exc; // [esp+9Ch] [ebp-18h]

  v1 = 0;
  v8 = 0;
  ThreadHandle = 0;
  v2 = NtCurrentTeb();
  if ( !a1 )
    goto LABEL_2;
  if ( (int)ZwDuplicateObject(-1, a1, -1, &ThreadHandle, 2072, 0, 0) >= 0 )
  {
    if ( NtQueryInformationThread(ThreadHandle, (THREADINFOCLASS)0, ThreadInformation, 0x1Cu, 0) >= 0
      && v2->ClientId.UniqueProcess == v5 )
    {
      if ( v2->ClientId.UniqueThread == v6 )
      {
LABEL_2:
        v3 = v2->ThreadPoolData == 0;
LABEL_3:
        v1 = !v3;
        goto LABEL_4;
      }
      v7[0] = &v8;
      v7[2] = 4;
      v7[1] = 3984;
      if ( NtQueryInformationThread(ThreadHandle, (THREADINFOCLASS)26, v7, 0xCu, 0) >= 0 )
      {
        v3 = v8 == 0;
        goto LABEL_3;
      }
    }
  }
  else
  {
    ThreadHandle = 0;
  }
LABEL_4:
  if ( ThreadHandle )
    NtClose(ThreadHandle);
  if ( v1 )
  {
    DbgPrintEx(
      84,
      0,
      "ThreadPool: attempt to terminate a worker thread via handle %p\n"
      "Contact the owner of the function calling Terminate/Exit thread.\n",
      a1);
    memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
    ExceptionRecord.ExceptionCode = -1073740004;
    ExceptionRecord.NumberParameters = 1;
    ExceptionRecord.ExceptionInformation[0] = (unsigned int)a1;
    ms_exc.registration.TryLevel = 0;
    RtlRaiseException(&ExceptionRecord);
  }
}
