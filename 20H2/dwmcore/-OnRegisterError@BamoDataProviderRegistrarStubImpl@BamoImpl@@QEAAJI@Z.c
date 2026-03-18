/*
 * XREFs of ?OnRegisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z @ 0x18017E59C
 * Callers:
 *     ?CallOnRegisterErrorOnStub@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@I@Z @ 0x18017E438 (-CallOnRegisterErrorOnStub@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@.c)
 *     ?OnRegisterError@BamoDataProviderRegistrarStub@@UEAAJI@Z @ 0x18017E550 (-OnRegisterError@BamoDataProviderRegistrarStub@@UEAAJI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014DDBC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18017E948 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderRegistrarStubImpl::OnRegisterError(
        BamoImpl::BamoDataProviderRegistrarStubImpl *this)
{
  int v1; // ebx
  __int64 v2; // rdx
  _QWORD v4[5]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v6; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v7; // [rsp+80h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v8; // [rsp+88h] [rbp+20h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 32LL) + 56LL) )
  {
    v1 = -2018375660;
    v2 = 8713LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v2,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v1);
    return (unsigned int)v1;
  }
  v1 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v8, &v6, &v7);
  if ( v1 < 0 )
  {
    v2 = 8720LL;
    goto LABEL_3;
  }
  v4[0] = v6;
  v4[1] = v7;
  return CoreUICallSend(v8, v4, 2LL, 3LL, 0, &unk_1802CCA35);
}
