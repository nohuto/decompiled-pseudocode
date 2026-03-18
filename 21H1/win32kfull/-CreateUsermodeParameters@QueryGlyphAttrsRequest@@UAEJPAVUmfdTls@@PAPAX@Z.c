/*
 * XREFs of ?CreateUsermodeParameters@QueryGlyphAttrsRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x24B4E8
 * Callers:
 *     _draw_nf_tb_no_to_temp_start@28 @ 0xBB33A (_draw_nf_tb_no_to_temp_start@28.c)
 *     _draw_f_ntb_o_to_temp_start@28 @ 0x246E3F (_draw_f_ntb_o_to_temp_start@28.c)
 *     _draw_f_tb_no_to_temp_start@28 @ 0x246F32 (_draw_f_tb_no_to_temp_start@28.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     ?PrepareUsermodeFontObj@FontDriverDdiRequest@@KGXPAVUmfdTls@@PAU_FONTOBJ@@1@Z @ 0x8C392 (-PrepareUsermodeFontObj@FontDriverDdiRequest@@KGXPAVUmfdTls@@PAU_FONTOBJ@@1@Z.c)
 *     ?CommitUMBuffer@UmfdTls@@QAEPAXK_N@Z @ 0x8C446 (-CommitUMBuffer@UmfdTls@@QAEPAXK_N@Z.c)
 *     ?TryGetAlignedFieldSize@UmfdTls@@CG_NIPAI@Z @ 0x8C526 (-TryGetAlignedFieldSize@UmfdTls@@CG_NIPAI@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __thiscall QueryGlyphAttrsRequest::CreateUsermodeParameters(
        QueryGlyphAttrsRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  size_t v4; // edi
  _DWORD *v5; // esi
  unsigned int v7; // [esp+0h] [ebp-34h]
  struct _FONTOBJ *v8; // [esp+0h] [ebp-34h]
  unsigned int *v9; // [esp+4h] [ebp-30h]
  struct _FONTOBJ *v10; // [esp+4h] [ebp-30h]
  int v11; // [esp+14h] [ebp-20h] BYREF
  size_t Size; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  Size = 0;
  v11 = 0;
  if ( !UmfdTls::TryGetAlignedFieldSize(0xCu, &Size) )
    return -1073741801;
  if ( !UmfdTls::TryGetAlignedFieldSize(0x2Cu, (unsigned int *)&v11) )
    return -1073741801;
  v4 = Size;
  if ( (ULongAdd(v11, Size, (int *)&Size, v7, v9) & 0x80000000) != 0 )
    return -1073741801;
  v5 = UmfdTls::CommitUMBuffer(a2, Size, 1);
  if ( !v5 )
    return -1073741801;
  ms_exc.registration.TryLevel = 0;
  *((_DWORD *)this + 9) = (char *)v5 + v4;
  FontDriverDdiRequest::PrepareUsermodeFontObj(
    *((_DWORD *)this + 6),
    (int)a2,
    (struct UmfdTls *)((char *)v5 + v4),
    v8,
    v10);
  *v5 = *((_DWORD *)this + 9);
  v5[1] = *((_DWORD *)this + 7);
  ms_exc.registration.TryLevel = -2;
  *a3 = v5;
  return 0;
}
