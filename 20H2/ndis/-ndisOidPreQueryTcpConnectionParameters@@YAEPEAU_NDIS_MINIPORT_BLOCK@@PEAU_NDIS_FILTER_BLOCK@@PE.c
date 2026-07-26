/*
 * XREFs of ?ndisOidPreQueryTcpConnectionParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C009D920
 * Callers:
 *     ?ndisOidPreTcpConnectionOffloadParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009E240 (-ndisOidPreTcpConnectionOffloadParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     memmove @ 0x1C003FB80 (memmove.c)
 */

unsigned __int8 __fastcall ndisOidPreQueryTcpConnectionParameters(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3,
        int *a4)
{
  UINT InformationBufferLength; // esi
  int v5; // ebx
  unsigned __int8 result; // al
  _NDIS_MINIPORT_OFFLOAD *Offload; // rdx
  size_t v10; // rbp
  _WORD *InformationBuffer; // rcx

  InformationBufferLength = a3->DATA.QUERY_INFORMATION.InformationBufferLength;
  v5 = 0;
  if ( InformationBufferLength < 0x38 )
  {
    a3->DATA.QUERY_INFORMATION.BytesNeeded = 56;
    v5 = -1073676268;
LABEL_3:
    result = 1;
    goto LABEL_11;
  }
  if ( !a1 )
  {
    result = 0;
    goto LABEL_11;
  }
  Offload = a1->Offload;
  if ( !Offload->SupportsTcpConnectionOffload )
  {
    v5 = -1073741637;
    goto LABEL_3;
  }
  v10 = InformationBufferLength < 0x3C ? 56 : 60;
  memmove(a3->DATA.QUERY_INFORMATION.InformationBuffer, &Offload->MiniportTcpConnectionParameters, v10);
  InformationBuffer = a3->DATA.QUERY_INFORMATION.InformationBuffer;
  result = 1;
  if ( InformationBufferLength < 0x3C )
  {
    InformationBuffer[1] = 56;
    *((_BYTE *)InformationBuffer + 1) = 1;
  }
  a3->DATA.QUERY_INFORMATION.BytesWritten = v10;
LABEL_11:
  *a4 = v5;
  return result;
}
