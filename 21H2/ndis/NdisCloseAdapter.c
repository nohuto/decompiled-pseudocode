/*
 * XREFs of NdisCloseAdapter @ 0x1C013A8A0
 * Callers:
 *     NdisCloseAdapterEx @ 0x1C0098270 (NdisCloseAdapterEx.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C013AE00 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006F7C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     PktMonClientComponentUnregister @ 0x1C0026AE8 (PktMonClientComponentUnregister.c)
 *     WPP_RECORDER_SF_qqZZ @ 0x1C00298D0 (WPP_RECORDER_SF_qqZZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     ?ndisCleanUpForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0096FA8 (-ndisCleanUpForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     McTemplateK0jqxz_EtwWriteTransfer @ 0x1C009816C (McTemplateK0jqxz_EtwWriteTransfer.c)
 *     ?ndisQueueWorkitem@@YAXPEAU_WORK_QUEUE_ITEM@@@Z @ 0x1C00AAA84 (-ndisQueueWorkitem@@YAXPEAU_WORK_QUEUE_ITEM@@@Z.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x1C00F8988 (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ?ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C01389C8 (-ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall NdisCloseAdapter(int *a1, __int64 a2)
{
  KIRQL v4; // al
  struct _NDIS_OPEN_BLOCK *NextGlobalOpen; // rsi
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 v11; // rbp
  unsigned __int8 v12; // dl
  int v13; // eax
  __int64 v14; // rcx
  KIRQL v15; // al
  char v16[8]; // [rsp+30h] [rbp-38h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x1Cu,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      a2);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  NextGlobalOpen = ndisGlobalOpenList;
  v6 = 0;
  while ( NextGlobalOpen && NextGlobalOpen != (struct _NDIS_OPEN_BLOCK *)a2 )
    NextGlobalOpen = NextGlobalOpen->NextGlobalOpen;
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v4);
  if ( !NextGlobalOpen )
  {
    *a1 = 0;
    goto LABEL_25;
  }
  v10 = *(_QWORD *)(a2 + 16);
  v11 = *(_QWORD *)(a2 + 24);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqZZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      v9,
      0x1Du,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      v10,
      a2,
      (unsigned __int16 *)(v11 + 72),
      *(unsigned __int16 **)(v10 + 3856));
  if ( (byte_1C00E6181 & 2) != 0 )
    McTemplateK0jqxz_EtwWriteTransfer(
      v8,
      v7,
      (const GUID *)(v10 + 4008),
      v10 + 4008,
      *(_DWORD *)(v10 + 4056),
      *(_QWORD *)(v10 + 4024),
      *(const wchar_t **)(v11 + 80));
  PktMonClientComponentUnregister((__int64 *)(a2 + 920));
  if ( *(_BYTE *)(v11 + 56) < 6u )
  {
    if ( !*(_BYTE *)(a2 + 904)
      || *(struct NDIS_BIND_LINK_BASE **)(a2 + 856) != Ndis::BindEngine::GetCurrentLink((Ndis::BindEngine *)(v10 + 5104)) )
    {
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 232));
      *(_DWORD *)(a2 + 224) |= 0x40000000u;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 232), v15);
      ndisQueueWorkitem((struct _WORK_QUEUE_ITEM *)(a2 + 864));
LABEL_23:
      v13 = 259;
      goto LABEL_24;
    }
LABEL_18:
    *(_BYTE *)(a2 + 904) = 0;
    if ( (*(_DWORD *)(v10 + 124) & 0x2000) != 0 )
    {
      v14 = *(_QWORD *)(v10 + 3984);
      if ( v14 )
        (*(void (__fastcall **)(_QWORD))(v14 + 40))(*(_QWORD *)(v14 + 8));
    }
    ndisCleanUpForProtocol((struct _NDIS_OPEN_BLOCK *)a2, v12);
    ndisMKillOpen((struct _NDIS_OPEN_BLOCK *)a2);
    goto LABEL_23;
  }
  *(_BYTE *)(a2 + 65) = 0;
  if ( *(struct _KTHREAD **)(v11 + 416) == KeGetCurrentThread() )
    goto LABEL_18;
  v13 = -1073741823;
LABEL_24:
  *a1 = v13;
  v6 = v13;
LABEL_25:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v16 = v6;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x1Eu,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      a2,
      *(_QWORD *)v16);
  }
}
