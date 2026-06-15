/*
 * XREFs of ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18011F3F4
 * Callers:
 *     ?SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180048A40 (-SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendp.c)
 * Callees:
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x18004BAE4 (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x18005A880 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 *     ?AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x180119E74 (-AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x18011A24C (-CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?DeviceInUse@AEError@@YA_NJ@Z @ 0x18011AAFC (-DeviceInUse@AEError@@YA_NJ@Z.c)
 *     ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI6666@Z @ 0x18011AFB8 (-DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     ?GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ @ 0x18011C700 (-GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ.c)
 *     ?GetPacketSizeConstraints@@YAJPEAUIPropertyStore@@PEAPEAUPacketSizeConstraints@@@Z @ 0x18011C954 (-GetPacketSizeConstraints@@YAJPEAUIPropertyStore@@PEAPEAUPacketSizeConstraints@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::TryAddFormat(struct IPropertyStore **this, struct tWAVEFORMATEX *a2)
{
  signed int v3; // r12d
  int PacketSizeConstraints; // edi
  struct PacketSizeConstraints *v5; // rbx
  char v6; // r15
  unsigned int v7; // r13d
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v8; // rax
  __int64 v9; // r14
  struct tWAVEFORMATEX *v10; // r13
  __int64 v11; // rcx
  struct _GUID **v12; // rax
  struct _GUID *v13; // rdi
  int v14; // eax
  int v15; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v17; // [rsp+60h] [rbp-39h]
  unsigned int v18; // [rsp+64h] [rbp-35h] BYREF
  unsigned int v19; // [rsp+68h] [rbp-31h] BYREF
  unsigned int v20; // [rsp+6Ch] [rbp-2Dh] BYREF
  unsigned int v21; // [rsp+70h] [rbp-29h] BYREF
  unsigned int v22; // [rsp+74h] [rbp-25h] BYREF
  LPVOID pv; // [rsp+78h] [rbp-21h] BYREF
  _DWORD v24[2]; // [rsp+80h] [rbp-19h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v25; // [rsp+88h] [rbp-11h]
  __int64 OemEnginePeriodicity; // [rsp+90h] [rbp-9h]
  struct _GUID v27; // [rsp+A0h] [rbp+7h] BYREF
  int pvData; // [rsp+100h] [rbp+67h] BYREF
  struct tWAVEFORMATEX *v29; // [rsp+108h] [rbp+6Fh]
  unsigned int v30; // [rsp+110h] [rbp+77h]
  DWORD pcbData; // [rsp+118h] [rbp+7Fh] BYREF

  v29 = a2;
  v3 = 0;
  pv = 0LL;
  v24[0] = 0;
  v24[1] = 3;
  PacketSizeConstraints = GetPacketSizeConstraints(this[5], (LPVOID **)&pv);
  if ( PacketSizeConstraints == -2147023728 )
    PacketSizeConstraints = 0;
  v5 = (struct PacketSizeConstraints *)pv;
  if ( PacketSizeConstraints >= 0 )
  {
    pvData = 0;
    pcbData = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
      L"ProbeForMinimumPeriod",
      0x18u,
      0LL,
      &pvData,
      &pcbData);
    OemEnginePeriodicity = CEndpointCharacteristics::GetOemEnginePeriodicity((CEndpointCharacteristics *)this);
    v6 = 0;
    v7 = 0;
    v30 = 0;
    v8 = (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)v24;
    v25 = (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)v24;
    do
    {
      v17 = *v8;
      v9 = 29LL;
      if ( *v8 != eKeywordDetectorConnector )
        v9 = 28LL;
      if ( this[v9] )
      {
        v10 = v29;
        while ( 1 )
        {
          v11 = (__int64)this[v9];
          if ( v3 >= *(_DWORD *)(v11 + 8) )
            break;
          v12 = (struct _GUID **)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                                   v11,
                                   v3);
          v13 = *v12;
          v27 = **v12;
          v14 = CEndpointCharacteristics::DiscoverPeriodicityCharacteristicsForFormat(
                  (CEndpointCharacteristics *)this,
                  v17,
                  &v27,
                  v10,
                  v5,
                  pvData != 0,
                  OemEnginePeriodicity,
                  &v22,
                  &v21,
                  &v20,
                  &v19,
                  &v18);
          if ( v14 < 0 )
          {
            if ( AEError::DeviceInUse((AEError *)(unsigned int)v14) )
            {
              CConnectorProcessingModeCharacteristics::AddProbableConnectorFormat(
                (CConnectorProcessingModeCharacteristics *)v13,
                v10);
              *((_DWORD *)this + 55) = 1;
            }
            PacketSizeConstraints = 0;
          }
          else
          {
            v15 = CConnectorProcessingModeCharacteristics::AddConnectorFormat(
                    (CConnectorProcessingModeCharacteristics *)v13,
                    v10,
                    v22,
                    v21,
                    v20,
                    v19,
                    v18);
            PacketSizeConstraints = v15;
            if ( v6 || v15 >= 0 )
              v6 = 1;
          }
          ++v3;
        }
        v7 = v30;
        v8 = v25;
        v3 = 0;
      }
      v30 = ++v7;
      v25 = ++v8;
    }
    while ( v7 < 2 );
    if ( v6 && !*((_DWORD *)this + 55) )
      CEndpointCharacteristics::CacheProcessingModeCharacteristics((CEndpointCharacteristics *)this);
  }
  CoTaskMemFree(v5);
  return (unsigned int)PacketSizeConstraints;
}
