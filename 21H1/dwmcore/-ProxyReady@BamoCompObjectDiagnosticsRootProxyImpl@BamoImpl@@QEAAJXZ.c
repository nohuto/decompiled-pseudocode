/*
 * XREFs of ?ProxyReady@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJXZ @ 0x180186C10
 * Callers:
 *     ?ProxyReady@BamoCompObjectDiagnosticsRootProxy@@UEAAJXZ @ 0x180186BD0 (-ProxyReady@BamoCompObjectDiagnosticsRootProxy@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180151814 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180184B60 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoCompObjectDiagnosticsRootProxyImpl::ProxyReady(
        BamoImpl::BamoCompObjectDiagnosticsRootProxyImpl *this)
{
  int v3; // eax
  unsigned int v4; // edi
  struct IMessageCallSendHost *v5; // rcx
  char *v6; // rax
  int v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v10; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+68h] [rbp+10h] BYREF
  struct IMessageCallSendHost *v12; // [rsp+70h] [rbp+18h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL) + 56LL) )
  {
    v3 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v12, &v10, &v11);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v5 = v12;
      if ( *((_BYTE *)this + 31) )
      {
        v6 = (char *)v12 - 16;
        if ( !v12 )
          v6 = 0LL;
        v6[72] = 1;
      }
      LOWORD(v7) = 0;
      return CoreUICallSend(
               v5,
               &v8,
               2LL,
               0LL,
               v7,
               &Microsoft::CoreUI::MessageCall::DiagnosticCallbacks_g_parameters_sdevGguFXwOtP5_Hldukq$D2_sg_BamoGroup$e6b704d7,
               v10,
               v11);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x109C,
        (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\diagnosticcallbacks\\objfre\\amd64\\diagnosticcallbacks.bamo.h",
        (const char *)(unsigned int)v3);
      return v4;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1095,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\diagnosticcallbacks\\objfre\\amd64\\diagnosticcallbacks.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
