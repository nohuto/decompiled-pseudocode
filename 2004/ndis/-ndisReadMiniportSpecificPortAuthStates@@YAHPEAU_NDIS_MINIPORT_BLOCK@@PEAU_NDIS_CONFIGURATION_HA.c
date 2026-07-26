/*
 * XREFs of ?ndisReadMiniportSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_HANDLE@@@Z @ 0x1C003553C
 * Callers:
 *     ?ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0035168 (-ndisReadMiniportDefaultPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadMiniportMediaSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00352D8 (-ndisReadMiniportMediaSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     NdisReadConfiguration @ 0x1C0028660 (NdisReadConfiguration.c)
 */

__int64 __fastcall ndisReadMiniportSpecificPortAuthStates(
        struct _NDIS_MINIPORT_BLOCK *a1,
        NDIS_HANDLE ConfigurationHandle)
{
  unsigned int v4; // edi
  _NDIS_PORT_CONTROL_STATE IntegerData; // r12d
  _NDIS_PORT_CONTROL_STATE v7; // r15d
  _NDIS_PORT_AUTHORIZATION_STATE v8; // r14d
  _NDIS_PORT_AUTHORIZATION_STATE v9; // ecx
  UNICODE_STRING Keyword; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING v11; // [rsp+50h] [rbp-30h] BYREF
  UNICODE_STRING v12; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING v13; // [rsp+70h] [rbp-10h] BYREF
  int Status; // [rsp+C0h] [rbp+40h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+C8h] [rbp+48h] BYREF

  ParameterValue = 0LL;
  Status = 0;
  Keyword.Buffer = L"PortAuthSendControlState";
  *(_QWORD *)&Keyword.Length = 3276848LL;
  v11.Buffer = L"PortAuthReceiveControlState";
  *(_QWORD *)&v11.Length = 3670070LL;
  v12.Buffer = L"PortAuthSendAuthorizationState";
  v13.Buffer = L"PortAuthReceiveAuthorizationState";
  *(_QWORD *)&v12.Length = 4063292LL;
  *(_QWORD *)&v13.Length = 4456514LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x3Cu,
      &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
      a1);
  NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &Keyword, NdisParameterInteger);
  v4 = Status;
  if ( !Status && ParameterValue->ParameterData.StringData.Length <= 2u )
  {
    IntegerData = ParameterValue->ParameterData.IntegerData;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v11, NdisParameterInteger);
    v4 = Status;
    if ( !Status )
    {
      v7 = ParameterValue->ParameterData.IntegerData;
      NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v12, NdisParameterInteger);
      v4 = Status;
      if ( !Status )
      {
        v8 = ParameterValue->ParameterData.IntegerData;
        NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &v13, NdisParameterInteger);
        v4 = Status;
        if ( !Status )
        {
          v9 = ParameterValue->ParameterData.IntegerData;
          a1->DefaultPortSendAuthorizationState = v8;
          a1->DefaultPortRcvAuthorizationState = v9;
          a1->DefaultPortSendControlState = IntegerData;
          a1->DefaultPortRcvControlState = v7;
          a1->DefaultSendAuthorizationState = v8;
          a1->DefaultRcvAuthorizationState = v9;
          a1->DefaultSendControlState = IntegerData;
          a1->DefaultRcvControlState = v7;
        }
      }
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x3Du,
      &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
      (char)a1,
      v4);
  return v4;
}
