/*
 * XREFs of sub_1800FE770 @ 0x1800FE770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800FE770(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  if ( !a3 )
    return 2147500035LL;
  v3 = *a2;
  if ( !*a2 )
    v3 = a2[1] - 0x46000000000000C0LL;
  if ( !v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 20));
    *a3 = a1;
  }
  result = *a2 - 0x37C164B324918ACCLL;
  if ( *a2 == 0x37C164B324918ACCLL )
    result = a2[1] + 0x57A86691598B5674LL;
  if ( result )
  {
    result = 2147500034LL;
    a1 = 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 20));
  }
  *a3 = a1;
  return result;
}
