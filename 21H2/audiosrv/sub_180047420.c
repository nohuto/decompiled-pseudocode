/*
 * XREFs of sub_180047420 @ 0x180047420
 * Callers:
 *     ??$_Parse_fp_with_locale@$0A@@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@CA?AU_Num_get_parse_result@1@QEADHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@1@1AEBVlocale@1@@Z @ 0x1800121B0 (--$_Parse_fp_with_locale@$0A@@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@.c)
 *     sub_180012550 @ 0x180012550 (sub_180012550.c)
 *     sub_180020090 @ 0x180020090 (sub_180020090.c)
 *     sub_180021FB0 @ 0x180021FB0 (sub_180021FB0.c)
 *     sub_18005CD7C @ 0x18005CD7C (sub_18005CD7C.c)
 *     sub_18005D590 @ 0x18005D590 (sub_18005D590.c)
 *     sub_180116778 @ 0x180116778 (sub_180116778.c)
 *     sub_180117A50 @ 0x180117A50 (sub_180117A50.c)
 *     sub_180117D48 @ 0x180117D48 (sub_180117D48.c)
 *     sub_180117FF4 @ 0x180117FF4 (sub_180117FF4.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_180047420(__int64 a1)
{
  __int64 v1; // rdx
  _BOOL8 result; // rax

  result = 0;
  if ( a1 )
  {
    if ( *(_WORD *)a1 == 65 )
    {
      v1 = *(unsigned int *)(a1 + 8);
      if ( (unsigned int)v1 >= 0x12 && v1 == *(unsigned __int16 *)(*(_QWORD *)(a1 + 16) + 16LL) + 18LL )
        return 1;
    }
  }
  return result;
}
