/*
 * XREFs of ?AnimationStarted@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJI_K0@Z @ 0x1800E3368
 * Callers:
 *     ?AnimationStarted@BamoResizeControllerClientProxy@@UEAAJI_K0@Z @ 0x1800E32F0 (-AnimationStarted@BamoResizeControllerClientProxy@@UEAAJI_K0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180038DB0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoResizeControllerClientProxyImpl::AnimationStarted(
        BamoImpl::BamoResizeControllerClientProxyImpl *this,
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
      v9 = 4;
      return CoreUICallSend(v8, v11, 2LL, 56LL, v9, &unk_1801C0206, a2);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBCF2,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBCEB,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
