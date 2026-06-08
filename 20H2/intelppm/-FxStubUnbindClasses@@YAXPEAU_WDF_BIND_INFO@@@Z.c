/*
 * XREFs of ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C0007ED4
 * Callers:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0007E5C (-FxStubDriverUnloadCommon@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00047F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxStubUnbindClasses(struct _WDF_BIND_INFO *a1)
{
  _QWORD *v1; // rbx
  void (__fastcall *v2)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, _QWORD *); // rax

  v1 = &__KMDF_CLASS_BIND_END;
  if ( off_1C0017148 != &__KMDF_CLASS_BIND_START && &__KMDF_CLASS_BIND_END <= off_1C0017148 )
  {
    do
    {
      v2 = (void (__fastcall *)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, _QWORD *))v1[8];
      if ( v2 )
        v2(WdfVersionUnbindClass, &WdfBindInfo, WdfDriverGlobals, v1);
      else
        WdfVersionUnbindClass(&WdfBindInfo, WdfDriverGlobals, v1);
      v1 += 10;
    }
    while ( v1 <= (_QWORD *)off_1C0017148 );
  }
}
