/*
 * XREFs of ?CreateUsermodeParameters@LoadFontFileRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0xDBF9C
 * Callers:
 *     <none>
 * Callees:
 *     ?TryGetAlignedFieldSize@UmfdTls@@CG_NIPAI@Z @ 0x8C526 (-TryGetAlignedFieldSize@UmfdTls@@CG_NIPAI@Z.c)
 *     ??$CommitUMBuffer@U_LOADFONTFILEPARAMETERS@@@UmfdTls@@QAEXPAPAU_LOADFONTFILEPARAMETERS@@II_N@Z @ 0xDC12C (--$CommitUMBuffer@U_LOADFONTFILEPARAMETERS@@@UmfdTls@@QAEXPAPAU_LOADFONTFILEPARAMETERS@@II_N@Z.c)
 *     _EngFntCacheLookUp@8 @ 0xDC166 (_EngFntCacheLookUp@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __thiscall LoadFontFileRequest::CreateUsermodeParameters(LoadFontFileRequest *this, struct UmfdTls *a2, void **a3)
{
  unsigned int v3; // eax
  ULONG v4; // esi
  size_t v5; // edi
  unsigned int v6; // ebx
  int v7; // ecx
  _DWORD *v8; // ebx
  unsigned int v9; // ecx
  int v10; // esi
  ULONG v11; // eax
  ULONG v13; // eax
  _DWORD *v14; // [esp+14h] [ebp-38h]
  ULONG pulSize; // [esp+20h] [ebp-2Ch] BYREF
  void *v17; // [esp+24h] [ebp-28h] BYREF
  int v18; // [esp+28h] [ebp-24h] BYREF
  size_t Size; // [esp+2Ch] [ebp-20h] BYREF
  int v20; // [esp+30h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  v3 = *((_DWORD *)this + 6);
  if ( v3 > 3 || !v3 )
    return -1073741801;
  v14 = EngFntCacheLookUp(*((_DWORD *)this + 20), &pulSize);
  v4 = v14 != 0 ? pulSize : 0;
  pulSize = v4;
  v5 = 0;
  Size = 0;
  v18 = 0;
  v17 = 0;
  v6 = v4 - 8;
  if ( v4 <= 8 )
    v6 = 0;
  if ( !UmfdTls::TryGetAlignedFieldSize(0x98u, &Size) )
    return -1073741801;
  if ( !UmfdTls::TryGetAlignedFieldSize(v6, (unsigned int *)&v18) )
    return -1073741801;
  UmfdTls::CommitUMBuffer<_LOADFONTFILEPARAMETERS>(a2, (int)&v17, Size, v18, v7);
  v8 = v17;
  if ( !v17 )
    return -1073741801;
  *((_DWORD *)v17 + 37) = (char *)v17 + Size;
  ms_exc.registration.TryLevel = 0;
  memset(v8, 0, 0x98u);
  v8[1] = v8 + 2;
  v8[5] = v8 + 6;
  v8[9] = v8 + 10;
  *v8 = *((_DWORD *)this + 6);
  v9 = 0;
  v20 = 0;
  while ( v9 < *((_DWORD *)this + 6) )
  {
    v10 = v20;
    *(_DWORD *)(v8[1] + 4 * v20) = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 7) + 4 * v9) + 36);
    *(_DWORD *)(v8[5] + 4 * v10) = *(_DWORD *)(*((_DWORD *)this + 11) + 4 * v10);
    *(_DWORD *)(v8[9] + 4 * v10) = *(_DWORD *)(*((_DWORD *)this + 15) + 4 * v10);
    v4 = pulSize;
    v9 = ++v20;
  }
  if ( *((_DWORD *)this + 23) )
  {
    v8[17] = v8 + 18;
    qmemcpy(v8 + 18, *((const void **)this + 23), 0x48u);
    v4 = pulSize;
    v5 = 0;
  }
  v8[13] = *((_DWORD *)this + 19);
  v8[14] = *((_DWORD *)this + 20);
  v11 = v4 - 8;
  if ( v4 <= 8 )
    v11 = 0;
  if ( v11 )
  {
    v8[15] = *v14;
    v13 = v4 - 8;
    if ( v4 <= 8 )
      v13 = 0;
    v8[36] = v13;
    if ( v4 > 8 )
      v5 = v4 - 8;
    memcpy(v8 + 37, v14 + 2, v5);
  }
  else
  {
    v8[15] = -1;
  }
  ms_exc.registration.TryLevel = -2;
  *a3 = v8;
  return 0;
}
