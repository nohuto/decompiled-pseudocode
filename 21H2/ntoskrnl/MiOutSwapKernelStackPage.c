/*
 * XREFs of MiOutSwapKernelStackPage @ 0x1402A1610
 * Callers:
 *     MiOutPageSingleKernelStack @ 0x140286DB0 (MiOutPageSingleKernelStack.c)
 * Callees:
 *     MiOutSwapWorkingSet @ 0x1402A1D58 (MiOutSwapWorkingSet.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiOutSwapKernelStackPage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 AnyMultiplexedVm; // rax
  __int128 v8; // xmm0
  __int64 result; // rax
  _QWORD v10[20]; // [rsp+30h] [rbp-C8h] BYREF

  v3 = *(_QWORD *)(a1 + 56);
  if ( !v3 )
    return 3221225643LL;
  if ( *(_QWORD *)(v3 + 8) <= *(_QWORD *)(v3 + 16) || !*(_DWORD *)(a1 + 72) )
    return 3221225993LL;
  memset(v10, 0, 0x98uLL);
  v10[0] = v3;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4LL);
  v8 = *(_OWORD *)(a1 + 64);
  v10[2] = AnyMultiplexedVm;
  v10[3] = a2;
  *(_OWORD *)&v10[5] = v8;
  MiOutSwapWorkingSet(AnyMultiplexedVm, 0, a3 << 25 >> 16, a3 << 25 >> 16, (__int64)v10);
  result = 0LL;
  *(_OWORD *)(a1 + 64) = *(_OWORD *)&v10[5];
  return result;
}
