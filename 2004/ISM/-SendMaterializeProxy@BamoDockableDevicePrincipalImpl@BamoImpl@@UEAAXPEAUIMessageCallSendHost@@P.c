/*
 * XREFs of ?SendMaterializeProxy@BamoDockableDevicePrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801276A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateDeviceIdRemoteCache@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180127F74 (-UpdateDeviceIdRemoteCache@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Micr.c)
 *     ?UpdateInterfacePathRemoteCache@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180128218 (-UpdateInterfacePathRemoteCache@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@.c)
 *     ?UpdatePrimaryUsageIdRemoteCache@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801283E8 (-UpdatePrimaryUsageIdRemoteCache@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl.c)
 *     ?UpdatePrimaryUsagePageRemoteCache@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801284C8 (-UpdatePrimaryUsagePageRemoteCache@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubIm.c)
 */

void __fastcall BamoImpl::BamoDockableDevicePrincipalImpl::SendMaterializeProxy(
        BamoImpl::BamoDockableDevicePrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v3; // rsi
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  int v12; // [rsp+20h] [rbp-48h]
  int v13; // [rsp+30h] [rbp-38h]
  int v14; // [rsp+30h] [rbp-38h]
  __int64 v15; // [rsp+40h] [rbp-28h] BYREF
  __int64 v16; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = *((_QWORD *)a3 + 5);
  if ( *(_BYTE *)(v3 + 44) )
  {
    v7 = (__int64)a2 + 56;
    if ( !a2 )
      v7 = 72LL;
    *(_BYTE *)v7 = 1;
  }
  v13 = *((_DWORD *)this + 6);
  v15 = *(unsigned int *)(v3 + 36);
  v16 = *(unsigned int *)(v3 + 40);
  v8 = CoreUICallSend(a2, &v15, 2LL, 74LL, 15, &unk_1801BF1BA, v13);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      28797LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  BamoImpl::BamoDockableDevicePrincipalImpl::UpdateInterfacePathRemoteCache(this, a3);
  BamoImpl::BamoDockableDevicePrincipalImpl::UpdateDeviceIdRemoteCache(this, a3);
  BamoImpl::BamoDockableDevicePrincipalImpl::UpdatePrimaryUsagePageRemoteCache(this, a3);
  BamoImpl::BamoDockableDevicePrincipalImpl::UpdatePrimaryUsageIdRemoteCache(this, a3);
  v9 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 32LL))(a3);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      28817LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  if ( *(_BYTE *)(*((_QWORD *)a3 + 5) + 44LL) )
  {
    v10 = (__int64)a2 + 56;
    if ( !a2 )
      v10 = 72LL;
    *(_BYTE *)v10 = 1;
  }
  v14 = *((_DWORD *)this + 6);
  v15 = *(unsigned int *)(v3 + 36);
  v16 = *(unsigned int *)(v3 + 40);
  LOWORD(v12) = 55;
  v11 = CoreUICallSend(a2, &v15, 2LL, 74LL, v12, &unk_1801BF1BA, v14);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      28834LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v11);
    JUMPOUT(0x180127848LL);
  }
}
