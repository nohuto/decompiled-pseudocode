/*
 * XREFs of ?ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C0108228
 * Callers:
 *     ?ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C01081BC (-ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$defaul.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C0032270 (-RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003DB58 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C0101A54 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 */

bool __fastcall ndisIsNetSetupV2Interface(const struct _UNICODE_STRING *a1)
{
  bool v3; // bl
  KRegKey v4; // [rsp+20h] [rbp-228h] BYREF
  NTSTATUS (__stdcall *v5)(HANDLE); // [rsp+28h] [rbp-220h] BYREF
  wchar_t v6[256]; // [rsp+30h] [rbp-218h] BYREF

  memset(v6, 0, 0x100uLL);
  if ( (int)RtlStringCchPrintfW(
              v6,
              0x100uLL,
              (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Interfaces\\%wZ",
              a1) < 0 )
    return 0;
  v4.m_ptr = 0LL;
  v3 = (int)KRegKey::Open(&v4, 1u, v6, 0LL) >= 0;
  if ( v4.m_ptr )
  {
    v5 = ZwClose;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v5, &v4);
  }
  return v3;
}
