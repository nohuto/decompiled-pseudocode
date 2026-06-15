/*
 * XREFs of sub_18012D84C @ 0x18012D84C
 * Callers:
 *     sub_18007C932 @ 0x18007C932 (sub_18007C932.c)
 * Callees:
 *     sub_180047614 @ 0x180047614 (sub_180047614.c)
 */

RPC_STATUS __fastcall sub_18012D84C(void **a1)
{
  void *v1; // rcx
  RPC_STATUS result; // eax

  v1 = *a1;
  if ( v1 )
    return sub_180047614(v1);
  return result;
}
