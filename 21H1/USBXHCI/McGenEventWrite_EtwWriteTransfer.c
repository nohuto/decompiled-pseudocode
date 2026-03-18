/*
 * XREFs of McGenEventWrite_EtwWriteTransfer @ 0x1C003476C
 * Callers:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C00347D0 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pjqq_EtwWriteTransfer @ 0x1C0034830 (McTemplateK0pjqq_EtwWriteTransfer.c)
 *     McTemplateK0pppxsb16b16_EtwWriteTransfer @ 0x1C00348CC (McTemplateK0pppxsb16b16_EtwWriteTransfer.c)
 *     McTemplateK0pptqqqq_EtwWriteTransfer @ 0x1C00349B0 (McTemplateK0pptqqqq_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0034A74 (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0pqqh_EtwWriteTransfer @ 0x1C0034AE8 (McTemplateK0pqqh_EtwWriteTransfer.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0034B7C (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C0034C10 (McTemplateK0pt_EtwWriteTransfer.c)
 *     McTemplateK0ptqqp_EtwWriteTransfer @ 0x1C0034C8C (McTemplateK0ptqqp_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C003B7CC (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0uqqq_EtwWriteTransfer @ 0x1C003FE88 (McTemplateK0uqqq_EtwWriteTransfer.c)
 *     McTemplateK0uqq_EtwWriteTransfer @ 0x1C00429B8 (McTemplateK0uqq_EtwWriteTransfer.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0047EC4 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0ppb16_EtwWriteTransfer @ 0x1C0047F08 (McTemplateK0ppb16_EtwWriteTransfer.c)
 *     McTemplateK0ppb16qu_EtwWriteTransfer @ 0x1C0047F90 (McTemplateK0ppb16qu_EtwWriteTransfer.c)
 *     McTemplateK0ppb16u_EtwWriteTransfer @ 0x1C0048034 (McTemplateK0ppb16u_EtwWriteTransfer.c)
 *     McTemplateK0pppnnn_EtwWriteTransfer @ 0x1C00480D0 (McTemplateK0pppnnn_EtwWriteTransfer.c)
 *     McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer @ 0x1C004817C (McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer.c)
 *     McTemplateK0ppqqqq_EtwWriteTransfer @ 0x1C00483C0 (McTemplateK0ppqqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqqqqsssxqqqt_EtwWriteTransfer @ 0x1C004847C (McTemplateK0pqqqqqqqsssxqqqt_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqqqqsssxqqqtn_EtwWriteTransfer @ 0x1C0048680 (McTemplateK0pqqqqqqqsssxqqqtn_EtwWriteTransfer.c)
 *     McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqqqqqqqqn_EtwWriteTransfer @ 0x1C004888C (McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqqqqqqqqn_EtwWriteTransfer.c)
 *     McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqqqqqqqqnqqttt_EtwWriteTransfer @ 0x1C0048D28 (McTemplateK0pquuqqqqqqsssxqqqttqqqtxxqqqqqqqqqqqqqqqqqnqqttt_EtwWriteTransfer.c)
 *     McTemplateK0pqzr1q_EtwWriteTransfer @ 0x1C0049240 (McTemplateK0pqzr1q_EtwWriteTransfer.c)
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x1C004F660 (McTemplateK0qqqq_EtwWriteTransfer.c)
 *     McTemplateK0qqx_EtwWriteTransfer @ 0x1C004F6F8 (McTemplateK0qqx_EtwWriteTransfer.c)
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

  v5 = (unsigned __int16 *)qword_1C00606E8;
  v6 = 0;
  if ( qword_1C00606E8 )
  {
    UserData->Ptr = qword_1C00606E8;
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
