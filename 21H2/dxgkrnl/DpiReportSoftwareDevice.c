/*
 * XREFs of DpiReportSoftwareDevice @ 0x1C019F740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiReportSoftwareDevice(PDRIVER_OBJECT DriverObject, __int64 a2)
{
  _DWORD *DriverObjectExtension; // rax
  _DWORD *v4; // rdi
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v11; // rax

  if ( !DriverObject
    || (DriverObjectExtension = IoGetDriverObjectExtension(DriverObject, DriverObject),
        (v4 = DriverObjectExtension) == 0LL)
    || DriverObjectExtension[4] != 1953656900
    || DriverObjectExtension[5] != 1 )
  {
    LODWORD(v8) = -1073741811;
    v11 = WdLogNewEntry5_WdError(DriverObject, a2);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    goto LABEL_10;
  }
  v5 = IoReportRootDevice(DriverObject);
  v8 = v5;
  if ( v5 < 0 )
  {
    v11 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v11 + 24) = v8;
LABEL_10:
    WdLogEvent5_WdError(v11);
    return (unsigned int)v8;
  }
  v9 = WdLogNewEntry5_WdEvent(v7, v6);
  *(_QWORD *)(v9 + 24) = v4;
  WdLogEvent5_WdEvent(v9);
  return (unsigned int)v8;
}
