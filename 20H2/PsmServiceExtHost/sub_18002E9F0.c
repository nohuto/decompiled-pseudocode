/*
 * XREFs of sub_18002E9F0 @ 0x18002E9F0
 * Callers:
 *     sub_18002EE08 @ 0x18002EE08 (sub_18002EE08.c)
 *     sub_18002F12C @ 0x18002F12C (sub_18002F12C.c)
 *     sub_18002FB90 @ 0x18002FB90 (sub_18002FB90.c)
 *     sub_180034234 @ 0x180034234 (sub_180034234.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18002E9F0(__int64 a1, _WORD *a2)
{
  __int64 v2; // rax
  int v3; // r8d

  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( a2[v2] );
    v3 = 2 * v2 + 2;
  }
  else
  {
    a2 = &unk_180095550;
    v3 = 2;
  }
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = v3;
  *(_DWORD *)(a1 + 12) = 0;
}
