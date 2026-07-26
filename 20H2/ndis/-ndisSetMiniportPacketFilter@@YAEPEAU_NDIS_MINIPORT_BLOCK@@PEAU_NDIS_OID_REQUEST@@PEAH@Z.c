/*
 * XREFs of ?ndisSetMiniportPacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C002D8C4
 * Callers:
 *     ?ndisOidPrePacketFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C002D770 (-ndisOidPrePacketFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C00184FC (WPP_RECORDER_SF_qDD_ea_1C00184FC.c)
 *     WPP_RECORDER_SF_d @ 0x1C001914C (WPP_RECORDER_SF_d.c)
 */

char __fastcall ndisSetMiniportPacketFilter(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int *a3)
{
  _X_FILTER *EthDB; // r13
  char v7; // si
  unsigned int v8; // ebp
  unsigned int *p_RequestBuffer; // r15
  KIRQL v10; // dl
  int v11; // ecx
  char v12; // bp
  unsigned int v14; // ebp
  char v15[8]; // [rsp+28h] [rbp-40h]
  KIRQL NewIrql; // [rsp+78h] [rbp+10h] BYREF

  EthDB = 0LL;
  NewIrql = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x3Au,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)a1,
      a2);
  *a3 = 0;
  v7 = 1;
  if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
  {
    v8 = *(_DWORD *)a2->DATA.QUERY_INFORMATION.InformationBuffer;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
    if ( a1->MiniportMediaType == NdisMedium802_3 )
      EthDB = a1->EthDB;
    p_RequestBuffer = &a1->RequestBuffer;
    a1->RequestBuffer = v8;
    if ( EthDB )
    {
      if ( (v8 & 0xFFFFFF7F) != (EthDB->MiniportPacketFilter & 0xFFFFFF7F) )
      {
        *p_RequestBuffer = v8 & 0xFFFFFF7F;
        v7 = 0;
      }
      if ( (a1->Flags & 0x20000) == 0 )
        goto LABEL_10;
      v14 = v8 & 0xFFFFFF5F;
      if ( v14 == (EthDB->MiniportPacketFilter & 0xFFFFFF5F) )
        goto LABEL_10;
      *p_RequestBuffer = v14;
    }
    v7 = 0;
LABEL_10:
    v10 = NewIrql;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v10);
    v11 = *(_DWORD *)&a2->NdisReserved[16];
    v12 = 0;
    if ( (v11 & 0x80000) == 0 )
      v12 = v7;
    if ( v12 )
    {
      if ( !*a3 )
        a2->DATA.QUERY_INFORMATION.BytesWritten = 4;
    }
    else
    {
      *(_DWORD *)&a2->NdisReserved[16] = v11 | 0x800;
      a1->SetInfoBuf = a2->DATA.QUERY_INFORMATION.InformationBuffer;
      a1->SetInfoBufLen = a2->DATA.METHOD_INFORMATION.InputBufferLength;
      a2->DATA.QUERY_INFORMATION.InformationBuffer = p_RequestBuffer;
      a2->DATA.QUERY_INFORMATION.InformationBufferLength = 4;
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x3Cu,
        (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
        (char)a1,
        v12,
        *a3);
    return v12;
  }
  a2->DATA.QUERY_INFORMATION.BytesNeeded = 4;
  *a3 = -1073676268;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v15 = -1073676268;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x3Bu,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      *(_QWORD *)v15);
  }
  return 1;
}
