/*
 * XREFs of ?DeviceAdded@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@QEAAJAEBUCursorDeviceInfo@@_K1@Z @ 0x1800E4FCC
 * Callers:
 *     ?DeviceAdded@BamoSystemCursorControllerClientProxy@@UEAAJAEBUCursorDeviceInfo@@_K1@Z @ 0x1800E4F50 (-DeviceAdded@BamoSystemCursorControllerClientProxy@@UEAAJAEBUCursorDeviceInfo@@_K1@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180038FA0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoSystemCursorControllerClientProxyImpl::DeviceAdded(
        BamoImpl::BamoSystemCursorControllerClientProxyImpl *this,
        const struct CursorDeviceInfo *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  struct IMessageCallSendHost *v7; // rcx
  char *v8; // rax
  __int128 v9; // xmm0
  unsigned int v10; // [rsp+50h] [rbp-48h] BYREF
  struct IMessageCallSendHost *v11[3]; // [rsp+58h] [rbp-40h] BYREF
  __int128 v12; // [rsp+70h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v14; // [rsp+A0h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL) + 56LL) )
  {
    v4 = -2018375660;
    v5 = 51509LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, v11, &v14, &v10);
  if ( v4 < 0 )
  {
    v5 = 51516LL;
    goto LABEL_3;
  }
  v7 = v11[0];
  if ( *((_BYTE *)this + 31) )
  {
    v8 = (char *)v11[0] - 16;
    if ( !v11[0] )
      v8 = 0LL;
    v8[72] = 1;
  }
  v9 = *(_OWORD *)a2;
  v11[0] = (struct IMessageCallSendHost *)v14;
  v11[1] = (struct IMessageCallSendHost *)v10;
  v12 = v9;
  return CoreUICallSend(v7, v11, 2LL, 64LL, 0, &unk_1801BF2B4, (unsigned int)&v12);
}
