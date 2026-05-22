/*
 * XREFs of ?ToggleDetected@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJAEBUPoint@Foundation@Windows@@@Z @ 0x180100A0C
 * Callers:
 *     ?ToggleDetected@BamoMagnifierControllerProxy@@UEAAJAEBUPoint@Foundation@Windows@@@Z @ 0x1801009B0 (-ToggleDetected@BamoMagnifierControllerProxy@@UEAAJAEBUPoint@Foundation@Windows@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180039020 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoMagnifierControllerProxyImpl::ToggleDetected(
        BamoImpl::BamoMagnifierControllerProxyImpl *this,
        struct IMessageCallSendHost **a2)
{
  int v5; // eax
  unsigned int v6; // edi
  struct IMessageCallSendHost *v7; // rcx
  char *v8; // rax
  struct IMessageCallSendHost *v9; // xmm0_8
  _QWORD v10[5]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v12; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+80h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v14; // [rsp+88h] [rbp+20h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL) + 56LL) )
  {
    v5 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v14, &v12, &v13);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v7 = v14;
      if ( *((_BYTE *)this + 31) )
      {
        v8 = (char *)v14 - 16;
        if ( !v14 )
          v8 = 0LL;
        v8[72] = 1;
      }
      v9 = *a2;
      v10[0] = v12;
      v10[1] = v13;
      v14 = v9;
      return CoreUICallSend(v7, v10, 2LL, 48LL, 0, &unk_1801BF272, (unsigned int)&v14);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xADB2,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)(unsigned int)v5);
      return v6;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xADAB,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
