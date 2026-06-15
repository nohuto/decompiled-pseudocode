/*
 * XREFs of sub_18004BBD0 @ 0x18004BBD0
 * Callers:
 *     ??$_Parse_fp_with_locale@$0A@@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@CA?AU_Num_get_parse_result@1@QEADHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@1@1AEBVlocale@1@@Z @ 0x1800121B0 (--$_Parse_fp_with_locale@$0A@@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@.c)
 *     sub_180048E60 @ 0x180048E60 (sub_180048E60.c)
 *     sub_1800D76E0 @ 0x1800D76E0 (sub_1800D76E0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18004BBD0(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int16 v3; // ax
  unsigned __int16 v4; // cx
  int v5; // eax

  if ( a1 )
  {
    if ( *(_WORD *)a1 == 1 )
      goto LABEL_8;
    if ( *(_WORD *)a1 == 0xFFFE )
    {
      v2 = 0x10000000000001LL - *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(a1 + 24) == 0x10000000000001LL )
        v2 = 0x719B3800AA000080LL - *(_QWORD *)(a1 + 32);
      if ( !v2 && (*(_BYTE *)(a1 + 18) & 7) == 0 )
      {
LABEL_8:
        if ( *(_WORD *)a1 == 1 )
        {
          *(_WORD *)a1 = 3;
        }
        else
        {
          *(_WORD *)(a1 + 18) = 32;
          *(_OWORD *)(a1 + 24) = *(_OWORD *)&xmmword_18015B720;
        }
        v3 = 4 * *(_WORD *)(a1 + 2);
        *(_WORD *)(a1 + 14) = 32;
        v4 = v3;
        v5 = v3 * *(_DWORD *)(a1 + 4);
        *(_WORD *)(a1 + 12) = v4;
        *(_DWORD *)(a1 + 8) = v5;
      }
    }
  }
}
