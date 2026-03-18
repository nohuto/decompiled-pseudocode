/*
 * XREFs of ?DisplayID_IsValidVersion2@@YA_NPEBUDisplayIDObj@@@Z @ 0x1C0071FD0
 * Callers:
 *     ?GetParseResult@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AW4MonitorDescriptorParseResult@2@XZ @ 0x1C03BB180 (-GetParseResult@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA-AW4MonitorDescriptorParseResult@2@XZ.c)
 * Callees:
 *     ?DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK@@YAJPEBUDisplayIDObj@@AEAPEBU_DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK@@@Z @ 0x1C0071E40 (-DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK@@YAJPEBUDisplayIDObj@@AEAPEBU_DISPLAYID_PRODUCT_IDEN.c)
 *     ?DisplayID_GetBlock@@YAJAEBUDisplayIDObj@@W4_DISPLAYID_DATA_BLOCK_TYPE@@AEAPEBU_DISPLAYID_BLOCK_HEADER@@@Z @ 0x1C00726F4 (-DisplayID_GetBlock@@YAJAEBUDisplayIDObj@@W4_DISPLAYID_DATA_BLOCK_TYPE@@AEAPEBU_DISPLAYID_BLOCK_.c)
 */

bool __fastcall DisplayID_IsValidVersion2(const struct DisplayIDObj *a1)
{
  struct _DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK *v3; // [rsp+30h] [rbp+8h] BYREF

  return a1
      && *((_DWORD *)a1 + 5)
      && *((_BYTE *)a1 + 16)
      && (**(_BYTE **)a1 & 0xF0) == 0x20
      && (int)DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK(a1, &v3) >= 0
      && (int)DisplayID_GetBlock(a1, 34LL, &v3) >= 0
      && (int)DisplayID_GetBlock(a1, 33LL, &v3) >= 0;
}
