/*
 * XREFs of ?RemoveDataSource@BamoDataProviderStubImpl@BamoImpl@@QEAAJPEAVBamoDataSourcePrincipal@@@Z @ 0x18014327C
 * Callers:
 *     ?CallRemoveDataSourceOnStub@BamoDataProviderPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAVBamoDataSourcePrincipal@@@Z @ 0x180142120 (-CallRemoveDataSourceOnStub@BamoDataProviderPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microso.c)
 *     ?RemoveDataSource@BamoDataProviderStub@@UEAAJPEAVBamoDataSourcePrincipal@@@Z @ 0x180143220 (-RemoveDataSource@BamoDataProviderStub@@UEAAJPEAVBamoDataSourcePrincipal@@@Z.c)
 * Callees:
 *     ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x18001D330 (-PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteReference@BamoStubImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x1801046F4 (-PrepareForRemoteReference@BamoStubImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderStubImpl::RemoveDataSource(
        BamoImpl::BamoDataProviderStubImpl *this,
        struct BamoDataSourcePrincipal *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  int v6; // edi
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v9; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+70h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v11; // [rsp+78h] [rbp+20h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 32LL) + 56LL) )
  {
    v3 = -2018375660;
    v4 = 7923LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  if ( a2 )
    v6 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteReference(
           (struct Microsoft::BamoImpl::BaseBamoPeerImpl **)this,
           a2);
  else
    v6 = 0;
  v3 = Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteCall(this, &v11, &v9, &v10);
  if ( v3 < 0 )
  {
    v4 = 7931LL;
    goto LABEL_3;
  }
  v7[0] = v9;
  v7[1] = v10;
  return CoreUICallSend(v11, v7, 2LL, 1LL, 1, &unk_1801C098D, v6);
}
