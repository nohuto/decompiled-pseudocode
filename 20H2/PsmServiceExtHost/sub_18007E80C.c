/*
 * XREFs of sub_18007E80C @ 0x18007E80C
 * Callers:
 *     sub_18007D9F0 @ 0x18007D9F0 (sub_18007D9F0.c)
 * Callees:
 *     sub_18001E400 @ 0x18001E400 (sub_18001E400.c)
 *     sub_18007E434 @ 0x18007E434 (sub_18007E434.c)
 *     sub_18007F028 @ 0x18007F028 (sub_18007F028.c)
 */

__int64 __fastcall sub_18007E80C(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  a2[1] = a2;
  *a2 = a2;
  while ( 1 )
  {
    result = sub_18001E400(a1, a2);
    if ( (_DWORD)result )
      break;
    sub_18007F028(a2);
    sub_18007E434((_QWORD **)a2);
  }
  return result;
}
