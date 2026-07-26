/*
 * XREFs of ?ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00770E4
 * Callers:
 *     ?ndisOidPreIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00799D0 (-ndisOidPreIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003B7C4 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     memmove @ 0x1C003FB80 (memmove.c)
 *     memset @ 0x1C003FE40 (memset.c)
 *     ?ndisIovDeleteVPort@@YAHPEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C0077854 (-ndisIovDeleteVPort@@YAHPEAU_NDIS_VPORT_BLOCK@@@Z.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0077C24 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1C0077CA0 (-ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 */

char __fastcall ndisIovCreateVPort(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_OID_REQUEST *v1; // rdi
  char *v2; // rsi
  struct _NDIS_VF_BLOCK *v3; // r15
  struct _NDIS_MINIPORT_BLOCK *v4; // r13
  int v5; // r12d
  char v7; // r14
  struct _NDIS_OID_REQUEST *v8; // rax
  _BYTE *OidSourceHandle; // rax
  char *InformationBuffer; // rdi
  int *v11; // rbx
  struct _NDIS_NIC_SWITCH_BLOCK *SwitchBySwitchId; // rbp
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCurrentCapabilities; // r10
  unsigned __int16 v14; // dx
  struct _NDIS_VF_BLOCK *VFByVFId; // rax
  char *PoolWithTag; // rax
  __int64 v17; // rcx
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  unsigned __int8 *AllocatedVPortIndices; // rbp
  size_t AllocatedVPortIndicesLength; // r15
  __int64 v23; // rax
  unsigned __int8 *v24; // rcx
  _BYTE *v25; // rax
  _BYTE *v26; // rdi
  int v27; // eax
  __int64 v28; // r8
  int v29; // ecx
  int v30; // eax
  int v31; // edx
  int v32; // r12d
  _BYTE *v33; // r12
  struct _NDIS_OID_REQUEST *v35; // [rsp+40h] [rbp-58h]
  int v36; // [rsp+A0h] [rbp+8h]
  struct _NDIS_PF_BLOCK *PFBlock; // [rsp+A8h] [rbp+10h]
  _BYTE *v38; // [rsp+B0h] [rbp+18h]
  int *v39; // [rsp+B8h] [rbp+20h]

  v1 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a1 + 4);
  v2 = 0LL;
  PFBlock = 0LL;
  v3 = 0LL;
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v5 = 0;
  v36 = 0;
  v35 = v1;
  v7 = 1;
  v8 = v1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x2Du,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      v4);
    v8 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a1 + 4);
  }
  v8->DATA.METHOD_INFORMATION.BytesRead = 572;
  *(_DWORD *)(*((_QWORD *)a1 + 4) + 60LL) = 0;
  OidSourceHandle = ndisGetOidSourceHandle(v1);
  v38 = OidSourceHandle;
  if ( OidSourceHandle && *OidSourceHandle == 18 )
  {
    InformationBuffer = (char *)v1->DATA.QUERY_INFORMATION.InformationBuffer;
    v39 = (int *)(InformationBuffer + 12);
    if ( *((_DWORD *)InformationBuffer + 3) )
      goto LABEL_6;
    SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v4, *((_DWORD *)InformationBuffer + 2));
    if ( !SwitchBySwitchId )
      goto LABEL_6;
    NicSwitchCurrentCapabilities = v4->NicSwitchCurrentCapabilities;
    if ( *((_DWORD *)SwitchBySwitchId + 12) == NicSwitchCurrentCapabilities->MaxNumVPorts
      || *((_WORD *)InformationBuffer + 8) > 0x200u )
    {
      goto LABEL_6;
    }
    v14 = *((_WORD *)InformationBuffer + 266);
    if ( v14 == 0xFFFF )
    {
      PFBlock = v4->PFBlock;
      if ( !PFBlock || *((_DWORD *)InformationBuffer + 136) != 2 )
        goto LABEL_6;
    }
    else
    {
      VFByVFId = ndisIovFindVFByVFId(v4, v14);
      v3 = VFByVFId;
      if ( !VFByVFId || *((_DWORD *)VFByVFId + 19) || *((_DWORD *)InformationBuffer + 136) != 1 )
        goto LABEL_6;
    }
    if ( (NicSwitchCurrentCapabilities->NicSwitchCapabilities & 4) != 0 )
    {
      if ( *((_DWORD *)InformationBuffer + 134) > NicSwitchCurrentCapabilities->MaxNumQueuePairs
                                                - *((_DWORD *)SwitchBySwitchId + 162)
                                                - *((_DWORD *)SwitchBySwitchId + 24) )
      {
LABEL_6:
        v11 = (int *)((char *)a1 + 40);
        *v11 = -1073741811;
        goto LABEL_48;
      }
    }
    else if ( *((_DWORD *)InformationBuffer + 134) != NicSwitchCurrentCapabilities->MaxNumQueuePairsPerNonDefaultVPort )
    {
      goto LABEL_6;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x388uLL, 0x6F69444Eu);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v11 = (int *)((char *)a1 + 40);
      *v11 = -1073741670;
      goto LABEL_48;
    }
    memset(PoolWithTag, 0, 0x388uLL);
    *((_QWORD *)v2 + 10) = v38;
    *((_DWORD *)v2 + 26) = 1;
    *((_QWORD *)v2 + 9) = v4;
    *((_QWORD *)v2 + 11) = SwitchBySwitchId;
    if ( v3 )
      *((_DWORD *)v2 + 16) |= 2u;
    else
      v3 = PFBlock;
    v17 = 5LL;
    *((_QWORD *)v2 + 12) = v3;
    v18 = v2 + 112;
    do
    {
      *v18 = *(_OWORD *)InformationBuffer;
      v18[1] = *((_OWORD *)InformationBuffer + 1);
      v18[2] = *((_OWORD *)InformationBuffer + 2);
      v18[3] = *((_OWORD *)InformationBuffer + 3);
      v18[4] = *((_OWORD *)InformationBuffer + 4);
      v18[5] = *((_OWORD *)InformationBuffer + 5);
      v18[6] = *((_OWORD *)InformationBuffer + 6);
      v18 += 8;
      v19 = *((_OWORD *)InformationBuffer + 7);
      InformationBuffer += 128;
      *(v18 - 1) = v19;
      --v17;
    }
    while ( v17 );
    *v18 = *(_OWORD *)InformationBuffer;
    v18[1] = *((_OWORD *)InformationBuffer + 1);
    v18[2] = *((_OWORD *)InformationBuffer + 2);
    v18[3] = *((_OWORD *)InformationBuffer + 3);
    v18[4] = *((_OWORD *)InformationBuffer + 4);
    v18[5] = *((_OWORD *)InformationBuffer + 5);
    v20 = *((_OWORD *)InformationBuffer + 6);
    *((_QWORD *)v2 + 112) = 0LL;
    *((_QWORD *)v2 + 111) = 0LL;
    v18[6] = v20;
    *((_QWORD *)v2 + 110) = v2 + 872;
    *((_QWORD *)v2 + 109) = v2 + 872;
    AllocatedVPortIndices = v4->AllocatedVPortIndices;
    AllocatedVPortIndicesLength = v4->AllocatedVPortIndicesLength;
    if ( AllocatedVPortIndices )
    {
      v23 = 0LL;
      if ( (_DWORD)AllocatedVPortIndicesLength )
      {
        v24 = v4->AllocatedVPortIndices;
        while ( *v24 == 0xFF )
        {
          v5 += 8;
          v23 = (unsigned int)(v23 + 1);
          ++v24;
          v36 = v5;
          if ( (unsigned int)v23 >= (unsigned int)AllocatedVPortIndicesLength )
            goto LABEL_33;
        }
        v28 = (unsigned int)v23;
        v29 = 1;
        v30 = AllocatedVPortIndices[v23];
        v31 = 0;
        while ( (v30 & v29) != 0 )
        {
          v29 *= 2;
          if ( (unsigned int)++v31 >= 8 )
            goto LABEL_33;
        }
        AllocatedVPortIndices[v28] = v29 | v30;
        v32 = v31 + v5;
        goto LABEL_44;
      }
    }
