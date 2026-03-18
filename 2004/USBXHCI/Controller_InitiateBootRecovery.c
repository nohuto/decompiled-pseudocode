/*
 * XREFs of Controller_InitiateBootRecovery @ 0x1C0031710
 * Callers:
 *     Controller_ReportFatalError @ 0x1C00323C0 (Controller_ReportFatalError.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     Controller_InternalReset @ 0x1C0031AF8 (Controller_InternalReset.c)
 */

void __fastcall Controller_InitiateBootRecovery(_QWORD *a1, char a2)
{
  ULONG_PTR v2; // rax

  if ( (a2 & 0x1C) != 0 )
  {
    v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 264))(WdfDriverGlobals, *a1);
    KeBugCheckEx(0x144u, 2uLL, v2, 3uLL, 0LL);
  }
  if ( (a2 & 1) != 0 )
  {
    _InterlockedIncrement(&dword_1C0061B18);
    Controller_InternalReset();
    _InterlockedDecrement(&dword_1C0061B18);
  }
  else if ( (a2 & 2) != 0 )
  {
    ((void (__fastcall *)(__int64, _QWORD))qword_1C00616B0)(UcxDriverGlobals, a1[1]);
  }
}
