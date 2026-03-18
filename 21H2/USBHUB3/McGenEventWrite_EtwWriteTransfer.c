/*
 * XREFs of McGenEventWrite_EtwWriteTransfer @ 0x1C0001250
 * Callers:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C000131C (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0pnq_EtwWriteTransfer @ 0x1C0001360 (McTemplateK0pnq_EtwWriteTransfer.c)
 *     McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer @ 0x1C00013DC (McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer.c)
 *     McTemplateK0ppuq_EtwWriteTransfer @ 0x1C00017E0 (McTemplateK0ppuq_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0001870 (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0pqn_EtwWriteTransfer @ 0x1C00018E0 (McTemplateK0pqn_EtwWriteTransfer.c)
 *     McTemplateK0pquuxqqqqqqqsss_EtwWriteTransfer @ 0x1C000195C (McTemplateK0pquuxqqqqqqqsss_EtwWriteTransfer.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C0001B50 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pqhh_EtwWriteTransfer @ 0x1C0001F34 (McTemplateK0pqhh_EtwWriteTransfer.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0001FC8 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     McTemplateK0qhhhqhhh_EtwWriteTransfer @ 0x1C0002058 (McTemplateK0qhhhqhhh_EtwWriteTransfer.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0006D20 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0ppqqqq_EtwWriteTransfer @ 0x1C0009F84 (McTemplateK0ppqqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C000C094 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqh_EtwWriteTransfer @ 0x1C000C10C (McTemplateK0pqqh_EtwWriteTransfer.c)
 *     McTemplateK0pjq_EtwWriteTransfer @ 0x1C001312C (McTemplateK0pjq_EtwWriteTransfer.c)
 *     McTemplateK0ppn_EtwWriteTransfer @ 0x1C00131B0 (McTemplateK0ppn_EtwWriteTransfer.c)
 *     McTemplateK0ppqq_EtwWriteTransfer @ 0x1C0013230 (McTemplateK0ppqq_EtwWriteTransfer.c)
 *     McTemplateK0pqhhh_EtwWriteTransfer @ 0x1C00132C0 (McTemplateK0pqhhh_EtwWriteTransfer.c)
 *     McTemplateK0pqhhhqqqqqqhhqhqqqqqqqssshhh_EtwWriteTransfer @ 0x1C0013360 (McTemplateK0pqhhhqqqqqqhhqhqqqqqqqssshhh_EtwWriteTransfer.c)
 *     McTemplateK0pqqhhhq_EtwWriteTransfer @ 0x1C001369C (McTemplateK0pqqhhhq_EtwWriteTransfer.c)
 *     McTemplateK0pthhhtq_EtwWriteTransfer @ 0x1C0013760 (McTemplateK0pthhhtq_EtwWriteTransfer.c)
 *     McTemplateK0phuzu_EtwWriteTransfer @ 0x1C0026D64 (McTemplateK0phuzu_EtwWriteTransfer.c)
 *     McTemplateK0puuhz_EtwWriteTransfer @ 0x1C0026E3C (McTemplateK0puuhz_EtwWriteTransfer.c)
 *     McTemplateK0phhhquuuuu_EtwWriteTransfer @ 0x1C002B050 (McTemplateK0phhhquuuuu_EtwWriteTransfer.c)
 *     McTemplateK0psqzq_EtwWriteTransfer @ 0x1C002B150 (McTemplateK0psqzq_EtwWriteTransfer.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C003EF98 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     McTemplateK0ppq_EtwWriteTransfer @ 0x1C003F020 (McTemplateK0ppq_EtwWriteTransfer.c)
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

  v5 = (unsigned __int16 *)qword_1C0067228;
  v6 = 0;
  if ( qword_1C0067228 )
  {
    UserData->Ptr = qword_1C0067228;
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
  return EtwWriteTransfer(MS_USBHUB3_ETW_PROVIDER_Context, a2, a3, 0LL, a4, UserData);
}
