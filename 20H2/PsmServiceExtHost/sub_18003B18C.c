/*
 * XREFs of sub_18003B18C @ 0x18003B18C
 * Callers:
 *     sub_18003ACB0 @ 0x18003ACB0 (sub_18003ACB0.c)
 *     sub_1800644CC @ 0x1800644CC (sub_1800644CC.c)
 *     sub_1800646F4 @ 0x1800646F4 (sub_1800646F4.c)
 *     sub_1800649C0 @ 0x1800649C0 (sub_1800649C0.c)
 * Callees:
 *     sub_1800383E4 @ 0x1800383E4 (sub_1800383E4.c)
 */

void __fastcall sub_18003B18C(void **a1, void *a2)
{
  void *v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    sub_1800383E4(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
