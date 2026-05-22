/*
 * XREFs of ?UpdateDisplayOcclusionSupportedRemoteCache@BamoDockDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801280A8
 * Callers:
 *     ?SendMaterializeProxy@BamoDockDevicePrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x180127460 (-SendMaterializeProxy@BamoDockDevicePrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVB.c)
 *     ?UpdateDisplayOcclusionSupportedRemoteCacheStatic@BamoDockDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180128168 (-UpdateDisplayOcclusionSupportedRemoteCacheStatic@BamoDockDevicePrincipalImpl@BamoImpl@@CAJPEAVB.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x18003F3C8 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180063DBC (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

void __fastcall BamoImpl::BamoDockDevicePrincipalImpl::UpdateDisplayOcclusionSupportedRemoteCache(
        BamoImpl::BamoDockDevicePrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  int v2; // esi
  __int64 v3; // rdi
  unsigned int *v4; // rcx
  __int64 v5; // rbx
  struct IMessageCallSendHost *SendHost; // rax
  unsigned int v7; // eax
  unsigned int v8; // eax
  __int16 v9; // [rsp+20h] [rbp-38h]
  _QWORD v10[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 56LL) )
  {
    v2 = *((unsigned __int8 *)this + 48);
    v3 = *((unsigned int *)this + 6);
    v4 = (unsigned int *)*((_QWORD *)a2 + 5);
    v5 = v4[9];
    SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v4);
    v10[0] = v5;
    v9 = 1;
    v10[1] = v3;
    v7 = CoreUICallSend(SendHost, v10, 2LL, 20LL, v9, &unk_1801BF1AD, v2);
    if ( (int)(v7 + 0x80000000) >= 0 && v7 != -2018375675 )
    {
      v8 = wil::verify_hresult<long>(v7);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        28285LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)v8);
      JUMPOUT(0x180128161LL);
    }
  }
}
