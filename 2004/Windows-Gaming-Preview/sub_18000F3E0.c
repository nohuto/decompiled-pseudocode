/*
 * XREFs of sub_18000F3E0 @ 0x18000F3E0
 * Callers:
 *     sub_18000FAFC @ 0x18000FAFC (sub_18000FAFC.c)
 *     sub_1800463BB @ 0x1800463BB (sub_1800463BB.c)
 * Callees:
 *     sub_1800120A0 @ 0x1800120A0 (sub_1800120A0.c)
 */

__int64 __fastcall sub_18000F3E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a2 + 40);
  if ( v2 )
  {
    *(_QWORD *)(a2 + 40) = 0LL;
    sub_1800120A0(v2);
  }
  WindowsDeleteString(*(HSTRING *)(a2 + 32));
  *(_QWORD *)(a2 + 32) = 0LL;
  return j_j__o_free(a2, 48LL);
}
