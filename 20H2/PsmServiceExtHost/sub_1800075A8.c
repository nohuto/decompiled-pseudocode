/*
 * XREFs of sub_1800075A8 @ 0x1800075A8
 * Callers:
 *     sub_1800082C0 @ 0x1800082C0 (sub_1800082C0.c)
 *     sub_180008408 @ 0x180008408 (sub_180008408.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800075A8(char a1)
{
  int v2; // [rsp+58h] [rbp+10h] BYREF
  int v3; // [rsp+5Ch] [rbp+14h]

  v3 = -1;
  v2 = (2 * a1) & 2 | 1;
  return NtUpdateWnfStateData(&unk_180095480, &v2, 8LL, 0LL, 0LL, 0, 0);
}
