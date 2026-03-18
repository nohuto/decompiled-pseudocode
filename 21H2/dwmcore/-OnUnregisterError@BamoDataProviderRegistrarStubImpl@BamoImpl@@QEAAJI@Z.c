/*
 * XREFs of ?OnUnregisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z @ 0x1801BAA3C
 * Callers:
 *     ?CallOnUnregisterErrorOnStub@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@I@Z @ 0x1801BA5C8 (-CallOnUnregisterErrorOnStub@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImp.c)
 *     ?OnUnregisterError@BamoDataProviderRegistrarStub@@UEAAJI@Z @ 0x1801BA9F0 (-OnUnregisterError@BamoDataProviderRegistrarStub@@UEAAJI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180177B90 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1801BACA8 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderRegistrarStubImpl::OnUnregisterError(
        BamoImpl::BamoDataProviderRegistrarStubImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v4; // ebx
  __int64 v5; // rdx
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v9; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+70h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v11; // [rsp+78h] [rbp+20h] BYREF

  if ( *(_DWORD *)(*((_QWORD *)this + 5) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      9688LL,
      (__int64)"onecoreuap\\Windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      a4);
  if ( !*((_BYTE *)this + 32) )
  {
    v4 = -2018375660;
    v5 = 9692LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\Windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v11, &v9, &v10);
  if ( v4 < 0 )
  {
    v5 = 9699LL;
    goto LABEL_5;
  }
  v7[0] = v9;
  v7[1] = v10;
  return CoreUICallSend(v11, v7, 2LL, 3LL, 1, &unk_1803434A5);
}
