/*
 * XREFs of ?ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00921C0
 * Callers:
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0016BDC (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C000C500 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000E1E0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisCreatePMRejectWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_SINGLE_LIST_ENTRY@@H@Z @ 0x1C0016FEC (-ndisCreatePMRejectWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_SINGLE_LIST_ENTRY@@H@Z.c)
 *     WPP_RECORDER_SF_qqqd @ 0x1C0017030 (WPP_RECORDER_SF_qqqd.c)
 *     WPP_RECORDER_SF_d @ 0x1C001918C (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     ?ndisClonePMPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@0@Z @ 0x1C008F024 (-ndisClonePMPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@0@Z.c)
 *     ?ndisRemovePMLowestPriorityEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1C0093E40 (-ndisRemovePMLowestPriorityEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F86F0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisPMAddProtocolOffload(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3)
{
  struct _NDIS_FILTER_BLOCK *v4; // r13
  struct _NDIS_PACKET_PATTERN_ENTRY *Next; // rbx
  char v7; // r12
  unsigned int SetMiniport; // eax
  unsigned int v9; // r14d
  int v10; // eax
  KIRQL v11; // dl
  int v12; // esi
  _DWORD *InformationBuffer; // r13
  struct _NDIS_PACKET_PATTERN_ENTRY *v14; // rax
  unsigned int PortNumber; // eax
  int v16; // eax
  unsigned __int16 v17; // r9
  struct _NDIS_PACKET_PATTERN_ENTRY *v18; // rsi
  int v19; // edx
  _QWORD *v20; // rbx
  void *v21; // rcx
  struct _NDIS_FILTER_BLOCK *v23; // [rsp+28h] [rbp-D8h]
  KIRQL NewIrql[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct _NDIS_FILTER_BLOCK *v25; // [rsp+58h] [rbp-A8h]
  PVOID P[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct _NDIS_OID_REQUEST v27; // [rsp+70h] [rbp-90h] BYREF

  v25 = a2;
  v4 = a2;
  memset(&v27, 0, 0xF8uLL);
  P[0] = 0LL;
  Next = 0LL;
  v7 = 0;
  NewIrql[0] = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x61u,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      (char)a1,
      (char)v4,
      a3);
  ndisWaitForKernelObject(&a1->PMOffloadSemaphore);
  while ( 1 )
  {
    *(_DWORD *)&a3->NdisReserved[16] |= 0x2000000u;
    SetMiniport = ndisQuerySetMiniportEx(a1, 0LL, a3, 0, 0LL, v4);
    v9 = SetMiniport;
    if ( SetMiniport != -1071439868 && SetMiniport != -1073741670 )
    {
      if ( !SetMiniport || *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_25;
      v17 = 98;
      LODWORD(v23) = SetMiniport;
LABEL_16:
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        v17,
        (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
        v23);
      goto LABEL_25;
    }
    if ( v7 )
      goto LABEL_9;
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, NewIrql);
    v10 = ndisClonePMPatternList(a1->PMProtocolOffloadList.Next, (struct _SINGLE_LIST_ENTRY *)P);
    v11 = NewIrql[0];
    a1->MiniportThread = 0LL;
    v12 = v10;
    KeReleaseSpinLock(&a1->Lock, v11);
    if ( v12 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_25;
      v17 = 99;
      LODWORD(v23) = v12;
      goto LABEL_16;
    }
    v7 = 1;
LABEL_9:
    InformationBuffer = a3->DATA.QUERY_INFORMATION.InformationBuffer;
    v14 = ndisRemovePMLowestPriorityEntry((struct _SINGLE_LIST_ENTRY *)P, InformationBuffer[2]);
    if ( !v14 )
      break;
    v14->Link.Next = &Next->Link;
    Next = v14;
    memset(&v27, 0, 0xF8uLL);
    v4 = v25;
    *(_QWORD *)&v27.NdisReserved[32] = &ndisIntReqGeneric;
    v27.Header = (NDIS_OBJECT_HEADER)15466902;
    v27.DATA.QUERY_INFORMATION.Oid = -50265841;
    v27.RequestType = NdisRequestSetInformation;
    PortNumber = Next->PortNumber;
    *(_DWORD *)&v27.NdisReserved[16] |= 0x1800008u;
    v27.PortNumber = PortNumber;
    v27.DATA.QUERY_INFORMATION.InformationBuffer = &Next->Id;
    v27.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
    v16 = ndisQuerySetMiniportEx(a1, 0LL, &v27, 0, 0LL, v25);
    if ( v16 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_25;
      v17 = 101;
      LODWORD(v23) = v16;
      goto LABEL_16;
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v23) = InformationBuffer[2];
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x64u,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      v23);
  }
  v4 = v25;
LABEL_25:
  while ( Next )
  {
    v18 = Next;
    Next = (struct _NDIS_PACKET_PATTERN_ENTRY *)Next->Link.Next;
    memset(&v27, 0, 0xF8uLL);
    *(_QWORD *)&v27.NdisReserved[32] = &ndisIntReqGeneric;
    *(_DWORD *)&v27.NdisReserved[16] |= 8u;
    v27.Header = (NDIS_OBJECT_HEADER)15466902;
    v27.DATA.QUERY_INFORMATION.Oid = -50265843;
    v27.RequestType = NdisRequestSetInformation;
    v27.PortNumber = v18->PortNumber;
    *(_DWORD *)&v27.NdisReserved[16] |= 0x1800000u;
    v27.DATA.QUERY_INFORMATION.InformationBuffer = &v18->48;
    v27.DATA.QUERY_INFORMATION.InformationBufferLength = 256;
    if ( (unsigned int)ndisQuerySetMiniportEx(a1, 0LL, &v27, 0, 0LL, v4) )
    {
      v18->Link.Next = &Next->Link;
      Next = v18;
      break;
    }
    ExFreePoolWithTag(v18, 0);
  }
  KeReleaseSemaphore(&a1->PMOffloadSemaphore, 0, 1, 0);
  ndisCreatePMRejectWorkItem((_LIST_ENTRY *)a1, (_LIST_ENTRY *)Next, 1073938514);
  v20 = P[0];
  while ( v20 )
  {
    v21 = v20;
    v20 = (_QWORD *)*v20;
    ExFreePoolWithTag(v21, 0);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v19,
      0xBu,
      0x66u,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      (char)a1,
      (char)v4,
      (char)a3,
      v9);
  return v9;
}
