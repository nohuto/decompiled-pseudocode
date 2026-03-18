/*
 * XREFs of RIMRetrieveAllLinkIndexUsages @ 0x1C0168140
 * Callers:
 *     RIMIsParallelDevice @ 0x1C0167AE8 (RIMIsParallelDevice.c)
 *     RIMValidateAllCollectionUsages @ 0x1C01687F0 (RIMValidateAllCollectionUsages.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C016BEE4 (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C016BF38 (rimHidP_GetSpecificValueCaps.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMRetrieveAllLinkIndexUsages(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 *a4,
        unsigned __int16 *a5,
        __int64 *a6)
{
  unsigned __int16 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int SpecificValueCaps; // ebx
  __int64 v13; // r8
  unsigned __int16 v14; // ax
  void *v15; // rax
  int v16; // r9d
  __int64 v17; // rcx
  unsigned __int16 v18; // ax
  void *v19; // rax

  v9 = a1;
  if ( *a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( *a6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v9, 0, 0LL, (__int64)a3, a2);
  if ( SpecificValueCaps == 1114112 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
  if ( SpecificValueCaps != -1072627705 )
    goto LABEL_25;
  v14 = *a3;
  if ( !*a3 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
    v14 = *a3;
  }
  v15 = Win32AllocPoolZInit(72LL * v14, 0x63767352u);
  *a4 = (__int64)v15;
  if ( !v15 )
    goto LABEL_24;
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v9, 0, (__int64)v15, (__int64)a3, a2);
  if ( SpecificValueCaps != 1114112 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v16 = 27;
    goto LABEL_23;
  }
  SpecificValueCaps = rimHidP_GetSpecificButtonCaps(0, 0, v9, 0, 0LL, (__int64)a5, a2);
  if ( SpecificValueCaps == 1114112 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17);
  if ( SpecificValueCaps != -1072627705 )
    goto LABEL_25;
  v18 = *a5;
  if ( !*a5 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17);
    v18 = *a5;
  }
  v19 = Win32AllocPoolZInit(72LL * v18, 0x63767352u);
  *a6 = (__int64)v19;
  if ( v19 )
  {
    SpecificValueCaps = rimHidP_GetSpecificButtonCaps(0, 0, v9, 0, (__int64)v19, (__int64)a5, a2);
    if ( SpecificValueCaps == 1114112 )
      return SpecificValueCaps;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = 28;
LABEL_23:
      LOBYTE(v10) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v10, 1, v16, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
    }
  }
  else
  {
LABEL_24:
    SpecificValueCaps = -1073741801;
  }
LABEL_25:
  if ( SpecificValueCaps != 1114112 )
  {
    if ( *a4 )
    {
      Win32FreePool(*a4, v10, v13);
      *a4 = 0LL;
    }
    if ( *a6 )
    {
      Win32FreePool(*a6, v10, v13);
      *a6 = 0LL;
    }
  }
  return SpecificValueCaps;
}
