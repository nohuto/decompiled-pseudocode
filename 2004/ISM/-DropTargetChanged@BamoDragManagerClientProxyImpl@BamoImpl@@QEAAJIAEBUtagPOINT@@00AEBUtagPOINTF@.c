/*
 * XREFs of ?DropTargetChanged@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@00AEBUtagPOINTF@@_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800E5BB4
 * Callers:
 *     ?DropTargetChanged@BamoDragManagerClientProxy@@UEAAJIAEBUtagPOINT@@00AEBUtagPOINTF@@_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800E5B10 (-DropTargetChanged@BamoDragManagerClientProxy@@UEAAJIAEBUtagPOINT@@00AEBUtagPOINTF@@_KW4VirtualK.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180038FA0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoDragManagerClientProxyImpl::DropTargetChanged(
        __int64 a1,
        int a2,
        struct IMessageCallSendHost **a3,
        struct IMessageCallSendHost **a4,
        struct IMessageCallSendHost **a5,
        struct IMessageCallSendHost **a6)
{
  char *v6; // rbx
  int v12; // eax
  unsigned int v13; // edi
  struct IMessageCallSendHost *v14; // r10
  struct IMessageCallSendHost *v15; // rcx
  __int16 v16; // [rsp+20h] [rbp-79h]
  unsigned int v17; // [rsp+70h] [rbp-29h] BYREF
  struct IMessageCallSendHost *v18[4]; // [rsp+78h] [rbp-21h] BYREF
  _QWORD v19[3]; // [rsp+98h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+3Fh]
  unsigned int v21; // [rsp+E0h] [rbp+47h] BYREF

  v6 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL) + 56LL) )
  {
    v12 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
            (Microsoft::BamoImpl::BamoProxyImpl *)a1,
            v18,
            &v21,
            &v17);
    v13 = v12;
    if ( v12 >= 0 )
    {
      v14 = v18[0];
      if ( *(_BYTE *)(a1 + 31) )
      {
        if ( v18[0] )
          v6 = (char *)v18[0] - 16;
        v6[72] = 1;
      }
      v18[0] = *a6;
      v15 = *a5;
      v18[2] = *a4;
      v18[3] = *a3;
      v19[0] = v21;
      v19[1] = v17;
      v18[1] = v15;
      v16 = 4;
      return CoreUICallSend(v14, v19, 2LL, 24LL, v16, &unk_1801BF205, a2);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7827,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)(unsigned int)v12);
      return v13;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7820,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
