/*
 * XREFs of ?GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z @ 0x1C01A2E50
 * Callers:
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1C01A3C48 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     IsLegacyTouchPad @ 0x1C0025A98 (IsLegacyTouchPad.c)
 *     ?GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z @ 0x1C0152A10 (-GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall PTPTelemetry::GetDeviceData(
        struct _UNICODE_STRING *a1,
        struct _UNICODE_STRING *a2,
        bool *a3,
        bool *a4,
        unsigned int *a5,
        bool *a6,
        struct tagRECT *a7,
        struct tagRECT *a8)
{
  char v10; // bp
  __int64 v11; // r8
  __int64 v12; // r9
  struct DEVICEINFO *v13; // rbx
  _BOOL8 v14; // rdx
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rcx
  struct tagRECT v18; // xmm1

  *a5 = 0;
  *a6 = 0;
  v10 = 0;
  *a7 = 0LL;
  *a3 = 0;
  *a8 = 0LL;
  *a4 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&CBaseInput::_sLock, 0LL);
  v13 = CBaseInput::_spDevList;
  v14 = 0LL;
  if ( CBaseInput::_spDevList )
  {
    do
    {
      if ( (*((_DWORD *)v13 + 50) & 0x80u) == 0 )
      {
        if ( *((_BYTE *)v13 + 48) == v14 )
        {
          if ( *((_WORD *)v13 + 444) == v14 )
          {
            *a3 = 1;
          }
          else if ( (unsigned int)IsLegacyTouchPad((__int64)v13) )
          {
            *a6 = 1;
            PTPTelemetry::s_HasTpDevice = 1;
          }
        }
      }
      else
      {
        v15 = *((_QWORD *)v13 + 60);
        v16 = *(_DWORD *)(v15 + 24);
        if ( v16 == 7 )
        {
          v17 = *(unsigned int *)(v15 + 904);
          v10 = 1;
          PTPTelemetry::s_HasTpDevice = 1;
          switch ( (_DWORD)v17 )
          {
            case 1:
              *a5 = 1;
              break;
            case 2:
              *a5 = 2;
              break;
            case 3:
              *a5 = 3;
              break;
            case 0:
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v14, v11, v12);
              v15 = *((_QWORD *)v13 + 60);
              break;
          }
          v18 = *(struct tagRECT *)(v15 + 140);
          *a7 = *(struct tagRECT *)(v15 + 124);
          *a8 = v18;
          RimTelemetry::GetHidVidPidStrings(v13, a1, a2);
          v14 = 0LL;
        }
        else if ( (unsigned int)(v16 - 1) <= 3 )
        {
          *a4 = 1;
        }
      }
      v13 = (struct DEVICEINFO *)*((_QWORD *)v13 + 7);
    }
    while ( v13 );
    if ( v10 && *a6 != v14 )
      *a6 = v14;
  }
  ExReleasePushLockSharedEx(&CBaseInput::_sLock, 0LL);
  KeLeaveCriticalRegion();
}
