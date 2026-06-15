/*
 * XREFs of ?TraceResult@AtmosCheck@@AEAAXJ_N@Z @ 0x180036EE4
 * Callers:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180036B20 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180037148 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _tlgKeywordOn @ 0x1800B7ADC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@D@@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@D@@53@Z @ 0x180134660 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@D@@U3@U1@@-$_tlgWrite.c)
 */

void __fastcall AtmosCheck::TraceResult(AtmosCheck *this, int a2, char a3)
{
  const char *v3; // r10
  const char *v6; // r11
  int v7; // ecx
  char *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // r11
  int v15; // [rsp+54h] [rbp-ACh] BYREF
  _DWORD v16[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+60h] [rbp-A0h]
  __int64 v18; // [rsp+68h] [rbp-98h]
  char *v19; // [rsp+70h] [rbp-90h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  void *v22; // [rsp+A0h] [rbp-60h]
  int v23; // [rsp+A8h] [rbp-58h]
  int v24; // [rsp+ACh] [rbp-54h]
  _DWORD *v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  char *v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  const char *v29; // [rsp+D0h] [rbp-30h]
  int v30; // [rsp+D8h] [rbp-28h]
  int v31; // [rsp+DCh] [rbp-24h]
  const char *v32; // [rsp+E0h] [rbp-20h]
  int v33; // [rsp+E8h] [rbp-18h]
  int v34; // [rsp+ECh] [rbp-14h]
  int *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]

  v3 = "None";
  v6 = "None";
  switch ( *((_DWORD *)this + 46) )
  {
    case 1:
      v3 = "Initialization";
      break;
    case 2:
      v3 = "AppInstallation";
      break;
    case 3:
      v3 = "AppUninstallation";
      break;
    case 4:
      v3 = "AppUpdating";
      break;
    case 5:
      v3 = "TimerCallback";
      break;
    case 6:
      v3 = "LicenseRefreshTimerCallback";
      break;
    case 7:
      v3 = "ForceLicenseRefresh";
      break;
    case 8:
      v3 = "ClientEventFired";
      break;
  }
  v7 = *((_DWORD *)this + 47);
  if ( v7 )
  {
    v11 = v7 - 1;
    if ( v11 )
    {
      if ( v11 == 1 )
        v6 = "Skipped";
    }
    else
    {
      v6 = "Disabled";
    }
  }
  else
  {
    v6 = "Enabled";
  }
  if ( !*((_BYTE *)this + 98) || a3 )
  {
    if ( (unsigned int)dword_18019D520 > 4 && (unsigned __int8)tlgKeywordOn(&dword_18019D520, 0x400000000000LL) )
    {
      v16[1] = a2;
      v19 = (char *)this + 168;
      v17 = v14;
      v18 = v13;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        v12,
        &unk_18016D7D9);
    }
    *((_BYTE *)this + 98) = 1;
  }
  else if ( (unsigned int)dword_18019D520 > 4 )
  {
    v15 = a2;
    v8 = (char *)this + 168;
    v35 = &v15;
    v9 = -1LL;
    v16[0] = 3;
    v10 = -1LL;
    v36 = 4LL;
    do
      ++v10;
    while ( v6[v10] );
    v32 = v6;
    v33 = v10 + 1;
    v34 = 0;
    do
      ++v9;
    while ( v3[v9] );
    v29 = v3;
    v30 = v9 + 1;
    v25 = v16;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_18019D528;
    v31 = 0;
    v27 = v8;
    v28 = 16LL;
    v26 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_18019D528;
    v22 = &unk_18016D932;
    UserData.Reserved = 2;
    v23 = 86;
    v24 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
  }
}
