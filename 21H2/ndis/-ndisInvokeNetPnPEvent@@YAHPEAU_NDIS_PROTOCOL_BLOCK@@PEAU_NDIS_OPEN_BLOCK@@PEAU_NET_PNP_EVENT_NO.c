/*
 * XREFs of ?ndisInvokeNetPnPEvent@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00FE4B8
 * Callers:
 *     ?ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00FE04C (-ndisDeliverNetPnPEventSynchronously@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NE.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000E000 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001B820 (WPP_RECORDER_SF_qqLd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisInvokeNetPnPEvent(
        struct _NDIS_PROTOCOL_BLOCK *a1,
        struct _NDIS_OPEN_BLOCK *a2,
        _NET_PNP_EVENT *a3)
{
  _NET_PNP_EVENT_CODE Buffer; // ebp
  void *ProtocolBindingContext; // rcx
  int v8; // eax
  unsigned int v9; // esi
  char v11[4]; // [rsp+38h] [rbp-30h]
  char v12[4]; // [rsp+40h] [rbp-28h]

  Buffer = (_NET_PNP_EVENT_CODE)a3->Buffer;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = a3->Buffer;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x63u,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      (char)a1,
      (char)a2,
      *(_DWORD *)v11);
  }
  ProtocolBindingContext = 0LL;
  if ( a2 )
    ProtocolBindingContext = a2->ProtocolBindingContext;
  v8 = a1->PnPEventHandler(ProtocolBindingContext, a3);
  v9 = v8;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v12 = v8;
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x64u,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      (char)a1,
      (char)a2,
      Buffer,
      *(_DWORD *)v12);
  }
  return v9;
}
