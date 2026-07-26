/*
 * XREFs of ?ndisInvokeBindAdapter@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAXPEAU_NDIS_BIND_PARAMETERS@@@Z @ 0x1C0104474
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0103D30 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D018 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisInvokeBindAdapter(struct _NDIS_PROTOCOL_BLOCK *a1, void *a2, struct _NDIS_BIND_PARAMETERS *a3)
{
  int v6; // eax
  unsigned int v7; // edi
  char v9[4]; // [rsp+30h] [rbp-18h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x5Bu,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      a1);
  v6 = a1->BindAdapterHandlerEx(a1->ProtocolDriverContext, a2, a3);
  v7 = v6;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = v6;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x5Cu,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      (char)a1,
      *(_DWORD *)v9);
  }
  return v7;
}
