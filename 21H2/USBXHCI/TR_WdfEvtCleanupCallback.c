/*
 * XREFs of TR_WdfEvtCleanupCallback @ 0x1C0001700
 * Callers:
 *     <none>
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1C000182C (CommonBuffer_ReleaseBuffer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_WdfEvtCleanupCallback(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rcx
  struct _PCW_INSTANCE *v3; // rcx

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0061388);
  v2 = *(void **)(v1 + 304);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x49434858u);
    *(_QWORD *)(v1 + 304) = 0LL;
  }
  *(_DWORD *)(v1 + 312) = 0;
  if ( *(_QWORD *)(v1 + 176) )
  {
    CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)(v1 + 40) + 120LL));
    *(_QWORD *)(v1 + 176) = 0LL;
  }
  v3 = *(struct _PCW_INSTANCE **)(v1 + 272);
  if ( v3 )
    PcwCloseInstance(v3);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 32) + 8LL))(v1);
}
