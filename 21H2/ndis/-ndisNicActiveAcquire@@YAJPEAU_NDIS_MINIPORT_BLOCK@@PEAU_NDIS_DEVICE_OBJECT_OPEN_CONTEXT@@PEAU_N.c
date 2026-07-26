/*
 * XREFs of ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C005BEC4
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C012BDB8 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_LqZ @ 0x1C0017598 (WPP_RECORDER_SF_LqZ.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C0017D3C (WPP_RECORDER_SF_Lq.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C003BC68 (WPP_RECORDER_SF_qdL.c)
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C005A2DC (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C005A3E4 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C005A6D4 (-ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C005CB00 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     McTemplateK0xqqq_EtwWriteTransfer @ 0x1C005E278 (McTemplateK0xqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_DDL @ 0x1C005E648 (WPP_RECORDER_SF_DDL.c)
 */

__int64 __fastcall ndisNicActiveAcquire(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *a2,
        struct _NDIS_PM_NIC_ACTIVE *a3,
        struct _IRP *a4)
{
  unsigned int v5; // edi
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v10; // al
  KIRQL v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r15d
  _LIST_ENTRY *p_ListEntry; // rdx
  _LIST_ENTRY *v17; // r8
  unsigned int v18; // eax
  int v19; // edx
  char v21[8]; // [rsp+38h] [rbp-30h]

  v5 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDL(*((_QWORD *)WPP_GLOBAL_Control + 8), *((unsigned __int16 *)a3 + 7), (_DWORD)a3, 16);
  AoAc = a1->AoAc;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  ++*((_DWORD *)a2 + 7);
  v11 = v10;
  ndisAoAcActiveRefIncrement((__int64)AoAc, *((_DWORD *)a3 + 4));
  if ( (unsigned int)(*((_DWORD *)AoAc + 16) - 3) <= 1 )
  {
    *((_DWORD *)AoAc + 16) = 0;
    ndisAoAcActiveRefSubtract((__int64)AoAc, 0, 1);
    if ( KeCancelTimer((PKTIMER)((char *)AoAc + 72)) )
      ndisDereferenceMiniport(a1, 2u);
  }
  v14 = 0x346DC5D63886594BLL;
  if ( *((_BYTE *)AoAc + 484) )
  {
    *((_BYTE *)AoAc + 484) = 0;
    v13 = MEMORY[0xFFFFF78000000008] - *((_QWORD *)AoAc + 59);
    v12 = v13 / 0x2710uLL;
    if ( v13 / 0x2710uLL > ndisAoAcMaxStartToRefTime )
      ndisAoAcMaxStartToRefTime = v13 / 0x2710uLL;
  }
  if ( *((_BYTE *)AoAc + 496) )
  {
    *((_BYTE *)AoAc + 496) = 0;
    v13 = MEMORY[0xFFFFF78000000014] - *((_QWORD *)AoAc + 61);
    v12 = v13 / 10000;
    if ( v13 / 10000 > ndisAoAcMaxWakeToRefTime )
      ndisAoAcMaxWakeToRefTime = v13 / 10000;
  }
  v15 = *((_DWORD *)AoAc + 13);
  if ( (byte_1C00E6183 & 4) != 0 )
    McTemplateK0xqqq_EtwWriteTransfer(
      v13,
      (unsigned int)&NicActiveAcquired,
      (_DWORD)a1 + 4008,
      *((_QWORD *)a3 + 1),
      *((_DWORD *)a2 + 6),
      *((_DWORD *)a2 + 7),
      *((_DWORD *)AoAc + 13));
  if ( !*((_DWORD *)AoAc + 94) || *((_DWORD *)AoAc + 95) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v11);
  }
  else
  {
    if ( *((_DWORD *)AoAc + 13) == 1 && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_LqZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v12,
        v14,
        0x11u,
        (struct _GUID *)WPP_dafd92df180233d1e8f46c99921014e6_Traceguids,
        *((_DWORD *)a3 + 4),
        (char)a1,
        &a1->pAdapterInstanceName->Length);
    p_ListEntry = &a4->Tail.Overlay.ListEntry;
    a4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    v17 = (_LIST_ENTRY *)*((_QWORD *)AoAc + 5);
    if ( v17->Flink != (_LIST_ENTRY *)((char *)AoAc + 32) )
      __fastfail(3u);
    p_ListEntry->Flink = (_LIST_ENTRY *)((char *)AoAc + 32);
    a4->Tail.Overlay.ListEntry.Blink = v17;
    v17->Flink = p_ListEntry;
    *((_QWORD *)AoAc + 5) = p_ListEntry;
    ++*((_DWORD *)AoAc + 12);
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v11);
    v18 = ndisRequestNicActive(a1, RunAsynchronous);
    v5 = v18;
    if ( v18 != 259 )
    {
      if ( v18 && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xEu,
          0x12u,
          (struct _GUID *)WPP_dafd92df180233d1e8f46c99921014e6_Traceguids,
          v18,
          a1);
      ndisAoAcCompleteQueuedIrps(a1, v5);
      v5 = 259;
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v21 = v5;
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v19,
      0xEu,
      0x13u,
      (struct _GUID *)WPP_dafd92df180233d1e8f46c99921014e6_Traceguids,
      (char)a1,
      v15,
      *(_QWORD *)v21);
  }
  return v5;
}