LABEL_33:
    v25 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(AllocatedVPortIndicesLength + 64), 0x6F69444Eu);
    v26 = v25;
    if ( v25 )
    {
      v33 = &v25[AllocatedVPortIndicesLength];
      memset(&v25[AllocatedVPortIndicesLength], 0, 0x40uLL);
      if ( AllocatedVPortIndices )
      {
        memmove(v26, AllocatedVPortIndices, AllocatedVPortIndicesLength);
        *v33 = 1;
        ExFreePoolWithTag(AllocatedVPortIndices, 0);
        v32 = v36;
      }
      else
      {
        *v26 = 3;
        v32 = 1;
      }
      v4->AllocatedVPortIndices = v26;
      v4->AllocatedVPortIndicesLength = AllocatedVPortIndicesLength + 64;
LABEL_44:
      v11 = (int *)((char *)a1 + 40);
      *((_DWORD *)v2 + 31) = v32;
      *v39 = v32;
      *(_QWORD *)&v35->NdisReserved[80] = v2;
      *v11 = 0;
      v7 = 0;
      goto LABEL_48;
    }
    v27 = -1073741670;
  }
  else
  {
    v27 = -1073741637;
  }
  v11 = (int *)((char *)a1 + 40);
  *v11 = v27;
  if ( v2 )
    ndisIovDeleteVPort(v2);
LABEL_48:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x2Eu,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      (char)v4,
      *v11);
  return v7;
}
