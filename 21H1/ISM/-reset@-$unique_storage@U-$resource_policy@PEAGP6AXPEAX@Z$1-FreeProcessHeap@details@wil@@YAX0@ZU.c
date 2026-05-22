/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1800F02AC
 * Callers:
 *     ?CopyString@Util@BamoImpl@Microsoft@@YAJPEBGPEAPEAG@Z @ 0x1800E39FC (-CopyString@Util@BamoImpl@Microsoft@@YAJPEBGPEAPEAG@Z.c)
 *     ?UpdateInterfacePath@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJPEBG@Z @ 0x1800EED6C (-UpdateInterfacePath@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJPEBG@Z.c)
 *     ?UpdatePanelId@BamoDockDeviceProxyImpl@BamoImpl@@QEAAJPEBG@Z @ 0x1800EF21C (-UpdatePanelId@BamoDockDeviceProxyImpl@BamoImpl@@QEAAJPEBG@Z.c)
 *     ?SetInterfacePath@BamoDockableDevicePrincipalImpl@BamoImpl@@QEAAJPEBG@Z @ 0x180127FA8 (-SetInterfacePath@BamoDockableDevicePrincipalImpl@BamoImpl@@QEAAJPEBG@Z.c)
 *     ?SetPanelId@BamoDockDevicePrincipalImpl@BamoImpl@@QEAAJPEBG@Z @ 0x1801280F8 (-SetPanelId@BamoDockDevicePrincipalImpl@BamoImpl@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x18003A300 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void wil::details::FreeProcessHeap(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        wil::details **a1,
        wil::details *a2)
{
  wil::details *v2; // rsi
  DWORD LastError; // ebx
  void *v6; // rdx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    wil::details::FreeProcessHeap(v2, v6);
    SetLastError(LastError);
  }
  *a1 = a2;
}
