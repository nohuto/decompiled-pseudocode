/*
 * XREFs of sub_1800686F8 @ 0x1800686F8
 * Callers:
 *     sub_1800686D0 @ 0x1800686D0 (sub_1800686D0.c)
 *     sub_1800BE130 @ 0x1800BE130 (sub_1800BE130.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800686F8(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 56);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1);
  else
    return 2147500035LL;
}
