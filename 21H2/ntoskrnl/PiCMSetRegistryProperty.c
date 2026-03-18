/*
 * XREFs of PiCMSetRegistryProperty @ 0x140956298
 * Callers:
 *     PiCMHandleIoctl @ 0x14077BCA0 (PiCMHandleIoctl.c)
 * Callees:
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x140255030 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1406E5574 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x140778F4C (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMConvertRegistryProperty @ 0x140778FA0 (PiCMConvertRegistryProperty.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1407790D0 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMReturnBasicResultData @ 0x14078A584 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x14078A600 (PiAuDoesClientHaveAccess.c)
 *     _CmSetInstallerClassRegProp @ 0x140A2545C (_CmSetInstallerClassRegProp.c)
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
  int v10; // eax
  int v11; // ebx
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-9h] BYREF
  __int128 v14; // [rsp+58h] [rbp+7h] BYREF
  PCWSTR SourceString[2]; // [rsp+68h] [rbp+17h]
  __int128 v16; // [rsp+78h] [rbp+27h]
  __int64 v17; // [rsp+88h] [rbp+37h]

  v6 = a6;
  LODWORD(a6) = 0;
  v17 = 0LL;
  *v6 = 0;
  v14 = 0LL;
  *(_OWORD *)SourceString = 0LL;
  v16 = 0LL;
  v9 = PiCMCaptureRegistryPropertyInputData(a1, a2, a5, (__int64)&v14);
  if ( v9 >= 0 )
  {
    if ( !PiAuDoesClientHaveAccess(HIDWORD(SourceString[1]) == 13 ? 64 : 2) )
    {
      v10 = -1073741790;
LABEL_19:
      v9 = PiCMReturnBasicResultData(v10, SHIDWORD(v17), a3, a4, v6);
      goto LABEL_20;
    }
    if ( SourceString[0] && !DWORD1(v14) && a3 && a4 >= 8 )
    {
      v10 = PiCMConvertRegistryProperty(SHIDWORD(SourceString[1]), &a6);
      if ( v10 < 0 )
        goto LABEL_19;
      if ( DWORD2(v14) == 1 )
      {
        v11 = PiPnpRtlSetDeviceRegProperty(
                PiPnpRtlCtx,
                SourceString[0],
                0,
                (int)a6,
                v16,
                *((unsigned int **)&v16 + 1),
                v17,
                0);
        if ( v11 >= 0 )
        {
          DestinationString = 0LL;
          if ( RtlInitUnicodeStringEx(&DestinationString, SourceString[0]) >= 0 )
            PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(&DestinationString.Length);
        }
        goto LABEL_15;
      }
      if ( DWORD2(v14) == 2 )
      {
        v11 = CmSetInstallerClassRegProp(PiPnpRtlCtx, SourceString[0], v16, *((__int64 *)&v16 + 1), v17);
LABEL_15:
        if ( v11 == -1073741790 )
          v11 = -1073741264;
        v10 = v11;
        goto LABEL_19;
      }
    }
    v10 = -1073741811;
    goto LABEL_19;
  }
LABEL_20:
  PiCMReleaseRegistryPropertyInputData((__int64)&v14);
  return (unsigned int)v9;
}
