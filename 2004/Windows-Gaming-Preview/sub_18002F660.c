/*
 * XREFs of sub_18002F660 @ 0x18002F660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002F660(__int64 a1)
{
  __int64 v1; // r8

  v1 = *(_QWORD *)(a1 + 56);
  if ( *(_QWORD *)(v1 + 176) == *(_QWORD *)(a1 + 64) )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 16) + 48LL))(v1 + 16);
  RoOriginateError(2147483660LL, 0LL);
  return 2147483660LL;
}
