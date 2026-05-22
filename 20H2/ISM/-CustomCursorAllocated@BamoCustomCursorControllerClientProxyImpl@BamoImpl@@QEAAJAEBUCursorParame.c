/*
 * XREFs of ?CustomCursorAllocated@BamoCustomCursorControllerClientProxyImpl@BamoImpl@@QEAAJAEBUCursorParametersInfo@@_K@Z @ 0x1800E47DC
 * Callers:
 *     ?CustomCursorAllocated@BamoCustomCursorControllerClientProxy@@UEAAJAEBUCursorParametersInfo@@_K@Z @ 0x1800E4770 (-CustomCursorAllocated@BamoCustomCursorControllerClientProxy@@UEAAJAEBUCursorParametersInfo@@_K@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180039020 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoCustomCursorControllerClientProxyImpl::CustomCursorAllocated(
        BamoImpl::BamoCustomCursorControllerClientProxyImpl *this,
        const struct CursorParametersInfo *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  struct IMessageCallSendHost *v7; // rcx
  char *v8; // rax
  struct IMessageCallSendHost *v9; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v10[3]; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v12; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+98h] [rbp+20h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL) + 56LL) )
  {
    v4 = -2018375660;
    v5 = 27933LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v9, &v12, &v13);
  if ( v4 < 0 )
  {
    v5 = 27940LL;
    goto LABEL_3;
  }
  v7 = v9;
  if ( *((_BYTE *)this + 31) )
  {
    v8 = (char *)v9 - 16;
    if ( !v9 )
      v8 = 0LL;
    v8[72] = 1;
  }
  LODWORD(v9) = *(_DWORD *)a2;
  v10[0] = v12;
  v10[1] = v13;
  return CoreUICallSend(v7, v10, 2LL, 19LL, 0, &unk_1801BF1CC, (unsigned int)&v9);
}
