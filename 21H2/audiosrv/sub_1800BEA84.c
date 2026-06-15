/*
 * XREFs of sub_1800BEA84 @ 0x1800BEA84
 * Callers:
 *     sub_1800BDEB0 @ 0x1800BDEB0 (sub_1800BDEB0.c)
 *     sub_1800BE318 @ 0x1800BE318 (sub_1800BE318.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800BEA84(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4)
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
  return EtwTraceMessage(a1, 43LL, &unk_18016DA10, a2, a4);
}
