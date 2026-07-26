/*
 * XREFs of ?ndisOidPreIovEnumVPorts@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0079CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0033270 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003B584 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisIovCopyVPortInfo@@YAXPEAU_NDIS_NIC_SWITCH_VPORT_INFO@@PEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C00768F8 (-ndisIovCopyVPortInfo@@YAXPEAU_NDIS_NIC_SWITCH_VPORT_INFO@@PEAU_NDIS_VPORT_BLOCK@@@Z.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0077544 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1C00775C0 (-ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 */

char __fastcall ndisOidPreIovEnumVPorts(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rsi
  struct _NDIS_OID_REQUEST *v2; // rbp
  unsigned int Blink_high; // r15d
  _BYTE *v4; // r12
  _LIST_ENTRY *VFByVFId; // r14
  struct _NDIS_PF_BLOCK *PFBlock; // r13
  struct _NDIS_REQ_TRACKER *v7; // rbx
  char v8; // di
  _DWORD *v9; // r8
  int v10; // eax
  __int64 v11; // r8
  int v12; // r9d
  _NDIS_NIC_SWITCH_CAPABILITIES *v13; // r10
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  PVOID InformationBuffer; // rdi
  _BYTE *OidSourceHandle; // rax
  _LIST_ENTRY *v17; // rbp
  unsigned __int16 v18; // dx
  bool v19; // zf
  struct _NDIS_VPORT_BLOCK *p_Blink; // rdi
  struct _NDIS_VPORT_BLOCK *v21; // rdx
  __int64 v22; // rax
  _BYTE *v23; // rax
  unsigned int v24; // ecx
  __int64 v25; // rax
  unsigned int v26; // ebp
  __int64 v27; // rax
  KIRQL v28; // dl
  _DWORD *v29; // rax
  unsigned int v30; // r12d
  struct _NDIS_NIC_SWITCH_VPORT_INFO *v31; // rax
  struct _NDIS_VPORT_BLOCK *Flink; // r14
  struct _NDIS_NIC_SWITCH_VPORT_INFO *v33; // rbp
  struct _NDIS_VPORT_BLOCK *v34; // rdx
  KIRQL v35; // dl
  __int64 v36; // rax
  __int64 v38; // [rsp+30h] [rbp-78h]
  _LIST_ENTRY *v39; // [rsp+40h] [rbp-68h]
  _NDIS_OPEN_BLOCK *v40; // [rsp+48h] [rbp-60h]
  struct _NDIS_MINIPORT_BLOCK *v41; // [rsp+58h] [rbp-50h]
  KIRQL NewIrql; // [rsp+B8h] [rbp+10h] BYREF
  unsigned int v44; // [rsp+C0h] [rbp+18h]
  _LIST_ENTRY *SwitchBySwitchId; // [rsp+C8h] [rbp+20h]

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v2 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a1 + 4);
  Blink_high = 0;
  v41 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v4 = 0LL;
  v40 = 0LL;
  VFByVFId = 0LL;
  SwitchBySwitchId = 0LL;
  PFBlock = 0LL;
  v39 = 0LL;
  v7 = a1;
  NewIrql = 0;
  v8 = 1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x35u,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      (char)a1,
      v1);
  v2->DATA.METHOD_INFORMATION.BytesWritten = 0;
  v9 = (_DWORD *)*((_QWORD *)v7 + 4);
  if ( v9[1] == 12 )
  {
    *((_DWORD *)v7 + 10) = 0;
    if ( v9[12] < 0x1Cu )
    {
      v10 = -1073676268;
LABEL_8:
      v9[17] = 28;
      *((_DWORD *)v7 + 10) = v10;
      *(_DWORD *)(*((_QWORD *)v7 + 4) + 60LL) = 0;
      *(_DWORD *)(*((_QWORD *)v7 + 4) + 64LL) = 0;
      goto LABEL_72;
    }
    if ( v9[13] < 0x1Cu )
    {
      v10 = -1073676266;
      goto LABEL_8;
    }
    if ( !v1 )
    {
      v8 = 0;
      goto LABEL_72;
    }
    if ( ndisIovNicSwitchWithoutIovSupported(v1)
      || (SriovCurrentCapabilities = v1->SriovCurrentCapabilities) != 0LL
      && v1->NicSwitchCurrentCapabilities != v13
      && (SriovCurrentCapabilities->SriovCapabilities & 3) == 3 )
    {
      InformationBuffer = v2->DATA.QUERY_INFORMATION.InformationBuffer;
      *(_DWORD *)(v11 + 60) = (_DWORD)v13;
      *(_DWORD *)(*((_QWORD *)v7 + 4) + 64LL) = v12;
      OidSourceHandle = ndisGetOidSourceHandle(v2);
      if ( OidSourceHandle )
      {
        if ( *OidSourceHandle == 18 )
          v4 = OidSourceHandle;
        v40 = (_NDIS_OPEN_BLOCK *)v4;
      }
      if ( (*((_DWORD *)InformationBuffer + 1) & 2) != 0 )
      {
        SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v1, *((_DWORD *)InformationBuffer + 2));
        v17 = SwitchBySwitchId;
        if ( !SwitchBySwitchId )
        {
LABEL_21:
          *((_DWORD *)v7 + 10) = -1073741811;
LABEL_22:
          v8 = 1;
          goto LABEL_72;
        }
      }
      else
      {
        v17 = 0LL;
      }
      if ( (*((_DWORD *)InformationBuffer + 1) & 1) != 0 )
      {
        v18 = *((_WORD *)InformationBuffer + 6);
        if ( v18 == 0xFFFF )
        {
          PFBlock = v1->PFBlock;
          v19 = PFBlock == 0LL;
        }
        else
        {
          VFByVFId = ndisIovFindVFByVFId(v1, v18);
          v39 = VFByVFId;
          v19 = VFByVFId == 0LL;
        }
        if ( v19 )
          goto LABEL_21;
      }
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v1, &NewIrql);
      if ( !v4 )
      {
        if ( PFBlock )
        {
          Blink_high = *((_DWORD *)PFBlock + 7);
          p_Blink = (struct _NDIS_VPORT_BLOCK *)((char *)PFBlock + 32);
        }
        else if ( VFByVFId )
        {
          Blink_high = HIDWORD(VFByVFId[4].Blink);
          p_Blink = (struct _NDIS_VPORT_BLOCK *)&VFByVFId[5];
        }
        else if ( v17 )
        {
          Blink_high = (unsigned int)v17[3].Flink;
          p_Blink = (struct _NDIS_VPORT_BLOCK *)&v17[3].Blink;
        }
        else
        {
          Blink_high = v1->NumActiveVPorts;
          p_Blink = (struct _NDIS_VPORT_BLOCK *)&v1->VPortList;
        }
LABEL_52:
        v25 = *((_QWORD *)v7 + 4);
        v26 = 576 * Blink_high + 28;
        v44 = v26;
        *(_DWORD *)(v25 + 68) = v26;
        v27 = *((_QWORD *)v7 + 4);
        if ( v26 <= *(_DWORD *)(v27 + 52) )
        {
          v29 = *(_DWORD **)(v27 + 40);
          v30 = 0;
          *v29 = 1835392;
          v29[4] = 28;
          v29[5] = Blink_high;
          v29[6] = 576;
          v31 = (struct _NDIS_NIC_SWITCH_VPORT_INFO *)(v29 + 7);
          Flink = (struct _NDIS_VPORT_BLOCK *)p_Blink->AdapterLink.Flink;
          if ( (struct _NDIS_VPORT_BLOCK *)p_Blink->AdapterLink.Flink != p_Blink )
          {
            v33 = v31;
            do
            {
              if ( v30 >= Blink_high )
                break;
              if ( v39 || PFBlock )
              {
                v34 = (struct _NDIS_VPORT_BLOCK *)((char *)Flink - 48);
              }
              else if ( SwitchBySwitchId )
              {
                v34 = (struct _NDIS_VPORT_BLOCK *)((char *)Flink - 32);
              }
              else if ( v40 )
              {
                v34 = (struct _NDIS_VPORT_BLOCK *)((char *)Flink - 16);
              }
              else
              {
                v34 = Flink;
              }
              Flink = (struct _NDIS_VPORT_BLOCK *)Flink->AdapterLink.Flink;
              if ( !v40 || v40 == v34->Open )
              {
                ndisIovCopyVPortInfo(v33, v34);
                v33 = (struct _NDIS_NIC_SWITCH_VPORT_INFO *)((char *)v33 + 576);
                ++v30;
              }
            }
            while ( Flink != p_Blink );
            v7 = a1;
            v1 = v41;
            v26 = v44;
          }
          v35 = NewIrql;
          v1->MiniportThread = 0LL;
          KeReleaseSpinLock(&v1->Lock, v35);
          v36 = *((_QWORD *)v7 + 4);
          *((_DWORD *)v7 + 10) = 0;
          *(_DWORD *)(v36 + 60) = v26;
        }
        else
        {
          v28 = NewIrql;
          *((_DWORD *)v7 + 10) = -1073676266;
          v1->MiniportThread = 0LL;
          KeReleaseSpinLock(&v1->Lock, v28);
        }
        goto LABEL_22;
      }
      if ( PFBlock )
      {
        p_Blink = (struct _NDIS_VPORT_BLOCK *)((char *)PFBlock + 32);
      }
      else if ( VFByVFId )
      {
        p_Blink = (struct _NDIS_VPORT_BLOCK *)&VFByVFId[5];
      }
      else
      {
        if ( !v17 )
        {
          Blink_high = *((_DWORD *)v4 + 206);
          p_Blink = (struct _NDIS_VPORT_BLOCK *)(v4 + 832);
          goto LABEL_52;
        }
        p_Blink = (struct _NDIS_VPORT_BLOCK *)&v17[3].Blink;
      }
      v21 = (struct _NDIS_VPORT_BLOCK *)p_Blink->AdapterLink.Flink;
      while ( v21 != p_Blink )
      {
        if ( VFByVFId || (v22 = 48LL, PFBlock) )
          v22 = 32LL;
        v23 = *(_LIST_ENTRY **)((char *)&v21->AdapterLink.Flink + v22);
        v24 = Blink_high + 1;
        v21 = (struct _NDIS_VPORT_BLOCK *)v21->AdapterLink.Flink;
        if ( v23 != v4 )
          v24 = Blink_high;
        Blink_high = v24;
      }
      goto LABEL_52;
    }
  }
  *((_DWORD *)v7 + 10) = -1073741637;
LABEL_72:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v38) = *((_DWORD *)v7 + 10);
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x36u,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      (char)v1,
      v38);
  }
  return v8;
}
