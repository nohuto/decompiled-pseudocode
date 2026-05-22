/*
 * XREFs of ?GetConstantsForInputType@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@QEAAJW4InputType@@PEAVBamoAsyncResult_string_Principal@@@Z @ 0x18010835C
 * Callers:
 *     ?GetConstantsForInputType@BamoMPCConstantManagerClientProxy@@UEAAJW4InputType@@PEAVBamoAsyncResult_string_Principal@@@Z @ 0x1801082F0 (-GetConstantsForInputType@BamoMPCConstantManagerClientProxy@@UEAAJW4InputType@@PEAVBamoAsyncResu.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180038F40 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x18003900C (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 */

__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientProxyImpl::GetConstantsForInputType(
        __int64 a1,
        int a2,
        struct Microsoft::Bamo::BamoPrincipal *a3)
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
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL) + 56LL) )
  {
    if ( a3 )
      Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteReference(
        (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)a1,
        a3);
    v7 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (Microsoft::BamoImpl::BamoProxyImpl *)a1,
           v11,
           &v13,
           &v14);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = v11[0];
      if ( *(_BYTE *)(a1 + 31) )
      {
        if ( v11[0] )
          v3 = (char *)v11[0] - 16;
        v3[72] = 1;
      }
      v11[0] = (struct IMessageCallSendHost *)v13;
      v11[1] = (struct IMessageCallSendHost *)v14;
      v10 = 5;
      return CoreUICallSend(v9, v11, 2LL, 1LL, v10, &unk_1801C28A5, a2);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22A6,
        (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMa"
                 "nagerBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v7);
      return v8;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x229E,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
