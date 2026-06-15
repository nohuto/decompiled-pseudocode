/*
 * XREFs of sub_1800210C0 @ 0x1800210C0
 * Callers:
 *     sub_18003C1E3 @ 0x18003C1E3 (sub_18003C1E3.c)
 * Callees:
 *     sub_18001B65C @ 0x18001B65C (sub_18001B65C.c)
 */

__int64 __fastcall sub_1800210C0(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return sub_18001B65C(*(_QWORD *)a1, **(_QWORD **)(a1 + 8));
  }
  return result;
}
