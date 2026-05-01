/*
 * XREFs of sub_18000934C @ 0x18000934C
 * Callers:
 *     sub_18000B190 @ 0x18000B190 (sub_18000B190.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000934C(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 40) )
  {
    TpSetWait(*(_QWORD *)(a1 + 80), *(_QWORD *)(a1 + 64), 0LL);
    result = TpSetWait(*(_QWORD *)(a1 + 88), *(_QWORD *)(a1 + 72), 0LL);
  }
  *(_DWORD *)(a1 + 32) |= 0x10u;
  return result;
}
