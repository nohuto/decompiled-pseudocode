/*
 * XREFs of ?Unregister@BamoDataProviderRegistrarProxyImpl@BamoImpl@@QEAAJPEAVBamoDataProviderPrincipal@@@Z @ 0x18014480C
 * Callers:
 *     ?Unregister@BamoDataProviderRegistrarProxy@@UEAAJPEAVBamoDataProviderPrincipal@@@Z @ 0x1801447B0 (-Unregister@BamoDataProviderRegistrarProxy@@UEAAJPEAVBamoDataProviderPrincipal@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180039020 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x1800390EC (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderRegistrarProxyImpl::Unregister(
        struct Microsoft::BamoImpl::BaseBamoPeerImpl **this,
        struct BamoDataProviderPrincipal *a2)
{
  char *v2; // rbx
  int v5; // ebp
  int v6; // eax
  unsigned int v7; // esi
  struct IMessageCallSendHost *v8; // rcx
  _QWORD v9[5]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v11; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+80h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v13; // [rsp+88h] [rbp+20h] BYREF

  v2 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 3) + 32LL) + 56LL) )
  {
    if ( a2 )
      v5 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(this, a2);
    else
      v5 = 0;
    v6 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (Microsoft::BamoImpl::BamoProxyImpl *)this,
           &v13,
           &v11,
           &v12);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v8 = v13;
      if ( *((_BYTE *)this + 31) )
      {
        if ( v13 )
          v2 = (char *)v13 - 16;
        v2[72] = 1;
      }
      v9[0] = v11;
      v9[1] = v12;
      return CoreUICallSend(v8, v9, 2LL, 2LL, 1, &unk_1801C097D, v5);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22D7,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22CF,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
