/*
 * XREFs of ?DisableGamepadExclusivity@BamoMPCManagerProxyImpl@BamoImpl@@QEAAJXZ @ 0x1801076BC
 * Callers:
 *     ?DisableGamepadExclusivity@BamoMPCManagerProxy@@UEAAJXZ @ 0x180107670 (-DisableGamepadExclusivity@BamoMPCManagerProxy@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180038FA0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoMPCManagerProxyImpl::DisableGamepadExclusivity(
        BamoImpl::BamoMPCManagerProxyImpl *this)
{
  char *v1; // rbx
  int v4; // eax
  unsigned int v5; // esi
  struct IMessageCallSendHost *v6; // rcx
  __int16 v7; // [rsp+20h] [rbp-38h]
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v10; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+68h] [rbp+10h] BYREF
  struct IMessageCallSendHost *v12; // [rsp+70h] [rbp+18h] BYREF

  v1 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL) + 56LL) )
  {
    v4 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v12, &v10, &v11);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v6 = v12;
      if ( *((_BYTE *)this + 31) )
      {
        if ( v12 )
          v1 = (char *)v12 - 16;
        v1[72] = 1;
      }
      v8[0] = v10;
      v8[1] = v11;
      v7 = 4;
      return ((__int64 (__fastcall *)(struct IMessageCallSendHost *, _QWORD *, __int64, __int64, __int16, void *))CoreUICallSend)(
               v6,
               v8,
               2LL,
               3LL,
               v7,
               &unk_1801C18D9);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x26F6,
        (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMa"
                 "nagerBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v4);
      return v5;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26EF,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
