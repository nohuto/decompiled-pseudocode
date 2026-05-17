/*
 * XREFs of TpCheckTerminateWorker @ 0x180054650
 * Callers:
 *     RtlExitUserThread @ 0x1800545F0 (RtlExitUserThread.c)
 * Callees:
 *     DbgPrintEx @ 0x1800502F0 (DbgPrintEx.c)
 *     RtlRaiseException @ 0x180051020 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     ZwQueryInformationThread @ 0x18009D2B0 (ZwQueryInformationThread.c)
 *     ZwDuplicateObject @ 0x18009D590 (ZwDuplicateObject.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 *     TppReportExceptionFilter @ 0x1801121AC (TppReportExceptionFilter.c)
 */

void __fastcall TpCheckTerminateWorker(const void *a1)
{
  struct _TEB *v2; // rbx
  bool v3; // zf
  bool v4; // bl
  HANDLE Handle; // [rsp+40h] [rbp-108h] BYREF
  __int64 v6; // [rsp+48h] [rbp-100h] BYREF
  __int64 *v7; // [rsp+50h] [rbp-F8h] BYREF
  int v8; // [rsp+58h] [rbp-F0h]
  int v9; // [rsp+5Ch] [rbp-ECh]
  _BYTE v10[16]; // [rsp+60h] [rbp-E8h] BYREF
  void *v11; // [rsp+70h] [rbp-D8h]
  void *v12; // [rsp+78h] [rbp-D0h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+90h] [rbp-B8h] BYREF

  v6 = 0LL;
  Handle = 0LL;
  v2 = NtCurrentTeb();
  if ( !a1 )
    goto LABEL_2;
  if ( (int)ZwDuplicateObject(-1LL, a1, -1LL, &Handle, 2072, 0, 0) >= 0 )
  {
    if ( (int)ZwQueryInformationThread(Handle, 0LL, v10) >= 0 && v2->ClientId.UniqueProcess == v11 )
    {
      if ( v2->ClientId.UniqueThread == v12 )
      {
LABEL_2:
        v3 = v2->ThreadPoolData == 0LL;
LABEL_3:
        v4 = !v3;
        goto LABEL_4;
      }
      v7 = &v6;
      v9 = 8;
      v8 = 6008;
      if ( (int)ZwQueryInformationThread(Handle, 26LL, &v7) >= 0 )
      {
        v3 = v6 == 0;
        goto LABEL_3;
      }
    }
  }
  else
  {
    Handle = 0LL;
  }
  v4 = 0;
LABEL_4:
  if ( Handle )
    NtClose(Handle);
  if ( v4 )
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
    ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)a1;
    RtlRaiseException(&ExceptionRecord);
  }
}
