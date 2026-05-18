/*
 * XREFs of sub_18000BF20 @ 0x18000BF20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BFA8 @ 0x18000BFA8 (sub_18000BFA8.c)
 *     _o___std_exception_copy @ 0x180123893 (_o___std_exception_copy.c)
 */

__int64 __fastcall sub_18000BF20(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v4; // rax
  __int64 v5; // rcx

  *(_QWORD *)a1 = &std::exception::`vftable';
  *(_OWORD *)(a1 + 8) = 0LL;
  o___std_exception_copy(a2 + 8);
  *(_QWORD *)a1 = &wil::ResultException::`vftable';
  sub_18000BFA8(a1 + 24, a2 + 24);
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  v4 = *(volatile signed __int32 **)(a2 + 184);
  v5 = *(_QWORD *)(a2 + 192);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 184) = v4;
    *(_QWORD *)(a1 + 192) = v5;
    _InterlockedIncrement(v4);
  }
  return a1;
}
