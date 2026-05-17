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

char __stdcall RtlNormalizeSecurityDescriptor(_DWORD **a1, int a2, _DWORD **a3, unsigned int *a4, char a5)
{
  char v5; // cl
  unsigned int v6; // eax
  _DWORD *Heap; // ebx
  _DWORD *v8; // edi
  unsigned int v10; // edx
  unsigned int v11; // esi
  int v12; // edx
  _DWORD *v13; // ebx
  unsigned __int16 v14; // ax
  _WORD *v15; // edx
  unsigned int v16; // eax
  _WORD *v17; // ecx
  unsigned __int16 v18; // di
  SIZE_T v19; // eax
  unsigned __int16 v20; // dx
  bool v21; // zf
  _WORD *v22; // edx
  unsigned __int16 v23; // ax
  unsigned __int16 v24; // ax
  _WORD *v25; // ecx
  unsigned __int16 v26; // di
  SIZE_T v27; // eax
  unsigned __int16 v28; // dx
  unsigned int v29; // ecx
  char v30; // al
  int v31; // eax
  char *v32; // edx
  size_t v33; // eax
  int v34; // eax
  char *v35; // edx
  size_t v36; // eax
  _DWORD *v37; // eax
  SIZE_T v38; // [esp-4h] [ebp-48h]
  SIZE_T v39; // [esp-4h] [ebp-48h]
  char *v40; // [esp+Ch] [ebp-38h]
  size_t v41; // [esp+Ch] [ebp-38h]
  size_t v42; // [esp+Ch] [ebp-38h]
  int v43; // [esp+10h] [ebp-34h]
  unsigned int v44; // [esp+14h] [ebp-30h]
  _WORD *Source2; // [esp+18h] [ebp-2Ch]
  void *Source2a; // [esp+18h] [ebp-2Ch]
  _WORD *Source2b; // [esp+18h] [ebp-2Ch]
  int v48; // [esp+1Ch] [ebp-28h]
  unsigned int v49; // [esp+20h] [ebp-24h]
  unsigned int v50; // [esp+20h] [ebp-24h]
  unsigned __int16 v51; // [esp+20h] [ebp-24h]
  unsigned __int16 v52; // [esp+24h] [ebp-20h]
  unsigned __int16 v53; // [esp+24h] [ebp-20h]
  unsigned int v54; // [esp+24h] [ebp-20h]
  _DWORD *v55; // [esp+28h] [ebp-1Ch]
  _WORD *v56; // [esp+2Ch] [ebp-18h]
  unsigned int v57; // [esp+30h] [ebp-14h]
  unsigned int v58; // [esp+34h] [ebp-10h]
  _DWORD *v59; // [esp+38h] [ebp-Ch]
  _WORD *Source1; // [esp+3Ch] [ebp-8h]
  char v61; // [esp+42h] [ebp-2h]
  char v62; // [esp+43h] [ebp-1h]

  v5 = a5;
  v6 = 0;
  v56 = 0;
  v61 = 0;
  v62 = 0;
  Heap = 0;
  v55 = 0;
  v8 = *a1;
  v59 = *a1;
  if ( !a5 )
  {
    if ( !a3 || (Heap = *a3, (v55 = *a3) == 0) )
    {
      Heap = (_DWORD *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, a2);
      v55 = Heap;
      if ( !Heap )
        return 0;
      v61 = 1;
      v6 = 0;
    }
    qmemcpy(Heap, v8, 0x14u);
    v8 = v59;
    v5 = 0;
  }
  v10 = 1;
  v11 = 20;
  v48 = 1;
  while ( 1 )
  {
    v12 = v10 == 1 ? v8[3] : v8[4];
    v43 = v12;
    if ( v12 )
    {
      if ( v48 != 1 || *(_WORD *)((char *)v8 + v12 + 4) )
      {
        v6 = v11;
        v44 = v11;
      }
      else
      {
        v44 = 0;
      }
      if ( v6 != v12 )
      {
        v62 = 1;
        if ( v5 )
          goto LABEL_91;
        if ( v48 == 1 )
          Heap[3] = v6;
        else
          Heap[4] = v6;
      }
      if ( v6 )
        break;
    }
LABEL_68:
    v5 = a5;
    v10 = v48 + 1;
    v48 = v10;
    if ( v10 > 2 )
    {
      v31 = v8[1];
      if ( v11 != v31 )
      {
        v62 = 1;
        if ( a5 )
          goto LABEL_91;
        Heap[1] = v11;
        v31 = v8[1];
      }
      v32 = (char *)v8 + v31;
      v33 = 4 * *((unsigned __int8 *)v8 + v31 + 1) + 8;
      v41 = v33;
      if ( !a5 )
      {
        memcpy((char *)Heap + Heap[1], v32, v33);
        v5 = 0;
        v33 = v41;
      }
      v11 += v33;
      v34 = v8[2];
      if ( v34 )
      {
        if ( v11 != v34 )
        {
          v62 = 1;
          if ( v5 )
            goto LABEL_91;
          Heap[2] = v11;
          v34 = v8[2];
        }
        v35 = (char *)v8 + v34;
        v36 = 4 * *((unsigned __int8 *)v8 + v34 + 1) + 8;
        v42 = v36;
        if ( !v5 )
        {
          memcpy((char *)Heap + Heap[2], v35, v36);
          v36 = v42;
        }
        v11 += v36;
      }
LABEL_81:
      if ( !v62 || a5 )
        goto LABEL_91;
      v37 = a3;
      if ( a3 )
      {
        if ( v61 )
LABEL_88:
          *v37 = Heap;
        if ( a4 )
          *a4 = v11;
        return v62;
      }
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v8);
      v37 = a1;
      goto LABEL_88;
    }
    v6 = 0;
  }
  if ( !v5 )
  {
    v56 = (_WORD *)((char *)Heap + v6);
    v13 = (_DWORD *)((char *)Heap + v6);
    *v13 = *(_DWORD *)((char *)v8 + v12);
    v13[1] = *(_DWORD *)((char *)v8 + v12 + 4);
    Heap = v55;
  }
  v57 = 0;
  v58 = 0;
  v40 = (char *)v8 + v12 + 8;
  v11 += 8;
  Source1 = v40;
  v14 = *(_WORD *)((char *)v8 + v12 + 4);
  v52 = v14;
  v8 = v59;
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
      v25 = v56 + 4;
      v54 = 0;
      Source2b = v56 + 4;
      if ( !v57 )
        goto LABEL_40;
      v51 = Source1[1];
      while ( 1 )
      {
        v8 = v59;
        if ( v25[1] == v51 )
        {
          v26 = v15[1];
          v39 = v51;
          v51 = v26;
          v27 = RtlCompareMemory(v15, v25, v39);
          v28 = v26;
          v8 = v59;
          v21 = v27 == v28;
          v16 = v54;
          if ( v21 )
          {
            v62 = 1;
LABEL_54:
            if ( v16 >= v57 )
              goto LABEL_38;
            v22 = Source1;
            v23 = Source1[1];
            goto LABEL_42;
          }
          v15 = Source1;
          v25 = Source2b;
        }
        v54 = v16 + 1;
        v25 = (_WORD *)((char *)v25 + (unsigned __int16)v25[1]);
        ++v16;
        Source2b = v25;
        if ( v16 >= v57 )
          goto LABEL_54;
      }
    }
    Source2 = v40;
    Heap = v55;
    v49 = 0;
    if ( !v58 )
      goto LABEL_39;
    v53 = Source1[1];
    v17 = v40;
    while ( 1 )
    {
      v8 = v59;
      if ( v17[1] == v53 )
        break;
LABEL_34:
      v49 = v16 + 1;
      v17 = (_WORD *)((char *)v17 + (unsigned __int16)v17[1]);
      ++v16;
      Source2 = v17;
      if ( v16 >= v58 )
        goto LABEL_37;
    }
    v18 = v15[1];
    v38 = v53;
    v53 = v18;
    v19 = RtlCompareMemory(v15, v17, v38);
    v20 = v18;
    v8 = v59;
    v21 = v19 == v20;
    v16 = v49;
    if ( !v21 )
    {
      v15 = Source1;
      v17 = Source2;
      goto LABEL_34;
    }
    v62 = 1;
