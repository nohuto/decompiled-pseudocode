/*
 * XREFs of ?ParametersChanged@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@QEAAJ_KAEBUCursorParametersInfo@@@Z @ 0x1800E9F7C
 * Callers:
 *     ?ParametersChanged@BamoSystemCursorControllerClientProxy@@UEAAJ_KAEBUCursorParametersInfo@@@Z @ 0x1800E9F10 (-ParametersChanged@BamoSystemCursorControllerClientProxy@@UEAAJ_KAEBUCursorParametersInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180038DB0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoSystemCursorControllerClientProxyImpl::ParametersChanged(
        BamoImpl::BamoSystemCursorControllerClientProxyImpl *this,
        int a2,
        const struct CursorParametersInfo *a3)
{
  char *v3; // rbx
  int v8; // eax
  unsigned int v9; // edi
  struct IMessageCallSendHost *v10; // rcx
  __int16 v11; // [rsp+20h] [rbp-58h]
  struct IMessageCallSendHost *v12; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v13[3]; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v15; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v16; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL) + 56LL) )
  {
    v8 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v12, &v15, &v16);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = v12;
      if ( *((_BYTE *)this + 31) )
      {
        if ( v12 )
          v3 = (char *)v12 - 16;
        v3[72] = 1;
      }
      LODWORD(v12) = *(_DWORD *)a3;
      v13[0] = v15;
      v13[1] = v16;
      v11 = 3;
      return CoreUICallSend(v10, v13, 2LL, 64LL, v11, &unk_1801C02AB, a2);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC989,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC982,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
