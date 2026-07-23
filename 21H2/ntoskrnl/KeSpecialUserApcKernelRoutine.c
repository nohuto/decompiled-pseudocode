/*
 * XREFs of KeSpecialUserApcKernelRoutine @ 0x1408BCD40
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeApc @ 0x140266E00 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x14027E260 (KeInsertQueueApc.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

char __fastcall KeSpecialUserApcKernelRoutine(__int64 a1, __int64 *a2, __int64 *a3, __int64 *a4, __int64 *a5)
{
  __int64 (__fastcall *v6)(__int64); // rsi
  __int64 v8; // r10
  char v9; // bl
  char result; // al

  v6 = *(__int64 (__fastcall **)(__int64))(a1 + 40);
  if ( *(_BYTE *)(a1 + 81) )
    return v6(a1);
  v8 = *a2;
  v9 = *(_BYTE *)(a1 + 1);
  *a2 = 0LL;
  KeInitializeApc(a1, (__int64)KeGetCurrentThread(), 0, (__int64)KeSpecialUserApcKernelRoutine, (__int64)v6, v8, 1, *a3);
  if ( (v9 & 1) != 0 )
    *(_BYTE *)(a1 + 1) |= 1u;
  result = KeInsertQueueApc(a1, *a4, *a5, 0);
  if ( !result )
    return v6(a1);
  return result;
}
