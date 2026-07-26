/*
 * XREFs of ?ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0016CFC
 * Callers:
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0016BDC (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C000C500 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000E1E0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisGetWoLPatternSize@@YAIPEAU_NDIS_PM_WOL_PATTERN@@@Z @ 0x1C0016A4C (-ndisGetWoLPatternSize@@YAIPEAU_NDIS_PM_WOL_PATTERN@@@Z.c)
 *     ?ndisCreatePMRejectWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_SINGLE_LIST_ENTRY@@H@Z @ 0x1C0016FEC (-ndisCreatePMRejectWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_SINGLE_LIST_ENTRY@@H@Z.c)
 *     WPP_RECORDER_SF_qqqd @ 0x1C0017030 (WPP_RECORDER_SF_qqqd.c)
 *     WPP_RECORDER_SF_d @ 0x1C001918C (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     ?ndisClonePMPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@0@Z @ 0x1C008F024 (-ndisClonePMPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@0@Z.c)
 *     ?ndisRemovePMLowestPriorityEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1C0093E40 (-ndisRemovePMLowestPriorityEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F86F0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisPMAddWOLPattern(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        struct _NDIS_OID_REQUEST *a3)
{
  struct _NDIS_FILTER_BLOCK *v4; // r15
  struct _SINGLE_LIST_ENTRY v6; // rbx
  char v7; // r12
  unsigned int SetMiniport; // eax
  int v9; // edx
  unsigned int v10; // r14d
  int v11; // edx
  _QWORD *v12; // rbx
  int v14; // r9d
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  int v16; // eax
  KIRQL v17; // dl
  int v18; // esi
  _DWORD *InformationBuffer; // r15
  struct _NDIS_PACKET_PATTERN_ENTRY *v20; // rax
  int v21; // edx
  NDIS_PORT_NUMBER Next_high; // eax
  int v23; // eax
  _SINGLE_LIST_ENTRY *v24; // rsi
  UINT WoLPatternSize; // eax
  int v26; // r9d
  void *v27; // rcx
  char v28; // [rsp+28h] [rbp-D8h]
  KIRQL NewIrql[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct _NDIS_FILTER_BLOCK *v30; // [rsp+58h] [rbp-A8h]
  PVOID P[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct _NDIS_OID_REQUEST v32; // [rsp+70h] [rbp-90h] BYREF

  v30 = a2;
  v4 = a2;
  memset(&v32, 0, 0xF8uLL);
  P[0] = 0LL;
  v6.Next = 0LL;
  v7 = 0;
  NewIrql[0] = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x4Du,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      (char)a1,
      (char)v4,
      a3);
  ndisWaitForKernelObject(&a1->PMPatternSemaphore);
  while ( 1 )
  {
    *(_DWORD *)&a3->NdisReserved[16] |= 0x2000000u;
    SetMiniport = ndisQuerySetMiniportEx(a1, 0LL, a3, 0, 0LL, v4);
    v10 = SetMiniport;
    if ( SetMiniport != -1071439869 && SetMiniport != -1073741670 )
    {
      if ( !SetMiniport || *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_7;
      v14 = 78;
      v28 = SetMiniport;
LABEL_15:
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v9,
        14,
        v14,
        (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
        v28);
      goto LABEL_7;
    }
    if ( !v7 )
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, NewIrql);
      if ( a1->MajorNdisVersion > 6u || a1->MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x14u )
        Next = a1->WOLPatternList.Next;
      else
        Next = a1->PatternList.Next;
      v16 = ndisClonePMPatternList(Next, (struct _SINGLE_LIST_ENTRY *)P);
      v17 = NewIrql[0];
      a1->MiniportThread = 0LL;
      v18 = v16;
      KeReleaseSpinLock(&a1->Lock, v17);
      if ( v18 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_7;
        v14 = 79;
        v28 = v18;
        goto LABEL_15;
      }
      v7 = 1;
    }
    InformationBuffer = a3->DATA.QUERY_INFORMATION.InformationBuffer;
    v20 = ndisRemovePMLowestPriorityEntry((struct _SINGLE_LIST_ENTRY *)P, InformationBuffer[2]);
    if ( !v20 )
      break;
    v20->Link = v6;
    v6.Next = &v20->Link;
    memset(&v32, 0, 0xF8uLL);
    v4 = v30;
    *(_QWORD *)&v32.NdisReserved[32] = &ndisIntReqGeneric;
    v32.Header = (NDIS_OBJECT_HEADER)15466902;
    v32.DATA.QUERY_INFORMATION.Oid = -50265845;
    v32.RequestType = NdisRequestSetInformation;
    Next_high = HIDWORD(v6.Next[5].Next);
    *(_DWORD *)&v32.NdisReserved[16] |= 0x1800008u;
    v32.PortNumber = Next_high;
    v32.DATA.QUERY_INFORMATION.InformationBuffer = &v6.Next[5];
    v32.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
    v23 = ndisQuerySetMiniportEx(a1, 0LL, &v32, 0, 0LL, v30);
    if ( v23 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_7;
      v14 = 81;
      v28 = v23;
      goto LABEL_15;
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v21) = 4;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v21,
      14,
      80,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      InformationBuffer[2]);
  }
  v4 = v30;
LABEL_7:
  while ( v6.Next )
  {
    v24 = v6.Next;
    v6.Next = v6.Next->Next;
    memset(&v32, 0, 0xF8uLL);
    *(_QWORD *)&v32.NdisReserved[32] = &ndisIntReqGeneric;
    v32.Header = (NDIS_OBJECT_HEADER)15466902;
    *(_DWORD *)&v32.NdisReserved[16] |= 8u;
    v32.DATA.QUERY_INFORMATION.Oid = -50265846;
    v32.RequestType = NdisRequestSetInformation;
    v32.PortNumber = HIDWORD(v24[5].Next);
    v32.DATA.QUERY_INFORMATION.InformationBuffer = &v24[6];
    WoLPatternSize = ndisGetWoLPatternSize((struct _NDIS_PM_WOL_PATTERN *)&v24[6]);
    *(_DWORD *)&v32.NdisReserved[16] = v26 | 0x1800000;
    v32.DATA.QUERY_INFORMATION.InformationBufferLength = WoLPatternSize;
    if ( (unsigned int)ndisQuerySetMiniportEx(a1, 0LL, &v32, 0, 0LL, v4) )
    {
      v24->Next = v6.Next;
      v6.Next = v24;
      break;
    }
    ExFreePoolWithTag(v24, 0);
  }
  KeReleaseSemaphore(&a1->PMPatternSemaphore, 0, 1, 0);
  ndisCreatePMRejectWorkItem(a1, v6.Next, 1073938513);
  v12 = P[0];
  while ( v12 )
  {
    v27 = v12;
    v12 = (_QWORD *)*v12;
    ExFreePoolWithTag(v27, 0);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      11,
      82,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      (char)a1,
      (char)v4,
      (char)a3,
      v10);
  return v10;
}
