/*
 * XREFs of ?UpdateEnabledRemoteCacheStatic@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18000A820
 * Callers:
 *     ?SetEnabled@BamoControllerNavigationManagerPrincipal@@UEAAX_N@Z @ 0x180006170 (-SetEnabled@BamoControllerNavigationManagerPrincipal@@UEAAX_N@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x18003F3F8 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18006446C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoControllerNavigationManagerPrincipalImpl::UpdateEnabledRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoControllerNavigationManagerPrincipalImpl *a2)
{
  unsigned int *v2; // rcx
  int v3; // esi
  __int64 v4; // rbx
  __int64 v5; // rdi
  struct IMessageCallSendHost *SendHost; // rax
  unsigned int v7; // eax
  unsigned int v9; // eax
  __int16 v10; // [rsp+20h] [rbp-38h]
  int v11; // [rsp+20h] [rbp-38h]
  _QWORD v12[2]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 32LL) + 56LL) )
  {
    v2 = (unsigned int *)*((_QWORD *)a1 + 5);
    v3 = *((unsigned __int8 *)a2 + 40);
    v4 = v2[9];
    v5 = *((unsigned int *)a2 + 6);
    SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v2);
    v12[0] = v4;
    v10 = 0;
    v12[1] = v5;
    v7 = CoreUICallSend(SendHost, v12, 2LL, 15LL, v10, &unk_1801C019D, v3);
    if ( (int)(v7 + 0x80000000) >= 0 && v7 != -2018375675 )
    {
      v9 = wil::verify_hresult<long>(v7);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x659A,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)v9,
        v11);
      JUMPOUT(0x18000A8E4LL);
    }
  }
  return 0LL;
}
