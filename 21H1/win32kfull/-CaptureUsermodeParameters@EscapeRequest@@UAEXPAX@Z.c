/*
 * XREFs of ?CaptureUsermodeParameters@EscapeRequest@@UAEXPAX@Z @ 0x24AB70
 * Callers:
 *     _draw_nf_tb_no_to_temp_start@28 @ 0xBB33A (_draw_nf_tb_no_to_temp_start@28.c)
 *     _draw_f_ntb_o_to_temp_start@28 @ 0x246E3F (_draw_f_ntb_o_to_temp_start@28.c)
 *     _draw_f_tb_no_to_temp_start@28 @ 0x246F32 (_draw_f_tb_no_to_temp_start@28.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

void __thiscall EscapeRequest::CaptureUsermodeParameters(EscapeRequest *this, _DWORD *a2)
{
  const void *v3; // ecx
  int v4; // edi
  void *v5; // eax

  v3 = (const void *)a2[5];
  v4 = a2[6];
  if ( a2[3] == *((_DWORD *)this + 13) && v3 == *((const void **)this + 14) )
  {
    v5 = (void *)*((_DWORD *)this + 11);
    if ( v5 )
      memcpy(v5, v3, *((_DWORD *)this + 10));
    *((_DWORD *)this + 12) = v4;
  }
}
