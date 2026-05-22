/*
 * XREFs of ?OnInputProviderChanged@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJAEBULegacyDeviceInfo@@I@Z @ 0x180109B6C
 * Callers:
 *     ?OnInputProviderChanged@BamoMPCManagerClientProxy@@UEAAJAEBULegacyDeviceInfo@@I@Z @ 0x180109B00 (-OnInputProviderChanged@BamoMPCManagerClientProxy@@UEAAJAEBULegacyDeviceInfo@@I@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180038DB0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     memcpy_0 @ 0x18004B25B (memcpy_0.c)
 */

__int64 __fastcall BamoImpl::BamoMPCManagerClientProxyImpl::OnInputProviderChanged(
        BamoImpl::BamoMPCManagerClientProxyImpl *this,
        const struct LegacyDeviceInfo *a2)
{
  char *v2; // rbx
  int v6; // eax
  unsigned int v7; // edi
  struct IMessageCallSendHost *v8; // rdi
  __int16 v9; // [rsp+20h] [rbp-668h]
  struct IMessageCallSendHost *v10[2]; // [rsp+40h] [rbp-648h] BYREF
  _BYTE v11[1592]; // [rsp+50h] [rbp-638h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+688h] [rbp+0h]
  unsigned int v13; // [rsp+690h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+6A8h] [rbp+20h] BYREF

  v2 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL) + 56LL) )
  {
    v6 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, v10, &v13, &v14);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v8 = v10[0];
      if ( *((_BYTE *)this + 31) )
      {
        if ( v10[0] )
          v2 = (char *)v10[0] - 16;
        v2[72] = 1;
      }
      memcpy_0(v11, a2, 0x60CuLL);
      v10[0] = (struct IMessageCallSendHost *)v13;
      v10[1] = (struct IMessageCallSendHost *)v14;
      v9 = 1;
      return CoreUICallSend(v8, v10, 2LL, 5LL, v9, &unk_1801C2973, (unsigned int)v11);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2999,
        (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMa"
                 "nagerBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2992,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
