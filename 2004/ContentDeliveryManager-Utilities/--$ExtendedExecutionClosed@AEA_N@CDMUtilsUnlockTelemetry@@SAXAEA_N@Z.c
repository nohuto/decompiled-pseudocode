/*
 * XREFs of ??$ExtendedExecutionClosed@AEA_N@CDMUtilsUnlockTelemetry@@SAXAEA_N@Z @ 0x180081B68
 * Callers:
 *     ?CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z @ 0x180080A9C (-CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800011F0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Provider@CDMUtilsUnlockLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18007FAFC (-Provider@CDMUtilsUnlockLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 */

int __fastcall CDMUtilsUnlockTelemetry::ExtendedExecutionClosed<bool &>(char *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // rcx
  char v4; // al
  char v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  char *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v2 = CDMUtilsUnlockLogging::Provider();
  v3 = (__int64)v2;
  if ( *(_DWORD *)v2 > 5u )
  {
    LODWORD(v2) = 0;
    if ( (*(_QWORD *)(v3 + 16) & 0x200000000000LL) != 0
      && (*(_QWORD *)(v3 + 24) & 0x200000000000LL) == *(_QWORD *)(v3 + 24) )
    {
      v4 = *a1;
      v10 = 0;
      v6 = v4;
      v9 = 1;
      v8 = &v6;
      LODWORD(v2) = tlgWriteTransfer_EventWriteTransfer(v3, (unsigned __int8 *)dword_1801788E0, 0LL, 0LL, 3u, &v7);
    }
  }
  return (int)v2;
}
