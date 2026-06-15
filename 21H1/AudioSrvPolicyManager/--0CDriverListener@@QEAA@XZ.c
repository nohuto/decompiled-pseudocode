/*
 * XREFs of ??0CDriverListener@@QEAA@XZ @ 0x1800330C0
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002D49C (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800055F4 (WPP_SF_.c)
 */

CDriverListener *__fastcall CDriverListener::CDriverListener(CDriverListener *this)
{
  _QWORD *v2; // rcx

  *((_DWORD *)this + 124) = 0;
  *(_QWORD *)this = &CDriverListener::`vftable';
  v2 = (_QWORD *)((char *)this + 504);
  *((_QWORD *)this + 64) = 0LL;
  *v2 = 0LL;
  RtlSubscribeWnfStateChangeNotification(
    v2,
    WNF_AVLC_VOLUME_WARNING_ACCEPTED,
    0LL,
    CDriverListener::s_ShellWnfCallback,
    this,
    0LL,
    0,
    0);
  RtlSubscribeWnfStateChangeNotification(
    (char *)this + 512,
    WNF_AVLC_DRIVER_REQUEST,
    0LL,
    CDriverListener::s_DriverWnfCallback,
    this,
    0LL,
    0,
    0);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_5b37b8f233753825c31d2e3c8b373342_Traceguids);
  }
  return this;
}
