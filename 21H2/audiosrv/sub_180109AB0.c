/*
 * XREFs of sub_180109AB0 @ 0x180109AB0
 * Callers:
 *     sub_180109B18 @ 0x180109B18 (sub_180109B18.c)
 *     sub_180109B90 @ 0x180109B90 (sub_180109B90.c)
 * Callees:
 *     sub_180109E10 @ 0x180109E10 (sub_180109E10.c)
 */

int __fastcall sub_180109AB0(__int64 a1)
{
  ULONGLONG TickCount64; // rax
  __int64 v3; // rdx

  *(_QWORD *)a1 = off_180149728;
  TickCount64 = GetTickCount64();
  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    if ( TickCount64 - *(_QWORD *)(a1 + 48) > *(_QWORD *)(a1 + 40) )
    {
      LOBYTE(v3) = 1;
      sub_180109E10(a1, v3);
    }
  }
  return sub_180109A24(a1, v3);
}
