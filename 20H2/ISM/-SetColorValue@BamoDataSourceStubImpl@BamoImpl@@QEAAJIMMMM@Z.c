/*
 * XREFs of ?SetColorValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x1801437E8
 * Callers:
 *     ?CallSetColorValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@IMMMM@Z @ 0x180142120 (-CallSetColorValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@I.c)
 *     ?SetColorValue@BamoDataSourceStub@@UEAAJIMMMM@Z @ 0x180143750 (-SetColorValue@BamoDataSourceStub@@UEAAJIMMMM@Z.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18001D360 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceStubImpl::SetColorValue(
        BamoImpl::BamoDataSourceStubImpl *this,
        int a2,
        float a3,
        float a4)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int16 v8; // [rsp+20h] [rbp-88h]
  unsigned int v9; // [rsp+60h] [rbp-48h] BYREF
  struct IMessageCallSendHost *v10; // [rsp+68h] [rbp-40h] BYREF
  _QWORD v11[6]; // [rsp+70h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned int v13; // [rsp+B0h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 32LL) + 56LL) )
  {
    v5 = -2018375660;
    v6 = 9879LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v10, &v13, &v9);
  if ( v5 < 0 )
  {
    v6 = 9886LL;
    goto LABEL_3;
  }
  v11[0] = v13;
  v11[1] = v9;
  v8 = 6;
  return CoreUICallSend(v10, v11, 2LL, 5LL, v8, &unk_1801C0998, a2);
}
