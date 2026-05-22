/*
 * XREFs of ?SetResult@BamoAsyncResult_PROPVARIANT_ProxyImpl@BamoImpl@@QEAAJAEBUtagPROPVARIANT@@@Z @ 0x18010BC1C
 * Callers:
 *     ?SetResult@BamoAsyncResult_PROPVARIANT_Proxy@@UEAAJAEBUtagPROPVARIANT@@@Z @ 0x18010BBC0 (-SetResult@BamoAsyncResult_PROPVARIANT_Proxy@@UEAAJAEBUtagPROPVARIANT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180038FA0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoAsyncResult_PROPVARIANT_ProxyImpl::SetResult(
        BamoImpl::BamoAsyncResult_PROPVARIANT_ProxyImpl *this,
        const struct tagPROPVARIANT *a2)
{
  int v5; // eax
  unsigned int v6; // edi
  struct IMessageCallSendHost *v7; // rcx
  char *v8; // rax
  __int128 v9; // xmm0
  BYTE *pData; // xmm1_8
  _QWORD v11[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v12; // [rsp+50h] [rbp-20h] BYREF
  BYTE *v13; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  unsigned int v15; // [rsp+A0h] [rbp+30h] BYREF
  unsigned int v16; // [rsp+B0h] [rbp+40h] BYREF
  struct IMessageCallSendHost *v17; // [rsp+B8h] [rbp+48h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL) + 56LL) )
  {
    v5 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v17, &v15, &v16);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v7 = v17;
      if ( *((_BYTE *)this + 31) )
      {
        v8 = (char *)v17 - 16;
        if ( !v17 )
          v8 = 0LL;
        v8[72] = 1;
      }
      v9 = *(_OWORD *)&a2->vt;
      v11[0] = v15;
      pData = a2->bstrblobVal.pData;
      v11[1] = v16;
      v12 = v9;
      v13 = pData;
      return CoreUICallSend(
               v7,
               v11,
               2LL,
               0LL,
               0,
               &Microsoft::CoreUI::MessageCall::MPCManagerBamo_g_parameters_kXhcky2WoeLwbX2Kisr$71l33VI_BamoGroup$b0a80b91,
               (unsigned int)&v12);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FA9,
        (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMa"
                 "nagerBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v5);
      return v6;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FA2,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
