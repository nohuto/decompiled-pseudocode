/*
 * XREFs of ?CustomCursorShapeAnimationCreated@BamoCustomCursorControllerClientProxyImpl@BamoImpl@@QEAAJ_K00@Z @ 0x1800E4EBC
 * Callers:
 *     ?CustomCursorShapeAnimationCreated@BamoCustomCursorControllerClientProxy@@UEAAJ_K00@Z @ 0x1800E4E40 (-CustomCursorShapeAnimationCreated@BamoCustomCursorControllerClientProxy@@UEAAJ_K00@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180038F40 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoCustomCursorControllerClientProxyImpl::CustomCursorShapeAnimationCreated(
        BamoImpl::BamoCustomCursorControllerClientProxyImpl *this,
        int a2)
{
  char *v2; // rbx
  int v6; // eax
  unsigned int v7; // edi
  struct IMessageCallSendHost *v8; // rcx
  __int16 v9; // [rsp+20h] [rbp-68h]
  unsigned int v10; // [rsp+50h] [rbp-38h] BYREF
  struct IMessageCallSendHost *v11[3]; // [rsp+58h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v13; // [rsp+90h] [rbp+8h] BYREF

  v2 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL) + 56LL) )
  {
    v6 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, v11, &v13, &v10);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v8 = v11[0];
      if ( *((_BYTE *)this + 31) )
      {
        if ( v11[0] )
          v2 = (char *)v11[0] - 16;
        v2[72] = 1;
      }
      v11[0] = (struct IMessageCallSendHost *)v13;
      v11[1] = (struct IMessageCallSendHost *)v10;
      v9 = 2;
      return CoreUICallSend(v8, v11, 2LL, 19LL, v9, &unk_1801C01C2, a2);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6D57,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6D50,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
