/*
 * XREFs of ?NdisPDPIRequestDrainNotification@@YAXPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C011B930
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005E4F0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall NdisPDPIRequestDrainNotification(struct _NDIS_PD_QUEUE *a1)
{
  void *v1; // rdx
  __int64 v3; // rdi

  v1 = a1->PDPlatformReserved[1];
  v3 = *((_QWORD *)v1 + 4);
  if ( !*((_QWORD *)v1 + 8) )
    ndisBugCheckEx(0x23uLL, 2uLL, (ULONG_PTR)a1->PDPlatformReserved[1], *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL));
  *((_BYTE *)v1 + 61) = 1;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)v1 + 14, 1, 0) )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5u,
        0x1Du,
        0x3Eu,
        (struct _GUID *)&WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids,
        a1);
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Du,
          0x3Du,
          (struct _GUID *)&WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids,
          a1);
    }
    (*(void (__fastcall **)(struct _NDIS_PD_QUEUE *))(*(_QWORD *)(v3 + 80) + 80LL))(a1);
  }
}
