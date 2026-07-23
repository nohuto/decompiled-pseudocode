/*
 * XREFs of _EtwpGetTimeZoneInformation@4 @ 0x4B2F12B5
 * Callers:
 *     _EtwpAddLogHeaderToLogFile@16 @ 0x4B2F085E (_EtwpAddLogHeaderToLogFile@16.c)
 * Callees:
 *     _RtlpQueryTimeZoneInformationWorker@8 @ 0x4B2F13A9 (_RtlpQueryTimeZoneInformationWorker@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __thiscall EtwpGetTimeZoneInformation(void *this)
{
  __int16 v2; // ax
  size_t v4; // [esp-4h] [ebp-CCh]
  int TimeZoneInformationWorker; // [esp+Ch] [ebp-BCh]
  _WORD v6[90]; // [esp+10h] [ebp-B8h] BYREF

  TimeZoneInformationWorker = RtlpQueryTimeZoneInformationWorker(v6, 172);
  if ( TimeZoneInformationWorker < 0 )
  {
    LODWORD(v4) = 172;
    memset(this, 0, v4);
  }
  else
  {
    v2 = v6[34];
    qmemcpy(this, v6, 0xACu);
    *((_WORD *)this + 34) = v2;
    *((_WORD *)this + 35) = v6[35];
    *((_WORD *)this + 37) = v6[36];
    *((_WORD *)this + 36) = v6[41];
    *((_WORD *)this + 38) = v6[37];
    *((_WORD *)this + 39) = v6[38];
    *((_WORD *)this + 40) = v6[39];
    *((_WORD *)this + 41) = v6[40];
    *((_WORD *)this + 76) = v6[76];
    *((_WORD *)this + 77) = v6[77];
    *((_WORD *)this + 79) = v6[78];
    *((_WORD *)this + 78) = v6[83];
    *((_WORD *)this + 80) = v6[79];
    *((_WORD *)this + 81) = v6[80];
    *((_WORD *)this + 82) = v6[81];
    *((_WORD *)this + 83) = v6[82];
  }
  return TimeZoneInformationWorker;
}
