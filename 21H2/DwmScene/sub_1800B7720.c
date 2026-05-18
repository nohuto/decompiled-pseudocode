/*
 * XREFs of sub_1800B7720 @ 0x1800B7720
 * Callers:
 *     sub_1800B6A24 @ 0x1800B6A24 (sub_1800B6A24.c)
 * Callees:
 *     sub_1800B5EAC @ 0x1800B5EAC (sub_1800B5EAC.c)
 *     sub_1800B5F9C @ 0x1800B5F9C (sub_1800B5F9C.c)
 *     sub_1800B608C @ 0x1800B608C (sub_1800B608C.c)
 *     sub_1800B617C @ 0x1800B617C (sub_1800B617C.c)
 *     sub_1800B626C @ 0x1800B626C (sub_1800B626C.c)
 *     sub_1800B635C @ 0x1800B635C (sub_1800B635C.c)
 *     sub_1800B644C @ 0x1800B644C (sub_1800B644C.c)
 */

int __fastcall sub_1800B7720(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 496;
  sub_1800B617C(a1 + 496);
  sub_1800B5EAC(v1);
  sub_1800B608C(v1);
  sub_1800B644C(v1);
  sub_1800B5F9C(v1);
  sub_1800B635C(v1);
  sub_1800B626C(v1);
  return sub_1800B653C(v1);
}
