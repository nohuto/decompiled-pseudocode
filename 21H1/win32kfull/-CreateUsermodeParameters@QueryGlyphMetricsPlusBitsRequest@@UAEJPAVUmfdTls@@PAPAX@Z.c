/*
 * XREFs of ?CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0xF8A50
 * Callers:
 *     <none>
 * Callees:
 *     ?PrepareUsermodeFontObj@FontDriverDdiRequest@@KGXPAVUmfdTls@@PAU_FONTOBJ@@1@Z @ 0x8C392 (-PrepareUsermodeFontObj@FontDriverDdiRequest@@KGXPAVUmfdTls@@PAU_FONTOBJ@@1@Z.c)
 *     ??$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYFONTDATAPARAMETERS@@IIIII_N@Z @ 0x8C3E4 (--$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYFONTDATAPARAMETERS@@IIIII_.c)
 *     ?TryComputeAlignedFieldSizes@UmfdTls@@SG_NIPAII0@Z @ 0x8C424 (-TryComputeAlignedFieldSizes@UmfdTls@@SG_NIPAII0@Z.c)
 *     ?TryGetAlignedFieldSize@UmfdTls@@CG_NIPAI@Z @ 0x8C526 (-TryGetAlignedFieldSize@UmfdTls@@CG_NIPAI@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __thiscall QueryGlyphMetricsPlusBitsRequest::CreateUsermodeParameters(
        QueryGlyphMetricsPlusBitsRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  int v4; // ebx
  int v5; // ecx
  _DWORD *v7; // edi
  size_t v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  struct _FONTOBJ *v12; // [esp+0h] [ebp-4Ch]
  struct _FONTOBJ *v13; // [esp+4h] [ebp-48h]
  int v14; // [esp+14h] [ebp-38h]
  int v15; // [esp+1Ch] [ebp-30h] BYREF
  size_t MaxCount; // [esp+20h] [ebp-2Ch] BYREF
  unsigned int v17; // [esp+24h] [ebp-28h]
  unsigned int v18; // [esp+28h] [ebp-24h] BYREF
  unsigned int v19; // [esp+2Ch] [ebp-20h] BYREF
  size_t Size; // [esp+30h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  v4 = 0;
  Size = 0;
  v19 = 0;
  v18 = 0;
  v17 = 0;
  MaxCount = 0;
  v15 = 0;
  v14 = *(_DWORD *)(*((_DWORD *)this + 9) + 48);
  if ( !UmfdTls::TryGetAlignedFieldSize(0x20u, &Size) || !UmfdTls::TryGetAlignedFieldSize(0x34u, &v19) )
    return -1073741801;
  if ( !UmfdTls::TryGetAlignedFieldSize(0x40u, &v18)
    || !UmfdTls::TryComputeAlignedFieldSizes(v14 != 0 ? 0x14 : 0, &MaxCount, (unsigned int)v12, &v13->iUniq) )
  {
    return -1073741801;
  }
  UmfdTls::CommitUMBuffer<_QUERYFONTDATAPARAMETERS>(a2, &v15, Size, v19, v18, v17, MaxCount, v5);
  v7 = (_DWORD *)v15;
  if ( !v15 )
    return -1073741801;
  v8 = v15 + Size;
  *((_DWORD *)this + 16) = v15 + Size;
  v9 = v19 + v8;
  *((_DWORD *)this + 17) = v9;
  v10 = v18 + v9;
  *((_DWORD *)this + 18) = v10;
  *((_DWORD *)this + 19) = v17 + v10;
  ms_exc.registration.TryLevel = 0;
  FontDriverDdiRequest::PrepareUsermodeFontObj(
    *((_DWORD *)this + 9),
    (int)a2,
    *((struct UmfdTls **)this + 16),
    v12,
    v13);
  *(_DWORD *)(*((_DWORD *)this + 16) + 44) = *(_DWORD *)(*((_DWORD *)this + 9) + 44);
  if ( v14 )
  {
    memcpy(*((void **)this + 19), *(const void **)(*((_DWORD *)this + 9) + 48), MaxCount);
    v4 = *((_DWORD *)this + 19);
  }
  else
  {
    *((_DWORD *)this + 19) = 0;
  }
  *(_DWORD *)(*((_DWORD *)this + 16) + 48) = v4;
  v7[3] = *((_DWORD *)this + 16);
  *v7 = *((_DWORD *)this + 6);
  v7[1] = *((_DWORD *)this + 7);
  v7[2] = *((_DWORD *)this + 8);
  v7[4] = *((_DWORD *)this + 17);
  v7[5] = *((_DWORD *)this + 18);
  v7[6] = *((_DWORD *)this + 12);
  ms_exc.registration.TryLevel = -2;
  *a3 = v7;
  return 0;
}
