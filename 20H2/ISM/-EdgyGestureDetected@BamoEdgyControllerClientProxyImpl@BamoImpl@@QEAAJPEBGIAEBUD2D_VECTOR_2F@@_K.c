/*
 * XREFs of ?EdgyGestureDetected@BamoEdgyControllerClientProxyImpl@BamoImpl@@QEAAJPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z @ 0x1800FF848
 * Callers:
 *     ?EdgyGestureDetected@BamoEdgyControllerClientProxy@@UEAAJPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z @ 0x1800FF790 (-EdgyGestureDetected@BamoEdgyControllerClientProxy@@UEAAJPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180039020 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoEdgyControllerClientProxyImpl::EdgyGestureDetected(
        BamoImpl::BamoEdgyControllerClientProxyImpl *this,
        const unsigned __int16 *a2,
        __int64 a3,
        const struct D2D_VECTOR_2F *a4,
        unsigned __int64 a5,
        const struct D2D_VECTOR_2F *a6)
{
  int v7; // r15d
  int v9; // ebx
  __int64 v10; // rdx
  struct IMessageCallSendHost *v12; // rcx
  char *v13; // rax
  struct IMessageCallSendHost *v14; // xmm0_8
  unsigned int v15; // [rsp+70h] [rbp-21h] BYREF
  struct IMessageCallSendHost *v16[2]; // [rsp+78h] [rbp-19h] BYREF
  _QWORD v17[3]; // [rsp+88h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+37h]
  unsigned int v19; // [rsp+D0h] [rbp+3Fh] BYREF

  v7 = (int)a2;
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL) + 56LL) )
  {
    v9 = -2018375660;
    v10 = 33301LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  v9 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, v16, &v19, &v15);
  if ( v9 < 0 )
  {
    v10 = 33308LL;
    goto LABEL_3;
  }
  v12 = v16[0];
  if ( *((_BYTE *)this + 31) )
  {
    v13 = (char *)v16[0] - 16;
    if ( !v16[0] )
      v13 = 0LL;
    v13[72] = 1;
  }
  v16[1] = (struct IMessageCallSendHost *)*a4;
  v14 = (struct IMessageCallSendHost *)*a6;
  v17[0] = v19;
  v17[1] = v15;
  v16[0] = v14;
  return CoreUICallSend(v12, v17, 2LL, 29LL, 0, &unk_1801BF21B, v7);
}
