/*
 * XREFs of AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00B09D0
 * Callers:
 *     AcpiTranslatePepDeviceControlResources @ 0x1C00B0990 (AcpiTranslatePepDeviceControlResources.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0007340 (WPP_RECORDER_SF_qD.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C005D0E0 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_sqqD @ 0x1C005D238 (WPP_RECORDER_SF_sqqD.c)
 *     PnpBiosResourcesToNtResources @ 0x1C009832C (PnpBiosResourcesToNtResources.c)
 *     PnpIoResourceListToCmResourceList @ 0x1C0098DB4 (PnpIoResourceListToCmResourceList.c)
 *     AcpiValidatePepDeviceControlResources @ 0x1C00B0BB4 (AcpiValidatePepDeviceControlResources.c)
 */

__int64 __fastcall AcpiTranslatePepDeviceControlResourcesInternal(
        ULONG_PTR a1,
        _BYTE *a2,
        int a3,
        __int64 a4,
        void *a5,
        unsigned int *a6)
{
  _DWORD *v6; // rdi
  int v8; // ebx
  int v9; // edx
  int v10; // edx
  unsigned int v11; // esi
  unsigned int v12; // eax
  unsigned int *v13; // r14
  __int64 v15; // [rsp+20h] [rbp-40h]
  int v16; // [rsp+30h] [rbp-30h]
  _DWORD *v17; // [rsp+50h] [rbp-10h] BYREF
  PVOID P; // [rsp+88h] [rbp+28h] BYREF

  v6 = 0LL;
  P = 0LL;
  v17 = 0LL;
  if ( !a2 || !a3 )
  {
    v8 = -1073741808;
    goto LABEL_23;
  }
  v8 = PnpBiosResourcesToNtResources(a1, a2, 4LL, (__int64 *)&P);
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = v8;
      WPP_RECORDER_SF_qD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x15u,
        0x1Eu,
        (__int64)&WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids,
        a2,
        v16);
    }
    goto LABEL_23;
  }
  if ( P )
  {
    v8 = AcpiValidatePepDeviceControlResources();
    if ( v8 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sqqD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v9,
          0x15u,
          0x1Fu,
          v15,
          "AcpiTranslatePepDeviceControlResourcesInternal");
      goto LABEL_23;
    }
    v8 = PnpIoResourceListToCmResourceList(P, &v17);
    if ( v8 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqD((__int64)WPP_GLOBAL_Control->DeviceExtension, v10, 0x15u, 0x20u, v15);
      v6 = v17;
      goto LABEL_23;
    }
    v6 = v17;
  }
  v11 = 40;
  if ( v6 )
  {
    v12 = v6[4];
    if ( v12 > 1 )
      v11 = 20 * (v12 + 1);
  }
  v13 = a6;
  if ( *a6 >= v11 )
  {
    memmove(a5, v6, v11);
    v8 = 0;
  }
  else
  {
    v8 = -1073741789;
  }
  *v13 = v11;
LABEL_23:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v8;
}
