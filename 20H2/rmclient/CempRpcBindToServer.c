/*
 * XREFs of CempRpcBindToServer @ 0x180005070
 * Callers:
 *     HamGetApplicationInterruptiveUIState @ 0x180001330 (HamGetApplicationInterruptiveUIState.c)
 *     HamHostIdRetrieveDynamicId @ 0x1800014F0 (HamHostIdRetrieveDynamicId.c)
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180003850 (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 *     ?CrmpRegistrationContextStart@@YAJPEAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM_CLIENT_ID@@PEAG@Z @ 0x180003B40 (-CrmpRegistrationContextStart@@YAJPEAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM_CLIENT_ID@@PEAG@Z.c)
 *     ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x180006820 (-GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z.c)
 *     RmConnectToResourceManager @ 0x180009760 (RmConnectToResourceManager.c)
 *     ?Init@ResourceManagerClientProxy@@IEAAJXZ @ 0x180009840 (-Init@ResourceManagerClientProxy@@IEAAJXZ.c)
 *     RmGameModeDisableForRegisteredProcess @ 0x18000D700 (RmGameModeDisableForRegisteredProcess.c)
 *     RmGameModeDisableForRegisteredProcessById @ 0x18000D7E0 (RmGameModeDisableForRegisteredProcessById.c)
 *     RmGameModeGetLargestValidResourceRequest @ 0x18000D8B0 (RmGameModeGetLargestValidResourceRequest.c)
 *     RmGameModeReenableForRegisteredProcess @ 0x18000D9D0 (RmGameModeReenableForRegisteredProcess.c)
 *     RmGameModeReenableForRegisteredProcessById @ 0x18000DAB0 (RmGameModeReenableForRegisteredProcessById.c)
 *     RmGameModeRegisterPairedAuxiliaryProcess @ 0x18000DB80 (RmGameModeRegisterPairedAuxiliaryProcess.c)
 *     RmGameModeRegisterPairedAuxiliaryProcessById @ 0x18000DC90 (RmGameModeRegisterPairedAuxiliaryProcessById.c)
 *     RmGameModeRegisterProcess @ 0x18000DDA0 (RmGameModeRegisterProcess.c)
 *     RmGameModeRegisterProcessById @ 0x18000DEA0 (RmGameModeRegisterProcessById.c)
 *     RmGameModeUnregisterProcess @ 0x18000DFA0 (RmGameModeUnregisterProcess.c)
 *     RmGameModeUnregisterProcessById @ 0x18000E080 (RmGameModeUnregisterProcessById.c)
 *     RmQueryHostMemoryLimitValues @ 0x18000F940 (RmQueryHostMemoryLimitValues.c)
 *     CreateResourceManagerProxy @ 0x18000FC7C (CreateResourceManagerProxy.c)
 *     HamGetInterruptiveUIStateForAumid @ 0x180010B60 (HamGetInterruptiveUIStateForAumid.c)
 *     HamGetPackageInterruptiveUIState @ 0x180010CC0 (HamGetPackageInterruptiveUIState.c)
 *     HamHostIdCreateSingleUse @ 0x180010E20 (HamHostIdCreateSingleUse.c)
 * Callees:
 *     __security_check_cookie @ 0x18000A280 (__security_check_cookie.c)
 */

__int64 __fastcall CempRpcBindToServer(RPC_IF_HANDLE IfSpec, RPC_BINDING_HANDLE *a2)
{
  RPC_STATUS v4; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  RPC_BINDING_HANDLE Binding; // [rsp+20h] [rbp-79h] BYREF
  RPC_BINDING_HANDLE_SECURITY_V1_W Security; // [rsp+28h] [rbp-71h] BYREF
  __int64 v9; // [rsp+50h] [rbp-49h] BYREF
  int v10; // [rsp+58h] [rbp-41h]
  int v11; // [rsp+5Ch] [rbp-3Dh]
  __int128 v12; // [rsp+60h] [rbp-39h]
  __int128 v13; // [rsp+70h] [rbp-29h]
  __int64 v14; // [rsp+80h] [rbp-19h]
  RPC_BINDING_HANDLE_OPTIONS_V1 Options; // [rsp+88h] [rbp-11h] BYREF
  RPC_BINDING_HANDLE_TEMPLATE_V1_W Template; // [rsp+98h] [rbp-1h] BYREF

  *(_QWORD *)&Options.ComTimeout = 5LL;
  Options.Version = 1;
  Binding = 0LL;
  memset(&Template, 0, sizeof(Template));
  v14 = 0LL;
  Security.SecurityQos = (RPC_SECURITY_QOS *)&v9;
  *(_QWORD *)(&Security.Version + 1) = 0LL;
  HIDWORD(Security.ServerPrincName) = 0;
  Security.AuthIdentity = 0LL;
  Template.Version = 1;
  Template.ProtocolSequence = 3;
  Options.Flags = 1;
  v9 = 5LL;
  v12 = 0LL;
  v10 = 1;
  v13 = 0LL;
  v11 = 3;
  Security.Version = 1;
  Security.AuthnLevel = 6;
  Security.AuthnSvc = 10;
  v4 = RpcBindingCreateW(&Template, &Security, &Options, &Binding);
  v5 = v4;
  if ( v4 )
  {
    if ( v4 <= 0 )
      goto LABEL_8;
    goto LABEL_7;
  }
  v4 = RpcBindingBind(0LL, Binding, IfSpec);
  v5 = v4;
  if ( !v4 )
  {
    result = 0LL;
    *a2 = Binding;
    return result;
  }
  if ( v4 > 0 )
LABEL_7:
    v5 = (unsigned __int16)v4 | 0xC0070000;
LABEL_8:
  if ( Binding )
    RpcBindingFree(&Binding);
  return v5;
}
