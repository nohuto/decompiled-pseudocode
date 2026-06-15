/*
 * XREFs of sub_1800330C0 @ 0x1800330C0
 * Callers:
 *     sub_18003CB9B @ 0x18003CB9B (sub_18003CB9B.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800330C0(void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    CoTaskMemFree(v1);
}
