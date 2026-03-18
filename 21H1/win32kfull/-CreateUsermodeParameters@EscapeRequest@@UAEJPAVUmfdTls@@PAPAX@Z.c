/*
 * XREFs of ?CreateUsermodeParameters@EscapeRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x24B15C
 * Callers:
 *     _draw_nf_tb_no_to_temp_start@28 @ 0xBB33A (_draw_nf_tb_no_to_temp_start@28.c)
 *     _draw_f_ntb_o_to_temp_start@28 @ 0x246E3F (_draw_f_ntb_o_to_temp_start@28.c)
 *     _draw_f_tb_no_to_temp_start@28 @ 0x246F32 (_draw_f_tb_no_to_temp_start@28.c)
 * Callees:
 *     ?TryGetAlignedFieldSize@UmfdTls@@CG_NIPAI@Z @ 0x8C526 (-TryGetAlignedFieldSize@UmfdTls@@CG_NIPAI@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ??$CommitUMBuffer@U_FONTMANAGEMENTPARAMETERS@@@UmfdTls@@QAEXPAPAU_FONTMANAGEMENTPARAMETERS@@III_N@Z @ 0x24A9C4 (--$CommitUMBuffer@U_FONTMANAGEMENTPARAMETERS@@@UmfdTls@@QAEXPAPAU_FONTMANAGEMENTPARAMETERS@@III_.c)
 */

int __thiscall EscapeRequest::CreateUsermodeParameters(EscapeRequest *this, struct UmfdTls *a2, void **a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  int v6; // ecx
  unsigned int v7; // ebx
  _DWORD *v8; // edi
  size_t v9; // eax
  const void *v10; // eax
  int v12; // [esp+14h] [ebp-28h] BYREF
  unsigned int v13; // [esp+18h] [ebp-24h] BYREF
  int v14; // [esp+1Ch] [ebp-20h] BYREF
  size_t Size; // [esp+20h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  v12 = 0;
  Size = 0;
  v13 = 0;
  v14 = 0;
  v4 = *((_DWORD *)this + 10);
  v5 = *((_DWORD *)this + 8);
  if ( !UmfdTls::TryGetAlignedFieldSize(0x1Cu, &Size) )
    return -1073741801;
  if ( !UmfdTls::TryGetAlignedFieldSize(v5, &v13) )
    return -1073741801;
  if ( !UmfdTls::TryGetAlignedFieldSize(v4, (unsigned int *)&v14) )
    return -1073741801;
  v7 = v13;
  UmfdTls::CommitUMBuffer<_FONTMANAGEMENTPARAMETERS>(a2, &v12, Size, v13, v14, v6);
  v8 = (_DWORD *)v12;
  if ( !v12 )
    return -1073741801;
  v9 = v12 + Size;
  *((_DWORD *)this + 13) = v12 + Size;
  *((_DWORD *)this + 14) = v7 + v9;
  ms_exc.registration.TryLevel = 0;
  v10 = (const void *)*((_DWORD *)this + 9);
  if ( v10 )
    memcpy(*((void **)this + 13), v10, *((_DWORD *)this + 8));
  else
    *((_DWORD *)this + 13) = 0;
  if ( !*((_DWORD *)this + 11) )
    *((_DWORD *)this + 14) = 0;
  *v8 = 0;
  v8[1] = *((_DWORD *)this + 7);
  v8[2] = *((_DWORD *)this + 8);
  v8[3] = *((_DWORD *)this + 13);
  v8[4] = *((_DWORD *)this + 10);
  v8[5] = *((_DWORD *)this + 14);
  ms_exc.registration.TryLevel = -2;
  *a3 = v8;
  return 0;
}
