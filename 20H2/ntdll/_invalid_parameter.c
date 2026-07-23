/*
 * XREFs of _invalid_parameter @ 0x18008C268
 * Callers:
 *     _lfind @ 0x18008D060 (_lfind.c)
 *     _snprintf @ 0x18008D200 (_snprintf.c)
 *     _snwprintf @ 0x18008D2B0 (_snwprintf.c)
 *     _splitpath_helper @ 0x18008D420 (_splitpath_helper.c)
 *     _strlwr_s @ 0x18008D740 (_strlwr_s.c)
 *     _strupr @ 0x18008D830 (_strupr.c)
 *     _strupr_s @ 0x18008D880 (_strupr_s.c)
 *     swprintf @ 0x18008D8F0 (swprintf.c)
 *     _vscprintf_helper @ 0x18008D9CC (_vscprintf_helper.c)
 *     _vsprintf_l @ 0x18008DA20 (_vsprintf_l.c)
 *     _vswprintf_l @ 0x18008DAF4 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x18008DBBC (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x18008DC8C (_vsnwprintf_l.c)
 *     _wcslwr @ 0x18008DDD0 (_wcslwr.c)
 *     _wcslwr_s @ 0x18008DE30 (_wcslwr_s.c)
 *     _wcsnset_s @ 0x18008DF20 (_wcsnset_s.c)
 *     _wcsset_s @ 0x18008DFB0 (_wcsset_s.c)
 *     wcstoxq @ 0x18008E074 (wcstoxq.c)
 *     _wcsupr_s @ 0x18008E320 (_wcsupr_s.c)
 *     bsearch @ 0x18008EDC0 (bsearch.c)
 *     bsearch_s @ 0x18008EEC0 (bsearch_s.c)
 *     qsort @ 0x1800901E0 (qsort.c)
 *     qsort_s @ 0x180090570 (qsort_s.c)
 *     sprintf @ 0x180090930 (sprintf.c)
 *     vscan_fn @ 0x180090B0C (vscan_fn.c)
 *     strtoxlX @ 0x18009159C (strtoxlX.c)
 *     wcstoxlX @ 0x18009219C (wcstoxlX.c)
 *     strtoxq @ 0x180092640 (strtoxq.c)
 *     _output_l @ 0x1800928B0 (_output_l.c)
 *     _woutput_l @ 0x180093240 (_woutput_l.c)
 *     _input_l @ 0x1800957F0 (_input_l.c)
 *     _wctomb_s_l @ 0x1800960D0 (_wctomb_s_l.c)
 *     _fputwc_nolock @ 0x1800961A4 (_fputwc_nolock.c)
 *     _ungetc_nolock @ 0x18009628C (_ungetc_nolock.c)
 *     x64toa_s @ 0x18009640C (x64toa_s.c)
 *     xtoa_s @ 0x180096540 (xtoa_s.c)
 *     x64tow_s @ 0x18009670C (x64tow_s.c)
 *     xtow_s @ 0x180096850 (xtow_s.c)
 *     _makepath_s @ 0x180096990 (_makepath_s.c)
 *     _vsnprintf_s @ 0x180096B10 (_vsnprintf_s.c)
 *     _snscanf_s @ 0x180096BB0 (_snscanf_s.c)
 *     _vsnwprintf_s @ 0x180096C20 (_vsnwprintf_s.c)
 *     _snwscanf_s @ 0x180096CD0 (_snwscanf_s.c)
 *     _splitpath_s @ 0x180096D10 (_splitpath_s.c)
 *     _strnset_s @ 0x180096FB0 (_strnset_s.c)
 *     _strset_s @ 0x180097040 (_strset_s.c)
 *     _wmakepath_s @ 0x1800970A0 (_wmakepath_s.c)
 *     _wsplitpath_s @ 0x180097220 (_wsplitpath_s.c)
 *     memcpy_s @ 0x1800974E0 (memcpy_s.c)
 *     memmove_s @ 0x180097580 (memmove_s.c)
 *     vsprintf_s @ 0x180097610 (vsprintf_s.c)
 *     sscanf_s @ 0x180097660 (sscanf_s.c)
 *     strcat_s @ 0x1800976C0 (strcat_s.c)
 *     strcpy_s @ 0x180097760 (strcpy_s.c)
 *     strncat_s @ 0x1800977F0 (strncat_s.c)
 *     strncpy_s @ 0x180097900 (strncpy_s.c)
 *     strtok_s @ 0x1800979F0 (strtok_s.c)
 *     vswprintf_s @ 0x180097B90 (vswprintf_s.c)
 *     swscanf_s @ 0x180097BF0 (swscanf_s.c)
 *     wcscat_s @ 0x180097C50 (wcscat_s.c)
 *     wcscpy_s @ 0x180097CF0 (wcscpy_s.c)
 *     wcsncat_s @ 0x180097D80 (wcsncat_s.c)
 *     wcsncpy_s @ 0x180097EA0 (wcsncpy_s.c)
 *     wcstok_s @ 0x180097FA0 (wcstok_s.c)
 *     _output_s @ 0x1800980B4 (_output_s.c)
 *     _safecrt_wctomb_s @ 0x18009893C (_safecrt_wctomb_s.c)
 *     _soutput_s @ 0x180098A18 (_soutput_s.c)
 *     _input_s @ 0x180098F88 (_input_s.c)
 *     _sinput_s @ 0x180099934 (_sinput_s.c)
 *     _swoutput_s @ 0x1800999AC (_swoutput_s.c)
 *     _woutput_s @ 0x180099ADC (_woutput_s.c)
 *     _swinput_s @ 0x18009A8B8 (_swinput_s.c)
 *     _winput_s @ 0x18009A98C (_winput_s.c)
 *     _fgetwc_nolock @ 0x18009B37C (_fgetwc_nolock.c)
 *     _ungetwc_nolock @ 0x18009B3C8 (_ungetwc_nolock.c)
 * Callees:
 *     RtlVirtualUnwind @ 0x180030DE0 (RtlVirtualUnwind.c)
 *     RtlLookupFunctionEntry @ 0x180032BE0 (RtlLookupFunctionEntry.c)
 *     DbgPrint @ 0x1800509B0 (DbgPrint.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     RtlCaptureContext @ 0x1800A11C0 (RtlCaptureContext.c)
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
