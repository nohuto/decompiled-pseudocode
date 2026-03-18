/*
 * XREFs of ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C0072028
 * Callers:
 *     WinSqmSetDWORD @ 0x1C0071ED0 (WinSqmSetDWORD.c)
 *     SqmPowerState @ 0x1C0071F00 (SqmPowerState.c)
 *     WinSqmIncrementDWORD @ 0x1C0072000 (WinSqmIncrementDWORD.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00C78B0 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     WinSqmAddToAverageDWORD @ 0x1C013C4E0 (WinSqmAddToAverageDWORD.c)
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C01A1560 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     WinSqmEventEnabled @ 0x1C00720A8 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C0072100 (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     WinSqmEventWrite @ 0x1C00B8C30 (WinSqmEventWrite.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

void __fastcall _WinSqmDWORDEvent(PCEVENT_DESCRIPTOR EventDescriptor, struct _GUID *a2, int a3, int a4)
{
  struct _GUID *v6; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-58h] BYREF
  int *v8; // [rsp+30h] [rbp-48h]
  int v9; // [rsp+38h] [rbp-40h]
  int v10; // [rsp+3Ch] [rbp-3Ch]
  void *v11; // [rsp+40h] [rbp-38h]
  int v12; // [rsp+48h] [rbp-30h]
  int v13; // [rsp+4Ch] [rbp-2Ch]
  int *v14; // [rsp+50h] [rbp-28h]
  int v15; // [rsp+58h] [rbp-20h]
  int v16; // [rsp+5Ch] [rbp-1Ch]
  int v17; // [rsp+B0h] [rbp+38h] BYREF
  int v18; // [rsp+B8h] [rbp+40h] BYREF

  if ( a2 != (struct _GUID *)-1LL )
  {
    v18 = a4;
    v17 = a3;
    if ( (unsigned int)IsExtendedWinSqmHandle(a2) )
    {
      v6 = (struct _GUID *)((char *)a2 + 24);
    }
    else
    {
      v6 = (struct _GUID *)&unk_1C02076D8;
      if ( a2 )
        v6 = a2;
    }
    if ( (unsigned int)WinSqmEventEnabled(EventDescriptor, v6) )
    {
      UserData.Reserved = 0;
      v10 = 0;
      v13 = 0;
      v16 = 0;
      v8 = &v17;
      v11 = &unk_1C024E7E0;
      v14 = &v18;
      UserData.Ptr = (ULONGLONG)v6;
      UserData.Size = 16;
      v9 = 4;
      v12 = 4;
      v15 = 4;
      WinSqmEventWrite(EventDescriptor, 4u, &UserData);
    }
  }
}
