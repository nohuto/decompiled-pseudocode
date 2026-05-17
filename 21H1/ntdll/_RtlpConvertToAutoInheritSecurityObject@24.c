/*
 * XREFs of _RtlpConvertToAutoInheritSecurityObject@24 @ 0x4B348358
 * Callers:
 *     _RtlConvertToAutoInheritSecurityObject@24 @ 0x4B335B90 (_RtlConvertToAutoInheritSecurityObject@24.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlCreateSecurityDescriptorRelative@8 @ 0x4B2D92C5 (_RtlCreateSecurityDescriptorRelative@8.c)
 *     _RtlValidSecurityDescriptor@4 @ 0x4B2E8170 (_RtlValidSecurityDescriptor@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlpConvertAclToAutoInherit@36 @ 0x4B347B85 (_RtlpConvertAclToAutoInherit@36.c)
 */

int __fastcall RtlpConvertToAutoInheritSecurityObject(unsigned int a1, int a2, char **a3, int a4, int a5, _DWORD *a6)
{
  int v7; // edi
  unsigned __int8 *v8; // ecx
  int v9; // edx
  __int16 v10; // bx
  __int16 v11; // di
  char *v12; // edx
  unsigned __int16 *v13; // ebx
  int v14; // eax
  unsigned __int16 v15; // ax
  char *v16; // edi
  unsigned int v17; // edi
  __int16 v18; // ax
  int v19; // edx
  __int16 v20; // ax
  unsigned __int16 *v21; // edx
  unsigned __int16 *v22; // ecx
  char *v23; // ebx
  char *v24; // edi
  __int16 v25; // ax
  char *v26; // ecx
  __int16 v27; // bx
  unsigned int v28; // esi
  unsigned int v29; // edx
  unsigned int v30; // edi
  char *Heap; // ecx
  char *v32; // ecx
  char *v33; // esi
  int v34; // eax
  char *v35; // eax
  char *v36; // ebx
  char *v37; // eax
  char *v38; // esi
  unsigned __int8 *v39; // ecx
  int v40; // ebx
  unsigned __int8 *v42; // [esp+8h] [ebp-2Ch]
  int v43; // [esp+Ch] [ebp-28h] BYREF
  int v44; // [esp+10h] [ebp-24h]
  void *ProcessHeap; // [esp+14h] [ebp-20h]
  int v46; // [esp+18h] [ebp-1Ch]
  char *v47; // [esp+1Ch] [ebp-18h]
  void *Src; // [esp+20h] [ebp-14h] BYREF
  void *v49; // [esp+24h] [ebp-10h]
  void *v50; // [esp+28h] [ebp-Ch] BYREF
  unsigned int v51; // [esp+2Ch] [ebp-8h]
  char v52; // [esp+32h] [ebp-2h]
  char v53; // [esp+33h] [ebp-1h]

  v51 = a1;
  Src = 0;
  v52 = 0;
  v50 = 0;
  v53 = 0;
  v47 = 0;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( !RtlValidSecurityDescriptor(a2) )
  {
    v7 = -1073741703;
    goto LABEL_81;
  }
  v8 = *(unsigned __int8 **)(a2 + 4);
  v9 = (int)v8;
  v10 = *(_WORD *)(a2 + 2);
  v11 = v10;
  v46 = (unsigned __int16)v10;
  if ( v10 >= 0 )
  {
    v42 = v8;
  }
  else
  {
    v9 = v8 != 0 ? (unsigned int)&v8[a2] : 0;
    v42 = (unsigned __int8 *)v9;
  }
  if ( !v9 )
  {
    v7 = -1073741703;
    goto LABEL_81;
  }
  v12 = *(char **)(a2 + 8);
  if ( v10 >= 0 )
  {
    v49 = *(void **)(a2 + 8);
  }
  else
  {
    v49 = v12 != 0 ? &v12[a2] : 0;
    v11 = v46;
  }
  if ( (v10 & 0x10) == 0 )
    goto LABEL_29;
  v13 = *(unsigned __int16 **)(a2 + 12);
  if ( v11 >= 0 )
  {
    v14 = *(_DWORD *)(a2 + 12);
    v44 = v14;
  }
  else
  {
    v44 = v13 != 0 ? (unsigned int)v13 + a2 : 0;
    v11 = v46;
    v14 = v44;
  }
  if ( !v14 )
  {
    v10 = *(_WORD *)(a2 + 2);
LABEL_29:
    v17 = v51;
    v46 = v10 & 0x2010 | 0x800;
    if ( v51 )
    {
      v18 = *(_WORD *)(v51 + 2);
      if ( (v18 & 0x10) == 0 )
        goto LABEL_36;
      v19 = *(_DWORD *)(v51 + 12);
      if ( v18 < 0 )
        v19 = v19 != 0 ? v19 + v51 : 0;
    }
    else
    {
      v19 = 0;
    }
    if ( v19 )
      v46 = v10 & 0x2010 | 0x2800;
LABEL_36:
    v20 = v10;
    v44 = (unsigned __int16)v10;
    if ( (v10 & 4) == 0 )
      goto LABEL_54;
    v21 = *(unsigned __int16 **)(a2 + 16);
    v22 = v21;
    if ( v10 < 0 )
    {
      v22 = v21 != 0 ? (unsigned __int16 *)((char *)v21 + a2) : 0;
      v20 = v44;
    }
    if ( v22 )
    {
      if ( (v10 & 0x1400) != 0 || !v17 )
      {
        v50 = v22;
        v27 = v10 & 0x1004 | 0x400;
LABEL_56:
        v51 = (4 * v42[1] + 11) & 0xFFFFFFFC;
        if ( v49 )
          v28 = (4 * *((unsigned __int8 *)v49 + 1) + 11) & 0xFFFFFFFC;
        else
          v28 = 0;
        if ( Src )
          v29 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
        else
          v29 = 0;
        v44 = v29;
        if ( v22 )
          v30 = (v22[1] + 3) & 0xFFFFFFFC;
        else
          v30 = 0;
        Heap = (char *)RtlAllocateHeap((int)ProcessHeap, NtdllBaseTag + 1310720, v51 + 20 + v28 + v30 + v29);
        v47 = Heap;
        if ( Heap )
        {
          RtlCreateSecurityDescriptorRelative(Heap);
          v33 = v32 + 20;
          *((_WORD *)v32 + 1) |= (unsigned __int16)v46 | 0x8000;
          if ( Src )
          {
            memcpy(v32 + 20, Src, *((unsigned __int16 *)Src + 1));
            v32 = v47;
            v33 += v44;
            v34 = 20;
          }
          else
          {
            v34 = 0;
          }
          *((_DWORD *)v32 + 3) = v34;
          *((_WORD *)v32 + 1) |= v27;
          if ( v50 )
          {
            memcpy(v33, v50, *((unsigned __int16 *)v50 + 1));
            v32 = v47;
            v35 = (char *)(v33 - v47);
            v33 += v30;
          }
          else
          {
            v35 = 0;
          }
          *((_DWORD *)v32 + 4) = v35;
          memcpy(v33, v42, 4 * v42[1] + 8);
          v36 = v47;
          v37 = v33;
          v38 = &v33[v51];
          v39 = (unsigned __int8 *)v49;
          *((_DWORD *)v47 + 1) = v37 - v47;
          if ( v39 )
          {
            memcpy(v38, v39, 4 * v39[1] + 8);
            *((_DWORD *)v36 + 2) = v38 - v36;
          }
          v7 = 0;
        }
        else
        {
          v7 = -1073741801;
        }
        v40 = (int)ProcessHeap;
        if ( v53 )
          RtlFreeHeap((int)ProcessHeap, 0, (int)v50);
        goto LABEL_79;
      }
      v23 = *(char **)(a2 + 8);
      if ( v20 < 0 )
      {
        v23 = v23 != 0 ? &v23[a2] : 0;
        v20 = v44;
      }
      v24 = *(char **)(a2 + 4);
      if ( v20 < 0 )
      {
        v24 = v24 != 0 ? &v24[a2] : 0;
        if ( (v44 & 0x8000u) != 0 )
          v21 = v21 != 0 ? (unsigned __int16 *)((char *)v21 + a2) : 0;
      }
      v25 = *(_WORD *)(v51 + 2);
      if ( (v25 & 4) != 0 )
      {
        v26 = *(char **)(v51 + 16);
        if ( v25 < 0 )
          v26 = v26 != 0 ? &v26[v51] : 0;
      }
      else
      {
        v26 = 0;
      }
      v7 = RtlpConvertAclToAutoInherit(v26, v21, a4, a5, v24, v23, a6, (int *)&v50, &v43);
      if ( v7 < 0 )
      {
        v40 = (int)ProcessHeap;
LABEL_79:
        if ( v52 )
          RtlFreeHeap(v40, 0, (int)Src);
        goto LABEL_81;
      }
      v53 = 1;
      v27 = v43 & 0x1408 | 4;
    }
    else
    {
LABEL_54:
      v27 = v10 & 4 | 0x1400;
    }
    v22 = (unsigned __int16 *)v50;
    goto LABEL_56;
  }
  if ( (*(_WORD *)(a2 + 2) & 0x2800) != 0 || !v51 )
  {
    v46 = *(_WORD *)(a2 + 2) & 0x2010 | 0x800;
    Src = (void *)v44;
    goto LABEL_26;
  }
  if ( v11 < 0 )
  {
    v12 = v12 != 0 ? &v12[a2] : 0;
    v8 = v8 != 0 ? &v8[a2] : 0;
    v13 = v13 != 0 ? (unsigned __int16 *)((char *)v13 + a2) : 0;
  }
  v15 = *(_WORD *)(v51 + 2);
  v44 = v15;
  if ( (v15 & 0x10) != 0 )
  {
    v16 = *(char **)(v51 + 12);
    if ( (v44 & 0x8000u) != 0 )
      v16 = v16 != 0 ? &v16[v51] : 0;
  }
  else
  {
    v16 = 0;
  }
  v7 = RtlpConvertAclToAutoInherit(v16, v13, a4, a5, v8, v12, a6, (int *)&Src, &v43);
  if ( v7 >= 0 )
  {
    v52 = 1;
    v46 = 2 * (v43 & 0x1400 | (2 * (v43 & 8 | 4)));
LABEL_26:
    v10 = *(_WORD *)(a2 + 2);
    v17 = v51;
    goto LABEL_36;
  }
LABEL_81:
  *a3 = v47;
  return v7;
}
