/*
 * XREFs of ?InsertValue@HidChannelValueInfo@@QEAAJH_KPEAE@Z @ 0x1800AC5A4
 * Callers:
 *     ?CreateAndInitializeOutputBuffer@HidLampAttributesRequestReportParser@@QEAAJPEBULampAttributesRequestDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800A9F08 (-CreateAndInitializeOutputBuffer@HidLampAttributesRequestReportParser@@QEAAJPEBULampAttributesRe.c)
 *     ?CreateAndInitializeOutputBuffer@HidLampMultiUpdateReportParser@@QEAAJPEBULampMultiUpdateDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800AB1B0 (-CreateAndInitializeOutputBuffer@HidLampMultiUpdateReportParser@@QEAAJPEBULampMultiUpdateDeviceR.c)
 *     ?CreateAndInitializeOutputBuffer@HidLampRangeUpdateReportParser@@QEAAJPEBULampRangeUpdateDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800ABCB8 (-CreateAndInitializeOutputBuffer@HidLampRangeUpdateReportParser@@QEAAJPEBULampRangeUpdateDeviceR.c)
 *     ?CreateAndInitializeOutputBuffer@HidLampArrayControlReportParser@@QEAAJPEBULampArrayControlDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800AC304 (-CreateAndInitializeOutputBuffer@HidLampArrayControlReportParser@@QEAAJPEBULampArrayControlDevic.c)
 * Callees:
 *     ?InternalInsertValue@HidChannelValueInfo@@AEAAXI_KPEAE@Z @ 0x1800AC600 (-InternalInsertValue@HidChannelValueInfo@@AEAAXI_KPEAE@Z.c)
 */

__int64 __fastcall HidChannelValueInfo::InsertValue(
        HidChannelValueInfo *this,
        signed int a2,
        unsigned __int64 a3,
        unsigned __int8 *a4)
{
  if ( a2 < *((_QWORD *)this + 3) || a2 > *((_QWORD *)this + 4) )
    return 2147942487LL;
  HidChannelValueInfo::InternalInsertValue(this, a2, a3, a4);
  return 0LL;
}
