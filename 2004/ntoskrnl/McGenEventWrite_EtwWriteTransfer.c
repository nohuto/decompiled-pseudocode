/*
 * XREFs of McGenEventWrite_EtwWriteTransfer @ 0x14036C65C
 * Callers:
 *     McTemplateK0zjdd_EtwWriteTransfer @ 0x14036ACF8 (McTemplateK0zjdd_EtwWriteTransfer.c)
 *     McTemplateK0zzjzzzdd_EtwWriteTransfer @ 0x14036C1F0 (McTemplateK0zzjzzzdd_EtwWriteTransfer.c)
 *     McTemplateK0zzjzzztzdzztdz_EtwWriteTransfer @ 0x14036C398 (McTemplateK0zzjzzztzdzztdz_EtwWriteTransfer.c)
 *     McTemplateK0jq_EtwWriteTransfer @ 0x1404EBDE0 (McTemplateK0jq_EtwWriteTransfer.c)
 *     McTemplateK0xxxqq_EtwWriteTransfer @ 0x1404EBE58 (McTemplateK0xxxqq_EtwWriteTransfer.c)
 *     McTemplateK0xxxqqqq_EtwWriteTransfer @ 0x1404EBF00 (McTemplateK0xxxqqqq_EtwWriteTransfer.c)
 *     McTemplateK0dzd_EtwWriteTransfer @ 0x140506D74 (McTemplateK0dzd_EtwWriteTransfer.c)
 *     McTemplateK0hzr0_EtwWriteTransfer @ 0x140507788 (McTemplateK0hzr0_EtwWriteTransfer.c)
 *     McTemplateK0hzr0qqhzr4_EtwWriteTransfer @ 0x140507810 (McTemplateK0hzr0qqhzr4_EtwWriteTransfer.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x140508400 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x140508464 (McTemplateK0pz_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140508514 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0qhzr1z_EtwWriteTransfer @ 0x140508580 (McTemplateK0qhzr1z_EtwWriteTransfer.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x140508654 (McTemplateK0z_EtwWriteTransfer.c)
 *     McTemplateK0j_EtwWriteTransfer @ 0x1405087A8 (McTemplateK0j_EtwWriteTransfer.c)
 *     McTemplateK0pqzzzzzzz_EtwWriteTransfer @ 0x14050883C (McTemplateK0pqzzzzzzz_EtwWriteTransfer.c)
 *     McTemplateK0zzjzitd_EtwWriteTransfer @ 0x140508AF0 (McTemplateK0zzjzitd_EtwWriteTransfer.c)
 *     McTemplateK0zd_EtwWriteTransfer @ 0x140509230 (McTemplateK0zd_EtwWriteTransfer.c)
 *     McTemplateK0zdq_EtwWriteTransfer @ 0x1405092D0 (McTemplateK0zdq_EtwWriteTransfer.c)
 *     McTemplateK0izzx_EtwWriteTransfer @ 0x140509618 (McTemplateK0izzx_EtwWriteTransfer.c)
 *     McTemplateK0d_EtwWriteTransfer @ 0x14050A9C0 (McTemplateK0d_EtwWriteTransfer.c)
 *     McTemplateK0dz_EtwWriteTransfer @ 0x14050AA28 (McTemplateK0dz_EtwWriteTransfer.c)
 *     McTemplateK0jzt_EtwWriteTransfer @ 0x14050AAD8 (McTemplateK0jzt_EtwWriteTransfer.c)
 *     McTemplateK0zzt_EtwWriteTransfer @ 0x14050AB98 (McTemplateK0zzt_EtwWriteTransfer.c)
 * Callees:
 *     EtwWriteEx @ 0x1402934F0 (EtwWriteEx.c)
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
