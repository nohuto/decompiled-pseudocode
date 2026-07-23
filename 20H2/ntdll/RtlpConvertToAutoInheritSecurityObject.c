/*
 * XREFs of RtlpConvertToAutoInheritSecurityObject @ 0x1800E82B8
 * Callers:
 *     RtlConvertToAutoInheritSecurityObject @ 0x1800D6C40 (RtlConvertToAutoInheritSecurityObject.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlValidSecurityDescriptor @ 0x1800701C0 (RtlValidSecurityDescriptor.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E7A94 (RtlpConvertAclToAutoInherit.c)
 */

__int64 __fastcall RtlpConvertToAutoInheritSecurityObject(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        char a5,
        GENERIC_MAPPING *a6)
{
  _DWORD *v6; // r13
  __int64 v8; // rdi
  int v10; // edi
  __int16 v11; // cx
  unsigned __int8 *v12; // r12
  unsigned __int8 *v13; // r14
  void *v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  ACL *v17; // rdx
  ACL *v18; // rcx
  __int16 v19; // r15
  __int64 v20; // rax
  unsigned __int16 *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rax
  ACL *v24; // rdx
  ACL *v25; // rcx
  __int16 v26; // bx
  unsigned int v27; // r12d
  unsigned int v28; // ecx
  unsigned int v29; // r14d
  unsigned int v30; // esi
  _DWORD *Heap; // rax
  char *v32; // rdi
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  unsigned __int8 *v36; // rdx
  unsigned __int8 *v37; // rdx
  char *v38; // rdi
  PVOID v39; // rbx
  char v41; // [rsp+50h] [rbp-30h]
  int v42; // [rsp+54h] [rbp-2Ch] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp-28h] BYREF
  void *Src; // [rsp+60h] [rbp-20h] BYREF
  PVOID HeapHandle; // [rsp+68h] [rbp-18h]
  void *v46; // [rsp+70h] [rbp-10h]
  void *v47; // [rsp+78h] [rbp-8h]
  char v48; // [rsp+C8h] [rbp+48h]

  v6 = 0LL;
  Src = 0LL;
  BaseAddress = 0LL;
  v8 = a4;
  v41 = 0;
  v48 = 0;
  HeapHandle = NtCurrentPeb()->ProcessHeap;
  if ( !RtlValidSecurityDescriptor((PSECURITY_DESCRIPTOR)a2) )
    goto LABEL_2;
  v11 = *(_WORD *)(a2 + 2);
  if ( v11 >= 0 )
  {
    v12 = *(unsigned __int8 **)(a2 + 8);
  }
  else
  {
    if ( !*(_DWORD *)(a2 + 4) )
    {
LABEL_2:
      v10 = -1073741703;
      goto LABEL_115;
    }
    v12 = (unsigned __int8 *)(a2 + *(unsigned int *)(a2 + 4));
  }
  v47 = v12;
  if ( !v12 )
    goto LABEL_2;
  if ( v11 >= 0 )
  {
    v13 = *(unsigned __int8 **)(a2 + 16);
  }
  else if ( *(_DWORD *)(a2 + 8) )
  {
    v13 = (unsigned __int8 *)(a2 + *(unsigned int *)(a2 + 8));
  }
  else
  {
    v13 = 0LL;
  }
  v46 = v13;
  if ( (v11 & 0x10) == 0 )
    goto LABEL_46;
  if ( v11 >= 0 )
  {
    v14 = *(void **)(a2 + 24);
  }
  else
  {
    if ( !*(_DWORD *)(a2 + 12) )
      goto LABEL_46;
    v14 = (void *)(a2 + *(unsigned int *)(a2 + 12));
  }
  if ( v14 )
  {
    if ( (v11 & 0x800) != 0 || (v11 & 0x2000) != 0 || !a1 )
    {
      Src = v14;
      v19 = v11 & 0x2010 | 0x800;
      goto LABEL_55;
    }
    if ( v11 >= 0 )
    {
      v15 = *(_QWORD *)(a2 + 16);
    }
    else if ( *(_DWORD *)(a2 + 8) )
    {
      v15 = a2 + *(unsigned int *)(a2 + 8);
    }
    else
    {
      v15 = 0LL;
    }
    if ( v11 >= 0 )
    {
      v16 = *(_QWORD *)(a2 + 8);
    }
    else if ( *(_DWORD *)(a2 + 4) )
    {
      v16 = a2 + *(unsigned int *)(a2 + 4);
    }
    else
    {
      v16 = 0LL;
    }
    if ( v11 >= 0 )
    {
      v17 = *(ACL **)(a2 + 24);
    }
    else if ( *(_DWORD *)(a2 + 12) )
    {
      v17 = (ACL *)(a2 + *(unsigned int *)(a2 + 12));
    }
    else
    {
      v17 = 0LL;
    }
    if ( (*(_BYTE *)(a1 + 2) & 0x10) == 0 )
      goto LABEL_38;
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v18 = *(ACL **)(a1 + 24);
      goto LABEL_43;
    }
    if ( *(_DWORD *)(a1 + 12) )
      v18 = (ACL *)(a1 + *(unsigned int *)(a1 + 12));
    else
LABEL_38:
      v18 = 0LL;
LABEL_43:
    v10 = RtlpConvertAclToAutoInherit(v18, v17, v8, a5, v16, v15, a6, &Src, &v42);
    if ( v10 < 0 )
      goto LABEL_115;
    v11 = *(_WORD *)(a2 + 2);
    v8 = a4;
    v41 = 1;
    v19 = 2 * (v42 & 0x1400 | (2 * (v42 & 8 | 4)));
    goto LABEL_55;
  }
