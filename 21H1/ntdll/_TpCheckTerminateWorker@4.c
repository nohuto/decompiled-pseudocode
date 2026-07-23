/*
 * XREFs of _TpCheckTerminateWorker@4 @ 0x4B2EB4D0
 * Callers:
 *     sub_4B2EB4AC @ 0x4B2EB4AC (sub_4B2EB4AC.c)
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

void __cdecl TpCheckTerminateWorker(HANDLE Thread)
{
  bool v1; // bl
  struct _TEB *v2; // esi
  bool v3; // zf
  size_t v4; // [esp-14h] [ebp-C8h]
  _BYTE ThreadInformation[8]; // [esp+10h] [ebp-A4h] BYREF
  void *v6; // [esp+18h] [ebp-9Ch]
  void *v7; // [esp+1Ch] [ebp-98h]
  _DWORD v8[3]; // [esp+2Ch] [ebp-88h] BYREF
  int v9; // [esp+38h] [ebp-7Ch] BYREF
  HANDLE TargetHandle; // [esp+3Ch] [ebp-78h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [esp+40h] [ebp-74h] BYREF
  CPPEH_RECORD ms_exc; // [esp+9Ch] [ebp-18h]

  v1 = 0;
  v9 = 0;
  TargetHandle = 0;
  v2 = NtCurrentTeb();
  if ( !Thread )
    goto LABEL_2;
  if ( ZwDuplicateObject((HANDLE)0xFFFFFFFF, Thread, (HANDLE)0xFFFFFFFF, &TargetHandle, 0x818u, 0, 0) >= 0 )
  {
    if ( NtQueryInformationThread(TargetHandle, ThreadBasicInformation, ThreadInformation, 0x1Cu, 0) >= 0
      && v2->ClientId.UniqueProcess == v6 )
    {
      if ( v2->ClientId.UniqueThread == v7 )
      {
LABEL_2:
        v3 = v2->ThreadPoolData == 0;
LABEL_3:
        v1 = !v3;
        goto LABEL_4;
      }
      v8[0] = &v9;
      v8[2] = 4;
      v8[1] = 3984;
      if ( NtQueryInformationThread(TargetHandle, ThreadTebInformation, v8, 0xCu, 0) >= 0 )
      {
        v3 = v9 == 0;
        goto LABEL_3;
      }
    }
  }
  else
  {
    TargetHandle = 0;
  }
LABEL_4:
  if ( TargetHandle )
    NtClose(TargetHandle);
  if ( v1 )
  {
    DbgPrintEx(
      84,
      0,
      (int)"ThreadPool: attempt to terminate a worker thread via handle %p\n"
           "Contact the owner of the function calling Terminate/Exit thread.\n",
      (int)Thread);
    LODWORD(v4) = 80;
    memset(&ExceptionRecord, 0, v4);
    ExceptionRecord.ExceptionCode = -1073740004;
    ExceptionRecord.NumberParameters = 1;
    ExceptionRecord.ExceptionInformation[0] = (unsigned int)Thread;
    ms_exc.registration.TryLevel = 0;
    RtlRaiseException(&ExceptionRecord);
  }
}
