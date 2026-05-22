/*
 * XREFs of ?SetBooleanValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJI_N@Z @ 0x18014366C
 * Callers:
 *     ?CallSetBooleanValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@I_N@Z @ 0x1801420D4 (-CallSetBooleanValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@.c)
 *     ?SetBooleanValue@BamoDataSourceStub@@UEAAJI_N@Z @ 0x180143600 (-SetBooleanValue@BamoDataSourceStub@@UEAAJI_N@Z.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18001D360 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceStubImpl::SetBooleanValue(BamoImpl::BamoDataSourceStubImpl *this, int a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int16 v6; // [rsp+20h] [rbp-58h]
  struct IMessageCallSendHost *v7; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v8[6]; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v10; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+98h] [rbp+20h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 32LL) + 56LL) )
  {
    v3 = -2018375660;
    v4 = 9735LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v7, &v10, &v11);
  if ( v3 < 0 )
  {
    v4 = 9742LL;
    goto LABEL_3;
  }
  v8[0] = v10;
  v8[1] = v11;
  v6 = 0;
  return CoreUICallSend(v7, v8, 2LL, 5LL, v6, &unk_1801C0985, a2);
}
