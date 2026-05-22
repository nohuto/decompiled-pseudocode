/*
 * XREFs of ?RegisterClient@BamoControllerNavigationManagerProxyImpl@BamoImpl@@QEAAJPEAVBamoControllerNavigationClientPrincipal@@@Z @ 0x1800EAD8C
 * Callers:
 *     ?RegisterClient@BamoControllerNavigationManagerProxy@@UEAAJPEAVBamoControllerNavigationClientPrincipal@@@Z @ 0x1800EAD30 (-RegisterClient@BamoControllerNavigationManagerProxy@@UEAAJPEAVBamoControllerNavigationClientPri.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180038FA0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x18003906C (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 */

__int64 __fastcall BamoImpl::BamoControllerNavigationManagerProxyImpl::RegisterClient(
        struct Microsoft::BamoImpl::BaseBamoPeerImpl **this,
        struct BamoControllerNavigationClientPrincipal *a2)
{
  int v4; // esi
  int v5; // eax
  unsigned int v6; // edi
  struct IMessageCallSendHost *v7; // rcx
  char *v8; // rax
  _QWORD v9[5]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v11; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+80h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v13; // [rsp+88h] [rbp+20h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 3) + 32LL) + 56LL) )
  {
    if ( a2 )
      v4 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(this, a2);
    else
      v4 = 0;
    v5 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (Microsoft::BamoImpl::BamoProxyImpl *)this,
           &v13,
           &v11,
           &v12);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v7 = v13;
      if ( *((_BYTE *)this + 31) )
      {
        v8 = (char *)v13 - 16;
        if ( !v13 )
          v8 = 0LL;
        v8[72] = 1;
      }
      v9[0] = v11;
      v9[1] = v12;
      return CoreUICallSend(v7, v9, 2LL, 14LL, 0, &unk_1801BF1BA, v4);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x668D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)(unsigned int)v5);
      return v6;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6685,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
