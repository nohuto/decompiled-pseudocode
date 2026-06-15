/*
 * XREFs of _lambda_f36e01949351335f5e9acafaa1161a48_::operator() @ 0x18011A62C
 * Callers:
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_c3615feb6884e65459670eec2aeca07c___ @ 0x180116934 (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_c3615feb6884e65459670eec2aeca07c__.c)
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3___ @ 0x180116F10 (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941.c)
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_f36e01949351335f5e9acafaa1161a48___ @ 0x180117238 (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_f36e01949351335f5e9acafaa1161a48.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c___ @ 0x180118510 (CEndpointCharacteristics--GetDefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c___.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_c3615feb6884e65459670eec2aeca07c___ @ 0x180118AB4 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_c3615feb6884e65459670eec2aeca07c___.c)
 * Callees:
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18004BCA0 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x18004C254 (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x18005AF20 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 *     ?AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18011AA44 (-AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?AddUnsupportedFormat@CUnsupportedConnectorFormats@@QEAAXU_GUID@@PEAUtWAVEFORMATEX@@J@Z @ 0x18011AAC0 (-AddUnsupportedFormat@CUnsupportedConnectorFormats@@QEAAXU_GUID@@PEAUtWAVEFORMATEX@@J@Z.c)
 *     ?DeviceInUse@AEError@@YA_NJ@Z @ 0x18011B6CC (-DeviceInUse@AEError@@YA_NJ@Z.c)
 *     ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI6666@Z @ 0x18011BB88 (-DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 */

__int64 __fastcall lambda_f36e01949351335f5e9acafaa1161a48_::operator()(
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *a1,
        struct tWAVEFORMATEX *a2,
        bool *a3)
{
  __int64 v6; // rax
  signed int v7; // esi
  const struct tWAVEFORMATEX ***v8; // rax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v9; // edx
  CEndpointCharacteristics *v10; // rcx
  int v11; // eax
  int v12; // edx
  __int64 result; // rax
  int v14; // r9d
  CUnsupportedConnectorFormats *v15; // rcx
  struct PacketSizeConstraints *v16; // [rsp+20h] [rbp-60h]
  char v17; // [rsp+28h] [rbp-58h]
  __int64 v18; // [rsp+30h] [rbp-50h]
  unsigned int v19; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v20[3]; // [rsp+64h] [rbp-1Ch] BYREF
  struct _GUID v21; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v22; // [rsp+B0h] [rbp+30h] BYREF
  unsigned int v23; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v24; // [rsp+C8h] [rbp+48h] BYREF

  if ( a3 )
    *a3 = 0;
  v6 = *(_QWORD *)a1;
  v7 = 0;
  if ( *(int *)(*(_QWORD *)a1 + 24LL) > 0 )
  {
    while ( 1 )
    {
      v8 = (const struct tWAVEFORMATEX ***)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                                             v6 + 16,
                                             v7);
      if ( (unsigned int)CompareWaveFormat(a2, **v8) )
        break;
      v6 = *(_QWORD *)a1;
      if ( ++v7 >= *(_DWORD *)(*(_QWORD *)a1 + 24LL) )
        goto LABEL_6;
    }
    if ( a3 )
      *a3 = 1;
    return 0LL;
  }
LABEL_6:
  v9 = *((_DWORD *)a1 + 4);
  v10 = (CEndpointCharacteristics *)*((_QWORD *)a1 + 1);
  v18 = *((_QWORD *)a1 + 7);
  v17 = *((_BYTE *)a1 + 48);
  v16 = (struct PacketSizeConstraints *)*((_QWORD *)a1 + 5);
  v21 = *(struct _GUID *)(a1 + 5);
  v11 = CEndpointCharacteristics::DiscoverPeriodicityCharacteristicsForFormat(
          v10,
          v9,
          &v21,
          a2,
          v16,
          v17,
          v18,
          v20,
          &v19,
          &v24,
          &v23,
          &v22);
  if ( v11 < 0 )
  {
    if ( AEError::DeviceInUse((AEError *)(unsigned int)v11, v12) )
    {
      CConnectorProcessingModeCharacteristics::AddProbableConnectorFormat(
        *(CConnectorProcessingModeCharacteristics **)a1,
        a2);
      *(_DWORD *)(*((_QWORD *)a1 + 1) + 220LL) = 1;
    }
    else
    {
      v15 = (CUnsupportedConnectorFormats *)*((_QWORD *)a1 + 8);
      if ( v15 )
      {
        v21 = *(struct _GUID *)(a1 + 5);
        CUnsupportedConnectorFormats::AddUnsupportedFormat(v15, &v21, a2, v14);
      }
    }
    return 0LL;
  }
  result = CConnectorProcessingModeCharacteristics::AddConnectorFormat(
             *(CConnectorProcessingModeCharacteristics **)a1,
             a2,
             v20[0],
             v19,
             v24,
             v23,
             v22);
  if ( a3 )
    *a3 = (int)result >= 0;
  return result;
}
