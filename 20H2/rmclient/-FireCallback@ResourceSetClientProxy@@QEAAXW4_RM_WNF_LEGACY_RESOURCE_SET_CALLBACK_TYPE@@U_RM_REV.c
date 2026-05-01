/*
 * XREFs of ?FireCallback@ResourceSetClientProxy@@QEAAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@U_RM_REVOKE_MESSAGE@@@Z @ 0x1800130BC
 * Callers:
 *     ?LegacyResourceSetCallbackHandler@ResourceManagerClientProxy@@IEAAXPEAU_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD@@@Z @ 0x180013404 (-LegacyResourceSetCallbackHandler@ResourceManagerClientProxy@@IEAAXPEAU_RM_WNF_LEGACY_RESOURCE_S.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18000AB50 (_guard_dispatch_icall_nop.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180012E18 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

struct IUnknown *__fastcall ResourceSetClientProxy::FireCallback(__int64 a1, int a2, unsigned int a3)
{
  struct IUnknown *result; // rax
  struct IUnknown *v5; // rdx
  int v8; // esi
  int v9; // esi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  struct IUnknown *v11; // [rsp+30h] [rbp+8h] BYREF

  result = (struct IUnknown *)&retaddr;
  v5 = *(struct IUnknown **)(a1 + 424);
  if ( v5 )
    result = ATL::AtlComPtrAssign(&v11, v5);
  if ( !a2 )
    return (struct IUnknown *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(MEMORY[0] + 32LL))(0LL, *(_QWORD *)(a1 + 32));
  v8 = a2 - 1;
  if ( !v8 )
    return (struct IUnknown *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(MEMORY[0] + 24LL))(
                                0LL,
                                *(_QWORD *)(a1 + 32),
                                a3);
  v9 = v8 - 1;
  if ( !v9 )
    return (struct IUnknown *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(MEMORY[0] + 40LL))(0LL, *(_QWORD *)(a1 + 32));
  if ( v9 == 1 )
    return (struct IUnknown *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(MEMORY[0] + 48LL))(0LL, *(_QWORD *)(a1 + 32));
  return result;
}
