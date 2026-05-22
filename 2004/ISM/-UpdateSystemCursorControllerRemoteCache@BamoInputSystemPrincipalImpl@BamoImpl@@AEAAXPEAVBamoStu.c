/*
 * XREFs of ?UpdateSystemCursorControllerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18001CD38
 * Callers:
 *     ?UpdateSystemCursorControllerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1800F0420 (-UpdateSystemCursorControllerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBam.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x18003F458 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180063E7C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEAVBaseBamoPeer@53@@Z @ 0x1800734E0 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEA.c)
 */

void __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateSystemCursorControllerRemoteCache(
        BamoImpl::BamoInputSystemPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  unsigned int v2; // esi
  struct Microsoft::Bamo::BamoPrincipal *v5; // rcx
  unsigned int *v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rbx
  struct IMessageCallSendHost *SendHost; // rax
  unsigned int v10; // eax
  unsigned int v11; // eax
  __int16 v12; // [rsp+20h] [rbp-38h]
  int v13; // [rsp+20h] [rbp-38h]
  _QWORD v14[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = 0;
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 56LL) )
  {
    v5 = (struct Microsoft::Bamo::BamoPrincipal *)*((_QWORD *)this + 17);
    if ( v5 )
      v2 = Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
             v5,
             *(struct Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)a2 + 5) + 16LL));
    v6 = (unsigned int *)*((_QWORD *)a2 + 5);
    v7 = *((unsigned int *)this + 6);
    v8 = v6[9];
    SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v6);
    v14[0] = v8;
    v12 = 12;
    v14[1] = v7;
    v10 = CoreUICallSend(SendHost, v14, 2LL, 43LL, v12, &unk_1801BF1BA, v2);
    if ( (int)(v10 + 0x80000000) >= 0 && v10 != -2018375675 )
    {
      v11 = wil::verify_hresult<long>(v10);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xA069,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)v11,
        v13);
      JUMPOUT(0x18001CE1DLL);
    }
  }
}
