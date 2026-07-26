/*
 * XREFs of ndisSriovInterfaceWriteVFConfig @ 0x1C0118C80
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C000AE64 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     memmove @ 0x1C003FB80 (memmove.c)
 *     memset @ 0x1C003FE40 (memset.c)
 */

__int64 __fastcall ndisSriovInterfaceWriteVFConfig(
        struct _NDIS_MINIPORT_BLOCK *a1,
        const void *a2,
        __int16 a3,
        int a4,
        size_t Size)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // rdi
  unsigned int v10; // ebx
  struct _NDIS_OID_REQUEST v13; // [rsp+50h] [rbp-B0h] BYREF

  memset(&v13, 0, 0xF8uLL);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x5Bu,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      a1);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(Size + 20), 0x6F69444Eu);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)(Size + 20));
    *v9 = 1311104;
    v9[4] = 20;
    *((_WORD *)v9 + 2) = a3;
    v9[2] = a4;
    v9[3] = Size;
    memmove(v9 + 5, a2, (unsigned int)Size);
    memset(&v13, 0, 0xF8uLL);
    *(_DWORD *)&v13.NdisReserved[16] |= 8u;
    v13.PortNumber = 0;
    *(_QWORD *)&v13.NdisReserved[32] = &ndisIntReqGeneric;
    v13.Header = (NDIS_OBJECT_HEADER)15466902;
    v13.DATA.QUERY_INFORMATION.Oid = 66130;
    v13.RequestType = NdisRequestSetInformation;
    v13.DATA.QUERY_INFORMATION.InformationBuffer = v9;
    v13.DATA.QUERY_INFORMATION.InformationBufferLength = Size + 20;
    v10 = ndisQuerySetMiniport(a1, 0LL, &v13, 0, 0LL);
    ExFreePoolWithTag(v9, 0);
  }
  else
  {
    v10 = -1073741670;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x5Cu,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      (char)a1,
      v10);
  return v10;
}
