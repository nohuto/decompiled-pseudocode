/*
 * XREFs of ?ndisGetPortList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_PORT@@@Z @ 0x1C0029ECC
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0103DC0 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 */

__int64 __fastcall ndisGetPortList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PORT **a2)
{
  unsigned int v2; // esi
  unsigned int v5; // r15d
  char *PoolWithTag; // rax
  char *v7; // r14
  _LIST_ENTRY *Flink; // rdi
  _LIST_ENTRY *v9; // rdx
  _LIST_ENTRY *v10; // r8
  unsigned int v11; // ecx
  KIRQL v12; // dl
  KIRQL NewIrql; // [rsp+70h] [rbp+8h] BYREF

  v2 = 0;
  NewIrql = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0x24u,
      (struct _GUID *)&WPP_65e9e77539343ef7812b37eb9b149dbe_Traceguids,
      a1);
  *a2 = 0LL;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  v5 = a1->NumberOfActivePorts + 1;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 96 * v5, 0x6F70444Eu);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    Flink = a1->PortList.Flink;
    memset(PoolWithTag, 0, 0x60uLL);
    *((_DWORD *)v7 + 8) = 4194688;
    v9 = (_LIST_ENTRY *)(v7 + 96);
    *(_QWORD *)v7 = v7 + 96;
    v10 = (_LIST_ENTRY *)v7;
    *((_DWORD *)v7 + 12) = a1->MediaConnectState;
    *((_QWORD *)v7 + 7) = a1->XmitLinkSpeed;
    *((_QWORD *)v7 + 8) = a1->RcvLinkSpeed;
    *((_DWORD *)v7 + 18) = a1->IfBlock->DirectionType;
    v11 = 1;
    *((_DWORD *)v7 + 19) = a1->DefaultPortSendControlState;
    *((_DWORD *)v7 + 20) = a1->DefaultPortRcvControlState;
    *((_DWORD *)v7 + 21) = a1->DefaultPortSendAuthorizationState;
    *((_DWORD *)v7 + 22) = a1->DefaultPortRcvAuthorizationState;
    while ( Flink != &a1->PortList && v11 < v5 )
    {
      if ( LODWORD(Flink[1].Flink) == 4 )
      {
        v10 = v9;
        v9->Flink = v9 + 6;
        ++v11;
        v9[2] = *(_LIST_ENTRY *)((char *)Flink + 24);
        v9[3] = *(_LIST_ENTRY *)((char *)Flink + 40);
        v9[4] = *(_LIST_ENTRY *)((char *)Flink + 56);
        v9[5] = *(_LIST_ENTRY *)((char *)Flink + 72);
        v9 += 6;
      }
      Flink = Flink->Flink;
    }
    v10->Flink = 0LL;
  }
  else
  {
    v2 = -1073741670;
  }
  v12 = NewIrql;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v12);
  if ( !v2 )
    *a2 = (struct _NDIS_PORT *)v7;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0x25u,
      (struct _GUID *)&WPP_65e9e77539343ef7812b37eb9b149dbe_Traceguids,
      (char)a1,
      v2);
  return v2;
}
