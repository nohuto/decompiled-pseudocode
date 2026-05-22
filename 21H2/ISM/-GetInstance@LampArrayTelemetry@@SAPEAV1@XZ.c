/*
 * XREFs of ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800A4880
 * Callers:
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x1800266B0 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z.c)
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800A716C (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800AA450 (-TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@.c)
 * Callees:
 *     atexit @ 0x18003BC9C (atexit.c)
 *     _Init_thread_footer @ 0x18003C608 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18003C670 (_Init_thread_header.c)
 *     wil::init_once_nothrow__lambda_3ea8e1ac958ff1e75d916de58c44b505___ @ 0x1800A4734 (wil--init_once_nothrow__lambda_3ea8e1ac958ff1e75d916de58c44b505___.c)
 */

struct LampArrayTelemetry *__fastcall LampArrayTelemetry::GetInstance(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( dword_18020A500 > *(_DWORD *)(v3 + 16) )
  {
    Init_thread_header(&dword_18020A500);
    if ( dword_18020A500 == -1 )
    {
      atexit(LampArrayTelemetry::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__);
      Init_thread_footer(&dword_18020A500);
    }
  }
  wil::init_once_nothrow__lambda_3ea8e1ac958ff1e75d916de58c44b505___(v3, 0LL, a3);
  return qword_180209810;
}
