/*
 * XREFs of ?ndisMInvokeSetOptions@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1C0109B68
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0036860 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D018 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisMInvokeSetOptions(struct _NDIS_M_DRIVER_BLOCK *a1)
{
  int (__fastcall *SetOptionsHandler)(void *, void *); // rax
  unsigned int v2; // edi
  int v4; // eax

  SetOptionsHandler = a1->MiniportDriverCharacteristics.SetOptionsHandler;
  v2 = 0;
  if ( SetOptionsHandler )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0xD7u,
        (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
        a1);
      SetOptionsHandler = a1->MiniportDriverCharacteristics.SetOptionsHandler;
    }
    v4 = SetOptionsHandler(a1, a1->MiniportDriverContext);
    v2 = v4;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0xD8u,
        (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
        (char)a1,
        v4);
  }
  else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xD9u,
      (struct _GUID *)&WPP_60844eb21a8f3cfcca037c14d27ddc90_Traceguids,
      a1);
  }
  return v2;
}
