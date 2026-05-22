/*
 * XREFs of ?UpdateDeviceIdRemoteCache@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180128434
 * Callers:
 *     ?SendMaterializeProxy@BamoDockableDevicePrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x180127B60 (-SendMaterializeProxy@BamoDockableDevicePrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@P.c)
 *     ?UpdateDeviceIdRemoteCacheStatic@BamoDockableDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1801284F8 (-UpdateDeviceIdRemoteCacheStatic@BamoDockableDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x18003F3F8 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18006446C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

void __fastcall BamoImpl::BamoDockableDevicePrincipalImpl::UpdateDeviceIdRemoteCache(
        BamoImpl::BamoDockableDevicePrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  __int128 v2; // xmm0
  __int64 v3; // rdi
  unsigned int *v4; // rcx
  __int64 v5; // rbx
  struct IMessageCallSendHost *SendHost; // rax
  unsigned int v7; // eax
  unsigned int v8; // eax
  __int16 v9; // [rsp+20h] [rbp-48h]
  _QWORD v10[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v11; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 56LL) )
  {
    v2 = *((_OWORD *)this + 3);
    v3 = *((unsigned int *)this + 6);
    v4 = (unsigned int *)*((_QWORD *)a2 + 5);
    v11 = v2;
    v5 = v4[9];
    SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v4);
    v10[0] = v5;
    v10[1] = v3;
    v9 = 1;
    v7 = CoreUICallSend(SendHost, v10, 2LL, 21LL, v9, &unk_1801C01CA, (unsigned int)&v11);
    if ( (int)(v7 + 0x80000000) >= 0 && v7 != -2018375675 )
    {
      v8 = wil::verify_hresult<long>(v7);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        28936LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)v8);
      JUMPOUT(0x1801284EFLL);
    }
  }
}
