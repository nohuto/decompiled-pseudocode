/*
 * XREFs of sub_18001F7D0 @ 0x18001F7D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001C4E4 @ 0x18001C4E4 (sub_18001C4E4.c)
 */

__int64 __fastcall sub_18001F7D0(__int64 a1, int a2, int a3, __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 40);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)sub_18001C4E4((_QWORD *)(a1 + 8), a4);
  return (unsigned int)a3;
}
