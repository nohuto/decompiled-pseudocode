/*
 * XREFs of sub_18002F5C0 @ 0x18002F5C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002F5C0(__int64 a1)
{
  _QWORD *v1; // r8

  v1 = *(_QWORD **)(a1 + 72);
  if ( v1[22] == *(_QWORD *)(a1 + 80) )
    return (*(__int64 (__fastcall **)(_QWORD))(*v1 + 56LL))(*(_QWORD *)(a1 + 72));
  RoOriginateError(2147483660LL, 0LL);
  return 2147483660LL;
}
