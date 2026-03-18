/*
 * XREFs of DpiReadPnpRegistryValue @ 0x1C01DCD70
 * Callers:
 *     DpiQueryAdapterRegistryInfo @ 0x1C015C760 (DpiQueryAdapterRegistryInfo.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C01D4AE8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 *     DpiFdoHandleStartDevice @ 0x1C01F6B40 (DpiFdoHandleStartDevice.c)
 *     DpiAddDevice @ 0x1C01F84B0 (DpiAddDevice.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01FECEC (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C020FEC0 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0211BD0 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 *     ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C0212F94 (-_ReadConfiguration@VIDPN_MGR@@AEAAJXZ.c)
 *     DpiFdoIsCompatibleWithHighResolutionBoot @ 0x1C021BD54 (DpiFdoIsCompatibleWithHighResolutionBoot.c)
 *     ?OemSpecifiedViewDist@@YAIQEAX@Z @ 0x1C02FA418 (-OemSpecifiedViewDist@@YAIQEAX@Z.c)
 *     ?OemSpecifiedViewDist@Win81@@YAIQEAX@Z @ 0x1C031654C (-OemSpecifiedViewDist@Win81@@YAIQEAX@Z.c)
 * Callees:
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     DpiOpenPnpRegistryKey @ 0x1C01DCED0 (DpiOpenPnpRegistryKey.c)
 */

__int64 __fastcall DpiReadPnpRegistryValue(__int64 a1, const WCHAR *a2, char *a3, unsigned int a4, unsigned int a5)
{
  _DWORD *PoolWithTag; // rdi
  int v9; // ebx
  NTSTATUS v10; // eax
  unsigned int v12; // ecx
  size_t v13; // r8
  __int64 v14; // rax
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-28h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+8h] BYREF
  ULONG Length; // [rsp+78h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, a2);
  Length = a4 + 16;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a4 + 16, 0x74727044u);
  if ( PoolWithTag )
  {
    v9 = DpiOpenPnpRegistryKey(a1, a5, 131097LL, &KeyHandle);
    if ( v9 >= 0 )
    {
      v10 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, PoolWithTag, Length, &Length);
      v9 = v10;
      if ( (int)(v10 + 0x80000000) < 0 || v10 == -2147483643 )
      {
        v12 = PoolWithTag[2];
        v13 = a4;
        if ( a4 > v12 )
          v13 = v12;
        memmove(a3, PoolWithTag + 3, v13);
        v14 = (unsigned int)PoolWithTag[2];
        if ( a4 > (unsigned int)v14 )
          memset(&a3[v14], 0, a4 - (unsigned int)v14);
        v9 = 0;
      }
      else
      {
        WdLogSingleEntry4(4LL, v10, (int)a5, 0LL, 0LL);
      }
    }
  }
  else
  {
    v9 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v9;
}
