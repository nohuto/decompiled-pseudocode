/*
 * XREFs of ?SstpHandlePoPowerStateChange@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180044530
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

__int64 __fastcall SstpHandlePoPowerStateChange(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _DWORD *a4)
{
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v7; // eax
  _SYSTEM_POWER_STATUS SystemPowerStatus; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&SystemPowerStatus.ACLineStatus = 0LL;
  SystemPowerStatus.BatteryFullLifeTime = 0;
  v5 = 0;
  if ( GetSystemPowerStatus(&SystemPowerStatus) )
  {
    v6 = a4[5];
    if ( SystemPowerStatus.ACLineStatus == 1 )
      v7 = v6 | 2;
    else
      v7 = v6 & 0xFFFFFFFD;
    a4[5] = v7;
  }
  else if ( (int)GetLastError() > 0 )
  {
    return (unsigned __int16)GetLastError() | 0xC0070000;
  }
  else
  {
    return GetLastError();
  }
  return v5;
}
