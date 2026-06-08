/*
 * XREFs of RegisterHiddenIdleStates @ 0x1C00355C0
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0003B20 (RegisterKernelIdleStates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00044E0 (_guard_dispatch_icall_nop.c)
 *     DecodeAcpi2CState @ 0x1C0025738 (DecodeAcpi2CState.c)
 */

__int64 __fastcall RegisterHiddenIdleStates(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v3; // rdx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( *(_DWORD *)(a1 + 80) != 2 )
    return 3221225485LL;
  if ( !HalPrivateDispatchTable[147] )
    return 3221225659LL;
  v3 = *(_DWORD **)(a1 + 512);
  if ( !v3 || !*v3 || (*(_DWORD *)(a1 + 272) & 0x7F077) == 0 )
    return 3221225473LL;
  result = DecodeAcpi2CState(a1, (__int64)&v3[5 * (*v3 - 1) + 1], &v4, 0LL, 0LL);
  if ( (int)result >= 0 )
    return ((__int64 (__fastcall *)(_QWORD, __int64))HalPrivateDispatchTable[147])(*(unsigned int *)(a1 + 84), v4);
  return result;
}
