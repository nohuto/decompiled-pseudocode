/*
 * XREFs of sub_18012E930 @ 0x18012E930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18012E930(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 80);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 72LL))(v1);
  else
    return 2147500033LL;
}
