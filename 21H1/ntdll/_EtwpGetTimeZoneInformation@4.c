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
  int TimeZoneInformationWorker; // [esp+Ch] [ebp-BCh]
  _WORD v5[90]; // [esp+10h] [ebp-B8h] BYREF

  TimeZoneInformationWorker = RtlpQueryTimeZoneInformationWorker(v5, 0xACu);
  if ( TimeZoneInformationWorker < 0 )
  {
    memset(this, 0, 0xACu);
  }
  else
  {
    v2 = v5[34];
    qmemcpy(this, v5, 0xACu);
    *((_WORD *)this + 34) = v2;
    *((_WORD *)this + 35) = v5[35];
    *((_WORD *)this + 37) = v5[36];
    *((_WORD *)this + 36) = v5[41];
    *((_WORD *)this + 38) = v5[37];
    *((_WORD *)this + 39) = v5[38];
    *((_WORD *)this + 40) = v5[39];
    *((_WORD *)this + 41) = v5[40];
    *((_WORD *)this + 76) = v5[76];
    *((_WORD *)this + 77) = v5[77];
    *((_WORD *)this + 79) = v5[78];
    *((_WORD *)this + 78) = v5[83];
    *((_WORD *)this + 80) = v5[79];
    *((_WORD *)this + 81) = v5[80];
    *((_WORD *)this + 82) = v5[81];
    *((_WORD *)this + 83) = v5[82];
  }
  return TimeZoneInformationWorker;
}
