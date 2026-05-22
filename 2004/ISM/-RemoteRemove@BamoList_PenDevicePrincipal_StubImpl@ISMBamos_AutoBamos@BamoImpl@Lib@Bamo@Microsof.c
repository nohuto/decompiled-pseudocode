/*
 * XREFs of ?RemoteRemove@BamoList_PenDevicePrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJI@Z @ 0x18012FC8C
 * Callers:
 *     ?CallRemoteRemoveOnStub@BamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@I@Z @ 0x18012F410 (-CallRemoteRemoveOnStub@BamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Li.c)
 *     ?RemoteRemove@BamoList_PenDevicePrincipal_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJI@Z @ 0x18012FC30 (-RemoteRemove@BamoList_PenDevicePrincipal_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJI@Z.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18001D330 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_StubImpl::RemoteRemove(
        Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_StubImpl *this,
        int a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int16 v6; // [rsp+20h] [rbp-38h]
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v9; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+70h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v11; // [rsp+78h] [rbp+20h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 32LL) + 56LL) )
  {
    v3 = -2018375660;
    v4 = 54501LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v11, &v9, &v10);
  if ( v3 < 0 )
  {
    v4 = 54508LL;
    goto LABEL_3;
  }
  v7[0] = v9;
  v7[1] = v10;
  v6 = 1;
  return CoreUICallSend(v11, v7, 2LL, 72LL, v6, &unk_1801BF1BA, a2);
}
