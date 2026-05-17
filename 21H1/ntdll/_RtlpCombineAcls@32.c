/*
 * XREFs of _RtlpCombineAcls@32 @ 0x4B2D8CAF
 * Callers:
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 *     _RtlpSetSecurityObject@32 @ 0x4B3491B6 (_RtlpSetSecurityObject@32.c)
 * Callees:
 *     _RtlULongPtrAdd@12 @ 0x4B2A9463 (_RtlULongPtrAdd@12.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlCreateAcl@12 @ 0x4B2D7BF0 (_RtlCreateAcl@12.c)
 *     _RtlFirstFreeAce@8 @ 0x4B2D7F40 (_RtlFirstFreeAce@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall RtlpCombineAcls(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        _DWORD *a7,
        _DWORD *a8)
{
  unsigned __int8 *v9; // ebx
  unsigned __int16 *v11; // ecx
  bool v12; // cf
  char *i; // edx
  int Acl; // ebx
  int Heap; // eax
  unsigned __int8 *v16; // edx
  char *v17; // esi
  unsigned __int8 *v18; // edx
  char *v19; // ecx
  _WORD *v20; // edi
  int v21; // ebx
  unsigned __int16 v22; // ax
  unsigned __int8 *v23; // edx
  char *v24; // edx
  unsigned __int8 *v25; // ecx
  unsigned __int16 *v26; // ecx
  bool v27; // cf
  char *j; // edx
  unsigned __int16 *v29; // ecx
  bool v30; // cf
  char *k; // edx
  unsigned __int16 *v32; // ecx
  bool v33; // cf
  char *m; // edx
  unsigned __int16 *v35; // ecx
  bool v36; // cf
  char *n; // edx
  char *v38; // ecx
  char *v39; // ecx
  char *v40; // ecx
  _WORD *v41; // edi
  char *v42; // ecx
  _WORD *v43; // edi
  int v44; // ebx
  _WORD *v45; // edi
  int v46; // ebx
  unsigned __int8 v47; // al
  unsigned __int16 *v48; // edi
  int v49; // ebx
  unsigned __int8 v50; // al
  unsigned __int16 v51; // ax
  _WORD *v52; // edi
  int v53; // ebx
  unsigned __int16 v54; // ax
  unsigned __int16 v55; // ax
  unsigned __int16 v56; // ax
  int v57; // ebx
  unsigned int v58; // ecx
  unsigned __int16 v59; // ax
  unsigned int v60; // [esp+Ch] [ebp-24h]
  void *v61; // [esp+10h] [ebp-20h] BYREF
  void *Src; // [esp+14h] [ebp-1Ch]
  void *v63; // [esp+18h] [ebp-18h]
  unsigned __int8 *v64; // [esp+1Ch] [ebp-14h]
  unsigned __int8 *v65; // [esp+20h] [ebp-10h]
  int v66; // [esp+24h] [ebp-Ch]
  unsigned int v67; // [esp+28h] [ebp-8h]
  unsigned int v68; // [esp+2Ch] [ebp-4h] BYREF

  v67 = 2;
  v65 = a1;
  v60 = 0;
  v9 = a2;
  v64 = a2;
  v66 = 0;
  v61 = 0;
  if ( !a1 && !a2 && !a3 && !a4 && !a5 && !a6 )
  {
    *a7 = 0;
    return 0;
  }
  v68 = 8;
  if ( a1 )
  {
    v24 = 0;
    v25 = a1 + 8;
    v63 = 0;
    Src = a1 + 8;
    if ( *((_WORD *)a1 + 2) )
    {
      do
      {
        v47 = *v25;
        if ( *v25 >= 2u && (v47 <= 3u || v47 > 6u && (v47 <= 8u || (unsigned __int8)(v47 - 13) <= 3u)) )
        {
          Acl = RtlULongPtrAdd(v68, *((unsigned __int16 *)v25 + 1), (int *)&v68);
          if ( Acl < 0 )
            goto LABEL_40;
          if ( a8 )
            *a8 |= 8u;
          v25 = (unsigned __int8 *)Src;
          v24 = (char *)v63;
          if ( *v65 > v67 )
            v67 = *v65;
        }
        ++v24;
        v25 += *((unsigned __int16 *)v25 + 1);
        v63 = v24;
        Src = v25;
      }
      while ( (unsigned int)v24 < *((unsigned __int16 *)v65 + 2) );
      v9 = v64;
    }
  }
  if ( v9 )
  {
    v11 = (unsigned __int16 *)(v9 + 8);
    v12 = *((_WORD *)v9 + 2) != 0;
    for ( i = 0; ; v12 = (unsigned int)i < *((unsigned __int16 *)v9 + 2) )
    {
      v63 = v11;
      Src = i;
      if ( !v12 )
        break;
      if ( *(_BYTE *)v11 == 17 )
      {
        Acl = RtlULongPtrAdd(v68, v11[1], (int *)&v68);
        if ( Acl < 0 )
          goto LABEL_40;
        if ( a8 )
          *a8 |= 0x10u;
        v9 = v64;
        v11 = (unsigned __int16 *)v63;
        i = (char *)Src;
        if ( *v64 > v67 )
          v67 = *v64;
      }
      ++i;
      v11 = (unsigned __int16 *)((char *)v11 + v11[1]);
    }
  }
  if ( a5 )
  {
    v26 = (unsigned __int16 *)(a5 + 8);
    v27 = *((_WORD *)a5 + 2) != 0;
    for ( j = 0; ; v27 = (unsigned int)j < *((unsigned __int16 *)a5 + 2) )
    {
      v63 = v26;
      Src = j;
      if ( !v27 )
        break;
      if ( *(_BYTE *)v26 == 20 )
      {
        Acl = RtlULongPtrAdd(v68, v26[1], (int *)&v68);
        if ( Acl < 0 )
          goto LABEL_40;
        if ( a8 )
          *a8 |= 0x80u;
        j = (char *)Src;
        v26 = (unsigned __int16 *)v63;
        if ( *a5 > v67 )
          v67 = *a5;
      }
      ++j;
      v26 = (unsigned __int16 *)((char *)v26 + v26[1]);
    }
  }
  if ( a6 )
  {
    v29 = (unsigned __int16 *)(a6 + 8);
    v30 = *((_WORD *)a6 + 2) != 0;
    for ( k = 0; ; v30 = (unsigned int)k < *((unsigned __int16 *)a6 + 2) )
    {
      v63 = v29;
      Src = k;
      if ( !v30 )
        break;
      if ( *(_BYTE *)v29 == 21 )
      {
        Acl = RtlULongPtrAdd(v68, v29[1], (int *)&v68);
        if ( Acl < 0 )
          goto LABEL_40;
        if ( a8 )
          *a8 |= 0x100u;
        k = (char *)Src;
        v29 = (unsigned __int16 *)v63;
        if ( *a6 > v67 )
          v67 = *a6;
      }
      ++k;
      v29 = (unsigned __int16 *)((char *)v29 + v29[1]);
    }
  }
  if ( a3 )
  {
    v32 = (unsigned __int16 *)(a3 + 8);
    v33 = *((_WORD *)a3 + 2) != 0;
    for ( m = 0; ; v33 = (unsigned int)m < *((unsigned __int16 *)a3 + 2) )
    {
      v63 = v32;
      Src = m;
      if ( !v33 )
        break;
      if ( *(_BYTE *)v32 == 18 )
      {
        Acl = RtlULongPtrAdd(v68, v32[1], (int *)&v68);
        if ( Acl < 0 )
          goto LABEL_40;
        if ( a8 )
          *a8 |= 0x20u;
        m = (char *)Src;
        v32 = (unsigned __int16 *)v63;
        if ( *a3 > v67 )
          v67 = *a3;
      }
      ++m;
      v32 = (unsigned __int16 *)((char *)v32 + v32[1]);
    }
  }
  if ( a4 )
  {
    v35 = (unsigned __int16 *)(a4 + 8);
    v36 = *((_WORD *)a4 + 2) != 0;
    for ( n = 0; ; v36 = (unsigned int)n < *((unsigned __int16 *)a4 + 2) )
    {
      v63 = v35;
      Src = n;
      if ( !v36 )
        break;
      if ( *(_BYTE *)v35 == 19 )
      {
        Acl = RtlULongPtrAdd(v68, v35[1], (int *)&v68);
        if ( Acl < 0 )
          goto LABEL_40;
        if ( a8 )
          *a8 |= 0x40u;
        n = (char *)Src;
        v35 = (unsigned __int16 *)v63;
        if ( *a4 > v67 )
          v67 = *a4;
      }
      ++n;
      v35 = (unsigned __int16 *)((char *)v35 + v35[1]);
    }
  }
  Acl = RtlULongPtrAdd(v68, 3, (int *)&v68);
  if ( Acl >= 0 )
  {
    v68 &= 0xFFFFFFFC;
    Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v68);
    v66 = Heap;
    if ( Heap )
    {
      Acl = RtlCreateAcl(Heap, v68, v67);
      v67 = Acl;
      if ( Acl >= 0 )
      {
        if ( RtlFirstFreeAce(v66, (unsigned int *)&v61) )
        {
          v16 = v65;
          if ( v65 && (v38 = 0, v63 = v65 + 8, Src = 0, *((_WORD *)v65 + 2)) )
          {
            v17 = (char *)v61;
            v48 = (unsigned __int16 *)v63;
            v49 = v66;
            do
            {
              v50 = *(_BYTE *)v48;
              if ( *(_BYTE *)v48 < 2u || v50 > 3u && (v50 <= 6u || v50 > 8u && (unsigned __int8)(v50 - 13) > 3u) )
              {
                v51 = v48[1];
              }
              else
              {
                memcpy(v17, v48, v48[1]);
                v16 = v65;
                ++*(_WORD *)(v49 + 4);
                v17 += v48[1];
                v51 = v48[1];
                v38 = (char *)Src;
              }
              ++v38;
              v48 = (unsigned __int16 *)((char *)v48 + v51);
              Src = v38;
            }
            while ( (unsigned int)v38 < *((unsigned __int16 *)v16 + 2) );
            Acl = v67;
          }
          else
          {
            v17 = (char *)v61;
          }
          v18 = v64;
          if ( v64 )
          {
            v19 = 0;
            Src = v64 + 8;
            v61 = 0;
            if ( *((_WORD *)v64 + 2) )
            {
              v20 = Src;
              v21 = v66;
              do
              {
                v22 = v20[1];
                if ( *(_BYTE *)v20 == 17 )
                {
                  memcpy(v17, v20, (unsigned __int16)v20[1]);
                  v18 = v64;
                  ++*(_WORD *)(v21 + 4);
                  v17 += (unsigned __int16)v20[1];
                  v22 = v20[1];
                  v19 = (char *)v61;
                }
                ++v19;
                v20 = (_WORD *)((char *)v20 + v22);
                v61 = v19;
              }
              while ( (unsigned int)v19 < *((unsigned __int16 *)v18 + 2) );
              Acl = v67;
            }
          }
          v23 = a5;
          if ( a5 )
          {
            v39 = 0;
            Src = a5 + 8;
            v61 = 0;
            if ( *((_WORD *)a5 + 2) )
            {
              v52 = Src;
              v53 = v66;
              do
              {
                v54 = v52[1];
                if ( *(_BYTE *)v52 == 20 )
                {
                  memcpy(v17, v52, (unsigned __int16)v52[1]);
                  v23 = a5;
                  ++*(_WORD *)(v53 + 4);
                  v17 += (unsigned __int16)v52[1];
                  v54 = v52[1];
                  v39 = (char *)v61;
                }
                ++v39;
                v52 = (_WORD *)((char *)v52 + v54);
                v61 = v39;
              }
              while ( (unsigned int)v39 < *((unsigned __int16 *)v23 + 2) );
              Acl = v67;
            }
          }
          if ( a6 )
          {
            v40 = 0;
            v41 = a6 + 8;
            v61 = 0;
            if ( *((_WORD *)a6 + 2) )
            {
              v46 = v66;
              do
              {
                v55 = v41[1];
                if ( *(_BYTE *)v41 == 21 )
                {
                  memcpy(v17, v41, (unsigned __int16)v41[1]);
                  ++*(_WORD *)(v46 + 4);
                  v17 += (unsigned __int16)v41[1];
                  v55 = v41[1];
                  v40 = (char *)v61;
                }
                ++v40;
                v41 = (_WORD *)((char *)v41 + v55);
                v61 = v40;
              }
              while ( (unsigned int)v40 < *((unsigned __int16 *)a6 + 2) );
              Acl = v67;
            }
          }
          if ( a3 )
          {
            v42 = 0;
            v43 = a3 + 8;
            v61 = 0;
            if ( *((_WORD *)a3 + 2) )
            {
              v44 = v66;
              do
              {
                v56 = v43[1];
                if ( *(_BYTE *)v43 == 18 )
                {
                  memcpy(v17, v43, (unsigned __int16)v43[1]);
                  ++*(_WORD *)(v44 + 4);
                  v17 += (unsigned __int16)v43[1];
                  v56 = v43[1];
                  v42 = (char *)v61;
                }
                ++v42;
                v43 = (_WORD *)((char *)v43 + v56);
                v61 = v42;
              }
              while ( (unsigned int)v42 < *((unsigned __int16 *)a3 + 2) );
              Acl = v67;
            }
          }
          if ( a4 )
          {
            v45 = a4 + 8;
            if ( *((_WORD *)a4 + 2) )
            {
              v57 = v66;
              v58 = 0;
              do
              {
                v59 = v45[1];
                if ( *(_BYTE *)v45 == 19 )
                {
                  memcpy(v17, v45, (unsigned __int16)v45[1]);
                  ++*(_WORD *)(v57 + 4);
                  v17 += (unsigned __int16)v45[1];
                  v59 = v45[1];
                  v58 = v60;
                }
                ++v58;
                v45 = (_WORD *)((char *)v45 + v59);
                v60 = v58;
              }
              while ( v58 < *((unsigned __int16 *)a4 + 2) );
              Acl = v67;
            }
          }
          goto LABEL_40;
        }
        Acl = -1073741699;
      }
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v66);
      v66 = 0;
    }
    else
    {
      Acl = -1073741801;
    }
  }
LABEL_40:
  *a7 = v66;
  return Acl;
}
