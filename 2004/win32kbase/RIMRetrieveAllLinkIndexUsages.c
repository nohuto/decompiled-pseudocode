/*
 * XREFs of RIMRetrieveAllLinkIndexUsages @ 0x1C0161DF0
 * Callers:
 *     RIMIsParallelDevice @ 0x1C0161798 (RIMIsParallelDevice.c)
 *     RIMValidateAllCollectionUsages @ 0x1C01624A0 (RIMValidateAllCollectionUsages.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C0165B94 (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0165BE8 (rimHidP_GetSpecificValueCaps.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v14; // r9
  unsigned __int16 v15; // ax
  void *v16; // rax
  int v17; // edx
  int v18; // r9d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int16 v23; // ax
  void *v24; // rax

  v9 = a1;
  if ( *a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( *a6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v9, 0, 0LL, (__int64)a3, a2);
  if ( SpecificValueCaps == 1114112 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v13, v14);
  if ( SpecificValueCaps != -1072627705 )
    goto LABEL_25;
  v15 = *a3;
  if ( !*a3 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v13, v14);
    v15 = *a3;
  }
  v16 = Win32AllocPoolZInit(72LL * v15, 1668707154LL);
  *a4 = (__int64)v16;
  if ( !v16 )
    goto LABEL_24;
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v9, 0, (__int64)v16, (__int64)a3, a2);
  if ( SpecificValueCaps != 1114112 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v18 = 27;
    goto LABEL_23;
  }
  SpecificValueCaps = rimHidP_GetSpecificButtonCaps(0, 0, v9, 0, 0LL, (__int64)a5, a2);
  if ( SpecificValueCaps == 1114112 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21, v22);
  if ( SpecificValueCaps != -1072627705 )
    goto LABEL_25;
  v23 = *a5;
  if ( !*a5 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21, v22);
    v23 = *a5;
  }
  v24 = Win32AllocPoolZInit(72LL * v23, 1668707154LL);
  *a6 = (__int64)v24;
  if ( v24 )
  {
    SpecificValueCaps = rimHidP_GetSpecificButtonCaps(0, 0, v9, 0, (__int64)v24, (__int64)a5, a2);
    if ( SpecificValueCaps == 1114112 )
      return SpecificValueCaps;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = 28;
LABEL_23:
      LOBYTE(v17) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v17, 1, v18, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
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
      Win32FreePool(*a4);
      *a4 = 0LL;
    }
    if ( *a6 )
    {
      Win32FreePool(*a6);
      *a6 = 0LL;
    }
  }
  return SpecificValueCaps;
}
