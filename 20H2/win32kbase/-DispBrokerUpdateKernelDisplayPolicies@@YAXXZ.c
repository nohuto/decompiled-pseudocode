/*
 * XREFs of ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x1C00956B4
 * Callers:
 *     InitVideo @ 0x1C0095238 (InitVideo.c)
 *     ?DispBrokerAsyncSessionSwitched@@YAJXZ @ 0x1C00955C0 (-DispBrokerAsyncSessionSwitched@@YAJXZ.c)
 * Callees:
 *     ?LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ @ 0x1C0095760 (-LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
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
  ((void (__fastcall *)(__int64, bool))qword_1C024AB30)(1LL, *v0 != 0);
  ((void (__fastcall *)(__int64, bool))qword_1C024AB30)(2LL, v2 == 0);
  LOBYTE(v1) = v2 <= 1;
  ((void (__fastcall *)(__int64, _QWORD))qword_1C024AB30)(3LL, v1);
  ((void (__fastcall *)(__int64, _QWORD))qword_1C024AB30)(
    4LL,
    *((unsigned __int8 *)DispBroker::DispBrokerClient::s_pSessionBroker + 8));
}
