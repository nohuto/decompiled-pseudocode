/*
 * XREFs of ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800A4980
 * Callers:
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x180026880 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z.c)
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800A726C (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@PEAPEAV1@@Z @ 0x1800AA550 (-TryCreateAndInitialize@HidLampAttributesRequestReportParser@@SAJPEBUParsedHidReportDescriptor@@.c)
 * Callees:
 *     atexit @ 0x18003BEFC (atexit.c)
 *     _Init_thread_footer @ 0x18003C868 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18003C8D0 (_Init_thread_header.c)
 *     wil::init_once_nothrow__lambda_3ea8e1ac958ff1e75d916de58c44b505___ @ 0x1800A4834 (wil--init_once_nothrow__lambda_3ea8e1ac958ff1e75d916de58c44b505___.c)
 */

struct LampArrayTelemetry *__fastcall LampArrayTelemetry::GetInstance(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( dword_18020A510 > *(_DWORD *)(v3 + 16) )
  {
    Init_thread_header(&dword_18020A510);
    if ( dword_18020A510 == -1 )
    {
      atexit(LampArrayTelemetry::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__);
      Init_thread_footer(&dword_18020A510);
    }
  }
  wil::init_once_nothrow__lambda_3ea8e1ac958ff1e75d916de58c44b505___(v3, 0LL, a3);
  return qword_180209930;
}
