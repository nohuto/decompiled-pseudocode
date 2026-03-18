/*
 * XREFs of ?CreateUsermodeParameters@QueryFontDataRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x8C20A
 * Callers:
 *     <none>
 * Callees:
 *     ??$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYFONTDATAPARAMETERS@@IIII_N@Z @ 0x8B1A0 (--$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYFONTDATAPARAMETERS@@IIII_N.c)
 *     ?TryComputeAlignedFieldSizes@UmfdTls@@SG_NIPAII0I0I0@Z @ 0x8B4F2 (-TryComputeAlignedFieldSizes@UmfdTls@@SG_NIPAII0I0I0@Z.c)
 *     ?PrepareUsermodeFontObj@FontDriverDdiRequest@@KGXPAVUmfdTls@@PAU_FONTOBJ@@1@Z @ 0x8C392 (-PrepareUsermodeFontObj@FontDriverDdiRequest@@KGXPAVUmfdTls@@PAU_FONTOBJ@@1@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __thiscall QueryFontDataRequest::CreateUsermodeParameters(
        QueryFontDataRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  int v4; // ecx
  int v5; // edi
  unsigned int v6; // eax
  int v8; // ecx
  _DWORD *v9; // ebx
  size_t v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  const void *v13; // eax
  unsigned int v14; // [esp+0h] [ebp-40h]
  struct _FONTOBJ *v15; // [esp+0h] [ebp-40h]
  unsigned int *v16; // [esp+4h] [ebp-3Ch]
  struct _FONTOBJ *v17; // [esp+4h] [ebp-3Ch]
  int v18; // [esp+14h] [ebp-2Ch] BYREF
  unsigned int v19; // [esp+18h] [ebp-28h] BYREF
  unsigned int v20; // [esp+1Ch] [ebp-24h] BYREF
  unsigned int v21; // [esp+20h] [ebp-20h] BYREF
  size_t Size; // [esp+24h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]

  v4 = *((_DWORD *)this + 11);
  if ( v4 )
  {
    if ( *((_DWORD *)this + 7) == 1 )
    {
      v5 = 0;
      if ( *((_DWORD *)this + 12) )
        return -1073741637;
    }
    else
    {
      if ( *((_DWORD *)this + 7) == 2 )
      {
        *((_DWORD *)a2 + 6) = v4;
        *((_DWORD *)this + 12) = 8;
      }
      else if ( *((_DWORD *)this + 7) == 3 )
      {
        *((_DWORD *)this + 12) = 124;
      }
      v5 = 0;
    }
    v6 = *((_DWORD *)this + 12);
  }
  else
  {
    v5 = 0;
    *((_DWORD *)this + 12) = 0;
    v6 = 0;
  }
  Size = 0;
  v21 = 0;
  v20 = 0;
  v19 = 0;
  v18 = 0;
  if ( !UmfdTls::TryComputeAlignedFieldSizes(
          0x34u,
          &v21,
          *((_DWORD *)this + 10) != 0 ? 0x40 : 0,
          &v20,
          v6,
          &v19,
          v14,
          v16) )
    return -1073741801;
  UmfdTls::CommitUMBuffer<_QUERYFONTDATAPARAMETERS>(a2, &v18, Size, v21, v20, v19, v8);
  v9 = (_DWORD *)v18;
  if ( !v18 )
    return -1073741801;
  v10 = v18 + Size;
  *((_DWORD *)this + 14) = v18 + Size;
  v11 = v21 + v10;
  *((_DWORD *)this + 15) = v11;
  *((_DWORD *)this + 16) = v20 + v11;
  ms_exc.registration.TryLevel = 0;
  FontDriverDdiRequest::PrepareUsermodeFontObj(*((struct UmfdTls **)this + 14), v15, v17);
  *(_DWORD *)(*((_DWORD *)this + 14) + 44) = 0;
  *(_DWORD *)(*((_DWORD *)this + 14) + 48) = 0;
  v9[3] = *((_DWORD *)this + 14);
  *v9 = *((_DWORD *)this + 6);
  v9[1] = *((_DWORD *)this + 7);
  v9[2] = *((_DWORD *)this + 8);
  if ( *((_DWORD *)this + 10) )
  {
    v12 = *((_DWORD *)this + 15);
  }
  else
  {
    *((_DWORD *)this + 15) = 0;
    v12 = 0;
  }
  v9[4] = v12;
  v13 = (const void *)*((_DWORD *)this + 11);
  if ( v13 )
  {
    if ( *((_DWORD *)this + 7) == 3 )
      memcpy(*((void **)this + 16), v13, *((_DWORD *)this + 12));
    v5 = *((_DWORD *)this + 16);
  }
  else
  {
    *((_DWORD *)this + 16) = 0;
  }
  v9[5] = v5;
  v9[6] = *((_DWORD *)this + 12);
  ms_exc.registration.TryLevel = -2;
  *a3 = v9;
  return 0;
}
