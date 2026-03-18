/*
 * XREFs of ?AnimationStarted@BamoCompObjectDiagnosticsRootProxyImpl@BamoImpl@@QEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x180186584
 * Callers:
 *     ?AnimationStarted@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x1801864F0 (-AnimationStarted@BamoCompObjectDiagnosticsRootProxy@@UEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180151814 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180184B60 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoCompObjectDiagnosticsRootProxyImpl::AnimationStarted(__int64 a1, int a2, __int64 a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  struct IMessageCallSendHost *v9; // rcx
  char *v10; // rax
  int v11; // [rsp+20h] [rbp-88h]
  unsigned int v12; // [rsp+70h] [rbp-38h] BYREF
  struct IMessageCallSendHost *v13[3]; // [rsp+78h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned int v15; // [rsp+B0h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL) + 56LL) )
  {
    v6 = -2018375660;
    v7 = 4306LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\diagnosticcallbacks\\objfre\\amd64\\diagnosticcallbacks.bamo.h",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
         (Microsoft::BamoImpl::BamoProxyImpl *)a1,
         v13,
         &v15,
         &v12);
  if ( v6 < 0 )
  {
    v7 = 4313LL;
    goto LABEL_3;
  }
  v9 = v13[0];
  if ( *(_BYTE *)(a1 + 31) )
  {
    v10 = (char *)v13[0] - 16;
    if ( !v13[0] )
      v10 = 0LL;
    v10[72] = 1;
  }
  v13[0] = (struct IMessageCallSendHost *)v15;
  v13[1] = (struct IMessageCallSendHost *)v12;
  LOWORD(v11) = 2;
  return CoreUICallSend(v9, v13, 2LL, 0LL, v11, &unk_1802DB072, a2, a3);
}
