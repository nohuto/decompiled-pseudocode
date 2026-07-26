/*
 * XREFs of ?ndisSetOpenPacketFilter@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C002D154
 * Callers:
 *     ?ndisOidPrePacketFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C002D530 (-ndisOidPrePacketFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000DF10 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     ?ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002A990 (-ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qqDL @ 0x1C002D36C (WPP_RECORDER_SF_qqDL.c)
 *     ?ndisUpdateLoopbackOpens@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002D430 (-ndisUpdateLoopbackOpens@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?XFilterAdjust@@YAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@I@Z @ 0x1C002D46C (-XFilterAdjust@@YAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@I@Z.c)
 */

unsigned __int8 __fastcall ndisSetOpenPacketFilter(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_OID_REQUEST *a2, int *a3)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rsi
  int v7; // r14d
  int v8; // ebx
  unsigned int CombinedPacketFilter; // r13d
  _NDIS_MEDIUM MediaType; // eax
  KIRQL v11; // dl
  KSPIN_LOCK *p_Lock; // r12
  unsigned __int8 v13; // r14
  _DWORD *InformationBuffer; // rbx
  volatile unsigned int OpenFlags; // eax
  KIRQL v16; // dl
  int v17; // r8d
  int v18; // r9d
  int v20; // [rsp+20h] [rbp-68h]
  KIRQL v21; // [rsp+90h] [rbp+8h] BYREF
  KIRQL NewIrql; // [rsp+98h] [rbp+10h] BYREF

  MiniportHandle = a1->MiniportHandle;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x34u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)a1);
  v7 = 0;
  if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
  {
    v8 = 259;
    CombinedPacketFilter = *(_DWORD *)a2->DATA.QUERY_INFORMATION.InformationBuffer;
    if ( (a1->OpenFlags & 0x8000) != 0 )
    {
      p_Lock = &MiniportHandle->Lock;
    }
    else
    {
      NewIrql = 0;
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(MiniportHandle, &NewIrql);
      MediaType = MiniportHandle->MediaType;
      if ( MediaType )
      {
        if ( MediaType == NdisMediumNative802_11 )
        {
          v7 = 259;
          a1->OldPacketFilters = a1->PacketFilters;
          a1->PacketFilters = CombinedPacketFilter;
        }
      }
      else
      {
        v7 = XFilterAdjust(MiniportHandle->EthDB, a1, CombinedPacketFilter);
        CombinedPacketFilter = MiniportHandle->EthDB->CombinedPacketFilter;
      }
      v11 = NewIrql;
      p_Lock = &MiniportHandle->Lock;
      MiniportHandle->MiniportThread = 0LL;
      KeReleaseSpinLock(&MiniportHandle->Lock, v11);
      if ( v7 != 259 )
      {
        a2->DATA.QUERY_INFORMATION.BytesWritten = 4;
        v13 = 1;
        v8 = 0;
LABEL_9:
        *a3 = v8;
        InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
        v21 = KeAcquireSpinLockRaiseToDpc(&a1->SpinLock);
        OpenFlags = a1->OpenFlags;
        if ( (*InformationBuffer & 0xA0) != 0 )
        {
          if ( (OpenFlags & 4) != 0 )
            goto LABEL_11;
          a1->OpenFlags |= 4u;
          ++MiniportHandle->PmodeOpens;
          if ( a1->ProtocolMajorVersion >= 6 )
            ++MiniportHandle->PmodeOpen6;
        }
        else
        {
          if ( (OpenFlags & 4) == 0 )
          {
LABEL_11:
            KeReleaseSpinLock(&a1->SpinLock, v21);
            NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(MiniportHandle, &v21);
            ndisUpdateLoopbackOpens(MiniportHandle);
            v16 = v21;
            MiniportHandle->MiniportThread = 0LL;
            KeReleaseSpinLock(p_Lock, v16);
            *(_DWORD *)&a2->NdisReserved[92] = CombinedPacketFilter;
            *(_QWORD *)&a2->NdisReserved[80] = a2->DATA.QUERY_INFORMATION.InformationBuffer;
            *(_DWORD *)&a2->NdisReserved[88] = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
            a2->DATA.QUERY_INFORMATION.InformationBufferLength = 4;
            a2->DATA.QUERY_INFORMATION.InformationBuffer = &a2->NdisReserved[92];
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qqDL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v13,
                v17,
                v18,
                v20,
                (char)a1,
                (char)a2,
                v13,
                *a3);
            return v13;
          }
          a1->OpenFlags &= ~4u;
          --MiniportHandle->PmodeOpens;
          if ( a1->ProtocolMajorVersion >= 6 )
            --MiniportHandle->PmodeOpen6;
        }
        ndisUpdateCheckForLoopbackFlag(MiniportHandle);
        goto LABEL_11;
      }
    }
    v13 = 0;
    goto LABEL_9;
  }
  a2->DATA.QUERY_INFORMATION.BytesNeeded = 4;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x35u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)a1,
      (char)a2,
      -1073676268);
  *a3 = -1073676268;
  return 1;
}
