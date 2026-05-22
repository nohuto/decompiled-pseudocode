/*
 * XREFs of ?DragStarted@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@00AEBUtagPOINTF@@_KW4VirtualKeyModifiers@System@Windows@@W4InputType@Input@Internal@UI@7@2@Z @ 0x1800E5E54
 * Callers:
 *     ?DragStarted@BamoDragManagerClientProxy@@UEAAJIAEBUtagPOINT@@00AEBUtagPOINTF@@_KW4VirtualKeyModifiers@System@Windows@@W4InputType@Input@Internal@UI@6@2@Z @ 0x1800E5D90 (-DragStarted@BamoDragManagerClientProxy@@UEAAJIAEBUtagPOINT@@00AEBUtagPOINTF@@_KW4VirtualKeyModi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180038F40 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoDragManagerClientProxyImpl::DragStarted(
        __int64 a1,
        int a2,
        struct IMessageCallSendHost **a3,
        struct IMessageCallSendHost **a4,
        struct IMessageCallSendHost **a5,
        struct IMessageCallSendHost **a6)
{
  int v10; // ebx
  __int64 v11; // rdx
  struct IMessageCallSendHost *v13; // r10
  char *v14; // rax
  struct IMessageCallSendHost *v15; // rcx
  unsigned int v16; // [rsp+80h] [rbp-39h] BYREF
  struct IMessageCallSendHost *v17[4]; // [rsp+88h] [rbp-31h] BYREF
  _QWORD v18[3]; // [rsp+A8h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+2Fh]
  unsigned int v20; // [rsp+F0h] [rbp+37h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL) + 56LL) )
  {
    v10 = -2018375660;
    v11 = 30628LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  v10 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
          (Microsoft::BamoImpl::BamoProxyImpl *)a1,
          v17,
          &v20,
          &v16);
  if ( v10 < 0 )
  {
    v11 = 30635LL;
    goto LABEL_3;
  }
  v13 = v17[0];
  if ( *(_BYTE *)(a1 + 31) )
  {
    v14 = (char *)v17[0] - 16;
    if ( !v17[0] )
      v14 = 0LL;
    v14[72] = 1;
  }
  v17[0] = *a6;
  v15 = *a5;
  v17[2] = *a4;
  v17[3] = *a3;
  v18[0] = v20;
  v18[1] = v16;
  v17[1] = v15;
  return CoreUICallSend(v13, v18, 2LL, 24LL, 0, &unk_1801C01D2, a2);
}
