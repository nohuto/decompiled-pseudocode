/*
 * XREFs of ?_Calculate_growth@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEBA_K_K@Z @ 0x180037508
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800373B4 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_S.c)
 *     ??$_Emplace_reallocate@AEAUINPUT_SPACE_REGION@@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@QEAAPEAUINPUT_SPACE_REGION@@QEAU2@AEAU2@@Z @ 0x18012AB30 (--$_Emplace_reallocate@AEAUINPUT_SPACE_REGION@@@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPU.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::vector<INPUT_SPACE_REGION>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  unsigned __int64 result; // rax

  v3 = (a1[2] - *a1) / 200LL;
  v4 = v3 >> 1;
  if ( v3 > 0x147AE147AE147AELL - (v3 >> 1) )
    return a2;
  result = v4 + v3;
  if ( v4 + v3 < a2 )
    return a2;
  return result;
}
