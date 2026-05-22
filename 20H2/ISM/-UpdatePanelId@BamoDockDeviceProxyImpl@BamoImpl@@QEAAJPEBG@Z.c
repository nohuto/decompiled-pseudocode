/*
 * XREFs of ?UpdatePanelId@BamoDockDeviceProxyImpl@BamoImpl@@QEAAJPEBG@Z @ 0x1800EECCC
 * Callers:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDockDeviceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180043860 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDockDeviceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxy.c)
 *     ?Thunk_UpdatePanelId_55@?$IDockDeviceProxy_Receive@VBamoDockDeviceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800ECF40 (-Thunk_UpdatePanelId_55@-$IDockDeviceProxy_Receive@VBamoDockDeviceProxyImpl@BamoImpl@@@@SAJPEAXP.c)
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x18000BE8C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?CopyString@Util@BamoImpl@Microsoft@@YAJPEBGPEAPEAG@Z @ 0x1800E34AC (-CopyString@Util@BamoImpl@Microsoft@@YAJPEBGPEAPEAG@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1800EFD5C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-FreeProcessHeap@details@wil@@YAX0@ZU.c)
 */

__int64 __fastcall BamoImpl::BamoDockDeviceProxyImpl::UpdatePanelId(
        BamoImpl::BamoDockDeviceProxyImpl *this,
        Microsoft::BamoImpl::Util *a2,
        unsigned __int16 **a3,
        const char *a4)
{
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  __int64 v8; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v5 = Microsoft::BamoImpl::Util::CopyString(a2, (unsigned __int16 *)&v11, a3, a4);
  v6 = v5;
  if ( v5 >= 0 )
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void wil::details::FreeProcessHeap(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (char *)this + 32,
      v11);
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6FC1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v5);
  }
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      28556LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
      (Microsoft::BamoImpl::DropAndReacquireLock *)&v11,
      *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL));
    v7 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 56LL))((char *)this - 16);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        28562LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)(unsigned int)v7);
    v8 = v11;
    if ( v11 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(v11 + 128));
      *(_DWORD *)(v8 + 168) = GetCurrentThreadId();
    }
  }
  return 0LL;
}
