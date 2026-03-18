/*
 * XREFs of ?GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z @ 0x1C01A8BB0
 * Callers:
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1C01A99A8 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     IsLegacyTouchPad @ 0x1C0010E28 (IsLegacyTouchPad.c)
 *     ?GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z @ 0x1C0158D60 (-GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  struct DEVICEINFO *v11; // rbx
  __int16 v12; // dx
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rcx
  struct tagRECT v16; // xmm1

  *a5 = 0;
  *a6 = 0;
  v10 = 0;
  *a7 = 0LL;
  *a3 = 0;
  *a8 = 0LL;
  *a4 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&CBaseInput::_sLock, 0LL);
  v11 = CBaseInput::_spDevList;
  v12 = 0;
  if ( CBaseInput::_spDevList )
  {
    do
    {
      if ( (*((_DWORD *)v11 + 50) & 0x80u) == 0 )
      {
        if ( *((_BYTE *)v11 + 48) == (_BYTE)v12 )
        {
          if ( *((_WORD *)v11 + 444) == v12 )
          {
            *a3 = 1;
          }
          else if ( (unsigned int)IsLegacyTouchPad((__int64)v11) )
          {
            *a6 = 1;
            PTPTelemetry::s_HasTpDevice = 1;
          }
        }
      }
      else
      {
        v13 = *((_QWORD *)v11 + 60);
        v14 = *(_DWORD *)(v13 + 24);
        if ( v14 == 7 )
        {
          v15 = *(unsigned int *)(v13 + 904);
          v10 = 1;
          PTPTelemetry::s_HasTpDevice = 1;
          switch ( (_DWORD)v15 )
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
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v15);
              v13 = *((_QWORD *)v11 + 60);
              break;
          }
          v16 = *(struct tagRECT *)(v13 + 140);
          *a7 = *(struct tagRECT *)(v13 + 124);
          *a8 = v16;
          RimTelemetry::GetHidVidPidStrings(v11, a1, a2);
          v12 = 0;
        }
        else if ( (unsigned int)(v14 - 1) <= 3 )
        {
          *a4 = 1;
        }
      }
      v11 = (struct DEVICEINFO *)*((_QWORD *)v11 + 7);
    }
    while ( v11 );
    if ( v10 && *a6 != (_BYTE)v12 )
      *a6 = v12;
  }
  ExReleasePushLockSharedEx(&CBaseInput::_sLock, 0LL);
  KeLeaveCriticalRegion();
}
