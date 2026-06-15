/*
 * XREFs of sub_1800381E0 @ 0x1800381E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 (__fastcall **__fastcall sub_1800381E0(__int64 a1, __int64 a2))(LPVOID lpMem)
{
  __int64 (__fastcall **result)(LPVOID); // rax

  result = &off_18003F838;
  *(_QWORD *)a2 = &off_18003F838;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  return result;
}
