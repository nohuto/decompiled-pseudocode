/*
 * XREFs of ?GetDeviceInterfacePath@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAPEB_WXZ @ 0x18015BD80
 * Callers:
 *     ?GetDeviceInterfacePath@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAPEB_WXZ @ 0x18004C9B0 (-GetDeviceInterfacePath@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAPEB_WXZ.c)
 * Callees:
 *     <none>
 */

PCWSTR __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetDeviceInterfacePath(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this)
{
  return WindowsGetStringRawBuffer(*(HSTRING *)(*((_QWORD *)this + 11) + 32LL), 0LL);
}
