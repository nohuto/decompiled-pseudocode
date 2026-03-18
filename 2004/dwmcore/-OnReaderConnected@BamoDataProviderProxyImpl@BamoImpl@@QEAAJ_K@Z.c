/*
 * XREFs of ?OnReaderConnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_K@Z @ 0x180182D90
 * Callers:
 *     ?OnReaderConnected@BamoDataProviderProxy@@UEAAJ_K@Z @ 0x180182D40 (-OnReaderConnected@BamoDataProviderProxy@@UEAAJ_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180181DF0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderProxyImpl::OnReaderConnected(BamoImpl::BamoDataProviderProxyImpl *this)
{
  int v3; // eax
  unsigned int v4; // edi
  struct IMessageCallSendHost *v5; // rcx
  char *v6; // rax
  _QWORD v7[5]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v9; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+80h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v11; // [rsp+88h] [rbp+20h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL) + 56LL) )
  {
    v3 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v11, &v9, &v10);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v5 = v11;
      if ( *((_BYTE *)this + 31) )
      {
        v6 = (char *)v11 - 16;
        if ( !v11 )
          v6 = 0LL;
        v6[72] = 1;
      }
      v7[0] = v9;
      v7[1] = v10;
      return CoreUICallSend(
               v5,
               v7,
               2LL,
               0LL,
               0,
               &Microsoft::CoreUI::MessageCall::dataprovider_g_parameters_mC$gak3dNtwldfQAUjQi8$oQItA_BamoGroup$eddace5b);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FA8,
        (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v3);
      return v4;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FA1,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
