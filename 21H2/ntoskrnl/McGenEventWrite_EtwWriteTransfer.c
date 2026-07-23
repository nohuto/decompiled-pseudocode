/*
 * XREFs of McGenEventWrite_EtwWriteTransfer @ 0x14036EFF4
 * Callers:
 *     McTemplateK0zjdd_EtwWriteTransfer @ 0x14036D4B8 (McTemplateK0zjdd_EtwWriteTransfer.c)
 *     McTemplateK0zzjzzzdd_EtwWriteTransfer @ 0x14036EB88 (McTemplateK0zzjzzzdd_EtwWriteTransfer.c)
 *     McTemplateK0zzjzzztzdzztdz_EtwWriteTransfer @ 0x14036ED30 (McTemplateK0zzjzzztzdzztdz_EtwWriteTransfer.c)
 *     McTemplateK0jq_EtwWriteTransfer @ 0x1404F1190 (McTemplateK0jq_EtwWriteTransfer.c)
 *     McTemplateK0xxxqq_EtwWriteTransfer @ 0x1404F1208 (McTemplateK0xxxqq_EtwWriteTransfer.c)
 *     McTemplateK0xxxqqqq_EtwWriteTransfer @ 0x1404F12B0 (McTemplateK0xxxqqqq_EtwWriteTransfer.c)
 *     McTemplateK0dzd_EtwWriteTransfer @ 0x14050C414 (McTemplateK0dzd_EtwWriteTransfer.c)
 *     McTemplateK0hzr0_EtwWriteTransfer @ 0x14050CE28 (McTemplateK0hzr0_EtwWriteTransfer.c)
 *     McTemplateK0hzr0qqhzr4_EtwWriteTransfer @ 0x14050CEB0 (McTemplateK0hzr0qqhzr4_EtwWriteTransfer.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x14050DAA0 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x14050DB04 (McTemplateK0pz_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14050DBB4 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0qhzr1z_EtwWriteTransfer @ 0x14050DC20 (McTemplateK0qhzr1z_EtwWriteTransfer.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x14050DCF4 (McTemplateK0z_EtwWriteTransfer.c)
 *     McTemplateK0j_EtwWriteTransfer @ 0x14050DE48 (McTemplateK0j_EtwWriteTransfer.c)
 *     McTemplateK0pqzzzzzzz_EtwWriteTransfer @ 0x14050DEDC (McTemplateK0pqzzzzzzz_EtwWriteTransfer.c)
 *     McTemplateK0zzjzitd_EtwWriteTransfer @ 0x14050E190 (McTemplateK0zzjzitd_EtwWriteTransfer.c)
 *     McTemplateK0zd_EtwWriteTransfer @ 0x14050E8D0 (McTemplateK0zd_EtwWriteTransfer.c)
 *     McTemplateK0zdq_EtwWriteTransfer @ 0x14050E970 (McTemplateK0zdq_EtwWriteTransfer.c)
 *     McTemplateK0izzx_EtwWriteTransfer @ 0x14050ECB8 (McTemplateK0izzx_EtwWriteTransfer.c)
 *     McTemplateK0d_EtwWriteTransfer @ 0x140510060 (McTemplateK0d_EtwWriteTransfer.c)
 *     McTemplateK0dz_EtwWriteTransfer @ 0x1405100C8 (McTemplateK0dz_EtwWriteTransfer.c)
 *     McTemplateK0jzt_EtwWriteTransfer @ 0x140510178 (McTemplateK0jzt_EtwWriteTransfer.c)
 *     McTemplateK0zzt_EtwWriteTransfer @ 0x140510238 (McTemplateK0zzt_EtwWriteTransfer.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
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
