/*
 * XREFs of ?_ReadOneBlockMonitorDescriptorFromRegistry@EdidMonitorDescriptor@DxgMonitor@@CAJPEAXIAEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@Z @ 0x1C03B9944
 * Callers:
 *     ?LoadDescriptorOverridesFromRegistry@EdidMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x1C020ADC0 (-LoadDescriptorOverridesFromRegistry@EdidMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0013120 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??1?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x1C00275E0 (--1-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@DxgMon.c)
 *     ?DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@AEAV?$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U?$byte_array_deleter@U_KEY_VALUE_PARTIAL_INFORMATION@@@DxgMonitor@@@wistd@@@Z @ 0x1C0027F88 (-DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@AEAV-$unique_ptr@U_KEY_VALUE_PARTIAL.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::_ReadOneBlockMonitorDescriptorFromRegistry(
        HANDLE KeyHandle,
        unsigned int a2,
        void ***a3)
{
  char *v3; // rbx
  __int64 v4; // rbp
  void **v7; // rdi
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdi
  void **v15; // rbp
  char *v17; // [rsp+20h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-50h] BYREF
  WCHAR SourceString; // [rsp+38h] [rbp-40h] BYREF

  v3 = 0LL;
  v4 = a2;
  v17 = 0LL;
  DestinationString = 0LL;
  if ( !KeyHandle )
    WdLogSingleEntry0(1LL);
  v7 = *a3;
  *a3 = 0LL;
  if ( v7 )
  {
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v7);
    operator delete(v7);
  }
  v8 = RtlStringCbPrintfW(
         &SourceString,
         8uLL,
         L"%d",
         (unsigned int)v4,
         v17,
         *(_QWORD *)&DestinationString.Length,
         DestinationString.Buffer);
  v9 = v8;
  if ( v8 < 0 )
    goto LABEL_6;
  RtlInitUnicodeString(&DestinationString, &SourceString);
  v11 = DxgkRetrieveValueFromRegistry(KeyHandle, &DestinationString, (void **)&v17, v10);
  LODWORD(v9) = v11;
  if ( v11 >= 0 )
  {
    v3 = v17;
    if ( *((_DWORD *)v17 + 1) == 3 && *((_DWORD *)v17 + 2) == 128 )
    {
      v13 = operator new[](0x98uLL, 0x4D677844u, 256LL, v12);
      v14 = v13;
      if ( !v13 )
      {
        v9 = -1073741801LL;
LABEL_6:
        WdLogSingleEntry1(2LL, v9);
        goto LABEL_17;
      }
      memset((void *)(v13 + 24), 0, 0x80uLL);
      *(_QWORD *)v14 = 0LL;
      *(_DWORD *)(v14 + 8) = 0;
      *(_DWORD *)(v14 + 12) = 0;
      *(_QWORD *)(v14 + 16) = 128LL;
      *(_OWORD *)(v14 + 24) = *(_OWORD *)(v3 + 12);
      *(_OWORD *)(v14 + 40) = *(_OWORD *)(v3 + 28);
      *(_OWORD *)(v14 + 56) = *(_OWORD *)(v3 + 44);
      *(_OWORD *)(v14 + 72) = *(_OWORD *)(v3 + 60);
      *(_OWORD *)(v14 + 88) = *(_OWORD *)(v3 + 76);
      *(_OWORD *)(v14 + 104) = *(_OWORD *)(v3 + 92);
      *(_OWORD *)(v14 + 120) = *(_OWORD *)(v3 + 108);
      *(_OWORD *)(v14 + 136) = *(_OWORD *)(v3 + 124);
      *(_DWORD *)(v14 + 8) = 3;
      *(_DWORD *)(v14 + 12) = (_DWORD)v4 != 0 ? 255 : 1;
      v15 = *a3;
      *a3 = (void **)v14;
      if ( v15 )
      {
        wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v15);
        operator delete(v15);
      }
      LODWORD(v9) = 0;
    }
    else
    {
      WdLogSingleEntry1(3LL, v4);
      LODWORD(v9) = -1071841279;
    }
  }
  else
  {
    WdLogSingleEntry1(7LL, v11);
    v3 = v17;
  }
LABEL_17:
  if ( v3 )
    operator delete[](v3);
  return (unsigned int)v9;
}
