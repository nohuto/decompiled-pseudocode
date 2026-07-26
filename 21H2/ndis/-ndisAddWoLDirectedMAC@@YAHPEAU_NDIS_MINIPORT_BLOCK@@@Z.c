/*
 * XREFs of ?ndisAddWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011F2C0
 * Callers:
 *     ?ndisMInitializePmParametersForSuspend@@YA?AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A5B24 (-ndisMInitializePmParametersForSuspend@@YA-AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_d @ 0x1C001935C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     ?ndisInitializeDirectedWolPattern@@YAXPEAEKPEAU_RTL_BITMAP@@PEAPEAE@Z @ 0x1C008FFCC (-ndisInitializeDirectedWolPattern@@YAXPEAEKPEAU_RTL_BITMAP@@PEAPEAE@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F8840 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00F9480 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

__int64 __fastcall ndisAddWoLDirectedMAC(struct _NDIS_FILTER_BLOCK *a1)
{
  __int64 v2; // rdx
  struct _NDIS_MINIPORT_AOAC *v3; // rsi
  _NDIS_IF_BLOCK *RefCountTracker; // rcx
  unsigned __int8 *v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // [rsp+30h] [rbp-D8h]
  unsigned __int8 *BitMapHeader; // [rsp+48h] [rbp-C0h] BYREF
  struct _RTL_BITMAP BitMapHeader_8; // [rsp+50h] [rbp-B8h] BYREF
  struct _NDIS_OID_REQUEST v11; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int8 v12[272]; // [rsp+168h] [rbp+60h] BYREF

  memset(&v11.Header.Revision, 0, 0xF7uLL);
  memset(v12, 0, 0x10CuLL);
  v3 = *(struct _NDIS_MINIPORT_AOAC **)&a1[4].PMCurrentParameters.EnabledProtocolOffloads;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x91u,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      a1);
  if ( ndisDirectedMacForNapsState )
  {
    BitMapHeader = 0LL;
    BitMapHeader_8 = 0LL;
    ndisInitializeDirectedWolPattern(v12, v2, &BitMapHeader_8, &BitMapHeader);
    RefCountTracker = (_NDIS_IF_BLOCK *)a1[4].PnPRef.RefCountTracker;
    v6 = BitMapHeader;
    *(_DWORD *)BitMapHeader = *(_DWORD *)RefCountTracker->ifPhysAddress.Address;
    *((_WORD *)v6 + 2) = *(_WORD *)&RefCountTracker->ifPhysAddress.Address[4];
    RtlSetBits(&BitMapHeader_8, 0, 6u);
    memset(&v11, 0, 0xF8uLL);
    v11.PortNumber = 0;
    *(_DWORD *)&v11.NdisReserved[16] |= 0x408u;
    *(_QWORD *)&v11.NdisReserved[32] = &ndisIntReqGeneric;
    v11.Header = (NDIS_OBJECT_HEADER)15466902;
    v11.DATA.QUERY_INFORMATION.InformationBuffer = v12;
    v11.DATA.QUERY_INFORMATION.Oid = -50265846;
    v11.RequestType = NdisRequestSetInformation;
    v11.DATA.QUERY_INFORMATION.InformationBufferLength = 268;
    KeInitializeEvent((PRKEVENT)&v11.NdisReserved[40], NotificationEvent, 0);
    v7 = ndisMInvokeOidRequest(a1, &v11);
    if ( v7 == 259 )
    {
      ndisWaitForKernelObject(&v11.NdisReserved[40]);
      v7 = *(_DWORD *)&v11.NdisReserved[8];
    }
    if ( v7 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return v7;
      LODWORD(v8) = v7;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x93u,
        (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
        v8);
    }
    else
    {
      *((_BYTE *)v3 + 1104) = 1;
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x94u,
        (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
        (char)a1,
        v7);
    return v7;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      0xEu,
      0x92u,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      (char)a1,
      0);
  return 0LL;
}
