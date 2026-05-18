/*
 * XREFs of sub_18000C29C @ 0x18000C29C
 * Callers:
 *     sub_18012625B @ 0x18012625B (sub_18012625B.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18000C29C(__int64 a1)
{
  if ( !*(_BYTE *)a1 )
    SetLastError(*(_DWORD *)(a1 + 4));
}
