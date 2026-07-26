/*
 * XREFs of ?ndisInvokeStatus@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001952C
 * Callers:
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001C6C8 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisInvokeStatus(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  int StatusCode; // esi
  struct _NDIS_STATUS_INDICATION *v3; // rdi
  int v5; // edx
  int v6; // [rsp+30h] [rbp-18h]

  StatusCode = a2->StatusCode;
  v3 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v6 = a2->StatusCode;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      24,
      105,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      (char)a1,
      v6);
  }
  ((void (__fastcall *)(void *, struct _NDIS_STATUS_INDICATION *))a1->StatusHandler)(a1->ProtocolBindingContext, v3);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      24,
      106,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      (char)a1,
      StatusCode);
  }
}
