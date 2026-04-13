/*
 * XREFs of ?FindAllWebAccountsAsync@IdentityManager@ContentManagement@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@@Z @ 0x180010C90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@UITokenBrokerInternalStatics@Web@Authentication@Security@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UITokenBrokerInternalStatics@Web@Authentication@Security@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180019394 (--$GetActivationFactory@UITokenBrokerInternalStatics@Web@Authentication@Security@Internal@Window.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::IdentityManager::FindAllWebAccountsAsync(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v7; // [rsp+50h] [rbp+18h] BYREF

  wil::GetActivationFactory<Windows::Internal::Security::Authentication::Web::ITokenBrokerInternalStatics>(&v7);
  v3 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v7 + 96LL))(v7, a2);
  v4 = v3;
  if ( v3 >= 0 )
    v4 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x208,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v3);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v7 + 16LL))(v7, *v7);
  return v4;
}
