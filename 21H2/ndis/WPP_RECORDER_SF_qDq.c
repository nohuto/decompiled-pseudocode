/*
 * XREFs of WPP_RECORDER_SF_qDq @ 0x1C000B2F0
 * Callers:
 *     ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x1C00013B0 (-ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KP.c)
 *     ?ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z @ 0x1C0006998 (-ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z.c)
 *     ?ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z @ 0x1C0008F40 (-ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C000B3B0 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisFDoOidRequestInternal@@YAXPEAX@Z @ 0x1C000C060 (-ndisFDoOidRequestInternal@@YAXPEAX@Z.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C000C5F0 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0010F30 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisMethodDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@PEAEII@Z @ 0x1C006C3A8 (-ndisMethodDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@PEAEII@Z.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C008C7B0 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ndisFInvokeDirectOidRequest @ 0x1C00AEF68 (ndisFInvokeDirectOidRequest.c)
 *     ndisFInvokeDirectOidRequestComplete @ 0x1C00AFAE4 (ndisFInvokeDirectOidRequestComplete.c)
 *     ndisFInvokeSynchronousOidRequest @ 0x1C00B002C (ndisFInvokeSynchronousOidRequest.c)
 *     ndisMInvokeSynchronousOidRequest @ 0x1C00B020C (ndisMInvokeSynchronousOidRequest.c)
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00F9480 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AB4A4 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qDq(
        __int64 a1,
        unsigned __int8 a2,
        int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        char a7,
        ...)
{
  unsigned int v9; // ebx
  int v11; // [rsp+20h] [rbp-48h]
  va_list va; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va, a7);
  v9 = a2;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x400) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= a2 )
    ndisWppFastTraceMessage(a5, a4, &a6, 8LL, &a7, 4LL, va, 8LL, 0LL);
  LOWORD(v11) = a4;
  return WppAutoLogTrace(a1, v9, 11LL, a5, v11, &a6);
}
