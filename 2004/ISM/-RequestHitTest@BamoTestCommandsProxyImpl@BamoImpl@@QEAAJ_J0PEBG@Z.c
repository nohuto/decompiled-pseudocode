/*
 * XREFs of ?RequestHitTest@BamoTestCommandsProxyImpl@BamoImpl@@QEAAJ_J0PEBG@Z @ 0x1800EB82C
 * Callers:
 *     ?RequestHitTest@BamoTestCommandsProxy@@UEAAJ_J0PEBG@Z @ 0x1800EB7B0 (-RequestHitTest@BamoTestCommandsProxy@@UEAAJ_J0PEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180038FA0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoTestCommandsProxyImpl::RequestHitTest(
        BamoImpl::BamoTestCommandsProxyImpl *this,
        int a2,
        __int64 a3,
        const unsigned __int16 *a4)
{
  int v6; // ebx
  __int64 v7; // rdx
  struct IMessageCallSendHost *v9; // rcx
  char *v10; // rax
  unsigned int v11; // [rsp+50h] [rbp-38h] BYREF
  struct IMessageCallSendHost *v12[3]; // [rsp+58h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v14; // [rsp+90h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL) + 56LL) )
  {
    v6 = -2018375660;
    v7 = 52016LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, v12, &v14, &v11);
  if ( v6 < 0 )
  {
    v7 = 52023LL;
    goto LABEL_3;
  }
  v9 = v12[0];
  if ( *((_BYTE *)this + 31) )
  {
    v10 = (char *)v12[0] - 16;
    if ( !v12[0] )
      v10 = 0LL;
    v10[72] = 1;
  }
  v12[0] = (struct IMessageCallSendHost *)v14;
  v12[1] = (struct IMessageCallSendHost *)v11;
  return CoreUICallSend(v9, v12, 2LL, 66LL, 0, &unk_1801BF1C8, a2);
}
