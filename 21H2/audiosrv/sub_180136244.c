/*
 * XREFs of sub_180136244 @ 0x180136244
 * Callers:
 *     sub_180134C8C @ 0x180134C8C (sub_180134C8C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180136244(__int64 a1)
{
  _BYTE *v1; // rcx
  __int64 result; // rax

  v1 = (_BYTE *)(a1 + 1);
  result = 6LL;
  do
  {
    *v1 = 1;
    v1 += 24;
    --result;
  }
  while ( result );
  return result;
}
