/*
 * XREFs of ?SetMatrix4x4Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIAEBU_D3DMATRIX@@@Z @ 0x180143B6C
 * Callers:
 *     ?CallSetMatrix4x4ValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@IAEBU_D3DMATRIX@@@Z @ 0x180142250 (-CallSetMatrix4x4ValueOnStub@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsof.c)
 *     ?SetMatrix4x4Value@BamoDataSourceStub@@UEAAJIAEBU_D3DMATRIX@@@Z @ 0x180143B00 (-SetMatrix4x4Value@BamoDataSourceStub@@UEAAJIAEBU_D3DMATRIX@@@Z.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18001D330 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceStubImpl::SetMatrix4x4Value(
        BamoImpl::BamoDataSourceStubImpl *this,
        int a2,
        const struct _D3DMATRIX *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int16 v12; // [rsp+20h] [rbp-39h]
  struct IMessageCallSendHost *v13; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v14[3]; // [rsp+48h] [rbp-11h] BYREF
  __int128 v15; // [rsp+60h] [rbp+7h]
  __int128 v16; // [rsp+70h] [rbp+17h]
  __int128 v17; // [rsp+80h] [rbp+27h]
  __int128 v18; // [rsp+90h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  unsigned int v20; // [rsp+C0h] [rbp+67h] BYREF
  unsigned int v21; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 32LL) + 56LL) )
  {
    v5 = -2018375660;
    v6 = 9923LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v13, &v20, &v21);
  if ( v5 < 0 )
  {
    v6 = 9930LL;
    goto LABEL_3;
  }
  v8 = *(_OWORD *)&a3->_11;
  v9 = *(_OWORD *)&a3->_21;
  v14[0] = v20;
  v14[1] = v21;
  v15 = v8;
  v10 = *(_OWORD *)&a3->_31;
  v16 = v9;
  v11 = *(_OWORD *)&a3->_41;
  v12 = 8;
  v17 = v10;
  v18 = v11;
  return CoreUICallSend(v13, v14, 2LL, 5LL, v12, &unk_1801C09B5, a2);
}
