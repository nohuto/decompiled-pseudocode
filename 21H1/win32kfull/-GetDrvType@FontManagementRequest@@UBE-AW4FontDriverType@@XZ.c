/*
 * XREFs of ?GetDrvType@FontManagementRequest@@UBE?AW4FontDriverType@@XZ @ 0x24A6D8
 * Callers:
 *     _draw_nf_tb_no_to_temp_start@28 @ 0xBB33A (_draw_nf_tb_no_to_temp_start@28.c)
 *     _draw_f_ntb_o_to_temp_start@28 @ 0x246E3F (_draw_f_ntb_o_to_temp_start@28.c)
 *     _draw_f_tb_no_to_temp_start@28 @ 0x246F32 (_draw_f_tb_no_to_temp_start@28.c)
 *     _UmfdFontManagement@28 @ 0x24A78E (_UmfdFontManagement@28.c)
 * Callees:
 *     <none>
 */

int __thiscall FontManagementRequest::GetDrvType(_DWORD *this)
{
  int v1; // eax

  v1 = this[7];
  if ( v1 )
    return *(_DWORD *)(*(_DWORD *)(v1 + 20) + 4);
  else
    return 3;
}
