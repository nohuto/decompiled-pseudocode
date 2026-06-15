/*
 * XREFs of sub_1800601FC @ 0x1800601FC
 * Callers:
 *     sub_180008FF0 @ 0x180008FF0 (sub_180008FF0.c)
 *     sub_18005FECC @ 0x18005FECC (sub_18005FECC.c)
 *     sub_180136500 @ 0x180136500 (sub_180136500.c)
 *     sub_1801366A8 @ 0x1801366A8 (sub_1801366A8.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800601FC(__int64 a1)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = 0LL;
  do
  {
    result = ((v1 - 3) & 0xFFFFFFFFFFFFFFFDuLL) != 0;
    ++v1;
    *(_BYTE *)a1 = result;
    *(_DWORD *)(a1 + 4) = -2147023728;
    a1 += 24LL;
  }
  while ( v1 < 6 );
  return result;
}
