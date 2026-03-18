/*
 * XREFs of ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C00E3340
 * Callers:
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z @ 0x1C00E459C (-ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00E73D0 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C01176F0 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetColorDepthFromPickedWireFormat(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax

  v2 = (unsigned int)a1;
  switch ( (((unsigned int)a1 | (((unsigned int)a1 | (((unsigned int)a1 | ((unsigned int)a1 >> 6)) >> 6)) >> 6)) >> 2) & 0x3F )
  {
    case 1u:
      return 6LL;
    case 2u:
      return 8LL;
    case 4u:
      return 10LL;
    case 8u:
      return 12LL;
    case 0x10u:
      return 14LL;
    case 0x20u:
      return 16LL;
  }
  v4 = WdLogNewEntry5_WdError(a1, a2);
  *(_QWORD *)(v4 + 24) = v2;
  WdLogEvent5_WdError(v4);
  return 0LL;
}
