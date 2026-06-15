/*
 * XREFs of sub_18012EBD0 @ 0x18012EBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18012EBD0(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 80);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 48LL))(v1);
  else
    return 2147500033LL;
}
