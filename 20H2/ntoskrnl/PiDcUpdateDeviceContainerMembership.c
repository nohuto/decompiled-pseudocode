/*
 * XREFs of PiDcUpdateDeviceContainerMembership @ 0x14075219C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1407333F0 (PiProcessNewDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x140739750 (PipProcessStartPhase3.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D1760 (_wcsicmp.c)
 *     wcscmp @ 0x1403D35D0 (wcscmp.c)
 *     PiPnpRtlBeginOperation @ 0x14063C8BC (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x14064120C (PiPnpRtlEndOperation.c)
 *     _CmGetDeviceRegProp @ 0x14066B77C (_CmGetDeviceRegProp.c)
 *     _CmRemoveDeviceFromContainer @ 0x1407281FC (_CmRemoveDeviceFromContainer.c)
 *     _CmSetDeviceRegProp @ 0x140732F70 (_CmSetDeviceRegProp.c)
 *     _CmAddDeviceToContainer @ 0x140752354 (_CmAddDeviceToContainer.c)
 *     PiDcContainerRequiresConfiguration @ 0x140752898 (PiDcContainerRequiresConfiguration.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140753B50 (_CmGetDeviceContainerIdFromBase.c)
 *     PiDcResetChildDeviceContainers @ 0x1408A6308 (PiDcResetChildDeviceContainers.c)
 */

__int64 __fastcall PiDcUpdateDeviceContainerMembership(__int64 a1, __int64 a2, const wchar_t *a3)
{
  int DeviceRegProp; // ebx
  __int64 v7; // rax
  _BYTE v9[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v10; // [rsp+44h] [rbp-BCh] BYREF
  int v11; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t Str2[40]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v14[80]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t v15[40]; // [rsp+100h] [rbp+0h] BYREF

  v9[0] = 0;
  P[0] = 0LL;
  v11 = 0;
  v10 = 0;
  DeviceRegProp = PiPnpRtlBeginOperation(P);
  if ( DeviceRegProp >= 0 )
  {
    v10 = 78;
    DeviceRegProp = CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      a1,
                      a2,
                      37,
                      (__int64)&v11,
                      (__int64)Str2,
                      (__int64)&v10,
                      0);
    if ( DeviceRegProp >= 0 && wcsicmp(a3, Str2) )
    {
      DeviceRegProp = CmGetDeviceContainerIdFromBase(*(_QWORD *)&PiPnpRtlCtx, a1, Str2, v14);
      if ( DeviceRegProp < 0 )
        goto LABEL_15;
      DeviceRegProp = CmRemoveDeviceFromContainer(*(__int64 *)&PiPnpRtlCtx, (__int64)v14, (__int64)Str2, a1);
      if ( DeviceRegProp < 0 )
        goto LABEL_15;
      PiDcResetChildDeviceContainers(a1, v14);
    }
    else if ( DeviceRegProp == -1073741275 )
    {
      DeviceRegProp = 0;
    }
    if ( DeviceRegProp >= 0 )
    {
      DeviceRegProp = CmGetDeviceContainerIdFromBase(*(_QWORD *)&PiPnpRtlCtx, a1, a3, v15);
      if ( DeviceRegProp >= 0 )
      {
        v7 = -1LL;
        do
          ++v7;
        while ( a3[v7] );
        DeviceRegProp = CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, a1, a2, 0x25u, 1u, (__int64)a3, 2 * (int)v7 + 2, 0);
        if ( DeviceRegProp >= 0 )
        {
          if ( wcscmp(L"{00000000-0000-0000-0000-000000000000}", a3) )
          {
            DeviceRegProp = CmAddDeviceToContainer(PiPnpRtlCtx, (unsigned int)v15, (__int64)v9);
            if ( DeviceRegProp >= 0 && !v9[0] )
              PiDcContainerRequiresConfiguration(v15);
          }
        }
      }
    }
  }
LABEL_15:
  if ( P[0] )
    PiPnpRtlEndOperation((PVOID **)P[0]);
  return (unsigned int)DeviceRegProp;
}
