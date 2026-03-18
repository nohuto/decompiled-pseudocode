/*
 * XREFs of ?CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x8B3D4
 * Callers:
 *     <none>
 * Callees:
 *     ??$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYFONTDATAPARAMETERS@@IIII_N@Z @ 0x8B1A0 (--$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYFONTDATAPARAMETERS@@IIII_N.c)
 *     ?PrepareUsermodeFontObj@FontDriverDdiRequest@@KGXPAVUmfdTls@@PAU_FONTOBJ@@1@Z @ 0x8C392 (-PrepareUsermodeFontObj@FontDriverDdiRequest@@KGXPAVUmfdTls@@PAU_FONTOBJ@@1@Z.c)
 *     ?TryGetAlignedFieldSize@UmfdTls@@CG_NIPAI@Z @ 0x8C526 (-TryGetAlignedFieldSize@UmfdTls@@CG_NIPAI@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __thiscall QueryAdvanceWidthsRequest::CreateUsermodeParameters(
        QueryAdvanceWidthsRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  int v4; // edi
  int v5; // ecx
  bool AlignedFieldSize; // al
  unsigned int v7; // ebx
  _DWORD *v8; // edi
  size_t v9; // eax
  unsigned int v10; // eax
  unsigned int v12; // [esp+0h] [ebp-44h]
  unsigned int v13; // [esp+0h] [ebp-44h]
  unsigned int v14; // [esp+0h] [ebp-44h]
  struct _FONTOBJ *v15; // [esp+0h] [ebp-44h]
  unsigned int *v16; // [esp+4h] [ebp-40h]
  unsigned int *v17; // [esp+4h] [ebp-40h]
  unsigned int *v18; // [esp+4h] [ebp-40h]
  struct _FONTOBJ *v19; // [esp+4h] [ebp-40h]
  int v20; // [esp+18h] [ebp-2Ch] BYREF
  unsigned int v21; // [esp+1Ch] [ebp-28h]
  int v22; // [esp+20h] [ebp-24h]
  unsigned int v23; // [esp+24h] [ebp-20h]
  size_t Size; // [esp+28h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]

  v20 = 0;
  Size = 0;
  v23 = 0;
  v21 = 0;
  v4 = 0;
  v22 = 0;
  if ( !UmfdTls::TryGetAlignedFieldSize(v12, v16) || !UmfdTls::TryGetAlignedFieldSize(v13, v17) )
    return -1073741801;
  if ( UmfdTls::TryGetAlignedFieldSize(v14, v18) )
  {
    AlignedFieldSize = UmfdTls::TryGetAlignedFieldSize((unsigned int)v15, &v19->iUniq);
    v4 = v22;
  }
  else
  {
    AlignedFieldSize = 0;
  }
  if ( !AlignedFieldSize )
    return -1073741801;
  v7 = v21;
  UmfdTls::CommitUMBuffer<_QUERYFONTDATAPARAMETERS>(a2, &v20, Size, v23, v21, v4, v5);
  v8 = (_DWORD *)v20;
  if ( !v20 )
    return -1073741801;
  v9 = v20 + Size;
  *((_DWORD *)this + 13) = v20 + Size;
  v10 = v23 + v9;
  *((_DWORD *)this + 14) = v10;
  *((_DWORD *)this + 15) = v7 + v10;
  ms_exc.registration.TryLevel = 0;
  FontDriverDdiRequest::PrepareUsermodeFontObj(*((struct UmfdTls **)this + 13), v15, v19);
  v8[1] = *((_DWORD *)this + 13);
  *v8 = *((_DWORD *)this + 6);
  v8[2] = *((_DWORD *)this + 8);
  v8[5] = *((_DWORD *)this + 11);
  v8[3] = *((_DWORD *)this + 14);
  memcpy(*((void **)this + 14), *((const void **)this + 9), 4 * *((_DWORD *)this + 11));
  v8[4] = *((_DWORD *)this + 15);
  ms_exc.registration.TryLevel = -2;
  *a3 = v8;
  return 0;
}
