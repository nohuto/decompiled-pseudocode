/*
 * XREFs of NtUserCallOneParam @ 0x1C00928F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserCallOneParam(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx

  v2 = a2;
  if ( a2 - 44 > 0x27 )
    return 0LL;
  if ( a2 == 83 )
  {
    _mm_lfence();
    EnterSharedCrit(0LL, 1LL);
    v8 = ((__int64 (__fastcall *)(__int64))*(&apfnSimpleCall + v2))(a1);
  }
  else
  {
    if ( a2 == 76 )
      return ((__int64 (*)(void))*(&apfnSimpleCall + 76))();
    _mm_lfence();
    EnterCrit(0LL, 1LL);
    v4 = (__int64 *)((__int64 (__fastcall *)(__int64))*(&apfnSimpleCall + v2))(a1);
    v8 = (__int64)v4;
    if ( (unsigned int)v2 < 0x2E )
    {
      if ( v4 )
        v8 = *v4;
      else
        v8 = 0LL;
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v8;
}
