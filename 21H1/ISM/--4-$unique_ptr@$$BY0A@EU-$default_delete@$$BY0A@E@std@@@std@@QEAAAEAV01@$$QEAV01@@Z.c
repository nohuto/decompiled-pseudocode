/*
 * XREFs of ??4?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009BCD0
 * Callers:
 *     ?OnReportQueryCallback@DockDeviceCollection@@AEAAJXZ @ 0x18009C1CC (-OnReportQueryCallback@DockDeviceCollection@@AEAAJXZ.c)
 *     ?TryGetDockInputReport@DockDevice@@QEAAJPEAUGetInputReportResult@@@Z @ 0x18009EB68 (-TryGetDockInputReport@DockDevice@@QEAAJPEAUGetInputReportResult@@@Z.c)
 *     ?CreateAndInitializeInputBuffer@HidLampArrayAttributesReportParser@@QEAAJAEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800A9EA8 (-CreateAndInitializeInputBuffer@HidLampArrayAttributesReportParser@@QEAAJAEAV-$unique_ptr@$$BY0A.c)
 *     ?CreateAndInitializeOutputBuffer@HidLampAttributesRequestReportParser@@QEAAJPEBULampAttributesRequestDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800AA468 (-CreateAndInitializeOutputBuffer@HidLampAttributesRequestReportParser@@QEAAJPEBULampAttributesRe.c)
 *     ?CreateAndInitializeInputBuffer@HidLampAttributesResponseReportParser@@QEAAJAEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800AAA78 (-CreateAndInitializeInputBuffer@HidLampAttributesResponseReportParser@@QEAAJAEAV-$unique_ptr@$$B.c)
 *     ?CreateAndInitializeOutputBuffer@HidLampMultiUpdateReportParser@@QEAAJPEBULampMultiUpdateDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800AB710 (-CreateAndInitializeOutputBuffer@HidLampMultiUpdateReportParser@@QEAAJPEBULampMultiUpdateDeviceR.c)
 *     ?CreateAndInitializeOutputBuffer@HidLampRangeUpdateReportParser@@QEAAJPEBULampRangeUpdateDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800AC218 (-CreateAndInitializeOutputBuffer@HidLampRangeUpdateReportParser@@QEAAJPEBULampRangeUpdateDeviceR.c)
 *     ?CreateAndInitializeOutputBuffer@HidLampArrayControlReportParser@@QEAAJPEBULampArrayControlDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800AC864 (-CreateAndInitializeOutputBuffer@HidLampArrayControlReportParser@@QEAAJPEBULampArrayControlDevic.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void **__fastcall std::unique_ptr<unsigned char [0]>::operator=(void **a1, const struct std::nothrow_t *a2)
{
  void *v3; // rax
  void *v4; // rcx

  if ( a1 != (void **)a2 )
  {
    v3 = *(void **)a2;
    *(_QWORD *)a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      operator delete(v4, a2);
  }
  return a1;
}
