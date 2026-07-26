/*
 * XREFs of ?ndisIsValidMulticastFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C002C9D8
 * Callers:
 *     ?ndisSetMiniportEthMulticastList@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C002BFF8 (-ndisSetMiniportEthMulticastList@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetOpenEthMulticastList@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C002C3B8 (-ndisSetOpenEthMulticastList@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C003C170 (-ndisSetOpenEthAddDeleteMulticast@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C000E1E0 (WPP_RECORDER_SF_qqq.c)
 */

__int64 __fastcall ndisIsValidMulticastFilter(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OPEN_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3)
{
  unsigned int v3; // edi
  unsigned __int64 *p_SpinLock; // rbx
  KIRQL v8; // al
  UINT InformationBufferLength; // ecx
  unsigned __int16 v11; // r9

  v3 = 0;
  if ( a2 )
  {
    if ( (a2->OpenFlags & 0x2000000) != 0 && (*(_DWORD *)&a3->NdisReserved[16] & 0x20) != 0 )
      return (unsigned int)-1073741637;
    if ( (*(_DWORD *)&a3->NdisReserved[16] & 0x20) != 0 )
    {
      p_SpinLock = &a2->SpinLock;
      v8 = KeAcquireSpinLockRaiseToDpc(&a2->SpinLock);
      a2->OpenFlags |= 0x1000000u;
      KeReleaseSpinLock(p_SpinLock, v8);
    }
  }
  if ( a1->MediaType )
  {
    *(_QWORD *)&a3->DATA.METHOD_INFORMATION.OutputBufferLength = 0LL;
    v3 = -1073741637;
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return v3;
    v11 = 71;
LABEL_17:
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xBu,
      v11,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)a1,
      (char)a2,
      a3);
    return v3;
  }
  InformationBufferLength = a3->DATA.QUERY_INFORMATION.InformationBufferLength;
  if ( InformationBufferLength % 6 )
  {
    *(_QWORD *)&a3->DATA.METHOD_INFORMATION.OutputBufferLength = 0LL;
    v3 = -1073676268;
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return v3;
    v11 = 72;
    goto LABEL_17;
  }
  if ( InformationBufferLength / 6 > a1->EthDB->MaxMulticastAddresses )
  {
    *(_QWORD *)&a3->DATA.METHOD_INFORMATION.OutputBufferLength = 0LL;
    v3 = -1073676279;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v11 = 73;
      goto LABEL_17;
    }
  }
  return v3;
}