LABEL_46:
  v19 = v11 & 0x2010 | 0x800;
  if ( a1 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 0x10) == 0 )
      goto LABEL_55;
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v20 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 12) )
        goto LABEL_55;
      v20 = a1 + *(unsigned int *)(a1 + 12);
    }
  }
  else
  {
    v20 = 0LL;
  }
  if ( v20 )
    v19 = v11 & 0x10 | 0x2800;
LABEL_55:
  if ( (v11 & 4) == 0 )
    goto LABEL_88;
  if ( v11 < 0 )
  {
    if ( *(_DWORD *)(a2 + 16) )
    {
      v21 = (unsigned __int16 *)(a2 + *(unsigned int *)(a2 + 16));
      goto LABEL_60;
    }
LABEL_88:
    v26 = v11 & 4 | 0x1400;
    goto LABEL_89;
  }
  v21 = *(unsigned __int16 **)(a2 + 32);
LABEL_60:
  if ( !v21 )
    goto LABEL_88;
  if ( (v11 & 0x400) != 0 || (v11 & 0x1000) != 0 || !a1 )
  {
    BaseAddress = v21;
    v26 = v11 & 0x1004 | 0x400;
LABEL_90:
    v27 = (4 * v12[1] + 11) & 0xFFFFFFFC;
    if ( v13 )
      v28 = (4 * v13[1] + 11) & 0xFFFFFFFC;
    else
      v28 = 0;
    if ( Src )
      v29 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
    else
      v29 = 0;
    if ( v21 )
      v30 = (v21[1] + 3) & 0xFFFFFFFC;
    else
      v30 = 0;
    Heap = RtlAllocateHeap(HeapHandle, NtdllBaseTag + 1310720, v27 + v28 + 20 + v30 + v29);
    v6 = Heap;
    if ( Heap )
    {
      v32 = (char *)(Heap + 5);
      *(_OWORD *)Heap = 0LL;
      Heap[4] = 0;
      *(_BYTE *)Heap = 1;
      *((_WORD *)Heap + 1) |= v19 | 0x8000;
      if ( Src )
      {
        memmove(Heap + 5, Src, *((unsigned __int16 *)Src + 1));
        v32 += v29;
        v33 = 20;
      }
      else
      {
        v33 = 0;
      }
      v6[3] = v33;
      *((_WORD *)v6 + 1) |= v26;
      if ( BaseAddress )
      {
        memmove(v32, BaseAddress, *((unsigned __int16 *)BaseAddress + 1));
        v34 = (int)v32;
        v32 += v30;
        v35 = v34 - (_DWORD)v6;
      }
      else
      {
        v35 = 0;
      }
      v36 = (unsigned __int8 *)v47;
      v6[4] = v35;
      memmove(v32, v36, 4LL * v36[1] + 8);
      v37 = (unsigned __int8 *)v46;
      v6[1] = (_DWORD)v32 - (_DWORD)v6;
      v38 = &v32[v27];
      if ( v37 )
      {
        memmove(v38, v37, 4LL * v37[1] + 8);
        v6[2] = (_DWORD)v38 - (_DWORD)v6;
      }
      v10 = 0;
    }
    else
    {
      v10 = -1073741801;
    }
    v39 = HeapHandle;
    if ( v48 )
      RtlFreeHeap(HeapHandle, 0, BaseAddress);
    goto LABEL_113;
  }
  if ( v11 >= 0 )
  {
    v22 = *(_QWORD *)(a2 + 16);
  }
  else if ( *(_DWORD *)(a2 + 8) )
  {
    v22 = a2 + *(unsigned int *)(a2 + 8);
  }
  else
  {
    v22 = 0LL;
  }
  if ( v11 >= 0 )
  {
    v23 = *(_QWORD *)(a2 + 8);
  }
  else if ( *(_DWORD *)(a2 + 4) )
  {
    v23 = a2 + *(unsigned int *)(a2 + 4);
  }
  else
  {
    v23 = 0LL;
  }
  if ( v11 >= 0 )
  {
    v24 = *(ACL **)(a2 + 32);
  }
  else if ( *(_DWORD *)(a2 + 16) )
  {
    v24 = (ACL *)(a2 + *(unsigned int *)(a2 + 16));
  }
  else
  {
    v24 = 0LL;
  }
  if ( (*(_BYTE *)(a1 + 2) & 4) == 0 )
    goto LABEL_80;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v25 = *(ACL **)(a1 + 32);
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 16) )
    {
LABEL_80:
      v25 = 0LL;
      goto LABEL_85;
    }
    v25 = (ACL *)(a1 + *(unsigned int *)(a1 + 16));
  }
LABEL_85:
  v10 = RtlpConvertAclToAutoInherit(v25, v24, v8, a5, v23, v22, a6, &BaseAddress, &v42);
  if ( v10 >= 0 )
  {
    v48 = 1;
    v26 = v42 & 0x1408 | 4;
LABEL_89:
    v21 = (unsigned __int16 *)BaseAddress;
    goto LABEL_90;
  }
  v39 = HeapHandle;
LABEL_113:
  if ( v41 )
    RtlFreeHeap(v39, 0, Src);
LABEL_115:
  *a3 = v6;
  return (unsigned int)v10;
}
