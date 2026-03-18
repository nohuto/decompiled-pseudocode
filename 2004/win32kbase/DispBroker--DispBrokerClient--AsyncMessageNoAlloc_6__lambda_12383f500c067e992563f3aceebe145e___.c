/*
 * XREFs of DispBroker::DispBrokerClient::AsyncMessageNoAlloc_6__lambda_12383f500c067e992563f3aceebe145e___ @ 0x1C011C5A0
 * Callers:
 *     ?DispBrokerAsyncRefreshOrientation@@YAJKW4ORIENTATION_PREFERENCE@@@Z @ 0x1C011CD30 (-DispBrokerAsyncRefreshOrientation@@YAJKW4ORIENTATION_PREFERENCE@@@Z.c)
 * Callees:
 *     DrvSampleDisplayState @ 0x1C00B5D50 (DrvSampleDisplayState.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 */

__int64 __fastcall DispBroker::DispBrokerClient::AsyncMessageNoAlloc_6__lambda_12383f500c067e992563f3aceebe145e___(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  _DWORD *v4; // rax
  _DWORD v5[20]; // [rsp+40h] [rbp-68h] BYREF

  memset(v5, 0, 0x48uLL);
  v5[10] = 6;
  v5[11] = 1;
  result = DrvSampleDisplayState(&v5[12]);
  if ( (int)result >= 0 )
  {
    v5[0] = 4718624;
    LOWORD(v5[1]) = 0x8000;
    v4 = *(_DWORD **)(a2 + 8);
    v5[16] = **(_DWORD **)a2;
    v5[17] = *v4;
    return ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))qword_1C024CB38)(
             0x10000LL,
             v5,
             0LL,
             0LL,
             0LL,
             0LL,
             0LL);
  }
  return result;
}
