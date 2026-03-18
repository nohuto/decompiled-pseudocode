/*
 * XREFs of TelemetryData_CreateReport @ 0x1C0050E50
 * Callers:
 *     Controller_TelemetryReport @ 0x1C0033110 (Controller_TelemetryReport.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C00157F8 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     memset @ 0x1C0019CC0 (memset.c)
 */

__int64 *__fastcall TelemetryData_CreateReport(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *Pool2; // rax
  __int64 *v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  CONTEXT ContextRecord; // [rsp+40h] [rbp-4E8h] BYREF

  memset(&ContextRecord, 0, sizeof(ContextRecord));
  Pool2 = (__int64 *)ExAllocatePool2(64LL, 1256LL, 1952531540LL);
  v8 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, 0x4E8uLL);
    v9 = ExAllocatePool2(64LL, 0x40000LL, 1952531540LL);
    *v8 = v9;
    if ( v9
      && RtlStringCbPrintfW((NTSTRSAFE_PWSTR)v8 + 312, 0x20uLL, L"%ws", L"USBXHCI") >= 0
      && (RtlCaptureContext(&ContextRecord),
          (v10 = KeCapturePersistentThreadState(&ContextRecord, 0LL, 324LL, a3, a4, a5, 0LL, *v8)) != 0) )
    {
      *((_DWORD *)v8 + 2) = v10;
    }
    else
    {
      if ( *v8 )
        ExFreePoolWithTag((PVOID)*v8, 0x74614454u);
      ExFreePoolWithTag(v8, 0x74614454u);
      return 0LL;
    }
  }
  return v8;
}
