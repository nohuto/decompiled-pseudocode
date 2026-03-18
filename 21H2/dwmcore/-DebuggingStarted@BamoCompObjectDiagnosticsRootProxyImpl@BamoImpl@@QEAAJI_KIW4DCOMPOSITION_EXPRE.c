/*
 * XREFs of ?DebuggingStarted@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x1801BEED8
 * Callers:
 *     ?DebuggingStarted@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x1801BEE50 (-DebuggingStarted@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIW4DCOMPOSITION_EXPRESSION_TYPE@@P.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180177B90 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x1801BCA90 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x1801BCD28 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoCompObjectDiagnosticsRootProxyImpl::DebuggingStarted(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v6; // eax
  unsigned int v7; // edi
  struct IMessageCallSendHost *v8; // rcx
  char *v9; // rax
  unsigned int v10; // [rsp+60h] [rbp-38h] BYREF
  struct IMessageCallSendHost *v11[3]; // [rsp+68h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v13; // [rsp+A0h] [rbp+8h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      4841LL,
      (__int64)"onecoreuap\\Windows\\DWM\\dwmcore\\diagnosticcallbacks\\objfre\\amd64\\diagnosticcallbacks.bamo.h",
      a4);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected((Microsoft::BamoImpl::BamoProxyImpl *)a1) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12ED,
      (int)"onecoreuap\\Windows\\DWM\\dwmcore\\diagnosticcallbacks\\objfre\\amd64\\diagnosticcallbacks.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
  else
  {
    v6 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
           (Microsoft::BamoImpl::BamoProxyImpl *)a1,
           v11,
           &v13,
           &v10);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v8 = v11[0];
      if ( *(_BYTE *)(a1 + 31) )
      {
        v9 = (char *)v11[0] - 16;
        if ( !v11[0] )
          v9 = 0LL;
        v9[72] = 1;
      }
      v11[0] = (struct IMessageCallSendHost *)v13;
      v11[1] = (struct IMessageCallSendHost *)v10;
      return CoreUICallSend(v8, v11, 2LL, 0LL, 1, &unk_18034584A);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12F4,
        (int)"onecoreuap\\Windows\\DWM\\dwmcore\\diagnosticcallbacks\\objfre\\amd64\\diagnosticcallbacks.bamo.h",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
}
