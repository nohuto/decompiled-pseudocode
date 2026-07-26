/*
 * XREFs of ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C002A6DC
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1C0096DFC (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0103DC0 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C0116AA0 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C011FCD8 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C013AF90 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000DF10 (WPP_RECORDER_SF_qqL.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C0018E88 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     WPP_RECORDER_SF_d @ 0x1C001918C (WPP_RECORDER_SF_d.c)
 *     memmove @ 0x1C003F400 (memmove.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C005FA88 (McTemplateK0qqq_EtwWriteTransfer.c)
 */

void __fastcall ndisNotifyWmiBindUnbind(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PROTOCOL_BLOCK *a2,
        unsigned __int8 a3)
{
  int v6; // ebp
  __int128 *v7; // r9
  PVOID v8; // rsi
  char *v9; // rbx
  NTSTATUS v10; // eax
  int v11; // ecx
  NTSTATUS v12; // ebx
  char v13[8]; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+38h] [rbp-30h]
  PVOID Argument1; // [rsp+70h] [rbp+8h] BYREF

  Argument1 = 0LL;
  v6 = a3;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x6Bu,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  v7 = (__int128 *)&GUID_NDIS_NOTIFY_BIND;
  if ( !a3 )
    v7 = (__int128 *)&GUID_NDIS_NOTIFY_UNBIND;
  ndisSetupWmiNode(
    a1,
    a1->pAdapterInstanceName,
    a1->BindPaths->Paths[0].Length + a2->Name.Length + 4,
    v7,
    (struct tagWNODE_SINGLE_INSTANCE **)&Argument1);
  v8 = Argument1;
  if ( Argument1 )
  {
    v9 = (char *)Argument1 + *((unsigned int *)Argument1 + 14);
    memmove(v9, a2->Name.Buffer, a2->Name.Length);
    memmove(&v9[a2->Name.Length + 2], a1->BindPaths->Paths[0].Buffer, a1->BindPaths->Paths[0].Length);
    if ( ndisBindUnbindCallbackObject )
      ExNotifyCallback(ndisBindUnbindCallbackObject, v8, 0LL);
    v10 = IoWMIWriteEvent(v8);
    v12 = v10;
    if ( v10 < 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v13 = v10;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xDu,
          0x6Cu,
          (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
          *(_QWORD *)v13);
      }
      if ( (byte_1C00E6081 & 0x10) != 0 )
        McTemplateK0qqq_EtwWriteTransfer(v11, (unsigned int)&IoWMIWriteEventFailed, (_DWORD)a1 + 4008, v12, 4, 0);
      ExFreePoolWithTag(v8, 0);
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v14) = v6;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x6Du,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      (char)a1,
      (char)a2,
      v14);
  }
}
