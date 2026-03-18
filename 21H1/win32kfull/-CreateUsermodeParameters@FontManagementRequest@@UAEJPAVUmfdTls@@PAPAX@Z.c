/*
 * XREFs of ?CreateUsermodeParameters@FontManagementRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x24B270
 * Callers:
 *     _draw_nf_tb_no_to_temp_start@28 @ 0xBB33A (_draw_nf_tb_no_to_temp_start@28.c)
 *     _draw_f_ntb_o_to_temp_start@28 @ 0x246E3F (_draw_f_ntb_o_to_temp_start@28.c)
 *     _draw_f_tb_no_to_temp_start@28 @ 0x246F32 (_draw_f_tb_no_to_temp_start@28.c)
 * Callees:
 *     ?PrepareUsermodeFontObj@FontDriverDdiRequest@@KGXPAVUmfdTls@@PAU_FONTOBJ@@1@Z @ 0x8C392 (-PrepareUsermodeFontObj@FontDriverDdiRequest@@KGXPAVUmfdTls@@PAU_FONTOBJ@@1@Z.c)
 *     ?TryGetAlignedFieldSize@UmfdTls@@CG_NIPAI@Z @ 0x8C526 (-TryGetAlignedFieldSize@UmfdTls@@CG_NIPAI@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ??$CommitUMBuffer@U_QUERYTRUETYPEOUTLINEPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYTRUETYPEOUTLINEPARAMETERS@@IIII_N@Z @ 0x24AA32 (--$CommitUMBuffer@U_QUERYTRUETYPEOUTLINEPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYTRUETYPEO_ea_24AA32.c)
 */

int __thiscall FontManagementRequest::CreateUsermodeParameters(
        FontManagementRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  int v4; // edi
  unsigned int v5; // ebx
  char AlignedFieldSize; // al
  int v7; // ecx
  unsigned int v8; // ebx
  _DWORD *v9; // edi
  size_t v10; // eax
  unsigned int v11; // eax
  const void *v12; // eax
  int v13; // edx
  struct _FONTOBJ *v15; // [esp+0h] [ebp-44h]
  struct _FONTOBJ *v16; // [esp+4h] [ebp-40h]
  unsigned int v17; // [esp+14h] [ebp-30h]
  int v18; // [esp+18h] [ebp-2Ch] BYREF
  unsigned int v19; // [esp+1Ch] [ebp-28h] BYREF
  int v20; // [esp+20h] [ebp-24h] BYREF
  unsigned int v21; // [esp+24h] [ebp-20h] BYREF
  size_t Size; // [esp+28h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]

  v18 = 0;
  Size = 0;
  v21 = 0;
  v19 = 0;
  v4 = 0;
  v20 = 0;
  v17 = *((_DWORD *)this + 11);
  v5 = *((_DWORD *)this + 9);
  if ( !UmfdTls::TryGetAlignedFieldSize(0x20u, &Size) || !UmfdTls::TryGetAlignedFieldSize(0x2Cu, &v21) )
    return -1073741801;
  AlignedFieldSize = UmfdTls::TryGetAlignedFieldSize(v5, &v19);
  if ( AlignedFieldSize )
  {
    AlignedFieldSize = UmfdTls::TryGetAlignedFieldSize(v17, (unsigned int *)&v20);
    v4 = v20;
  }
  if ( !AlignedFieldSize )
    return -1073741801;
  v8 = v19;
  UmfdTls::CommitUMBuffer<_QUERYTRUETYPEOUTLINEPARAMETERS>(a2, &v18, Size, v21, v19, v4, v7);
  v9 = (_DWORD *)v18;
  if ( !v18 )
    return -1073741801;
  v10 = v18 + Size;
  *((_DWORD *)this + 14) = v18 + Size;
  v11 = v21 + v10;
  *((_DWORD *)this + 15) = v11;
  *((_DWORD *)this + 16) = v8 + v11;
  ms_exc.registration.TryLevel = 0;
  v12 = (const void *)*((_DWORD *)this + 10);
  if ( v12 )
    memcpy(*((void **)this + 15), v12, *((_DWORD *)this + 9));
  else
    *((_DWORD *)this + 15) = 0;
  if ( !*((_DWORD *)this + 12) )
    *((_DWORD *)this + 16) = 0;
  v13 = *((_DWORD *)this + 7);
  if ( v13 )
  {
    FontDriverDdiRequest::PrepareUsermodeFontObj(v13, (int)a2, *((struct UmfdTls **)this + 14), v15, v16);
    v9[1] = *((_DWORD *)this + 14);
  }
  *v9 = 0;
  v9[2] = *((_DWORD *)this + 8);
  v9[3] = *((_DWORD *)this + 9);
  v9[4] = *((_DWORD *)this + 15);
  v9[5] = *((_DWORD *)this + 11);
  v9[6] = *((_DWORD *)this + 16);
  ms_exc.registration.TryLevel = -2;
  *a3 = v9;
  return 0;
}
