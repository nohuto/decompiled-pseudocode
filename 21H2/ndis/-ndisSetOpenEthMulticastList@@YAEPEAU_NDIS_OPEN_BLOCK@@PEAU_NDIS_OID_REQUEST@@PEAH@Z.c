/*
 * XREFs of ?ndisSetOpenEthMulticastList@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C002C958
 * Callers:
 *     ?ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C002C710 (-ndisOidPreEthMulticastList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C000E2D0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqqDD @ 0x1C002CE68 (WPP_RECORDER_SF_qqqDD.c)
 *     ?ndisIsValidMulticastFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C002CF78 (-ndisIsValidMulticastFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C00675E8 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 */

char __fastcall ndisSetOpenEthMulticastList(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int *a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbx
  int *v4; // r12
  struct _NDIS_OID_REQUEST *v5; // r14
  char v7; // bp
  _X_FILTER *EthDB; // rdi
  struct _NDIS_MINIPORT_BLOCK *v9; // rcx
  int v10; // edx
  int IsValidMulticastFilter; // r15d
  unsigned int NumAddresses; // eax
  unsigned int v13; // r13d
  unsigned int v14; // r12d
  char *InformationBuffer; // r14
  unsigned int v16; // r8d
  __int64 v17; // rcx
  int v18; // edx
  _ETH_MULTICAST_WRAPPER *MCastAddressBuf; // r11
  __int64 v20; // rbx
  unsigned int v21; // r10d
  __int64 v22; // rbx
  __int64 v23; // rbx
  _X_FILTER *p_NoFTypeOpenList; // r13
  _NDIS_OPEN_BLOCK *OpenList; // rbx
  unsigned int NextNumAddresses; // eax
  __int64 v27; // rax
  unsigned int v28; // r8d
  __int64 v29; // r10
  unsigned __int8 *NextMCastAddressBuf; // r11
  __int64 v31; // r12
  unsigned int v32; // r9d
  __int64 v33; // r12
  unsigned int v34; // r8d
  int v35; // eax
  __int64 v37; // rcx
  unsigned __int8 *NextOldMCastAddressBuf; // r9
  unsigned __int8 *v39; // r10
  unsigned __int16 v40; // ax
  unsigned __int16 v41; // ax
  unsigned __int16 v42; // cx
  _ETH_MULTICAST_WRAPPER *v43; // [rsp+50h] [rbp-58h]
  int v44; // [rsp+B0h] [rbp+8h]
  _NDIS_MINIPORT_BLOCK *v47; // [rsp+C8h] [rbp+20h]

  MiniportHandle = a1->MiniportHandle;
  v4 = a3;
  v5 = a2;
  v47 = MiniportHandle;
  v7 = 1;
  EthDB = MiniportHandle->EthDB;
  v9 = MiniportHandle;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x4Au,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      a2);
    v9 = a1->MiniportHandle;
  }
  IsValidMulticastFilter = ndisIsValidMulticastFilter(v9, a1, v5);
  if ( IsValidMulticastFilter )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_46;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xBu,
      0x4Bu,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      v5);
  }
  else if ( a1->MaxMulticastAddresses )
  {
    memmove(a1->OldMCastAddressBuf, a1->MCastAddressBuf, 12LL * a1->NumAddresses);
    NumAddresses = a1->NumAddresses;
    a1->NumAddresses = IsValidMulticastFilter & NumAddresses;
    a1->OldNumAddresses = NumAddresses;
    v13 = v5->DATA.QUERY_INFORMATION.InformationBufferLength / 6;
    if ( v13 )
    {
      v14 = 0;
      InformationBuffer = (char *)v5->DATA.QUERY_INFORMATION.InformationBuffer;
      do
      {
        v16 = a1->NumAddresses;
        v17 = 0LL;
        v18 = -1;
        if ( v16 )
        {
          MCastAddressBuf = a1->MCastAddressBuf;
          v20 = 6 * v14;
          v21 = *(_DWORD *)&InformationBuffer[v20 + 2];
          while ( *(_DWORD *)&MCastAddressBuf[v17].MCastAddress[2] <= v21 )
          {
            if ( *(_DWORD *)&MCastAddressBuf[v17].MCastAddress[2] >= v21 )
            {
              v40 = *(_WORD *)MCastAddressBuf[v17].MCastAddress;
              if ( v40 > *(_WORD *)&InformationBuffer[v20] )
                break;
              if ( v40 >= *(_WORD *)&InformationBuffer[v20] )
                goto LABEL_17;
            }
            v17 = (unsigned int)(v17 + 1);
            if ( (unsigned int)v17 >= v16 )
              goto LABEL_14;
          }
          v18 = 1;
        }
LABEL_14:
        v22 = (unsigned int)v17;
        a1->NumAddresses = v16 + 1;
        if ( v18 > 0 )
          memmove(
            &a1->MCastAddressBuf[(unsigned int)(v17 + 1)],
            &a1->MCastAddressBuf[v17],
            12LL * (v16 - (unsigned int)v17));
        v23 = v22;
        memmove(a1->MCastAddressBuf[v23].MCastAddress, &InformationBuffer[6 * v14], 6uLL);
        a1->MCastAddressBuf[v23].RefCount = 1;
LABEL_17:
        ++v14;
      }
      while ( v14 < v13 );
      v5 = a2;
      IsValidMulticastFilter = 0;
    }
    p_NoFTypeOpenList = EthDB;
    OpenList = EthDB->OpenList;
    memmove(EthDB->NextOldMCastAddressBuf, EthDB->NextMCastAddressBuf, 6 * EthDB->MaxMulticastAddresses);
    NextNumAddresses = EthDB->NextNumAddresses;
    EthDB->NextNumAddresses = 0;
    EthDB->NextOldNumAddresses = NextNumAddresses;
    while ( 1 )
    {
      if ( OpenList )
      {
        while ( !IsValidMulticastFilter )
        {
          v27 = 0LL;
          v44 = 0;
          if ( OpenList->NumAddresses )
          {
            while ( 1 )
            {
              v28 = EthDB->NextNumAddresses;
              v29 = 0LL;
              v10 = -1;
              if ( v28 )
              {
                NextMCastAddressBuf = (unsigned __int8 *)EthDB->NextMCastAddressBuf;
                v31 = v27;
                v10 = -1;
                v43 = OpenList->MCastAddressBuf;
                v32 = *(_DWORD *)&v43[v27].MCastAddress[2];
                while ( *(_DWORD *)&NextMCastAddressBuf[6 * v29 + 2] <= v32 )
                {
                  if ( *(_DWORD *)&NextMCastAddressBuf[6 * v29 + 2] >= v32 )
                  {
                    v41 = *(_WORD *)&NextMCastAddressBuf[6 * v29];
                    v42 = *(_WORD *)v43[v31].MCastAddress;
                    if ( v41 > v42 )
                      break;
                    if ( v41 >= v42 )
                      goto LABEL_33;
                  }
                  v29 = (unsigned int)(v29 + 1);
                  if ( (unsigned int)v29 >= v28 )
                    goto LABEL_29;
                }
                v10 = 1;
              }
LABEL_29:
              EthDB->NextNumAddresses = v28 + 1;
              if ( v28 + 1 > EthDB->MaxMulticastAddresses )
                break;
              v33 = v29;
              if ( v10 > 0 )
                memmove(
                  EthDB->NextMCastAddressBuf[(unsigned int)(v29 + 1)],
                  EthDB->NextMCastAddressBuf[v29],
                  6 * (v28 + 1 - (unsigned int)v29) - 6);
              memmove(EthDB->NextMCastAddressBuf[v33], OpenList->MCastAddressBuf[v44].MCastAddress, 6uLL);
LABEL_33:
              v27 = (unsigned int)(v44 + 1);
              v44 = v27;
              if ( (unsigned int)v27 >= OpenList->NumAddresses )
                goto LABEL_34;
            }
            IsValidMulticastFilter = -1073676279;
          }
LABEL_34:
          OpenList = OpenList->FilterNextOpen;
          if ( !OpenList )
          {
            if ( IsValidMulticastFilter )
              goto LABEL_43;
            goto LABEL_36;
          }
        }
        goto LABEL_43;
      }
LABEL_36:
      if ( p_NoFTypeOpenList == EthDB )
      {
        p_NoFTypeOpenList = (_X_FILTER *)&EthDB->NoFTypeOpenList;
        OpenList = EthDB->NoFTypeOpenList;
        if ( OpenList )
          continue;
      }
      if ( p_NoFTypeOpenList == (_X_FILTER *)&EthDB->NoFTypeOpenList )
      {
        p_NoFTypeOpenList = (_X_FILTER *)&EthDB->FTypeOpenList;
        OpenList = EthDB->FTypeOpenList;
        if ( OpenList )
          continue;
      }
      if ( p_NoFTypeOpenList == (_X_FILTER *)&EthDB->FTypeOpenList )
        break;
    }
    v34 = EthDB->NextNumAddresses;
    if ( v34 == EthDB->NextOldNumAddresses )
    {
      v37 = 0LL;
      if ( v34 )
      {
        NextOldMCastAddressBuf = (unsigned __int8 *)EthDB->NextOldMCastAddressBuf;
        v39 = (unsigned __int8 *)EthDB->NextMCastAddressBuf;
        while ( 1 )
        {
          v10 = 3 * v37;
          if ( *(_DWORD *)&v39[6 * v37 + 2] != *(_DWORD *)&NextOldMCastAddressBuf[6 * v37 + 2]
            || *(_WORD *)&v39[6 * v37] != *(_WORD *)&NextOldMCastAddressBuf[6 * v37] )
          {
            break;
          }
          v35 = 0;
          v37 = (unsigned int)(v37 + 1);
          if ( (unsigned int)v37 >= v34 )
            goto LABEL_41;
        }
LABEL_42:
        v7 = 0;
        *(_QWORD *)&v5->NdisReserved[80] = v5->DATA.QUERY_INFORMATION.InformationBuffer;
        *(_DWORD *)&v5->NdisReserved[88] = v5->DATA.QUERY_INFORMATION.InformationBufferLength;
        v5->DATA.QUERY_INFORMATION.InformationBuffer = EthDB->NextMCastAddressBuf;
        v5->DATA.QUERY_INFORMATION.InformationBufferLength = 6 * EthDB->NextNumAddresses;
        goto LABEL_43;
      }
    }
    v35 = -1;
LABEL_41:
    if ( v35 )
      goto LABEL_42;
    memmove(EthDB->NextMCastAddressBuf, EthDB->NextOldMCastAddressBuf, 6 * EthDB->MaxMulticastAddresses);
    EthDB->NextOldNumAddresses = 0;
    IsValidMulticastFilter = 0;
LABEL_43:
    v4 = a3;
    MiniportHandle = v47;
  }
  else
  {
    IsValidMulticastFilter = 0;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      11,
      76,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      (char)v5,
      IsValidMulticastFilter,
      v7);
LABEL_46:
  if ( IsValidMulticastFilter && (byte_1C00E6184 & 4) != 0 )
    McTemplateK0jqxddq_EtwWriteTransfer(
      MiniportHandle->IfIndex,
      (unsigned int)&SetOpenEthMulticastListFailed,
      (_DWORD)MiniportHandle + 4008,
      (_DWORD)MiniportHandle + 4008,
      MiniportHandle->IfIndex,
      MiniportHandle->NetLuid.Value,
      IsValidMulticastFilter,
      1,
      (char)a1);
  *v4 = IsValidMulticastFilter;
  return v7;
}
