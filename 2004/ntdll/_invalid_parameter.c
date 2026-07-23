/*
 * XREFs of _invalid_parameter @ 0x18008C168
 * Callers:
 *     _lfind @ 0x18008CF60 (_lfind.c)
 *     _snprintf @ 0x18008D100 (_snprintf.c)
 *     _snwprintf @ 0x18008D1B0 (_snwprintf.c)
 *     _splitpath_helper @ 0x18008D320 (_splitpath_helper.c)
 *     _strlwr_s @ 0x18008D640 (_strlwr_s.c)
 *     _strupr @ 0x18008D730 (_strupr.c)
 *     _strupr_s @ 0x18008D780 (_strupr_s.c)
 *     swprintf @ 0x18008D7F0 (swprintf.c)
 *     _vscprintf_helper @ 0x18008D8CC (_vscprintf_helper.c)
 *     _vsprintf_l @ 0x18008D920 (_vsprintf_l.c)
 *     _vswprintf_l @ 0x18008D9F4 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x18008DABC (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x18008DB8C (_vsnwprintf_l.c)
 *     _wcslwr @ 0x18008DCD0 (_wcslwr.c)
 *     _wcslwr_s @ 0x18008DD30 (_wcslwr_s.c)
 *     _wcsnset_s @ 0x18008DE20 (_wcsnset_s.c)
 *     _wcsset_s @ 0x18008DEB0 (_wcsset_s.c)
 *     wcstoxq @ 0x18008DF74 (wcstoxq.c)
 *     _wcsupr_s @ 0x18008E220 (_wcsupr_s.c)
 *     bsearch @ 0x18008ECC0 (bsearch.c)
 *     bsearch_s @ 0x18008EDC0 (bsearch_s.c)
 *     qsort @ 0x1800900E0 (qsort.c)
 *     qsort_s @ 0x180090470 (qsort_s.c)
 *     sprintf @ 0x180090830 (sprintf.c)
 *     vscan_fn @ 0x180090A0C (vscan_fn.c)
 *     strtoxlX @ 0x18009149C (strtoxlX.c)
 *     wcstoxlX @ 0x18009209C (wcstoxlX.c)
 *     strtoxq @ 0x180092540 (strtoxq.c)
 *     _output_l @ 0x1800927B0 (_output_l.c)
 *     _woutput_l @ 0x180093140 (_woutput_l.c)
 *     _input_l @ 0x1800956F0 (_input_l.c)
 *     _wctomb_s_l @ 0x180095FD0 (_wctomb_s_l.c)
 *     _fputwc_nolock @ 0x1800960A4 (_fputwc_nolock.c)
 *     _ungetc_nolock @ 0x18009618C (_ungetc_nolock.c)
 *     x64toa_s @ 0x18009630C (x64toa_s.c)
 *     xtoa_s @ 0x180096440 (xtoa_s.c)
 *     x64tow_s @ 0x18009660C (x64tow_s.c)
 *     xtow_s @ 0x180096750 (xtow_s.c)
 *     _makepath_s @ 0x180096890 (_makepath_s.c)
 *     _vsnprintf_s @ 0x180096A10 (_vsnprintf_s.c)
 *     _snscanf_s @ 0x180096AB0 (_snscanf_s.c)
 *     _vsnwprintf_s @ 0x180096B20 (_vsnwprintf_s.c)
 *     _snwscanf_s @ 0x180096BD0 (_snwscanf_s.c)
 *     _splitpath_s @ 0x180096C10 (_splitpath_s.c)
 *     _strnset_s @ 0x180096EB0 (_strnset_s.c)
 *     _strset_s @ 0x180096F40 (_strset_s.c)
 *     _wmakepath_s @ 0x180096FA0 (_wmakepath_s.c)
 *     _wsplitpath_s @ 0x180097120 (_wsplitpath_s.c)
 *     memcpy_s @ 0x1800973E0 (memcpy_s.c)
 *     memmove_s @ 0x180097480 (memmove_s.c)
 *     vsprintf_s @ 0x180097510 (vsprintf_s.c)
 *     sscanf_s @ 0x180097560 (sscanf_s.c)
 *     strcat_s @ 0x1800975C0 (strcat_s.c)
 *     strcpy_s @ 0x180097660 (strcpy_s.c)
 *     strncat_s @ 0x1800976F0 (strncat_s.c)
 *     strncpy_s @ 0x180097800 (strncpy_s.c)
 *     strtok_s @ 0x1800978F0 (strtok_s.c)
 *     vswprintf_s @ 0x180097A90 (vswprintf_s.c)
 *     swscanf_s @ 0x180097AF0 (swscanf_s.c)
 *     wcscat_s @ 0x180097B50 (wcscat_s.c)
 *     wcscpy_s @ 0x180097BF0 (wcscpy_s.c)
 *     wcsncat_s @ 0x180097C80 (wcsncat_s.c)
 *     wcsncpy_s @ 0x180097DA0 (wcsncpy_s.c)
 *     wcstok_s @ 0x180097EA0 (wcstok_s.c)
 *     _output_s @ 0x180097FB4 (_output_s.c)
 *     _safecrt_wctomb_s @ 0x18009883C (_safecrt_wctomb_s.c)
 *     _soutput_s @ 0x180098918 (_soutput_s.c)
 *     _input_s @ 0x180098E88 (_input_s.c)
 *     _sinput_s @ 0x180099834 (_sinput_s.c)
 *     _swoutput_s @ 0x1800998AC (_swoutput_s.c)
 *     _woutput_s @ 0x1800999DC (_woutput_s.c)
 *     _swinput_s @ 0x18009A7B8 (_swinput_s.c)
 *     _winput_s @ 0x18009A88C (_winput_s.c)
 *     _fgetwc_nolock @ 0x18009B27C (_fgetwc_nolock.c)
 *     _ungetwc_nolock @ 0x18009B2C8 (_ungetwc_nolock.c)
 * Callees:
 *     RtlVirtualUnwind @ 0x180030DE0 (RtlVirtualUnwind.c)
 *     RtlLookupFunctionEntry @ 0x180032BE0 (RtlLookupFunctionEntry.c)
 *     DbgPrint @ 0x180050960 (DbgPrint.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     RtlCaptureContext @ 0x1800A0F20 (RtlCaptureContext.c)
 */

ULONG invalid_parameter()
{
  ULONG64 Rip; // rbx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v1; // rax
  unsigned __int64 ImageBase; // [rsp+40h] [rbp-508h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+48h] [rbp-500h] BYREF
  PVOID HandlerData; // [rsp+50h] [rbp-4F8h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+60h] [rbp-4E8h] BYREF
  DWORD64 retaddr; // [rsp+548h] [rbp+0h] BYREF

  RtlCaptureContext(&ContextRecord);
  Rip = ContextRecord.Rip;
  v1 = RtlLookupFunctionEntry(ContextRecord.Rip, &ImageBase, 0LL);
  if ( v1 )
  {
    RtlVirtualUnwind(0, ImageBase, Rip, v1, &ContextRecord, &HandlerData, &EstablisherFrame, 0LL);
  }
  else
  {
    ContextRecord.Rip = retaddr;
    ContextRecord.Rsp = (DWORD64)&retaddr;
  }
  return DbgPrint("Invalid parameter passed to C runtime function.\n");
}
