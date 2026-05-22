/*
 * XREFs of ?TriggerHomeGesture@BamoMPCManagerProxyImpl@BamoImpl@@QEAAJW4InputType@@I@Z @ 0x18004665C
 * Callers:
 *     ?TriggerHomeGesture@BamoMPCManagerProxy@@UEAAJW4InputType@@I@Z @ 0x1800465F0 (-TriggerHomeGesture@BamoMPCManagerProxy@@UEAAJW4InputType@@I@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180039020 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoMPCManagerProxyImpl::TriggerHomeGesture(__int64 a1, int a2)
{
  char *v2; // rbx
  int v6; // eax
  unsigned int v7; // edi
  struct IMessageCallSendHost *v8; // rcx
  __int16 v9; // [rsp+20h] [rbp-48h]
  struct IMessageCallSendHost *v10[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v12; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+88h] [rbp+20h] BYREF

  v2 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL) + 56LL) )
  {
    v6 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (Microsoft::BamoImpl::BamoProxyImpl *)a1,
           v10,
           &v12,
           &v13);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v8 = v10[0];
      if ( *(_BYTE *)(a1 + 31) )
      {
        if ( v10[0] )
          v2 = (char *)v10[0] - 16;
        v2[72] = 1;
      }
      v10[0] = (struct IMessageCallSendHost *)v12;
      v10[1] = (struct IMessageCallSendHost *)v13;
      v9 = 7;
      return CoreUICallSend(v8, v10, 2LL, 3LL, v9, &unk_1801C18C5, a2);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2743,
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
      (void *)0x273C,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
