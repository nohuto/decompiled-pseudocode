/*
 * XREFs of HUBHTX_AckPortChangeUsingControlTransfer @ 0x1C00041BC
 * Callers:
 *     HUBPSM20_AckingConnectChangeOnResume @ 0x1C00117F0 (HUBPSM20_AckingConnectChangeOnResume.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dL @ 0x1C0002CD4 (WPP_RECORDER_SF_dL.c)
 *     HUBMISC_ControlTransfer @ 0x1C002FA0C (HUBMISC_ControlTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_AckPortChangeUsingControlTransfer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // al
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+28h] [rbp-30h]

  v5 = *(_BYTE *)(a1 + 168) & 0x1C;
  *(_BYTE *)(a1 + 169) = 1;
  *(_BYTE *)(a1 + 168) = v5 | 0x23;
  *(_WORD *)(a1 + 170) = *(_WORD *)(a1 + 12);
  *(_DWORD *)(a1 + 172) = *(unsigned __int16 *)(a1 + 200);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dL(*(_QWORD *)(a1 + 1432), a2, a3, a4, v7);
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
  *(_DWORD *)(a1 + 12) = 1000;
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v8) = result;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 1432),
        2u,
        4u,
        0x2Du,
        (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids,
        v8);
    }
    return (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 1240))(a1, 3008LL);
  }
  return result;
}
