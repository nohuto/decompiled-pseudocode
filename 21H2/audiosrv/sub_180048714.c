/*
 * XREFs of sub_180048714 @ 0x180048714
 * Callers:
 *     ??$_Parse_fp_with_locale@$0A@@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@CA?AU_Num_get_parse_result@1@QEADHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@1@1AEBVlocale@1@@Z @ 0x1800121B0 (--$_Parse_fp_with_locale@$0A@@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@.c)
 *     sub_180012550 @ 0x180012550 (sub_180012550.c)
 *     sub_180046A30 @ 0x180046A30 (sub_180046A30.c)
 *     sub_180048E60 @ 0x180048E60 (sub_180048E60.c)
 *     sub_1800D5E18 @ 0x1800D5E18 (sub_1800D5E18.c)
 *     sub_1800D652C @ 0x1800D652C (sub_1800D652C.c)
 *     sub_1800D672C @ 0x1800D672C (sub_1800D672C.c)
 *     sub_1800D76E0 @ 0x1800D76E0 (sub_1800D76E0.c)
 *     sub_1800DB7BC @ 0x1800DB7BC (sub_1800DB7BC.c)
 *     sub_1800DE2A0 @ 0x1800DE2A0 (sub_1800DE2A0.c)
 *     sub_180115E74 @ 0x180115E74 (sub_180115E74.c)
 *     sub_180115FD8 @ 0x180115FD8 (sub_180115FD8.c)
 *     sub_180116134 @ 0x180116134 (sub_180116134.c)
 *     sub_180116450 @ 0x180116450 (sub_180116450.c)
 *     sub_180117A50 @ 0x180117A50 (sub_180117A50.c)
 *     sub_180117D48 @ 0x180117D48 (sub_180117D48.c)
 *     sub_180117FF4 @ 0x180117FF4 (sub_180117FF4.c)
 *     sub_180119F84 @ 0x180119F84 (sub_180119F84.c)
 *     sub_18011BFE4 @ 0x18011BFE4 (sub_18011BFE4.c)
 *     sub_18012E990 @ 0x18012E990 (sub_18012E990.c)
 *     sub_18012EFF0 @ 0x18012EFF0 (sub_18012EFF0.c)
 * Callees:
 *     memcpy @ 0x18007443F (memcpy.c)
 */

__int64 __fastcall sub_180048714(unsigned __int16 *Src, _QWORD *a2)
{
  __int64 v2; // rsi
  void *v5; // rax
  unsigned int v6; // ebx
  void *v7; // rdi
  __int64 result; // rax

  v2 = Src[8];
  v5 = CoTaskMemAlloc(v2 + 18);
  v6 = 0;
  v7 = v5;
  if ( v5 )
    memcpy(v5, Src, v2 + 18);
  else
    v6 = -2147024882;
  result = v6;
  *a2 = v7;
  return result;
}
