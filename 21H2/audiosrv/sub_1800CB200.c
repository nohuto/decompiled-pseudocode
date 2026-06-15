/*
 * XREFs of sub_1800CB200 @ 0x1800CB200
 * Callers:
 *     sub_18002E0E0 @ 0x18002E0E0 (sub_18002E0E0.c)
 *     sub_18002E7C0 @ 0x18002E7C0 (sub_18002E7C0.c)
 *     sub_1800CB980 @ 0x1800CB980 (sub_1800CB980.c)
 *     sub_1800FD670 @ 0x1800FD670 (sub_1800FD670.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800CB200(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, a3, a2, a4);
}
