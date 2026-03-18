/*
 * XREFs of ?GetDrvType@UnloadFontFileRequest@@UBE?AW4FontDriverType@@XZ @ 0xB5788
 * Callers:
 *     _draw_nf_tb_no_to_temp_start@28 @ 0xBB33A (_draw_nf_tb_no_to_temp_start@28.c)
 *     _draw_f_ntb_o_to_temp_start@28 @ 0x246E3F (_draw_f_ntb_o_to_temp_start@28.c)
 *     _draw_f_tb_no_to_temp_start@28 @ 0x246F32 (_draw_f_tb_no_to_temp_start@28.c)
 * Callees:
 *     <none>
 */

int __thiscall UnloadFontFileRequest::GetDrvType(_DWORD *this)
{
  return *(_DWORD *)(this[6] + 4);
}
