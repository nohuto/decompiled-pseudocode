/*
 * XREFs of sub_180006BF4 @ 0x180006BF4
 * Callers:
 *     sub_18003BCB7 @ 0x18003BCB7 (sub_18003BCB7.c)
 *     sub_18003BDFC @ 0x18003BDFC (sub_18003BDFC.c)
 *     sub_18003BE15 @ 0x18003BE15 (sub_18003BE15.c)
 *     sub_18003C153 @ 0x18003C153 (sub_18003C153.c)
 *     sub_18003C189 @ 0x18003C189 (sub_18003C189.c)
 *     sub_18003C1BF @ 0x18003C1BF (sub_18003C1BF.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_180006BF4(void **a1)
{
  char *v1; // rcx
  int result; // eax

  v1 = (char *)*a1;
  result = (_DWORD)v1 - 1;
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return CloseHandle(v1);
  return result;
}
