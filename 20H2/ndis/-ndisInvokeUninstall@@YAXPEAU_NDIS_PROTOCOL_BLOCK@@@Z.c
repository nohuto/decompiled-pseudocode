/*
 * XREFs of ?ndisInvokeUninstall@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C011FC44
 * Callers:
 *     ndisHandleProtocolUnloadNotification @ 0x1C00762A4 (ndisHandleProtocolUnloadNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisInvokeUninstall(struct _NDIS_PROTOCOL_BLOCK *a1)
{
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x65u,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      a1);
  a1->UninstallHandler();
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x66u,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      a1);
}
