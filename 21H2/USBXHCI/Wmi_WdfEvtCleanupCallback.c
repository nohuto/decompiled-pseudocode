/*
 * XREFs of Wmi_WdfEvtCleanupCallback @ 0x1C0049C70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Wmi_WdfEvtCleanupCallback(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rcx

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00612E8);
  v2 = *(void **)(v1 + 16);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x49434858u);
    *(_QWORD *)(v1 + 16) = 0LL;
    *(_DWORD *)(v1 + 8) = 0;
  }
}
