/*
 * XREFs of Crashdump_UcxEvtFreeDumpData @ 0x1C004AF60
 * Callers:
 *     <none>
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1C000182C (CommonBuffer_ReleaseBuffer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Crashdump_FreeDeviceContext @ 0x1C004A1BC (Crashdump_FreeDeviceContext.c)
 */

ULONG __fastcall Crashdump_UcxEvtFreeDumpData(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  void *v6; // rcx
  unsigned int v7; // edi
  void *v8; // rcx
  _QWORD **v9; // rdi
  _QWORD *v10; // rdx
  _QWORD *v11; // rax

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UcxEvtFreeDumpData: Begin\n");
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0061428);
  v5 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( *(_QWORD *)(v4 + 424) == v5 )
    *(_QWORD *)(v4 + 424) = 0LL;
  v6 = *(void **)(v5 + 568);
  if ( v6 )
  {
    v7 = 0;
    if ( *(_DWORD *)(v5 + 536) )
    {
      do
        Crashdump_FreeDeviceContext(*(_QWORD *)(v5 + 568) + 376LL * v7++);
      while ( v7 < *(_DWORD *)(v5 + 536) );
      v6 = *(void **)(v5 + 568);
    }
    ExFreePoolWithTag(v6, 0x43434858u);
  }
  v8 = *(void **)(v5 + 176);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *(_QWORD *)(v5 + 176) = 0LL;
  }
  v9 = (_QWORD **)(v5 + 496);
  while ( 1 )
  {
    v10 = *v9;
    if ( *v9 == v9 )
      break;
    if ( (_QWORD **)v10[1] != v9 || (v11 = (_QWORD *)*v10, *(_QWORD **)(*v10 + 8LL) != v10) )
      __fastfail(3u);
    *v9 = v11;
    v11[1] = v9;
    CommonBuffer_ReleaseBuffer(*(_QWORD *)(v5 + 488), (__int64)v10);
  }
  ExFreePoolWithTag((PVOID)v5, 0x43434858u);
  return DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UcxEvtFreeDumpData: End\n");
}
