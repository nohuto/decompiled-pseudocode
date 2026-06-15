/*
 * XREFs of ?GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x180001C3C
 * Callers:
 *     AudioServerGetDevicePeriod @ 0x180001990 (AudioServerGetDevicePeriod.c)
 * Callees:
 *     ?GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEA_J@Z @ 0x180001D30 (-GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___M_ea_180001D30.c)
 *     ?GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180001DD8 (-GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_.c)
 *     ?GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180048438 (-GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioeng.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::GetMinProcessingPeriodForExclusiveMode(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        __int64 *a3)
{
  struct _GUID v5; // xmm6
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v6; // edx
  int ConnectorFormatForProcessingMode; // ebx
  void *v8; // rcx
  int MinProcessingPeriodForExclusiveMode; // eax
  void *v10; // rcx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-50h]
  struct _GUID v15; // [rsp+30h] [rbp-40h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v16[2]; // [rsp+40h] [rbp-30h]
  struct tWAVEFORMATEX *v17; // [rsp+48h] [rbp-28h] BYREF
  char v18; // [rsp+50h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  LPVOID pv; // [rsp+90h] [rbp+20h] BYREF

  pv = 0LL;
  CEndpointCharacteristics::GetExclusiveModeProcessingModeConfiguration(this, eHostProcessConnector, &v15, 0LL, 0LL);
  *a3 = 0LL;
  *(_QWORD *)v16 = &pv;
  v17 = 0LL;
  v18 = 1;
  v5 = v15;
  ConnectorFormatForProcessingMode = CEndpointCharacteristics::GetConnectorFormatForProcessingMode(
                                       this,
                                       eHostProcessConnector,
                                       &v15,
                                       &v17);
  if ( v18 )
  {
    v6 = v16[0];
    v8 = **(void ***)v16;
    **(_QWORD **)v16 = v17;
    if ( v8 )
      CoTaskMemFree(v8);
  }
  if ( ConnectorFormatForProcessingMode < 0 )
  {
    v12 = (unsigned int)ConnectorFormatForProcessingMode;
    v13 = 8432LL;
  }
  else
  {
    v15 = v5;
    MinProcessingPeriodForExclusiveMode = CEndpointCharacteristics::GetMinProcessingPeriodForExclusiveMode(
                                            this,
                                            v6,
                                            (struct tWAVEFORMATEX *)pv,
                                            &v15,
                                            a3);
    ConnectorFormatForProcessingMode = MinProcessingPeriodForExclusiveMode;
    if ( MinProcessingPeriodForExclusiveMode >= 0 )
    {
      ConnectorFormatForProcessingMode = 0;
      goto LABEL_7;
    }
    v12 = (unsigned int)MinProcessingPeriodForExclusiveMode;
    v13 = 8435LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)v12,
    v14);
LABEL_7:
  v10 = pv;
  pv = 0LL;
  if ( v10 )
    CoTaskMemFree(v10);
  return (unsigned int)ConnectorFormatForProcessingMode;
}
