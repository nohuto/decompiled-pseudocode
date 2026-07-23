/*
 * XREFs of _invalid_parameter @ 0x18008C868
 * Callers:
 *     _lfind @ 0x18008D660 (_lfind.c)
 *     _snprintf @ 0x18008D800 (_snprintf.c)
 *     _snwprintf @ 0x18008D8B0 (_snwprintf.c)
 *     _splitpath_helper @ 0x18008DA20 (_splitpath_helper.c)
 *     _strlwr_s @ 0x18008DD40 (_strlwr_s.c)
 *     _strupr @ 0x18008DE30 (_strupr.c)
 *     _strupr_s @ 0x18008DE80 (_strupr_s.c)
 *     swprintf @ 0x18008DEF0 (swprintf.c)
 *     _vscprintf_helper @ 0x18008DFCC (_vscprintf_helper.c)
 *     _vsprintf_l @ 0x18008E020 (_vsprintf_l.c)
 *     _vswprintf_l @ 0x18008E0F4 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x18008E1BC (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x18008E28C (_vsnwprintf_l.c)
 *     _wcslwr @ 0x18008E3D0 (_wcslwr.c)
 *     _wcslwr_s @ 0x18008E430 (_wcslwr_s.c)
 *     _wcsnset_s @ 0x18008E520 (_wcsnset_s.c)
 *     _wcsset_s @ 0x18008E5B0 (_wcsset_s.c)
 *     wcstoxq @ 0x18008E674 (wcstoxq.c)
 *     _wcsupr_s @ 0x18008E920 (_wcsupr_s.c)
 *     bsearch @ 0x18008F3C0 (bsearch.c)
 *     bsearch_s @ 0x18008F4C0 (bsearch_s.c)
 *     qsort @ 0x1800907E0 (qsort.c)
 *     qsort_s @ 0x180090B70 (qsort_s.c)
 *     sprintf @ 0x180090F30 (sprintf.c)
 *     vscan_fn @ 0x18009110C (vscan_fn.c)
 *     strtoxlX @ 0x180091B9C (strtoxlX.c)
 *     wcstoxlX @ 0x18009279C (wcstoxlX.c)
 *     strtoxq @ 0x180092C40 (strtoxq.c)
 *     _output_l @ 0x180092EB0 (_output_l.c)
 *     _woutput_l @ 0x180093840 (_woutput_l.c)
 *     _input_l @ 0x180095DF0 (_input_l.c)
 *     _wctomb_s_l @ 0x1800966D0 (_wctomb_s_l.c)
 *     _fputwc_nolock @ 0x1800967A4 (_fputwc_nolock.c)
 *     _ungetc_nolock @ 0x18009688C (_ungetc_nolock.c)
 *     x64toa_s @ 0x180096A0C (x64toa_s.c)
 *     xtoa_s @ 0x180096B40 (xtoa_s.c)
 *     x64tow_s @ 0x180096D0C (x64tow_s.c)
 *     xtow_s @ 0x180096E50 (xtow_s.c)
 *     _makepath_s @ 0x180096F90 (_makepath_s.c)
 *     _vsnprintf_s @ 0x180097110 (_vsnprintf_s.c)
 *     _snscanf_s @ 0x1800971B0 (_snscanf_s.c)
 *     _vsnwprintf_s @ 0x180097220 (_vsnwprintf_s.c)
 *     _snwscanf_s @ 0x1800972D0 (_snwscanf_s.c)
 *     _splitpath_s @ 0x180097310 (_splitpath_s.c)
 *     _strnset_s @ 0x1800975B0 (_strnset_s.c)
 *     _strset_s @ 0x180097640 (_strset_s.c)
 *     _wmakepath_s @ 0x1800976A0 (_wmakepath_s.c)
 *     _wsplitpath_s @ 0x180097820 (_wsplitpath_s.c)
 *     memcpy_s @ 0x180097AE0 (memcpy_s.c)
 *     memmove_s @ 0x180097B80 (memmove_s.c)
 *     vsprintf_s @ 0x180097C10 (vsprintf_s.c)
 *     sscanf_s @ 0x180097C60 (sscanf_s.c)
 *     strcat_s @ 0x180097CC0 (strcat_s.c)
 *     strcpy_s @ 0x180097D60 (strcpy_s.c)
 *     strncat_s @ 0x180097DF0 (strncat_s.c)
 *     strncpy_s @ 0x180097F00 (strncpy_s.c)
 *     strtok_s @ 0x180097FF0 (strtok_s.c)
 *     vswprintf_s @ 0x180098190 (vswprintf_s.c)
 *     swscanf_s @ 0x1800981F0 (swscanf_s.c)
 *     wcscat_s @ 0x180098250 (wcscat_s.c)
 *     wcscpy_s @ 0x1800982F0 (wcscpy_s.c)
 *     wcsncat_s @ 0x180098380 (wcsncat_s.c)
 *     wcsncpy_s @ 0x1800984A0 (wcsncpy_s.c)
 *     wcstok_s @ 0x1800985A0 (wcstok_s.c)
 *     _output_s @ 0x1800986B4 (_output_s.c)
 *     _safecrt_wctomb_s @ 0x180098F3C (_safecrt_wctomb_s.c)
 *     _soutput_s @ 0x180099018 (_soutput_s.c)
 *     _input_s @ 0x180099588 (_input_s.c)
 *     _sinput_s @ 0x180099F34 (_sinput_s.c)
 *     _swoutput_s @ 0x180099FAC (_swoutput_s.c)
 *     _woutput_s @ 0x18009A0DC (_woutput_s.c)
 *     _swinput_s @ 0x18009AEB8 (_swinput_s.c)
 *     _winput_s @ 0x18009AF8C (_winput_s.c)
 *     _fgetwc_nolock @ 0x18009B97C (_fgetwc_nolock.c)
 *     _ungetwc_nolock @ 0x18009B9C8 (_ungetwc_nolock.c)
 * Callees:
 *     RtlVirtualUnwind @ 0x180030DE0 (RtlVirtualUnwind.c)
 *     RtlLookupFunctionEntry @ 0x180032BE0 (RtlLookupFunctionEntry.c)
 *     DbgPrint @ 0x180051AC0 (DbgPrint.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     RtlCaptureContext @ 0x1800A1760 (RtlCaptureContext.c)
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
