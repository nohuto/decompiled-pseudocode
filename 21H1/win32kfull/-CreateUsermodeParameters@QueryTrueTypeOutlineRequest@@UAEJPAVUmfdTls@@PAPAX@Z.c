/*
 * XREFs of ?CreateUsermodeParameters@QueryTrueTypeOutlineRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x24B5B0
 * Callers:
 *     _draw_nf_tb_no_to_temp_start@28 @ 0xBB33A (_draw_nf_tb_no_to_temp_start@28.c)
 *     _draw_f_ntb_o_to_temp_start@28 @ 0x246E3F (_draw_f_ntb_o_to_temp_start@28.c)
 *     _draw_f_tb_no_to_temp_start@28 @ 0x246F32 (_draw_f_tb_no_to_temp_start@28.c)
 * Callees:
 *     ?PrepareUsermodeFontObj@FontDriverDdiRequest@@KGXPAVUmfdTls@@PAU_FONTOBJ@@1@Z @ 0x8C392 (-PrepareUsermodeFontObj@FontDriverDdiRequest@@KGXPAVUmfdTls@@PAU_FONTOBJ@@1@Z.c)
 *     ?TryGetAlignedFieldSize@UmfdTls@@CG_NIPAI@Z @ 0x8C526 (-TryGetAlignedFieldSize@UmfdTls@@CG_NIPAI@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ??$CommitUMBuffer@U_QUERYTRUETYPEOUTLINEPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYTRUETYPEOUTLINEPARAMETERS@@IIII_N@Z @ 0x24AA32 (--$CommitUMBuffer@U_QUERYTRUETYPEOUTLINEPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYTRUETYPEO_ea_24AA32.c)
 */

int __thiscall QueryTrueTypeOutlineRequest::CreateUsermodeParameters(
        QueryTrueTypeOutlineRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  char AlignedFieldSize; // al
  int v7; // ecx
  unsigned int v8; // ebx
  _DWORD *v9; // edi
  size_t v10; // eax
  unsigned int v11; // eax
  int v13; // [esp-8h] [ebp-4Ch]
  struct _FONTOBJ *v14; // [esp+0h] [ebp-44h]
  struct _FONTOBJ *v15; // [esp+4h] [ebp-40h]
  unsigned int v16; // [esp+14h] [ebp-30h]
  int v17; // [esp+18h] [ebp-2Ch] BYREF
  unsigned int v18; // [esp+1Ch] [ebp-28h] BYREF
  unsigned int v19; // [esp+20h] [ebp-24h] BYREF
  unsigned int v20; // [esp+24h] [ebp-20h] BYREF
  size_t Size; // [esp+28h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]

  v17 = 0;
  Size = 0;
  v20 = 0;
  v18 = 0;
  v4 = 0;
  v19 = 0;
  v5 = *((_DWORD *)this + 10) != 0 ? 0x40 : 0;
  v16 = *((_DWORD *)this + 11);
  if ( !UmfdTls::TryGetAlignedFieldSize(0x20u, &Size) || !UmfdTls::TryGetAlignedFieldSize(0x2Cu, &v20) )
    return -1073741801;
  AlignedFieldSize = UmfdTls::TryGetAlignedFieldSize(v5, &v18);
  if ( AlignedFieldSize )
  {
    AlignedFieldSize = UmfdTls::TryGetAlignedFieldSize(v16, &v19);
    v4 = v19;
  }
  if ( !AlignedFieldSize )
    return -1073741801;
  v13 = v4;
  v8 = v18;
  UmfdTls::CommitUMBuffer<_QUERYTRUETYPEOUTLINEPARAMETERS>(a2, &v17, Size, v20, v18, v13, v7);
  v9 = (_DWORD *)v17;
  if ( !v17 )
    return -1073741801;
  v10 = v17 + Size;
  *((_DWORD *)this + 14) = v17 + Size;
  v11 = v20 + v10;
  *((_DWORD *)this + 15) = v11;
  *((_DWORD *)this + 16) = *((_DWORD *)this + 12) != 0 ? v11 + v8 : 0;
  ms_exc.registration.TryLevel = 0;
  *v9 = *((_DWORD *)this + 6);
  FontDriverDdiRequest::PrepareUsermodeFontObj(
    *((_DWORD *)this + 7),
    (int)a2,
    *((struct UmfdTls **)this + 14),
    v14,
    v15);
  v9[1] = *((_DWORD *)this + 14);
  v9[2] = *((_DWORD *)this + 8);
  v9[3] = *((_DWORD *)this + 9);
  if ( *((_DWORD *)this + 10) )
    v9[4] = *((_DWORD *)this + 15);
  v9[6] = *((_DWORD *)this + 16);
  v9[5] = *((_DWORD *)this + 11);
  ms_exc.registration.TryLevel = -2;
  *a3 = v9;
  return 0;
}
