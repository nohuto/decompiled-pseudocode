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

int __userpurge RtlpConvertToAutoInheritSecurityObject@<eax>(
        int a1@<edx>,
        unsigned int a2@<ecx>,
        int a3@<ebx>,
        char **a4,
        int a5,
        char a6,
        GENERIC_MAPPING *a7)
{
  int v8; // edi
  unsigned __int8 *v9; // ecx
  int v10; // edx
  __int16 v11; // bx
  __int16 v12; // di
  char *v13; // edx
  ACL *v14; // ebx
  int v15; // eax
  unsigned __int16 v16; // ax
  ACL *v17; // edi
  unsigned int v18; // edi
  __int16 v19; // ax
  int v20; // edx
  __int16 v21; // ax
  ACL *v22; // edx
  unsigned __int16 *p_AclRevision; // ecx
  char *v24; // ebx
  char *v25; // edi
  __int16 v26; // ax
  ACL *v27; // ecx
  __int16 v28; // bx
  unsigned int v29; // esi
  unsigned int v30; // edx
  unsigned int v31; // edi
  char *Heap; // ecx
  char *v33; // ecx
  char *v34; // esi
  int v35; // eax
  char *v36; // eax
  char *v37; // ebx
  char *v38; // eax
  char *v39; // esi
  unsigned __int8 *v40; // ecx
  PVOID v41; // ebx
  SIZE_T v43; // [esp-8h] [ebp-3Ch]
  size_t v44; // [esp-8h] [ebp-3Ch]
  size_t v45; // [esp-8h] [ebp-3Ch]
  unsigned __int8 *v46; // [esp+8h] [ebp-2Ch]
  int v47; // [esp+Ch] [ebp-28h] BYREF
  int v48; // [esp+10h] [ebp-24h]
  PVOID HeapHandle; // [esp+14h] [ebp-20h]
  int v50; // [esp+18h] [ebp-1Ch]
  char *v51; // [esp+1Ch] [ebp-18h]
  void *Src; // [esp+20h] [ebp-14h] BYREF
  void *v53; // [esp+24h] [ebp-10h]
  PVOID BaseAddress; // [esp+28h] [ebp-Ch] BYREF
  unsigned int v55; // [esp+2Ch] [ebp-8h]
  char v56; // [esp+32h] [ebp-2h]
  char v57; // [esp+33h] [ebp-1h]

  v55 = a2;
  Src = 0;
  v56 = 0;
  BaseAddress = 0;
  v57 = 0;
  v51 = 0;
  HeapHandle = NtCurrentPeb()->ProcessHeap;
  if ( !RtlValidSecurityDescriptor((PSECURITY_DESCRIPTOR)a1) )
  {
    v8 = -1073741703;
    goto LABEL_81;
  }
  v9 = *(unsigned __int8 **)(a1 + 4);
  v10 = (int)v9;
  HIDWORD(v43) = a3;
  v11 = *(_WORD *)(a1 + 2);
  v12 = v11;
  v50 = (unsigned __int16)v11;
  if ( v11 >= 0 )
  {
    v46 = v9;
  }
  else
  {
    v10 = v9 != 0 ? (unsigned int)&v9[a1] : 0;
    v46 = (unsigned __int8 *)v10;
  }
  if ( !v10 )
  {
    v8 = -1073741703;
    goto LABEL_81;
  }
  v13 = *(char **)(a1 + 8);
  if ( v11 >= 0 )
  {
    v53 = *(void **)(a1 + 8);
  }
  else
  {
    v53 = v13 != 0 ? &v13[a1] : 0;
    v12 = v50;
  }
  if ( (v11 & 0x10) == 0 )
    goto LABEL_29;
  v14 = *(ACL **)(a1 + 12);
  if ( v12 >= 0 )
  {
    v15 = *(_DWORD *)(a1 + 12);
    v48 = v15;
  }
  else
  {
    v48 = v14 != 0 ? (unsigned int)v14 + a1 : 0;
    v12 = v50;
    v15 = v48;
  }
  if ( !v15 )
  {
    v11 = *(_WORD *)(a1 + 2);
LABEL_29:
    v18 = v55;
    v50 = v11 & 0x2010 | 0x800;
    if ( v55 )
    {
      v19 = *(_WORD *)(v55 + 2);
      if ( (v19 & 0x10) == 0 )
        goto LABEL_36;
      v20 = *(_DWORD *)(v55 + 12);
      if ( v19 < 0 )
        v20 = v20 != 0 ? v20 + v55 : 0;
    }
    else
    {
      v20 = 0;
    }
    if ( v20 )
      v50 = v11 & 0x2010 | 0x2800;
LABEL_36:
    v21 = v11;
    v48 = (unsigned __int16)v11;
    if ( (v11 & 4) == 0 )
      goto LABEL_54;
    v22 = *(ACL **)(a1 + 16);
    p_AclRevision = (unsigned __int16 *)&v22->AclRevision;
    if ( v11 < 0 )
    {
      p_AclRevision = v22 != 0 ? (unsigned __int16 *)((unsigned int)v22 + a1) : 0;
      v21 = v48;
    }
    if ( p_AclRevision )
    {
      if ( (v11 & 0x1400) != 0 || !v18 )
      {
        BaseAddress = p_AclRevision;
        v28 = v11 & 0x1004 | 0x400;
LABEL_56:
        v55 = (4 * v46[1] + 11) & 0xFFFFFFFC;
        if ( v53 )
          v29 = (4 * *((unsigned __int8 *)v53 + 1) + 11) & 0xFFFFFFFC;
        else
          v29 = 0;
        if ( Src )
          v30 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
        else
          v30 = 0;
        v48 = v30;
        if ( p_AclRevision )
          v31 = (p_AclRevision[1] + 3) & 0xFFFFFFFC;
        else
          v31 = 0;
        LODWORD(v43) = v55 + 20 + v29 + v31 + v30;
        Heap = (char *)RtlAllocateHeap(HeapHandle, NtdllBaseTag + 1310720, v43);
        v51 = Heap;
        if ( Heap )
        {
          RtlCreateSecurityDescriptorRelative(Heap);
          v34 = v33 + 20;
          *((_WORD *)v33 + 1) |= (unsigned __int16)v50 | 0x8000;
          if ( Src )
          {
            LODWORD(v44) = *((unsigned __int16 *)Src + 1);
            memcpy(v33 + 20, Src, v44);
            v33 = v51;
            v34 += v48;
            v35 = 20;
          }
          else
          {
            v35 = 0;
          }
          *((_DWORD *)v33 + 3) = v35;
          *((_WORD *)v33 + 1) |= v28;
          if ( BaseAddress )
          {
            LODWORD(v44) = *((unsigned __int16 *)BaseAddress + 1);
            memcpy(v34, BaseAddress, v44);
            v33 = v51;
            v36 = (char *)(v34 - v51);
            v34 += v31;
          }
          else
          {
            v36 = 0;
          }
          *((_DWORD *)v33 + 4) = v36;
          LODWORD(v44) = 4 * v46[1] + 8;
          memcpy(v34, v46, v44);
          v37 = v51;
          v38 = v34;
          v39 = &v34[v55];
          v40 = (unsigned __int8 *)v53;
          *((_DWORD *)v51 + 1) = v38 - v51;
          if ( v40 )
          {
            LODWORD(v45) = 4 * v40[1] + 8;
            memcpy(v39, v40, v45);
            *((_DWORD *)v37 + 2) = v39 - v37;
          }
          v8 = 0;
        }
        else
        {
          v8 = -1073741801;
        }
        v41 = HeapHandle;
        if ( v57 )
          RtlFreeHeap(HeapHandle, 0, BaseAddress);
        goto LABEL_79;
      }
      v24 = *(char **)(a1 + 8);
      if ( v21 < 0 )
      {
        v24 = v24 != 0 ? &v24[a1] : 0;
        v21 = v48;
      }
      v25 = *(char **)(a1 + 4);
      if ( v21 < 0 )
      {
        v25 = v25 != 0 ? &v25[a1] : 0;
        if ( (v48 & 0x8000u) != 0 )
          v22 = v22 != 0 ? (ACL *)((char *)v22 + a1) : 0;
      }
      v26 = *(_WORD *)(v55 + 2);
      if ( (v26 & 4) != 0 )
      {
        v27 = *(ACL **)(v55 + 16);
        if ( v26 < 0 )
          v27 = v27 != 0 ? (ACL *)((char *)v27 + v55) : 0;
      }
      else
      {
        v27 = 0;
      }
      v8 = RtlpConvertAclToAutoInherit(v27, v22, a5, a6, v25, v24, a7, &BaseAddress, &v47);
      if ( v8 < 0 )
      {
        v41 = HeapHandle;
LABEL_79:
        if ( v56 )
          RtlFreeHeap(v41, 0, Src);
        goto LABEL_81;
      }
      v57 = 1;
      v28 = v47 & 0x1408 | 4;
    }
    else
    {
LABEL_54:
      v28 = v11 & 4 | 0x1400;
    }
    p_AclRevision = (unsigned __int16 *)BaseAddress;
    goto LABEL_56;
  }
  if ( (*(_WORD *)(a1 + 2) & 0x2800) != 0 || !v55 )
  {
    v50 = *(_WORD *)(a1 + 2) & 0x2010 | 0x800;
    Src = (void *)v48;
    goto LABEL_26;
  }
  if ( v12 < 0 )
  {
    v13 = v13 != 0 ? &v13[a1] : 0;
    v9 = v9 != 0 ? &v9[a1] : 0;
    v14 = v14 != 0 ? (ACL *)((char *)v14 + a1) : 0;
  }
  v16 = *(_WORD *)(v55 + 2);
  v48 = v16;
  if ( (v16 & 0x10) != 0 )
  {
    v17 = *(ACL **)(v55 + 12);
    if ( (v48 & 0x8000u) != 0 )
      v17 = v17 != 0 ? (ACL *)((char *)v17 + v55) : 0;
  }
  else
  {
    v17 = 0;
  }
  v8 = RtlpConvertAclToAutoInherit(v17, v14, a5, a6, v9, v13, a7, &Src, &v47);
  if ( v8 >= 0 )
  {
    v56 = 1;
    v50 = 2 * (v47 & 0x1400 | (2 * (v47 & 8 | 4)));
LABEL_26:
    v11 = *(_WORD *)(a1 + 2);
    v18 = v55;
    goto LABEL_36;
  }
LABEL_81:
  *a4 = v51;
  return v8;
}
