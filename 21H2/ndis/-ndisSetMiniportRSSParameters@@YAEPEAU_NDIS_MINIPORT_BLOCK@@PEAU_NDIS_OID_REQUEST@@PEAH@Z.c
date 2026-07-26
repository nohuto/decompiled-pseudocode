/*
 * XREFs of ?ndisSetMiniportRSSParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0037C00
 * Callers:
 *     ?ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0037760 (-ndisOidPreRSSParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000E000 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001B820 (WPP_RECORDER_SF_qqLd.c)
 *     ?ndisCalculateRssParametersSize@@YAHPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAK@Z @ 0x1C0037D8C (-ndisCalculateRssParametersSize@@YAHPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAK@Z.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C00675E8 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 */

char __fastcall ndisSetMiniportRSSParameters(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int *a3)
{
  char v6; // r15
  UINT InformationBufferLength; // r14d
  _BYTE *InformationBuffer; // rbp
  UINT v9; // eax
  unsigned __int8 v10; // cl
  unsigned __int16 v11; // dx
  int v12; // eax
  int v13; // ebx
  unsigned __int16 v15; // r9
  unsigned __int16 v16; // r9
  unsigned __int16 v17; // r9
  unsigned __int16 v18; // r9
  int v19; // [rsp+38h] [rbp-40h]
  unsigned int v20; // [rsp+88h] [rbp+10h] BYREF

  v20 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x7Du,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)a1,
      a2);
  a2->DATA.QUERY_INFORMATION.BytesNeeded = 0;
  v6 = 1;
  InformationBufferLength = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
  if ( InformationBufferLength < 0x1C )
  {
    a2->DATA.QUERY_INFORMATION.BytesNeeded = 28;
    v13 = -1073676268;
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_14;
    v15 = 126;
    goto LABEL_20;
  }
  InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
  v9 = 40;
  v10 = InformationBuffer[1];
  if ( v10 < 2u )
    goto LABEL_9;
  v11 = *((_WORD *)InformationBuffer + 1);
  if ( v11 < 0x28u )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    {
LABEL_24:
      v13 = -1073676268;
      goto LABEL_14;
    }
    v16 = 127;
LABEL_23:
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xBu,
      v16,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)a1,
      a2);
    goto LABEL_24;
  }
  if ( v10 >= 3u )
  {
    v9 = 44;
    if ( v11 < 0x2Cu )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_24;
      v16 = 128;
      goto LABEL_23;
    }
  }
  if ( InformationBufferLength < v9 )
  {
    a2->DATA.QUERY_INFORMATION.BytesNeeded = v9;
    v13 = -1073676268;
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_14;
    v15 = 129;
LABEL_20:
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xBu,
      v15,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)a1,
      (char)a2,
      -1073676268);
    goto LABEL_14;
  }
LABEL_9:
  v12 = ndisCalculateRssParametersSize(
          (struct _NDIS_RECEIVE_SCALE_PARAMETERS *)a2->DATA.QUERY_INFORMATION.InformationBuffer,
          &v20);
  v13 = v12;
  if ( v12 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_14;
    v17 = 130;
    v19 = v12;
    goto LABEL_31;
  }
  if ( *((_WORD *)InformationBuffer + 6) > 0x200u )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    {
LABEL_35:
      v13 = -1073676267;
      goto LABEL_14;
    }
    v18 = 131;
LABEL_34:
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xBu,
      v18,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)a1,
      (char)a2,
      0);
    goto LABEL_35;
  }
  if ( *((_WORD *)InformationBuffer + 10) != (_WORD)v12 + 40
    && (InformationBuffer[4] & 0x10) == 0
    && InformationBuffer[8] )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_35;
    v18 = 132;
    goto LABEL_34;
  }
  v13 = 0;
  if ( InformationBufferLength >= v20 )
  {
    v6 = 0;
    goto LABEL_14;
  }
  a2->DATA.QUERY_INFORMATION.BytesNeeded = v20;
  v13 = -1073676268;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v17 = 133;
    v19 = -1073676268;
LABEL_31:
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xBu,
      v17,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)a1,
      (char)a2,
      v19);
  }
LABEL_14:
  *a3 = v13;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x86u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)a1,
      (char)a2,
      v6,
      v13);
  if ( v13 && (byte_1C00E6184 & 4) != 0 )
    McTemplateK0jqxddq_EtwWriteTransfer(
      a1->IfIndex,
      (unsigned int)&SetMiniportRSSCapsFailed,
      (_DWORD)a1 + 4008,
      (_DWORD)a1 + 4008,
      a1->IfIndex,
      a1->NetLuid.Value,
      v13,
      2,
      (char)a2);
  return v6;
}
