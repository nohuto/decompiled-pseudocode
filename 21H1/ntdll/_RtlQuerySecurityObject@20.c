/*
 * XREFs of _RtlQuerySecurityObject@20 @ 0x4B336460
 * Callers:
 *     <none>
 * Callees:
 *     _RtlCreateSecurityDescriptorRelative@8 @ 0x4B2D92C5 (_RtlCreateSecurityDescriptorRelative@8.c)
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 *     _RtlpFilterSacl@16 @ 0x4B348981 (_RtlpFilterSacl@16.c)
 */

int __stdcall RtlQuerySecurityObject(int a1, __int16 a2, int a3, unsigned int a4, unsigned int *a5)
{
  unsigned int v5; // ecx
  char v6; // si
  unsigned int v7; // edi
  int v8; // edx
  __int16 v9; // ax
  int v10; // edx
  __int16 v11; // ax
  int v12; // esi
  int v13; // esi
  unsigned int v14; // ecx
  int v15; // edx
  char *v16; // edi
  __int16 v17; // ax
  __int16 v18; // cx
  __int16 v19; // cx
  __int16 v20; // ax
  __int16 v21; // ax
  char *v22; // eax
  __int16 v23; // cx
  __int16 v24; // cx
  char *v25; // eax
  __int16 v26; // ax
  int v28; // [esp+Ch] [ebp-2Ch]
  int v29; // [esp+10h] [ebp-28h]
  void *v30; // [esp+18h] [ebp-20h]
  unsigned int v31; // [esp+1Ch] [ebp-1Ch]
  size_t v32; // [esp+20h] [ebp-18h]
  void *v33; // [esp+24h] [ebp-14h]
  size_t Size; // [esp+28h] [ebp-10h]
  void *Src; // [esp+2Ch] [ebp-Ch]
  int v36; // [esp+34h] [ebp-4h] BYREF
  int v37; // [esp+44h] [ebp+Ch]

  v5 = 0;
  v6 = a2;
  v7 = 0;
  v32 = 0;
  v31 = 0;
  Size = 0;
  v36 = 0;
  Src = 0;
  v30 = 0;
  v33 = 0;
  v28 = a2 & 2;
  if ( (a2 & 2) != 0 )
  {
    v8 = *(_DWORD *)(a1 + 8);
    if ( *(__int16 *)(a1 + 2) < 0 )
      v8 = v8 != 0 ? v8 + a1 : 0;
    v30 = (void *)v8;
    if ( v8 )
      v31 = (4 * *(unsigned __int8 *)(v8 + 1) + 11) & 0xFFFFFFFC;
  }
  v29 = a2 & 4;
  if ( (a2 & 4) != 0 )
  {
    v9 = *(_WORD *)(a1 + 2);
    if ( (v9 & 4) != 0 )
    {
      v10 = *(_DWORD *)(a1 + 16);
      if ( v9 < 0 )
        v10 = v10 != 0 ? v10 + a1 : 0;
      Src = (void *)v10;
      if ( v10 )
      {
        v7 = (*(unsigned __int16 *)(v10 + 2) + 3) & 0xFFFFFFFC;
        Size = v7;
      }
    }
    else
    {
      Src = 0;
    }
  }
  if ( (a2 & 0x1F8) != 0 )
  {
    v11 = *(_WORD *)(a1 + 2);
    if ( (v11 & 0x10) != 0 )
    {
      v12 = *(_DWORD *)(a1 + 12);
      if ( v11 < 0 )
        v12 = v12 != 0 ? v12 + a1 : 0;
      if ( v12 )
      {
        RtlpFilterSacl(&v36, a2 & 0x1F8);
        v5 = 0;
      }
    }
    v6 = a2;
  }
  v37 = v6 & 1;
  if ( (v6 & 1) != 0 )
  {
    v13 = *(_DWORD *)(a1 + 4);
    if ( *(__int16 *)(a1 + 2) < 0 )
      v13 = v13 != 0 ? v13 + a1 : 0;
    v33 = (void *)v13;
    if ( v13 )
    {
      v5 = (4 * *(unsigned __int8 *)(v13 + 1) + 11) & 0xFFFFFFFC;
      v32 = v5;
    }
  }
  v14 = v7 + v5 + v36 + v31 + 20;
  *a5 = v14;
  if ( v14 > a4 || !a3 )
    return -1073741789;
  RtlCreateSecurityDescriptorRelative((_DWORD *)a3);
  v16 = (char *)(a3 + 20);
  v17 = *(_WORD *)(a3 + 2) | 0x8000;
  *(_WORD *)(a3 + 2) = v17;
  v18 = v17;
  if ( v15 )
  {
    v19 = v17;
    if ( v36 )
    {
      RtlpFilterSacl(&v36, v15);
      v16 += v36;
      v19 = *(_WORD *)(a3 + 2);
      *(_DWORD *)(a3 + 12) = 20;
    }
    v20 = v19 | *(_WORD *)(a1 + 2) & 0x2830;
    *(_WORD *)(a3 + 2) = v20;
    v18 = v20;
  }
  v21 = v18;
  if ( v29 )
  {
    if ( Size )
    {
      memmove(v16, Src, Size);
      v18 = *(_WORD *)(a3 + 2);
      v22 = &v16[-a3];
      v16 += Size;
      *(_DWORD *)(a3 + 16) = v22;
    }
    v21 = v18 | *(_WORD *)(a1 + 2) & 0x140C;
    *(_WORD *)(a3 + 2) = v21;
  }
  v23 = v21;
  if ( v37 )
  {
    v24 = v21;
    if ( v32 )
    {
      memmove(v16, v33, v32);
      v24 = *(_WORD *)(a3 + 2);
      v25 = &v16[-a3];
      v16 += v32;
      *(_DWORD *)(a3 + 4) = v25;
    }
    v26 = v24 | *(_WORD *)(a1 + 2) & 1;
    *(_WORD *)(a3 + 2) = v26;
    v23 = v26;
  }
  if ( v28 )
  {
    if ( v31 )
    {
      memmove(v16, v30, v31);
      v23 = *(_WORD *)(a3 + 2);
      *(_DWORD *)(a3 + 8) = &v16[-a3];
    }
    *(_WORD *)(a3 + 2) = v23 | *(_WORD *)(a1 + 2) & 2;
  }
  return 0;
}
