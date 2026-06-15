/*
 * XREFs of sub_18000F92C @ 0x18000F92C
 * Callers:
 *     sub_18003B7F8 @ 0x18003B7F8 (sub_18003B7F8.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18000F92C(_Mtx_t *a1)
{
  int v1; // eax

  v1 = Mtx_unlock(*a1);
  if ( v1 )
    std::_Throw_C_error(v1);
}
