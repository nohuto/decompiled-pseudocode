/*
 * XREFs of ?InputAttempted@BamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@QEAAJXZ @ 0x1801028AC
 * Callers:
 *     ?InputAttempted@BamoInputAttemptedDeliveryClientProxy@@UEAAJXZ @ 0x180102860 (-InputAttempted@BamoInputAttemptedDeliveryClientProxy@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180038FA0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl::InputAttempted(
        BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl *this)
{
  int v3; // eax
  unsigned int v4; // edi
  struct IMessageCallSendHost *v5; // rcx
  char *v6; // rax
  _QWORD v7[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v9; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+68h] [rbp+10h] BYREF
  struct IMessageCallSendHost *v11; // [rsp+70h] [rbp+18h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL) + 56LL) )
  {
    v3 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v11, &v9, &v10);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v5 = v11;
      if ( *((_BYTE *)this + 31) )
      {
        v6 = (char *)v11 - 16;
        if ( !v11 )
          v6 = 0LL;
        v6[72] = 1;
      }
      v7[0] = v9;
      v7[1] = v10;
      return ((__int64 (__fastcall *)(struct IMessageCallSendHost *, _QWORD *, __int64, __int64, _WORD, void *))CoreUICallSend)(
               v5,
               v7,
               2LL,
               34LL,
               0,
               &Microsoft::CoreUI::MessageCall::ISMBamos_g_parameters_0dp_Li0nIHu1AXew2xcevx57rSo_BamoGroup$5a0d6d6f);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x87D1,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)(unsigned int)v3);
      return v4;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87CA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
