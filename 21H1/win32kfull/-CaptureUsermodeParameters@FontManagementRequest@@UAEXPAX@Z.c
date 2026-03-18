/*
 * XREFs of ?CaptureUsermodeParameters@FontManagementRequest@@UAEXPAX@Z @ 0x24ABF4
 * Callers:
 *     _draw_nf_tb_no_to_temp_start@28 @ 0xBB33A (_draw_nf_tb_no_to_temp_start@28.c)
 *     _draw_f_ntb_o_to_temp_start@28 @ 0x246E3F (_draw_f_ntb_o_to_temp_start@28.c)
 *     _draw_f_tb_no_to_temp_start@28 @ 0x246F32 (_draw_f_tb_no_to_temp_start@28.c)
 * Callees:
 *     ?CaptureUsermodeFontObj@FontDriverDdiRequest@@KG_NPAU_FONTOBJ@@0@Z @ 0x8C1D4 (-CaptureUsermodeFontObj@FontDriverDdiRequest@@KG_NPAU_FONTOBJ@@0@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

void __thiscall FontManagementRequest::CaptureUsermodeParameters(FontManagementRequest *this, _DWORD *a2)
{
  const void *v4; // ebx
  int v5; // eax
  int v6; // ecx
  void *v7; // eax
  void *v8; // [esp+3Ch] [ebp+8h]

  v8 = (void *)a2[4];
  v4 = (const void *)a2[6];
  v5 = a2[1];
  v6 = *((_DWORD *)this + 7);
  if ( v6 )
  {
    if ( v5 != *((_DWORD *)this + 14) || !FontDriverDdiRequest::CaptureUsermodeFontObj(v6, v5) )
      return;
  }
  else if ( v5 )
  {
    return;
  }
  if ( v8 == *((void **)this + 15) && v4 == *((const void **)this + 16) )
  {
    v7 = (void *)*((_DWORD *)this + 12);
    if ( v7 )
      memcpy(v7, v4, *((_DWORD *)this + 11));
    *((_DWORD *)this + 13) = a2[7];
  }
}
