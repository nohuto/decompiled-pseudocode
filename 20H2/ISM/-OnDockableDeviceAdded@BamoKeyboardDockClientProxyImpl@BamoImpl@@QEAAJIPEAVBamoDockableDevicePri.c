/*
 * XREFs of ?OnDockableDeviceAdded@BamoKeyboardDockClientProxyImpl@BamoImpl@@QEAAJIPEAVBamoDockableDevicePrincipal@@@Z @ 0x180128BAC
 * Callers:
 *     ?OnDockableDeviceAdded@BamoKeyboardDockClientProxy@@UEAAJIPEAVBamoDockableDevicePrincipal@@@Z @ 0x180128B40 (-OnDockableDeviceAdded@BamoKeyboardDockClientProxy@@UEAAJIPEAVBamoDockableDevicePrincipal@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180039020 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x1800390EC (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 */

__int64 __fastcall BamoImpl::BamoKeyboardDockClientProxyImpl::OnDockableDeviceAdded(
        struct Microsoft::BamoImpl::BaseBamoPeerImpl **this,
        int a2,
        struct BamoDockableDevicePrincipal *a3)
{
  char *v3; // rbx
  int v7; // eax
  unsigned int v8; // esi
  struct IMessageCallSendHost *v9; // rcx
  __int16 v10; // [rsp+20h] [rbp-48h]
  struct IMessageCallSendHost *v11[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v13; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 3) + 32LL) + 56LL) )
  {
    if ( a3 )
      Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(this, a3);
    v7 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (Microsoft::BamoImpl::BamoProxyImpl *)this,
           v11,
           &v13,
           &v14);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = v11[0];
      if ( *((_BYTE *)this + 31) )
      {
        if ( v11[0] )
          v3 = (char *)v11[0] - 16;
        v3[72] = 1;
      }
      v11[0] = (struct IMessageCallSendHost *)v13;
      v11[1] = (struct IMessageCallSendHost *)v14;
      v10 = 3;
      return CoreUICallSend(v9, v11, 2LL, 44LL, v10, &unk_1801BF210, a2);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA6BD,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)(unsigned int)v7);
      return v8;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA6B5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
