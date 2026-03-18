/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C003E918
 * Callers:
 *     FxStubDriverUnload @ 0x1C003E9C0 (FxStubDriverUnload.c)
 *     FxDriverEntryWorker @ 0x1C003EA34 (FxDriverEntryWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

void FxStubDriverUnloadCommon(void)
{
  _QWORD *v0; // rbx
  void (__fastcall *v1)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, _QWORD *); // rax

  v0 = &__KMDF_CLASS_BIND_END;
  if ( off_1C0069838 != &__KMDF_CLASS_BIND_START && &__KMDF_CLASS_BIND_END <= off_1C0069838 )
  {
    do
    {
      v1 = (void (__fastcall *)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, _QWORD *))v0[8];
      if ( v1 )
        v1(WdfVersionUnbindClass, &WdfBindInfo, WdfDriverGlobals, v0);
      else
        WdfVersionUnbindClass(&WdfBindInfo, WdfDriverGlobals, v0);
      v0 += 10;
    }
    while ( v0 <= (_QWORD *)off_1C0069838 );
  }
  WdfVersionUnbind(&DestinationString, &WdfBindInfo, WdfDriverGlobals);
}
