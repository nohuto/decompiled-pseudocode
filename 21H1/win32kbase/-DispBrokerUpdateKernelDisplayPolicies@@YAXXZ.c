/*
 * XREFs of ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x1C0055764
 * Callers:
 *     xxxRemoteConnect @ 0x1C0054D30 (xxxRemoteConnect.c)
 *     InitVideo @ 0x1C00552E4 (InitVideo.c)
 *     ?DispBrokerAsyncSessionSwitched@@YAJXZ @ 0x1C0055670 (-DispBrokerAsyncSessionSwitched@@YAJXZ.c)
 * Callees:
 *     ?LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ @ 0x1C0055810 (-LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

void DispBrokerUpdateKernelDisplayPolicies(void)
{
  unsigned int *v0; // rax
  unsigned int v1; // edi
  unsigned int v2; // ebx

  DispBroker::DispBrokerClient::LoadRegistrySettings((DispBroker::DispBrokerClient *)DispBroker::DispBrokerClient::s_pSessionBroker);
  v0 = (unsigned int *)DispBroker::DispBrokerClient::s_pSessionBroker;
  v1 = 0;
  if ( *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8) )
    v0 = (unsigned int *)((char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4);
  v2 = *v0;
  ((void (__fastcall *)(__int64, bool))qword_1C0252B50)(1LL, *v0 != 0);
  ((void (__fastcall *)(__int64, bool))qword_1C0252B50)(2LL, v2 == 0);
  LOBYTE(v1) = v2 <= 1;
  ((void (__fastcall *)(__int64, _QWORD))qword_1C0252B50)(3LL, v1);
  ((void (__fastcall *)(__int64, _QWORD))qword_1C0252B50)(
    4LL,
    *((unsigned __int8 *)DispBroker::DispBrokerClient::s_pSessionBroker + 8));
}
