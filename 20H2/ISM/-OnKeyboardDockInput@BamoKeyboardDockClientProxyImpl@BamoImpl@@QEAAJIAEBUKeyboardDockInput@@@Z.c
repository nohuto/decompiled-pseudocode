/*
 * XREFs of ?OnKeyboardDockInput@BamoKeyboardDockClientProxyImpl@BamoImpl@@QEAAJIAEBUKeyboardDockInput@@@Z @ 0x180128FEC
 * Callers:
 *     ?OnKeyboardDockInput@BamoKeyboardDockClientProxy@@UEAAJIAEBUKeyboardDockInput@@@Z @ 0x180128F80 (-OnKeyboardDockInput@BamoKeyboardDockClientProxy@@UEAAJIAEBUKeyboardDockInput@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180039020 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoKeyboardDockClientProxyImpl::OnKeyboardDockInput(
        BamoImpl::BamoKeyboardDockClientProxyImpl *this,
        int a2,
        const struct KeyboardDockInput *a3)
{
  char *v3; // rbx
  int v8; // eax
  unsigned int v9; // edi
  struct IMessageCallSendHost *v10; // rcx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int16 v14; // [rsp+20h] [rbp-60h]
  struct IMessageCallSendHost *v15[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v16; // [rsp+50h] [rbp-30h]
  __int128 v17; // [rsp+60h] [rbp-20h]
  __int128 v18; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  unsigned int v20; // [rsp+B0h] [rbp+30h] BYREF
  unsigned int v21; // [rsp+C8h] [rbp+48h] BYREF

  v3 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL) + 56LL) )
  {
    v8 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, v15, &v20, &v21);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = v15[0];
      if ( *((_BYTE *)this + 31) )
      {
        if ( v15[0] )
          v3 = (char *)v15[0] - 16;
        v3[72] = 1;
      }
      v11 = *(_OWORD *)a3;
      v12 = *((_OWORD *)a3 + 1);
      v15[0] = (struct IMessageCallSendHost *)v20;
      v15[1] = (struct IMessageCallSendHost *)v21;
      v16 = v11;
      v13 = *((_OWORD *)a3 + 2);
      v14 = 2;
      v17 = v12;
      v18 = v13;
      return CoreUICallSend(v10, v15, 2LL, 44LL, v14, &unk_1801BF245, a2);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA6A2,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA69B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
