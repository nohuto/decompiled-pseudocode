/*
 * XREFs of ?ndisMRegisterPDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011E6CC
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C012EB78 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     PdcTaskClientRegister @ 0x1C0129250 (PdcTaskClientRegister.c)
 */

void __fastcall ndisMRegisterPDCTaskClient(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xA4u,
      (struct _GUID *)&WPP_dab0da38b1e3331efa7a05b6175d8ddc_Traceguids,
      a1);
  if ( (int)PdcTaskClientRegister(a1, &a1->PdcHandle) < 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xBu,
      0xA5u,
      (struct _GUID *)&WPP_dab0da38b1e3331efa7a05b6175d8ddc_Traceguids,
      a1);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xA6u,
      (struct _GUID *)&WPP_dab0da38b1e3331efa7a05b6175d8ddc_Traceguids,
      a1);
}
