/*
 * XREFs of PropertyInitializeBooleanCache @ 0x1C0028B10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00133D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PropertyInitializeBooleanCache(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // r9
  int v5; // [rsp+58h] [rbp+10h] BYREF

  v3 = *a3;
  v5 = 0;
  return (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *, __int64, int, int *))(a2 + 136))(
           a1,
           a2,
           a3 + 3,
           v3,
           129,
           &v5);
}
