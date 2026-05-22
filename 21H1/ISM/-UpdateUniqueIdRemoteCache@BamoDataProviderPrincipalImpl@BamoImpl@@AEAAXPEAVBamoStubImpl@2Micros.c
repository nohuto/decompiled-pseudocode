/*
 * XREFs of ?UpdateUniqueIdRemoteCache@BamoDataProviderPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180039388
 * Callers:
 *     ?SendMaterializeProxy@BamoDataProviderPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800391F0 (-SendMaterializeProxy@BamoDataProviderPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEA.c)
 *     ?UpdateUniqueIdRemoteCacheStatic@BamoDataProviderPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1801450E4 (-UpdateUniqueIdRemoteCacheStatic@BamoDataProviderPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Mi.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x18003F3F8 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18006446C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

void __fastcall BamoImpl::BamoDataProviderPrincipalImpl::UpdateUniqueIdRemoteCache(
        BamoImpl::BamoDataProviderPrincipalImpl *this,
        struct Microsoft::BamoImpl::BamoStubImpl *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  unsigned int *v4; // rcx
  __int64 v5; // rdi
  struct IMessageCallSendHost *SendHost; // rax
  unsigned int v7; // eax
  unsigned int v8; // eax
  __int16 v9; // [rsp+20h] [rbp-38h]
  int v10; // [rsp+20h] [rbp-38h]
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 56LL) )
  {
    v2 = *((_QWORD *)this + 5);
    v3 = *((unsigned int *)this + 6);
    v4 = (unsigned int *)*((_QWORD *)a2 + 5);
    v5 = v4[9];
    SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost((Microsoft::BamoImpl::BaseBamoPeerImpl *)v4);
    v13 = v2;
    v11[0] = v5;
    v9 = 2;
    v11[1] = v3;
    v7 = CoreUICallSend(SendHost, v11, 2LL, 1LL, v9, &unk_1801C1970, (unsigned int)&v13);
    if ( (int)(v7 + 0x80000000) >= 0 && v7 != -2018375675 )
    {
      v8 = wil::verify_hresult<long>(v7);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1EA1,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)v8,
        v10);
      JUMPOUT(0x180039449LL);
    }
  }
}
