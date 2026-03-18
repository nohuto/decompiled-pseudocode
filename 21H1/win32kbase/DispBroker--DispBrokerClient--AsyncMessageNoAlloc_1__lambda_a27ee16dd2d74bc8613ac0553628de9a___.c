/*
 * XREFs of DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___ @ 0x1C005568C
 * Callers:
 *     xxxRemoteConnect @ 0x1C0054D30 (xxxRemoteConnect.c)
 *     ?DispBrokerAsyncSessionSwitched@@YAJXZ @ 0x1C0055670 (-DispBrokerAsyncSessionSwitched@@YAJXZ.c)
 * Callees:
 *     DrvSampleDisplayState @ 0x1C00971E0 (DrvSampleDisplayState.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 */

__int64 DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  int v3; // eax
  _DWORD v4[20]; // [rsp+40h] [rbp-68h] BYREF

  memset(v4, 0, 0x48uLL);
  v4[10] = 1;
  v4[11] = 1;
  result = DrvSampleDisplayState(&v4[12]);
  if ( (int)result >= 0 )
  {
    v4[0] = 4718624;
    LOWORD(v4[1]) = 0x8000;
    v4[16] = gbConnected;
    v3 = (int)qword_1C0258F10;
    if ( qword_1C0258F10 )
      v3 = qword_1C0258F10(v2, v1);
    v4[17] = v3;
    return ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))qword_1C0252B58)(
             0x10000LL,
             v4,
             0LL,
             0LL,
             0LL,
             0LL,
             0LL);
  }
  return result;
}
