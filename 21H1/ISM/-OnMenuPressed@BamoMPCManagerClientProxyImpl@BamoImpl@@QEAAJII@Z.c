/*
 * XREFs of ?OnMenuPressed@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJII@Z @ 0x180109E0C
 * Callers:
 *     ?OnMenuPressed@BamoMPCManagerClientProxy@@UEAAJII@Z @ 0x180109DA0 (-OnMenuPressed@BamoMPCManagerClientProxy@@UEAAJII@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180038F40 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoMPCManagerClientProxyImpl::OnMenuPressed(
        BamoImpl::BamoMPCManagerClientProxyImpl *this,
        int a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  struct IMessageCallSendHost *v7; // rcx
  char *v8; // rax
  struct IMessageCallSendHost *v9[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v11; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+88h] [rbp+20h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL) + 56LL) )
  {
    v4 = -2018375660;
    v5 = 10616LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, v9, &v11, &v12);
  if ( v4 < 0 )
  {
    v5 = 10623LL;
    goto LABEL_3;
  }
  v7 = v9[0];
  if ( *((_BYTE *)this + 31) )
  {
    v8 = (char *)v9[0] - 16;
    if ( !v9[0] )
      v8 = 0LL;
    v8[72] = 1;
  }
  v9[0] = (struct IMessageCallSendHost *)v11;
  v9[1] = (struct IMessageCallSendHost *)v12;
  return CoreUICallSend(v7, v9, 2LL, 5LL, 0, &unk_1801C28BF, a2);
}
