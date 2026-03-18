/*
 * XREFs of HUBHTX_DisablePortUsingControlTransfer @ 0x1C0004410
 * Callers:
 *     HUBPSM20_DisablingPortOnPortCycleWithTimer @ 0x1C0010BB0 (HUBPSM20_DisablingPortOnPortCycleWithTimer.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     HUBMISC_ControlTransfer @ 0x1C002FA0C (HUBMISC_ControlTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_DisablePortUsingControlTransfer(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+28h] [rbp-30h]
  __int64 v4; // [rsp+28h] [rbp-30h]

  *(_BYTE *)(a1 + 168) = *(_BYTE *)(a1 + 168) & 0x1C | 0x23;
  *(_BYTE *)(a1 + 169) = 1;
  *(_WORD *)(a1 + 170) = 1;
  *(_DWORD *)(a1 + 172) = *(unsigned __int16 *)(a1 + 200);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = *(unsigned __int16 *)(a1 + 200);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 1432),
      4u,
      4u,
      0x32u,
      (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids,
      v3);
  }
  result = HUBMISC_ControlTransfer(
             *(_QWORD *)a1,
             *(_QWORD *)(*(_QWORD *)a1 + 248LL),
             a1,
             (int)a1 + 16,
             (__int64)HUBHTX_PortControlTransferComplete,
             0LL,
             0,
             0,
             *(_BYTE *)(*(_QWORD *)a1 + 2272LL));
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v4) = result;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 1432),
        2u,
        4u,
        0x33u,
        (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids,
        v4);
    }
    return (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 1240))(a1, 3008LL);
  }
  return result;
}
