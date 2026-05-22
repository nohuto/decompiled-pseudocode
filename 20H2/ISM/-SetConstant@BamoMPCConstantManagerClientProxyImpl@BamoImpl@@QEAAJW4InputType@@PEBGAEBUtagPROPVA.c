/*
 * XREFs of ?SetConstant@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@QEAAJW4InputType@@PEBGAEBUtagPROPVARIANT@@PEAVBamoAsyncHRESULTPrincipal@@@Z @ 0x18010B074
 * Callers:
 *     ?SetConstant@BamoMPCConstantManagerClientProxy@@UEAAJW4InputType@@PEBGAEBUtagPROPVARIANT@@PEAVBamoAsyncHRESULTPrincipal@@@Z @ 0x18010AFF0 (-SetConstant@BamoMPCConstantManagerClientProxy@@UEAAJW4InputType@@PEBGAEBUtagPROPVARIANT@@PEAVBa.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180039020 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x1800390EC (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 */

__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientProxyImpl::SetConstant(
        __int64 a1,
        int a2,
        __int64 a3,
        __int128 *a4,
        struct Microsoft::Bamo::BamoPrincipal *a5)
{
  int v9; // eax
  unsigned int v10; // edi
  struct IMessageCallSendHost *v11; // rcx
  char *v12; // rax
  __int128 v13; // xmm0
  __int64 v14; // xmm1_8
  unsigned int v15; // [rsp+58h] [rbp-11h] BYREF
  struct IMessageCallSendHost *v16[3]; // [rsp+60h] [rbp-9h] BYREF
  __int128 v17; // [rsp+78h] [rbp+Fh]
  __int64 v18; // [rsp+88h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+57h]
  unsigned int v20; // [rsp+C8h] [rbp+5Fh] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL) + 56LL) )
  {
    if ( a5 )
      Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
        (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)a1,
        a5);
    v9 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (Microsoft::BamoImpl::BamoProxyImpl *)a1,
           v16,
           &v20,
           &v15);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = v16[0];
      if ( *(_BYTE *)(a1 + 31) )
      {
        v12 = (char *)v16[0] - 16;
        if ( !v16[0] )
          v12 = 0LL;
        v12[72] = 1;
      }
      v13 = *a4;
      v14 = *((_QWORD *)a4 + 2);
      v16[0] = (struct IMessageCallSendHost *)v20;
      v16[1] = (struct IMessageCallSendHost *)v15;
      v17 = v13;
      v18 = v14;
      return CoreUICallSend(v11, v16, 2LL, 1LL, 0, &unk_1801C18B8, a2);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x221E,
        (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMa"
                 "nagerBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v9);
      return v10;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2216,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
