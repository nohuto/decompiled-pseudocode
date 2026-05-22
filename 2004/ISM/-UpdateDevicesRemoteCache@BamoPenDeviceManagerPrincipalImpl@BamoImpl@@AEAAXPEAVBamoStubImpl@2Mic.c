/*
 * XREFs of ?UpdateDevicesRemoteCache@BamoPenDeviceManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801308A0
 * Callers:
 *     ?SendMaterializeProxy@BamoPenDeviceManagerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x180130600 (-SendMaterializeProxy@BamoPenDeviceManagerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@.c)
 *     ?UpdateDevicesRemoteCacheStatic@BamoPenDeviceManagerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180130998 (-UpdateDevicesRemoteCacheStatic@BamoPenDeviceManagerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x18003F458 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180063E7C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEAVBaseBamoPeer@53@@Z @ 0x1800734E0 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEA.c)
 */

void __fastcall BamoImpl::BamoPenDeviceManagerPrincipalImpl::UpdateDevicesRemoteCache(
        BamoImpl::BamoPenDeviceManagerPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  struct Microsoft::Bamo::BamoPrincipal *v4; // rcx
  int v5; // esi
  unsigned int *v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rbx
  struct IMessageCallSendHost *SendHost; // rax
  unsigned int v10; // eax
  unsigned int v11; // eax
  _QWORD v12[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 56LL) )
  {
    v4 = (struct Microsoft::Bamo::BamoPrincipal *)*((_QWORD *)this + 5);
    if ( v4 )
      v5 = Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
             v4,
             *(struct Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)a2 + 5) + 16LL));
    else
      v5 = 0;
    v6 = (unsigned int *)*((_QWORD *)a2 + 5);
    v7 = *((unsigned int *)this + 6);
    v8 = v6[9];
    SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v6);
    v12[0] = v8;
    v12[1] = v7;
    v10 = CoreUICallSend(SendHost, v12, 2LL, 51LL, 0, &unk_1801BF1BA, v5);
    if ( (int)(v10 + 0x80000000) >= 0 && v10 != -2018375675 )
    {
      v11 = wil::verify_hresult<long>(v10);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        45399LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)v11);
      JUMPOUT(0x180130990LL);
    }
  }
}
