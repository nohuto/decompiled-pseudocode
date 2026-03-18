/*
 * XREFs of McGenEventWrite_EtwWriteTransfer @ 0x14036E63C
 * Callers:
 *     McTemplateK0zjdd_EtwWriteTransfer @ 0x14036CCD8 (McTemplateK0zjdd_EtwWriteTransfer.c)
 *     McTemplateK0zzjzzzdd_EtwWriteTransfer @ 0x14036E1D0 (McTemplateK0zzjzzzdd_EtwWriteTransfer.c)
 *     McTemplateK0zzjzzztzdzztdz_EtwWriteTransfer @ 0x14036E378 (McTemplateK0zzjzzztzdzztdz_EtwWriteTransfer.c)
 *     McTemplateK0jq_EtwWriteTransfer @ 0x1404EF670 (McTemplateK0jq_EtwWriteTransfer.c)
 *     McTemplateK0xxxqq_EtwWriteTransfer @ 0x1404EF6E8 (McTemplateK0xxxqq_EtwWriteTransfer.c)
 *     McTemplateK0xxxqqqq_EtwWriteTransfer @ 0x1404EF790 (McTemplateK0xxxqqqq_EtwWriteTransfer.c)
 *     McTemplateK0dzd_EtwWriteTransfer @ 0x14050A6A4 (McTemplateK0dzd_EtwWriteTransfer.c)
 *     McTemplateK0hzr0_EtwWriteTransfer @ 0x14050B0B8 (McTemplateK0hzr0_EtwWriteTransfer.c)
 *     McTemplateK0hzr0qqhzr4_EtwWriteTransfer @ 0x14050B140 (McTemplateK0hzr0qqhzr4_EtwWriteTransfer.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x14050BD30 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x14050BD94 (McTemplateK0pz_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14050BE44 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0qhzr1z_EtwWriteTransfer @ 0x14050BEB0 (McTemplateK0qhzr1z_EtwWriteTransfer.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x14050BF84 (McTemplateK0z_EtwWriteTransfer.c)
 *     McTemplateK0j_EtwWriteTransfer @ 0x14050C0D8 (McTemplateK0j_EtwWriteTransfer.c)
 *     McTemplateK0pqzzzzzzz_EtwWriteTransfer @ 0x14050C16C (McTemplateK0pqzzzzzzz_EtwWriteTransfer.c)
 *     McTemplateK0zzjzitd_EtwWriteTransfer @ 0x14050C420 (McTemplateK0zzjzitd_EtwWriteTransfer.c)
 *     McTemplateK0zd_EtwWriteTransfer @ 0x14050CB60 (McTemplateK0zd_EtwWriteTransfer.c)
 *     McTemplateK0zdq_EtwWriteTransfer @ 0x14050CC00 (McTemplateK0zdq_EtwWriteTransfer.c)
 *     McTemplateK0izzx_EtwWriteTransfer @ 0x14050CF48 (McTemplateK0izzx_EtwWriteTransfer.c)
 *     McTemplateK0d_EtwWriteTransfer @ 0x14050E2F0 (McTemplateK0d_EtwWriteTransfer.c)
 *     McTemplateK0dz_EtwWriteTransfer @ 0x14050E358 (McTemplateK0dz_EtwWriteTransfer.c)
 *     McTemplateK0jzt_EtwWriteTransfer @ 0x14050E408 (McTemplateK0jzt_EtwWriteTransfer.c)
 *     McTemplateK0zzt_EtwWriteTransfer @ 0x14050E4C8 (McTemplateK0zzt_EtwWriteTransfer.c)
 * Callees:
 *     EtwWriteEx @ 0x14020E0B0 (EtwWriteEx.c)
 */

NTSTATUS __fastcall McGenEventWrite_EtwWriteTransfer(
        REGHANDLE *a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *ActivityId,
        ULONG a4,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int16 *v5; // r10
  int v7; // r11d
  ULONG v8; // r9d

  v5 = (unsigned __int16 *)a1[1];
  if ( v5 )
  {
    UserData->Ptr = (ULONGLONG)v5;
    v7 = 2;
    v8 = *v5;
  }
  else
  {
    UserData->Ptr = 0LL;
    v7 = 0;
    v8 = 0;
  }
  UserData->Size = v8;
  UserData->Reserved = v7;
  return EtwWriteEx(*a1, a2, 0LL, 0, ActivityId, 0LL, a4, UserData);
}
