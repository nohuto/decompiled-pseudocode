/*
 * XREFs of PiCMSetObjectProperty @ 0x140747578
 * Callers:
 *     PiCMHandleIoctl @ 0x140629660 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x14037E1A8 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PiCMReturnBasicResultData @ 0x1405FF4A0 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x1405FF814 (PiAuDoesClientHaveAccess.c)
 *     PiCMCapturePropertyInputData @ 0x140629BE4 (PiCMCapturePropertyInputData.c)
 *     PiCMReleasePropertyInputData @ 0x140629EA4 (PiCMReleasePropertyInputData.c)
 *     PiPnpRtlSetObjectProperty @ 0x14074594C (PiPnpRtlSetObjectProperty.c)
 */

__int64 __fastcall PiCMSetObjectProperty(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  int v10; // esi
  int v11; // ebx
  int v12; // r13d
  const WCHAR *v13; // r14
  int v14; // eax
  int v15; // ecx
  int v16; // edi
  int v17; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  char *v23; // rcx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  PCWSTR v27; // rcx
  char *v28; // rcx
  PCWSTR v29; // rax
  char *v30; // rax
  unsigned int v31; // [rsp+50h] [rbp-79h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-71h] BYREF
  _DWORD *v33; // [rsp+68h] [rbp-61h]
  PCWSTR v34[10]; // [rsp+70h] [rbp-59h] BYREF

  v33 = a6;
  memset(v34, 0, 0x48uLL);
  *a6 = 0;
  v10 = PiCMCapturePropertyInputData(a1, a2, a5, (char *)v34);
  if ( v10 >= 0 )
  {
    v11 = (int)v34[1];
    v12 = (int)v34[6];
    v13 = v34[2];
    *(PCWSTR *)&DestinationString.Length = v34[7];
    v31 = (unsigned int)v34[8];
    if ( HIDWORD(v34[5]) == 14 )
    {
      v28 = *(char **)((char *)&v34[3] + 4) - *(_QWORD *)&DEVPKEY_Device_FriendlyName.fmtid.Data1;
      if ( *(PCWSTR *)((char *)&v34[3] + 4) == *(PCWSTR *)&DEVPKEY_Device_FriendlyName.fmtid.Data1 )
        v28 = *(char **)((char *)&v34[4] + 4) - *(_QWORD *)DEVPKEY_Device_FriendlyName.fmtid.Data4;
      if ( !v28 )
        goto LABEL_49;
    }
    if ( HIDWORD(v34[5]) == 3 )
    {
      v23 = *(char **)((char *)&v34[3] + 4) - *(_QWORD *)&DEVPKEY_Device_FriendlyNameAttributes.fmtid.Data1;
      if ( *(PCWSTR *)((char *)&v34[3] + 4) == *(PCWSTR *)&DEVPKEY_Device_FriendlyNameAttributes.fmtid.Data1 )
        v23 = *(char **)((char *)&v34[4] + 4) - *(_QWORD *)DEVPKEY_Device_FriendlyNameAttributes.fmtid.Data4;
      if ( !v23 )
        goto LABEL_49;
    }
    if ( HIDWORD(v34[5]) == 4 )
    {
      v27 = (PCWSTR)(*(char **)((char *)&v34[3] + 4) - DEVPKEY_DriverPackage_SourceMediaPath);
      if ( *(PCWSTR *)((char *)&v34[3] + 4) == (PCWSTR)DEVPKEY_DriverPackage_SourceMediaPath )
        v27 = *(PCWSTR *)((char *)&v34[4] + 4) + 0x22925C19C5AE8F36LL;
      if ( !v27 )
        goto LABEL_49;
    }
    if ( HIDWORD(v34[5]) != 2 )
      goto LABEL_6;
    v29 = (PCWSTR)(*(char **)((char *)&v34[3] + 4) - DEVPKEY_WIA_DeviceType);
    if ( *(PCWSTR *)((char *)&v34[3] + 4) == (PCWSTR)DEVPKEY_WIA_DeviceType )
      v29 = *(PCWSTR *)((char *)&v34[4] + 4) - 0x1784F115800463DFLL;
    if ( v29 )
LABEL_6:
      v14 = 0;
    else
LABEL_49:
      v14 = 1;
    if ( !PiAuDoesClientHaveAccess(v14 != 0 ? 64 : 2) )
    {
      v10 = -1073741790;
      goto LABEL_20;
    }
    if ( !v13 || HIDWORD(v34[0]) || !a3 || (v15 = 8, a4 < 8) )
    {
      v10 = -1073741811;
      goto LABEL_20;
    }
    v16 = 0;
    if ( v11 > 6 )
    {
      v19 = v11 - 65537;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            v22 = v21 - 1;
            if ( v22 )
            {
              if ( v22 != 1 )
                goto LABEL_29;
              v15 = 11;
            }
            else
            {
              v15 = 10;
            }
          }
          else
          {
            v15 = 9;
          }
        }
      }
      else
      {
        v15 = 7;
      }
      v16 = PiDrvDbCtx != 0 ? v15 : 0;
    }
    else
    {
      if ( v11 == 6 )
      {
        v16 = 6;
        goto LABEL_16;
      }
      v17 = v11 - 1;
      if ( !v17 )
      {
        v16 = 1;
        goto LABEL_16;
      }
      v24 = v17 - 1;
      if ( !v24 )
      {
        v16 = 2;
        goto LABEL_16;
      }
      v25 = v24 - 1;
      if ( !v25 )
      {
        v16 = 4;
        goto LABEL_16;
      }
      v26 = v25 - 1;
      if ( !v26 )
      {
        v16 = 3;
        goto LABEL_16;
      }
      if ( v26 == 1 )
      {
        v16 = 5;
        goto LABEL_16;
      }
    }
LABEL_29:
    if ( !v16 )
      v10 = -1073741811;
LABEL_16:
    if ( v10 >= 0 )
    {
      v10 = PiPnpRtlSetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              v13,
              v16,
              0LL,
              0LL,
              (__int64)&v34[3] + 4,
              v12,
              *(const wchar_t **)&DestinationString.Length,
              v31,
              0);
      if ( v10 == -1073741790 )
      {
        if ( HIDWORD(v34[5]) != 38 )
          goto LABEL_20;
        v30 = *(char **)((char *)&v34[3] + 4) - *(_QWORD *)&DEVPKEY_Device_BaseContainerId.fmtid.Data1;
        if ( *(PCWSTR *)((char *)&v34[3] + 4) == *(PCWSTR *)&DEVPKEY_Device_BaseContainerId.fmtid.Data1 )
          v30 = *(char **)((char *)&v34[4] + 4) - *(_QWORD *)DEVPKEY_Device_BaseContainerId.fmtid.Data4;
        if ( v30 )
          goto LABEL_20;
        v10 = -1073741264;
      }
      if ( v10 >= 0 && v16 == 1 )
      {
        DestinationString = 0LL;
        if ( RtlInitUnicodeStringEx(&DestinationString, v13) >= 0 )
          PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(&DestinationString.Length);
      }
    }
LABEL_20:
    v10 = PiCMReturnBasicResultData(v10, SHIDWORD(v34[8]), a3, a4, v33);
  }
  PiCMReleasePropertyInputData((__int64)v34);
  return (unsigned int)v10;
}
