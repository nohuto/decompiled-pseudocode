/*
 * XREFs of DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___ @ 0x1C002B4CC
 * Callers:
 *     ?DispBrokerAsyncSessionSwitched@@YAJXZ @ 0x1C002B4B0 (-DispBrokerAsyncSessionSwitched@@YAJXZ.c)
 * Callees:
 *     DrvSampleDisplayState @ 0x1C00B5D50 (DrvSampleDisplayState.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 */

__int64 DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___()
{
  __int64 result; // rax
  int v1; // eax
  _DWORD v2[20]; // [rsp+40h] [rbp-68h] BYREF

  memset(v2, 0, 0x48uLL);
  v2[10] = 1;
  v2[11] = 1;
  result = DrvSampleDisplayState(&v2[12]);
  if ( (int)result >= 0 )
  {
    v2[0] = 4718624;
    LOWORD(v2[1]) = 0x8000;
    v2[16] = gbConnected;
    v1 = (int)qword_1C0252F50;
    if ( qword_1C0252F50 )
      v1 = qword_1C0252F50();
    v2[17] = v1;
    return ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))qword_1C024CB38)(
             0x10000LL,
             v2,
             0LL,
             0LL,
             0LL,
             0LL,
             0LL);
  }
  return result;
}
