/*
 * XREFs of ?CaptureUsermodeParameters@GetTrueTypeFileRequest@@UAEXPAX@Z @ 0x24ACA3
 * Callers:
 *     _draw_nf_tb_no_to_temp_start@28 @ 0xBB33A (_draw_nf_tb_no_to_temp_start@28.c)
 *     _draw_f_ntb_o_to_temp_start@28 @ 0x246E3F (_draw_f_ntb_o_to_temp_start@28.c)
 *     _draw_f_tb_no_to_temp_start@28 @ 0x246F32 (_draw_f_tb_no_to_temp_start@28.c)
 * Callees:
 *     ?Win32ProbeForRead@@YGXPAXKK@Z @ 0x8D388 (-Win32ProbeForRead@@YGXPAXKK@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

void __thiscall GetTrueTypeFileRequest::CaptureUsermodeParameters(GetTrueTypeFileRequest *this, _DWORD *a2)
{
  _DWORD *v3; // eax
  ULONG v4; // edi
  unsigned int v5; // [esp+0h] [ebp-30h]
  unsigned int v6; // [esp+4h] [ebp-2Ch]

  v3 = (_DWORD *)a2[1];
  if ( v3 )
  {
    v4 = a2[2];
    if ( v3 == *((_DWORD **)this + 9) )
    {
      **((_DWORD **)this + 7) = *v3;
      Win32ProbeForRead(**((_DWORD **)this + 7), v4, (void *)4, v5, v6);
      *((_DWORD *)this + 8) = v4;
    }
  }
}
