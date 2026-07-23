/*
 * XREFs of _RtlNormalizeSecurityDescriptor@20 @ 0x4B3468A0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlCompareMemory@12 @ 0x4B307F30 (_RtlCompareMemory@12.c)
 *     _RtlIsZeroMemory@8 @ 0x4B366980 (_RtlIsZeroMemory@8.c)
 */

BOOLEAN __cdecl RtlNormalizeSecurityDescriptor(
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        ULONG SecurityDescriptorLength,
        PSECURITY_DESCRIPTOR *NewSecurityDescriptor,
        PULONG NewSecurityDescriptorLength,
        BOOLEAN CheckOnly)
{
  BOOLEAN v5; // cl
  ULONG v6; // eax
  _DWORD *Heap; // ebx
  _DWORD *v8; // edi
  unsigned int v10; // edx
  ULONG v11; // esi
  int v12; // edx
  _DWORD *v13; // ebx
  unsigned __int16 v14; // ax
  _WORD *v15; // edx
  unsigned int v16; // eax
  _WORD *v17; // ecx
  unsigned __int16 v18; // di
  int v19; // eax
  unsigned __int16 v20; // dx
  bool v21; // zf
  _WORD *v22; // edx
  unsigned __int16 v23; // ax
  unsigned __int16 v24; // ax
  _WORD *v25; // ecx
  unsigned __int16 v26; // di
  int v27; // eax
  unsigned __int16 v28; // dx
  unsigned int v29; // ecx
  BOOLEAN v30; // al
  int v31; // eax
  char *v32; // edx
  int v33; // eax
  int v34; // eax
  char *v35; // edx
  int v36; // eax
  PSECURITY_DESCRIPTOR *v37; // eax
  SIZE_T v38; // [esp-4h] [ebp-48h]
  char *v39; // [esp+Ch] [ebp-38h]
  int v40; // [esp+Ch] [ebp-38h]
  int v41; // [esp+Ch] [ebp-38h]
  int v42; // [esp+10h] [ebp-34h]
  ULONG v43; // [esp+14h] [ebp-30h]
  _WORD *Source2; // [esp+18h] [ebp-2Ch]
  void *Source2a; // [esp+18h] [ebp-2Ch]
  _WORD *Source2b; // [esp+18h] [ebp-2Ch]
  int v47; // [esp+1Ch] [ebp-28h]
  unsigned int v48; // [esp+20h] [ebp-24h]
  unsigned int v49; // [esp+20h] [ebp-24h]
  unsigned __int16 v50; // [esp+20h] [ebp-24h]
  unsigned __int16 v51; // [esp+24h] [ebp-20h]
  unsigned __int16 v52; // [esp+24h] [ebp-20h]
  unsigned int v53; // [esp+24h] [ebp-20h]
  _DWORD *v54; // [esp+28h] [ebp-1Ch]
  _WORD *v55; // [esp+2Ch] [ebp-18h]
  unsigned int v56; // [esp+30h] [ebp-14h]
  unsigned int v57; // [esp+34h] [ebp-10h]
  _DWORD *BaseAddress; // [esp+38h] [ebp-Ch]
  _WORD *Source1; // [esp+3Ch] [ebp-8h]
  char v60; // [esp+42h] [ebp-2h]
  BOOLEAN v61; // [esp+43h] [ebp-1h]

  v5 = CheckOnly;
  v6 = 0;
  v55 = 0;
  v60 = 0;
  v61 = 0;
  Heap = 0;
  v54 = 0;
  v8 = *SecurityDescriptor;
  BaseAddress = *SecurityDescriptor;
  if ( !CheckOnly )
  {
    if ( !NewSecurityDescriptor || (Heap = *NewSecurityDescriptor, (v54 = *NewSecurityDescriptor) == 0) )
    {
      LODWORD(v38) = SecurityDescriptorLength;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v38);
      v54 = Heap;
      if ( !Heap )
        return 0;
      v60 = 1;
      v6 = 0;
    }
    qmemcpy(Heap, v8, 0x14u);
    v8 = BaseAddress;
    v5 = 0;
  }
  v10 = 1;
  v11 = 20;
  v47 = 1;
  while ( 1 )
  {
    v12 = v10 == 1 ? v8[3] : v8[4];
    v42 = v12;
    if ( v12 )
    {
      if ( v47 != 1 || *(_WORD *)((char *)v8 + v12 + 4) )
      {
        v6 = v11;
        v43 = v11;
      }
      else
      {
        v43 = 0;
      }
      if ( v6 != v12 )
      {
        v61 = 1;
        if ( v5 )
          goto LABEL_91;
        if ( v47 == 1 )
          Heap[3] = v6;
        else
          Heap[4] = v6;
      }
      if ( v6 )
        break;
    }
LABEL_68:
    v5 = CheckOnly;
    v10 = v47 + 1;
    v47 = v10;
    if ( v10 > 2 )
    {
      v31 = v8[1];
      if ( v11 != v31 )
      {
        v61 = 1;
        if ( CheckOnly )
          goto LABEL_91;
        Heap[1] = v11;
        v31 = v8[1];
      }
      v32 = (char *)v8 + v31;
      v33 = 4 * *((unsigned __int8 *)v8 + v31 + 1) + 8;
      v40 = v33;
      if ( !CheckOnly )
      {
        LODWORD(v38) = v33;
        memcpy((char *)Heap + Heap[1], v32, v38);
        v5 = 0;
        v33 = v40;
      }
      v11 += v33;
      v34 = v8[2];
      if ( v34 )
      {
        if ( v11 != v34 )
        {
          v61 = 1;
          if ( v5 )
            goto LABEL_91;
          Heap[2] = v11;
          v34 = v8[2];
        }
        v35 = (char *)v8 + v34;
        v36 = 4 * *((unsigned __int8 *)v8 + v34 + 1) + 8;
        v41 = v36;
        if ( !v5 )
        {
          LODWORD(v38) = v36;
          memcpy((char *)Heap + Heap[2], v35, v38);
          v36 = v41;
        }
        v11 += v36;
      }
LABEL_81:
      if ( !v61 || CheckOnly )
        goto LABEL_91;
      v37 = NewSecurityDescriptor;
      if ( NewSecurityDescriptor )
      {
        if ( v60 )
LABEL_88:
          *v37 = Heap;
        if ( NewSecurityDescriptorLength )
          *NewSecurityDescriptorLength = v11;
        return v61;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
      v37 = SecurityDescriptor;
      goto LABEL_88;
    }
    v6 = 0;
  }
  if ( !v5 )
  {
    v55 = (_WORD *)((char *)Heap + v6);
    v13 = (_DWORD *)((char *)Heap + v6);
    *v13 = *(_DWORD *)((char *)v8 + v12);
    v13[1] = *(_DWORD *)((char *)v8 + v12 + 4);
    Heap = v54;
  }
  v56 = 0;
  v57 = 0;
  v39 = (char *)v8 + v12 + 8;
  v11 += 8;
  Source1 = v39;
  v14 = *(_WORD *)((char *)v8 + v12 + 4);
  v51 = v14;
  v8 = BaseAddress;
  if ( !v14 )
    goto LABEL_43;
  do
  {
    v15 = Source1;
    if ( *(_BYTE *)Source1 )
      goto LABEL_39;
    v16 = 0;
    if ( !v5 )
    {
      v25 = v55 + 4;
      v53 = 0;
      Source2b = v55 + 4;
      if ( !v56 )
        goto LABEL_40;
      v50 = Source1[1];
      while ( 1 )
      {
        v8 = BaseAddress;
        if ( v25[1] == v50 )
        {
          v26 = v15[1];
          LODWORD(v38) = v50;
          v50 = v26;
          v27 = RtlCompareMemory(v15, v25, v38);
          v28 = v26;
          v8 = BaseAddress;
          v21 = v27 == v28;
          v16 = v53;
          if ( v21 )
          {
            v61 = 1;
LABEL_54:
            if ( v16 >= v56 )
              goto LABEL_38;
            v22 = Source1;
            v23 = Source1[1];
            goto LABEL_42;
          }
          v15 = Source1;
          v25 = Source2b;
        }
        v53 = v16 + 1;
        v25 = (_WORD *)((char *)v25 + (unsigned __int16)v25[1]);
        ++v16;
        Source2b = v25;
        if ( v16 >= v56 )
          goto LABEL_54;
      }
    }
    Source2 = v39;
    Heap = v54;
    v48 = 0;
    if ( !v57 )
      goto LABEL_39;
    v52 = Source1[1];
    v17 = v39;
    while ( 1 )
    {
      v8 = BaseAddress;
      if ( v17[1] == v52 )
        break;
LABEL_34:
      v48 = v16 + 1;
      v17 = (_WORD *)((char *)v17 + (unsigned __int16)v17[1]);
      ++v16;
      Source2 = v17;
      if ( v16 >= v57 )
        goto LABEL_37;
    }
    v18 = v15[1];
    LODWORD(v38) = v52;
    v52 = v18;
    v19 = RtlCompareMemory(v15, v17, v38);
    v20 = v18;
    v8 = BaseAddress;
    v21 = v19 == v20;
    v16 = v48;
    if ( !v21 )
    {
      v15 = Source1;
      v17 = Source2;
      goto LABEL_34;
    }
    v61 = 1;
LABEL_37:
    if ( v16 < v57 )
      goto LABEL_81;
LABEL_38:
    v15 = Source1;
    v5 = CheckOnly;
LABEL_39:
    if ( !v5 )
    {
LABEL_40:
      LODWORD(v38) = (unsigned __int16)v15[1];
      memcpy((char *)Heap + v11, v15, v38);
    }
    v22 = Source1;
    v11 += (unsigned __int16)Source1[1];
    v23 = Source1[1];
    ++v56;
LABEL_42:
    ++v57;
    Source1 = (_WORD *)((char *)v22 + v23);
    v12 = v42;
    v51 = *(_WORD *)((char *)v8 + v42 + 4);
    v5 = CheckOnly;
  }
  while ( v57 < v51 );
LABEL_43:
  v49 = (v11 + 3) & 0xFFFFFFFC;
  Source2a = (void *)(v49 - v43);
  if ( v49 - v43 == *(unsigned __int16 *)((char *)v8 + v12 + 2) )
  {
    v24 = v51;
LABEL_57:
    if ( v56 != v24 )
      v55[2] = v56;
    v29 = (v11 + 3) & 0xFFFFFFFC;
    if ( v11 != v49 )
    {
      if ( v43 == v12 && Source2a == (void *)*(unsigned __int16 *)((char *)v8 + v12 + 2) )
      {
        LODWORD(v38) = v49 - v11;
        v21 = RtlIsZeroMemory((char *)v8 + v11, v38) == 0;
        v30 = CheckOnly;
        if ( v21 )
        {
          v61 = 1;
          if ( CheckOnly )
            goto LABEL_91;
        }
        v29 = (v11 + 3) & 0xFFFFFFFC;
      }
      else
      {
        v30 = CheckOnly;
      }
      if ( !v30 )
      {
        LODWORD(v38) = v29 - v11;
        memset((char *)Heap + v11, 0, v38);
      }
      v11 = (v11 + 3) & 0xFFFFFFFC;
    }
    goto LABEL_68;
  }
  v61 = 1;
  if ( !v5 )
  {
    v55[1] = (_WORD)Source2a;
    v24 = *(_WORD *)((char *)v8 + v12 + 4);
    goto LABEL_57;
  }
LABEL_91:
  if ( v60 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v61;
}
