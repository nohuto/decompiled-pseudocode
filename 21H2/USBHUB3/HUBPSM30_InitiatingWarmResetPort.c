/*
 * XREFs of HUBPSM30_InitiatingWarmResetPort @ 0x1C0012010
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     HUBMISC_ControlTransfer @ 0x1C002FA0C (HUBMISC_ControlTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPSM30_InitiatingWarmResetPort(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // al
  int v3; // eax
  int v5; // [rsp+28h] [rbp-30h]
  __int64 v6; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_BYTE *)(v1 + 168) & 0x1C;
  *(_BYTE *)(v1 + 169) = 3;
  *(_WORD *)(v1 + 170) = 28;
  *(_BYTE *)(v1 + 168) = v2 | 0x23;
  *(_WORD *)(v1 + 172) = *(_WORD *)(v1 + 200);
  *(_DWORD *)(v1 + 8) = 3061;
  *(_WORD *)(v1 + 174) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = *(unsigned __int16 *)(v1 + 200);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v1 + 1432),
      4u,
      4u,
      0x30u,
      (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids,
      v5);
  }
  v3 = HUBMISC_ControlTransfer(
         *(_QWORD *)v1,
         *(_QWORD *)(*(_QWORD *)v1 + 248LL),
         v1,
         (int)v1 + 16,
         (__int64)HUBHTX_PortControlTransferComplete,
         0LL,
         0,
         0,
         *(_BYTE *)(*(_QWORD *)v1 + 2272LL));
  if ( v3 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v6) = v3;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v1 + 1432),
        2u,
        4u,
        0x31u,
        (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids,
        v6);
    }
    (*(void (__fastcall **)(__int64, __int64))(v1 + 1240))(v1, 3008LL);
  }
  return 1000LL;
}
