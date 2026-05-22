/*
 * XREFs of ?OnSystemButtonEvent@BamoSystemButtonEventControllerProxyImpl@BamoImpl@@QEAAJAEBUSystemButtonEventInfo@@@Z @ 0x18010260C
 * Callers:
 *     ?OnSystemButtonEvent@BamoSystemButtonEventControllerProxy@@UEAAJAEBUSystemButtonEventInfo@@@Z @ 0x1801025B0 (-OnSystemButtonEvent@BamoSystemButtonEventControllerProxy@@UEAAJAEBUSystemButtonEventInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180038DB0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoSystemButtonEventControllerProxyImpl::OnSystemButtonEvent(
        BamoImpl::BamoSystemButtonEventControllerProxyImpl *this,
        const struct SystemButtonEventInfo *a2)
{
  int v5; // eax
  unsigned int v6; // edi
  struct IMessageCallSendHost *v7; // rcx
  char *v8; // rax
  __int128 v9; // xmm0
  _QWORD v10[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v11; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v13; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+90h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v15; // [rsp+98h] [rbp+20h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL) + 56LL) )
  {
    v5 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v15, &v13, &v14);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v7 = v15;
      if ( *((_BYTE *)this + 31) )
      {
        v8 = (char *)v15 - 16;
        if ( !v15 )
          v8 = 0LL;
        v8[72] = 1;
      }
      v9 = *(_OWORD *)a2;
      v10[0] = v13;
      v10[1] = v14;
      v11 = v9;
      return CoreUICallSend(v7, v10, 2LL, 60LL, 0, &unk_1801C0298, (unsigned int)&v11);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC418,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)(unsigned int)v5);
      return v6;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC411,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