LABEL_37:
    if ( v16 < v58 )
      goto LABEL_81;
LABEL_38:
    v15 = Source1;
    v5 = a5;
LABEL_39:
    if ( !v5 )
LABEL_40:
      memcpy((char *)Heap + v11, v15, (unsigned __int16)v15[1]);
    v22 = Source1;
    v11 += (unsigned __int16)Source1[1];
    v23 = Source1[1];
    ++v57;
LABEL_42:
    ++v58;
    Source1 = (_WORD *)((char *)v22 + v23);
    v12 = v43;
    v52 = *(_WORD *)((char *)v8 + v43 + 4);
    v5 = a5;
  }
  while ( v58 < v52 );
LABEL_43:
  v50 = (v11 + 3) & 0xFFFFFFFC;
  Source2a = (void *)(v50 - v44);
  if ( v50 - v44 == *(unsigned __int16 *)((char *)v8 + v12 + 2) )
  {
    v24 = v52;
LABEL_57:
    if ( v57 != v24 )
      v56[2] = v57;
    v29 = (v11 + 3) & 0xFFFFFFFC;
    if ( v11 != v50 )
    {
      if ( v44 == v12 && Source2a == (void *)*(unsigned __int16 *)((char *)v8 + v12 + 2) )
      {
        v21 = (unsigned __int8)RtlIsZeroMemory((char *)v8 + v11, v50 - v11) == 0;
        v30 = a5;
        if ( v21 )
        {
          v62 = 1;
          if ( a5 )
            goto LABEL_91;
        }
        v29 = (v11 + 3) & 0xFFFFFFFC;
      }
      else
      {
        v30 = a5;
      }
      if ( !v30 )
        memset((char *)Heap + v11, 0, v29 - v11);
      v11 = (v11 + 3) & 0xFFFFFFFC;
    }
    goto LABEL_68;
  }
  v62 = 1;
  if ( !v5 )
  {
    v56[1] = (_WORD)Source2a;
    v24 = *(_WORD *)((char *)v8 + v12 + 4);
    goto LABEL_57;
  }
LABEL_91:
  if ( v61 )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)Heap);
  return v62;
}
