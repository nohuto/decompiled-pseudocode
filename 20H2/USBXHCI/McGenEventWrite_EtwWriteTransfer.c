/*
 * XREFs of McGenEventWrite_EtwWriteTransfer @ 0x1C0035C4C
 * Callers:
 *     McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqnn_EtwWriteTransfer @ 0x1C001B2E0 (McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqnn_EtwWriteTransfer.c)
 *     McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqnnqqttt_EtwWriteTransfer @ 0x1C001B6E8 (McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqnnqqttt_EtwWriteTransfer.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0035CB0 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pjqq_EtwWriteTransfer @ 0x1C0035D10 (McTemplateK0pjqq_EtwWriteTransfer.c)
 *     McTemplateK0pppxsb16b16_EtwWriteTransfer @ 0x1C0035DAC (McTemplateK0pppxsb16b16_EtwWriteTransfer.c)
 *     McTemplateK0pptqqqq_EtwWriteTransfer @ 0x1C0035E90 (McTemplateK0pptqqqq_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0035F54 (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0pqqh_EtwWriteTransfer @ 0x1C0035FC8 (McTemplateK0pqqh_EtwWriteTransfer.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C003605C (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C00360F0 (McTemplateK0pt_EtwWriteTransfer.c)
 *     McTemplateK0ptqqp_EtwWriteTransfer @ 0x1C003616C (McTemplateK0ptqqp_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C003CCAC (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0uqqq_EtwWriteTransfer @ 0x1C0041368 (McTemplateK0uqqq_EtwWriteTransfer.c)
 *     McTemplateK0uqq_EtwWriteTransfer @ 0x1C0043EA8 (McTemplateK0uqq_EtwWriteTransfer.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00493A8 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0ppb16_EtwWriteTransfer @ 0x1C00493EC (McTemplateK0ppb16_EtwWriteTransfer.c)
 *     McTemplateK0ppb16qu_EtwWriteTransfer @ 0x1C0049474 (McTemplateK0ppb16qu_EtwWriteTransfer.c)
 *     McTemplateK0ppb16u_EtwWriteTransfer @ 0x1C0049518 (McTemplateK0ppb16u_EtwWriteTransfer.c)
 *     McTemplateK0pppnnn_EtwWriteTransfer @ 0x1C00495B4 (McTemplateK0pppnnn_EtwWriteTransfer.c)
 *     McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer @ 0x1C0049660 (McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer.c)
 *     McTemplateK0ppqqqq_EtwWriteTransfer @ 0x1C00498A4 (McTemplateK0ppqqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqqqqsssxqqqt_EtwWriteTransfer @ 0x1C0049960 (McTemplateK0pqqqqqqqsssxqqqt_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqqqqsssxqqqtn_EtwWriteTransfer @ 0x1C0049B64 (McTemplateK0pqqqqqqqsssxqqqtn_EtwWriteTransfer.c)
 *     McTemplateK0pqzr1q_EtwWriteTransfer @ 0x1C0049D70 (McTemplateK0pqzr1q_EtwWriteTransfer.c)
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x1C00501D0 (McTemplateK0qqqq_EtwWriteTransfer.c)
 *     McTemplateK0qqx_EtwWriteTransfer @ 0x1C0050268 (McTemplateK0qqx_EtwWriteTransfer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall McGenEventWrite_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        ULONG a4,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int16 *v5; // r10
  int v6; // eax
  unsigned int v8; // r9d

  v5 = (unsigned __int16 *)qword_1C0061708;
  v6 = 0;
  if ( qword_1C0061708 )
  {
    UserData->Ptr = qword_1C0061708;
    v6 = 2;
    v8 = *v5;
  }
  else
  {
    UserData->Ptr = 0LL;
    v8 = 0;
  }
  UserData->Size = v8;
  UserData->Reserved = v6;
  return EtwWriteTransfer(MS_USBXHCI_ETW_PROVIDER_Context, a2, a3, 0LL, a4, UserData);
}
