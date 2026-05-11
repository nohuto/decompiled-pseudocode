/*
 * XREFs of _ctrlfp @ 0x1C0012D40
 * Callers:
 *     _call_matherr @ 0x1C00125E8 (_call_matherr.c)
 *     _handle_error @ 0x1C001271C (_handle_error.c)
 * Callees:
 *     _set_fpsr @ 0x1C0012E10 (_set_fpsr.c)
 *     _get_fpsr @ 0x1C0013A70 (_get_fpsr.c)
 */

__int64 __fastcall ctrlfp(int a1, int a2)
{
  unsigned int fpsr; // esi
  __int64 v5; // rcx

  fpsr = get_fpsr();
  v5 = a2 & a1 | fpsr & (~(_WORD)a2 | 0xFFFF807F);
  if ( byte_1C001A520 && (((unsigned __int8)(a2 & a1) | fpsr & ((unsigned __int8)~(_BYTE)a2 | 0x7F)) & 0x40) != 0 )
    set_fpsr(v5);
  else
    set_fpsr((unsigned int)v5 & 0xFFFFFFBF);
  return fpsr;
}
