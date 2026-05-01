/*
 * XREFs of sub_18003B130 @ 0x18003B130
 * Callers:
 *     sub_18003ACB0 @ 0x18003ACB0 (sub_18003ACB0.c)
 *     sub_1800644CC @ 0x1800644CC (sub_1800644CC.c)
 *     sub_180065BE0 @ 0x180065BE0 (sub_180065BE0.c)
 *     sub_180065C70 @ 0x180065C70 (sub_180065C70.c)
 * Callees:
 *     sub_1800649E8 @ 0x1800649E8 (sub_1800649E8.c)
 */

_QWORD *__fastcall sub_18003B130(HANDLE *a1, _QWORD *a2)
{
  HANDLE v2; // rdi
  DWORD v4; // eax
  HANDLE v5; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a1;
  v4 = WaitForSingleObjectEx(*a1, 0xFFFFFFFF, 0);
  v5 = 0LL;
  if ( v4 == 258 )
    goto LABEL_5;
  if ( v4 )
  {
    if ( v4 != 128 )
    {
      sub_1800649E8(retaddr);
      __debugbreak();
    }
LABEL_5:
    if ( (v4 & 0xFFFFFF7F) != 0 )
      goto LABEL_4;
  }
  v5 = v2;
LABEL_4:
  *a2 = v5;
  return a2;
}
