/*
 * XREFs of NdisIMVBusDeviceAdd @ 0x1C00669C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0015380 (WPP_RECORDER_SF_qqd.c)
 *     ?ndisIMVBusIsValidInput@@YAEPEAXPEAU_NDIS_VBUS_DEVICE_CHARACTERISTICS@@@Z @ 0x1C00665F4 (-ndisIMVBusIsValidInput@@YAEPEAXPEAU_NDIS_VBUS_DEVICE_CHARACTERISTICS@@@Z.c)
 *     ?ndisVBusVirtMiniAdd@@YAJPEBU_UNICODE_STRING@@00@Z @ 0x1C00ABFF0 (-ndisVBusVirtMiniAdd@@YAJPEBU_UNICODE_STRING@@00@Z.c)
 */

__int64 __fastcall NdisIMVBusDeviceAdd(_BYTE *a1, __int64 a2)
{
  unsigned int v4; // edi
  char v6[4]; // [rsp+38h] [rbp-10h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x26u,
      &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
      (char)a1,
      a2);
  if ( ndisIMVBusIsValidInput(a1, (struct _NDIS_VBUS_DEVICE_CHARACTERISTICS *)a2) )
    v4 = ndisVBusVirtMiniAdd(
           (const struct _UNICODE_STRING *)(a2 + 8),
           (const struct _UNICODE_STRING *)(a2 + 24),
           (const struct _UNICODE_STRING *)(a2 + 72));
  else
    v4 = -1073741811;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v6 = v4;
    WPP_RECORDER_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x27u,
      &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
      (char)a1,
      a2,
      *(_DWORD *)v6);
  }
  return v4;
}
