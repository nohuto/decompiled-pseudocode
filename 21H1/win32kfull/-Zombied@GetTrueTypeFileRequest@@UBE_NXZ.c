/*
 * XREFs of ?Zombied@GetTrueTypeFileRequest@@UBE_NXZ @ 0xB57DE
 * Callers:
 *     _draw_nf_tb_no_to_temp_start@28 @ 0xBB33A (_draw_nf_tb_no_to_temp_start@28.c)
 *     _draw_f_ntb_o_to_temp_start@28 @ 0x246E3F (_draw_f_ntb_o_to_temp_start@28.c)
 *     _draw_f_tb_no_to_temp_start@28 @ 0x246F32 (_draw_f_tb_no_to_temp_start@28.c)
 * Callees:
 *     <none>
 */

bool __thiscall GetTrueTypeFileRequest::Zombied(GetTrueTypeFileRequest *this)
{
  return *(_BYTE *)(*((_DWORD *)this + 6) + 8);
}
