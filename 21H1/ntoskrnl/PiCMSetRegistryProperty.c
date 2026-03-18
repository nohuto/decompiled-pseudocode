/*
 * XREFs of PiCMSetRegistryProperty @ 0x1408ACB20
 * Callers:
 *     PiCMHandleIoctl @ 0x1406A67D0 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14025BB40 (RtlInitUnicodeStringEx.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x14037B818 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x1406B1348 (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMConvertRegistryProperty @ 0x1406B139C (PiCMConvertRegistryProperty.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1406B14D4 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMReturnBasicResultData @ 0x1406B2284 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x1406B2B20 (PiAuDoesClientHaveAccess.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1407367B0 (PiPnpRtlSetDeviceRegProperty.c)
 *     _CmSetInstallerClassRegProp @ 0x140971064 (_CmSetInstallerClassRegProp.c)
 */

__int64 __fastcall PiCMSetRegistryProperty(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r15
  int v9; // ebx
  int v10; // ebx
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-9h] BYREF
  __int128 v13; // [rsp+58h] [rbp+7h] BYREF
  PCWSTR SourceString[2]; // [rsp+68h] [rbp+17h]
  __int128 v15; // [rsp+78h] [rbp+27h]
  __int64 v16; // [rsp+88h] [rbp+37h]

  v6 = a6;
  LODWORD(a6) = 0;
  v16 = 0LL;
  *v6 = 0;
  v13 = 0LL;
  *(_OWORD *)SourceString = 0LL;
  v15 = 0LL;
  v9 = PiCMCaptureRegistryPropertyInputData(a1, a2, a5, (__int64)&v13);
  if ( v9 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(HIDWORD(SourceString[1]) == 13 ? 64 : 2) )
    {
      if ( SourceString[0] && !DWORD1(v13) && a3 && a4 >= 8 )
      {
        v10 = PiCMConvertRegistryProperty(SHIDWORD(SourceString[1]), &a6);
        if ( v10 >= 0 )
        {
          if ( DWORD2(v13) == 1 )
          {
            v10 = PiPnpRtlSetDeviceRegProperty(
                    *(__int64 *)&PiPnpRtlCtx,
                    SourceString[0],
                    0LL,
                    (signed int)a6,
                    v15,
                    *((unsigned int **)&v15 + 1),
                    v16,
                    0);
            if ( v10 >= 0 )
            {
              DestinationString = 0LL;
              if ( RtlInitUnicodeStringEx(&DestinationString, SourceString[0]) >= 0 )
                PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(&DestinationString.Length);
            }
          }
          else if ( DWORD2(v13) == 2 )
          {
            v10 = CmSetInstallerClassRegProp(PiPnpRtlCtx, SourceString[0], v15, *((__int64 *)&v15 + 1), v16);
          }
          else
          {
            v10 = -1073741811;
          }
          if ( v10 == -1073741790 )
            v10 = -1073741264;
        }
      }
      else
      {
        v10 = -1073741811;
      }
    }
    else
    {
      v10 = -1073741790;
    }
    v9 = PiCMReturnBasicResultData(v10, SHIDWORD(v16), a3, a4, v6);
  }
  PiCMReleaseRegistryPropertyInputData((__int64)&v13);
  return (unsigned int)v9;
}
