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

signed int __fastcall RtlpCombineAcls(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        PACL *a7,
        _DWORD *a8)
{
  unsigned __int8 *v9; // ebx
  unsigned __int16 *v11; // ecx
  bool v12; // cf
  char *i; // edx
  signed int v14; // ebx
  ACL *Heap; // eax
  unsigned __int8 *v16; // edx
  char *v17; // esi
  unsigned __int8 *v18; // edx
  char *v19; // ecx
  _WORD *v20; // edi
  PACL v21; // ebx
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
  PACL v44; // ebx
  _WORD *v45; // edi
  PACL v46; // ebx
  unsigned __int8 v47; // al
  unsigned __int16 *v48; // edi
  PACL v49; // ebx
  unsigned __int8 v50; // al
  unsigned __int16 v51; // ax
  _WORD *v52; // edi
  PACL v53; // ebx
  unsigned __int16 v54; // ax
  unsigned __int16 v55; // ax
  unsigned __int16 v56; // ax
  PACL v57; // ebx
  unsigned int v58; // ecx
  unsigned __int16 v59; // ax
  SIZE_T v60; // [esp-4h] [ebp-34h]
  size_t v61; // [esp-4h] [ebp-34h]
  unsigned int v62; // [esp+Ch] [ebp-24h]
  PVOID FirstFree; // [esp+10h] [ebp-20h] BYREF
  void *Src; // [esp+14h] [ebp-1Ch]
  void *v65; // [esp+18h] [ebp-18h]
  unsigned __int8 *v66; // [esp+1Ch] [ebp-14h]
  unsigned __int8 *v67; // [esp+20h] [ebp-10h]
  PACL Acl; // [esp+24h] [ebp-Ch]
  ULONG AclRevision; // [esp+28h] [ebp-8h]
  ULONG AclLength; // [esp+2Ch] [ebp-4h] BYREF

  AclRevision = 2;
  v67 = a1;
  v62 = 0;
  v9 = a2;
  v66 = a2;
  Acl = 0;
  FirstFree = 0;
  if ( !a1 && !a2 && !a3 && !a4 && !a5 && !a6 )
  {
    *a7 = 0;
    return 0;
  }
  AclLength = 8;
  if ( a1 )
  {
    v24 = 0;
    v25 = a1 + 8;
    v65 = 0;
    Src = a1 + 8;
    if ( *((_WORD *)a1 + 2) )
    {
      do
      {
        v47 = *v25;
        if ( *v25 >= 2u && (v47 <= 3u || v47 > 6u && (v47 <= 8u || (unsigned __int8)(v47 - 13) <= 3u)) )
        {
          v14 = RtlULongPtrAdd(AclLength, *((unsigned __int16 *)v25 + 1), (int *)&AclLength);
          if ( v14 < 0 )
            goto LABEL_40;
          if ( a8 )
            *a8 |= 8u;
          v25 = (unsigned __int8 *)Src;
          v24 = (char *)v65;
          if ( *v67 > AclRevision )
            AclRevision = *v67;
        }
        ++v24;
        v25 += *((unsigned __int16 *)v25 + 1);
        v65 = v24;
        Src = v25;
      }
      while ( (unsigned int)v24 < *((unsigned __int16 *)v67 + 2) );
      v9 = v66;
    }
  }
  if ( v9 )
  {
    v11 = (unsigned __int16 *)(v9 + 8);
    v12 = *((_WORD *)v9 + 2) != 0;
    for ( i = 0; ; v12 = (unsigned int)i < *((unsigned __int16 *)v9 + 2) )
    {
      v65 = v11;
      Src = i;
      if ( !v12 )
        break;
      if ( *(_BYTE *)v11 == 17 )
      {
        v14 = RtlULongPtrAdd(AclLength, v11[1], (int *)&AclLength);
        if ( v14 < 0 )
          goto LABEL_40;
        if ( a8 )
          *a8 |= 0x10u;
        v9 = v66;
        v11 = (unsigned __int16 *)v65;
        i = (char *)Src;
        if ( *v66 > AclRevision )
          AclRevision = *v66;
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
      v65 = v26;
      Src = j;
      if ( !v27 )
        break;
      if ( *(_BYTE *)v26 == 20 )
      {
        v14 = RtlULongPtrAdd(AclLength, v26[1], (int *)&AclLength);
        if ( v14 < 0 )
          goto LABEL_40;
        if ( a8 )
          *a8 |= 0x80u;
        j = (char *)Src;
        v26 = (unsigned __int16 *)v65;
        if ( *a5 > AclRevision )
          AclRevision = *a5;
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
      v65 = v29;
      Src = k;
      if ( !v30 )
        break;
      if ( *(_BYTE *)v29 == 21 )
      {
        v14 = RtlULongPtrAdd(AclLength, v29[1], (int *)&AclLength);
        if ( v14 < 0 )
          goto LABEL_40;
        if ( a8 )
          *a8 |= 0x100u;
        k = (char *)Src;
        v29 = (unsigned __int16 *)v65;
        if ( *a6 > AclRevision )
          AclRevision = *a6;
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
      v65 = v32;
      Src = m;
      if ( !v33 )
        break;
      if ( *(_BYTE *)v32 == 18 )
      {
        v14 = RtlULongPtrAdd(AclLength, v32[1], (int *)&AclLength);
        if ( v14 < 0 )
          goto LABEL_40;
        if ( a8 )
          *a8 |= 0x20u;
        m = (char *)Src;
        v32 = (unsigned __int16 *)v65;
        if ( *a3 > AclRevision )
          AclRevision = *a3;
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
      v65 = v35;
      Src = n;
      if ( !v36 )
        break;
      if ( *(_BYTE *)v35 == 19 )
      {
        v14 = RtlULongPtrAdd(AclLength, v35[1], (int *)&AclLength);
        if ( v14 < 0 )
          goto LABEL_40;
        if ( a8 )
          *a8 |= 0x40u;
        n = (char *)Src;
        v35 = (unsigned __int16 *)v65;
        if ( *a4 > AclRevision )
          AclRevision = *a4;
      }
      ++n;
      v35 = (unsigned __int16 *)((char *)v35 + v35[1]);
    }
  }
  v14 = RtlULongPtrAdd(AclLength, 3, (int *)&AclLength);
  if ( v14 >= 0 )
  {
    AclLength &= 0xFFFFFFFC;
    LODWORD(v60) = AclLength;
    Heap = (ACL *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v60);
    Acl = Heap;
    if ( Heap )
    {
      v14 = RtlCreateAcl(Heap, AclLength, AclRevision);
      AclRevision = v14;
      if ( v14 >= 0 )
      {
        if ( RtlFirstFreeAce(Acl, &FirstFree) )
        {
          v16 = v67;
          if ( v67 && (v38 = 0, v65 = v67 + 8, Src = 0, *((_WORD *)v67 + 2)) )
          {
            v17 = (char *)FirstFree;
            v48 = (unsigned __int16 *)v65;
            v49 = Acl;
            do
            {
              v50 = *(_BYTE *)v48;
              if ( *(_BYTE *)v48 < 2u || v50 > 3u && (v50 <= 6u || v50 > 8u && (unsigned __int8)(v50 - 13) > 3u) )
              {
                v51 = v48[1];
              }
              else
              {
                LODWORD(v61) = v48[1];
                memcpy(v17, v48, v61);
                v16 = v67;
                ++v49->AceCount;
                v17 += v48[1];
                v51 = v48[1];
                v38 = (char *)Src;
              }
              ++v38;
              v48 = (unsigned __int16 *)((char *)v48 + v51);
              Src = v38;
            }
            while ( (unsigned int)v38 < *((unsigned __int16 *)v16 + 2) );
            v14 = AclRevision;
          }
          else
          {
            v17 = (char *)FirstFree;
          }
          v18 = v66;
          if ( v66 )
          {
            v19 = 0;
            Src = v66 + 8;
            FirstFree = 0;
            if ( *((_WORD *)v66 + 2) )
            {
              v20 = Src;
              v21 = Acl;
              do
              {
                v22 = v20[1];
                if ( *(_BYTE *)v20 == 17 )
                {
                  LODWORD(v61) = (unsigned __int16)v20[1];
                  memcpy(v17, v20, v61);
                  v18 = v66;
                  ++v21->AceCount;
                  v17 += (unsigned __int16)v20[1];
                  v22 = v20[1];
                  v19 = (char *)FirstFree;
                }
                ++v19;
                v20 = (_WORD *)((char *)v20 + v22);
                FirstFree = v19;
              }
              while ( (unsigned int)v19 < *((unsigned __int16 *)v18 + 2) );
              v14 = AclRevision;
            }
          }
          v23 = a5;
          if ( a5 )
          {
            v39 = 0;
            Src = a5 + 8;
            FirstFree = 0;
            if ( *((_WORD *)a5 + 2) )
            {
              v52 = Src;
              v53 = Acl;
              do
              {
                v54 = v52[1];
                if ( *(_BYTE *)v52 == 20 )
                {
                  LODWORD(v61) = (unsigned __int16)v52[1];
                  memcpy(v17, v52, v61);
                  v23 = a5;
                  ++v53->AceCount;
                  v17 += (unsigned __int16)v52[1];
                  v54 = v52[1];
                  v39 = (char *)FirstFree;
                }
                ++v39;
                v52 = (_WORD *)((char *)v52 + v54);
                FirstFree = v39;
              }
              while ( (unsigned int)v39 < *((unsigned __int16 *)v23 + 2) );
              v14 = AclRevision;
            }
          }
          if ( a6 )
          {
            v40 = 0;
            v41 = a6 + 8;
            FirstFree = 0;
            if ( *((_WORD *)a6 + 2) )
            {
              v46 = Acl;
              do
              {
                v55 = v41[1];
                if ( *(_BYTE *)v41 == 21 )
                {
                  LODWORD(v61) = (unsigned __int16)v41[1];
                  memcpy(v17, v41, v61);
                  ++v46->AceCount;
                  v17 += (unsigned __int16)v41[1];
                  v55 = v41[1];
                  v40 = (char *)FirstFree;
                }
                ++v40;
                v41 = (_WORD *)((char *)v41 + v55);
                FirstFree = v40;
              }
              while ( (unsigned int)v40 < *((unsigned __int16 *)a6 + 2) );
              v14 = AclRevision;
            }
          }
          if ( a3 )
          {
            v42 = 0;
            v43 = a3 + 8;
            FirstFree = 0;
            if ( *((_WORD *)a3 + 2) )
            {
              v44 = Acl;
              do
              {
                v56 = v43[1];
                if ( *(_BYTE *)v43 == 18 )
                {
                  LODWORD(v61) = (unsigned __int16)v43[1];
                  memcpy(v17, v43, v61);
                  ++v44->AceCount;
                  v17 += (unsigned __int16)v43[1];
                  v56 = v43[1];
                  v42 = (char *)FirstFree;
                }
                ++v42;
                v43 = (_WORD *)((char *)v43 + v56);
                FirstFree = v42;
              }
              while ( (unsigned int)v42 < *((unsigned __int16 *)a3 + 2) );
              v14 = AclRevision;
            }
          }
          if ( a4 )
          {
            v45 = a4 + 8;
            if ( *((_WORD *)a4 + 2) )
            {
              v57 = Acl;
              v58 = 0;
              do
              {
                v59 = v45[1];
                if ( *(_BYTE *)v45 == 19 )
                {
                  LODWORD(v61) = (unsigned __int16)v45[1];
                  memcpy(v17, v45, v61);
                  ++v57->AceCount;
                  v17 += (unsigned __int16)v45[1];
                  v59 = v45[1];
                  v58 = v62;
                }
                ++v58;
                v45 = (_WORD *)((char *)v45 + v59);
                v62 = v58;
              }
              while ( v58 < *((unsigned __int16 *)a4 + 2) );
              v14 = AclRevision;
            }
          }
          goto LABEL_40;
        }
        v14 = -1073741699;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Acl);
      Acl = 0;
    }
    else
    {
      v14 = -1073741801;
    }
  }
LABEL_40:
  *a7 = Acl;
  return v14;
}
