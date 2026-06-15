/*
 * XREFs of ?EventTypeNameFromEventType@@YAPEBG_K@Z @ 0x180115490
 * Callers:
 *     ServicePowerEvent @ 0x180053D40 (ServicePowerEvent.c)
 *     ServiceDeviceEvent @ 0x180115AA8 (ServiceDeviceEvent.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall EventTypeNameFromEventType(unsigned __int64 a1)
{
  if ( a1 <= 0x8013 )
  {
    if ( (unsigned int)a1 > 0xB )
    {
      switch ( (_DWORD)a1 )
      {
        case 0x12:
          return L"PBT_APMRESUMEAUTOMATIC";
        case 0x8000:
          return L"DBT_DEVICEARRIVAL";
        case 0x8001:
          return L"DBT_DEVICEQUERYREMOVE";
        case 0x8002:
          return L"DBT_DEVICEQUERYREMOVEFAILED";
        case 0x8003:
          return L"DBT_DEVICEREMOVEPENDING";
        case 0x8004:
          return L"DBT_DEVICEREMOVECOMPLETE";
        case 0x8013:
          return L"PBT_POWERSETTINGCHANGE";
      }
    }
    else
    {
      switch ( (_DWORD)a1 )
      {
        case 0xB:
          return L"PBT_APMOEMEVENT";
        case 0:
          return L"PBT_APMQUERYSUSPEND";
        case 2:
          return L"PBT_APMQUERYSUSPENDFAILED";
        case 4:
          return L"PBT_APMSUSPEND";
        case 6:
          return L"PBT_APMRESUMECRITICAL";
        case 7:
          return L"PBT_APMRESUMESUSPEND";
        case 9:
          return L"PBT_APMBATTERYLOW";
        case 0xA:
          return L"PBT_APMPOWERSTATUSCHANGE";
      }
    }
  }
  return L"UNKNOWN";
}
