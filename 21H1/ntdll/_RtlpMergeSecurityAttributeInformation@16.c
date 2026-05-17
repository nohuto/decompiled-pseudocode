/*
 * XREFs of _RtlpMergeSecurityAttributeInformation@16 @ 0x4B34C610
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlpIsAttributeAceInSacl@16 @ 0x4B34C479 (_RtlpIsAttributeAceInSacl@16.c)
 */

int __stdcall RtlpMergeSecurityAttributeInformation(int a1, int a2, int *a3, char a4)
{
  int *v4; // ecx
  int v5; // ebx
  int v6; // esi
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // ecx
  int Heap; // eax
  _BYTE *i; // edi
  char IsAttributeAceInSacl; // al
  char *v14; // eax
  int v15; // ecx
  bool j; // cf
  char v17; // al
  _WORD *v18; // ecx
  _BYTE *v19; // edi
  _BYTE *v20; // edx
  char v21; // al
  _BYTE *v22; // edx
  unsigned int v23; // eax
  unsigned int v24; // edi
  _WORD *v25; // edi
  unsigned int v26; // ecx
  bool v27; // cf
  _BYTE *v28; // edx
  int result; // eax
  char *Src; // [esp+10h] [ebp-18h]
  _WORD *Srca; // [esp+10h] [ebp-18h]
  char *Srcb; // [esp+10h] [ebp-18h]
  void *Srcc; // [esp+10h] [ebp-18h]
  int v34; // [esp+14h] [ebp-14h]
  char *v35; // [esp+18h] [ebp-10h]
  _WORD *v36; // [esp+18h] [ebp-10h]
  unsigned int v37; // [esp+1Ch] [ebp-Ch]
  _BYTE *v38; // [esp+20h] [ebp-8h]
  char v39; // [esp+27h] [ebp-1h] BYREF

  v4 = a3;
  v5 = 0;
  v39 = 0;
  v34 = 0;
  v6 = 0;
  if ( a3 )
  {
    v7 = a2;
    if ( a1 )
    {
      v8 = *(unsigned __int16 *)(a1 + 2);
    }
    else
    {
      if ( !a2 )
        goto LABEL_75;
      v8 = 0;
    }
    if ( a2 )
      v9 = *(unsigned __int16 *)(a2 + 2);
    else
      v9 = 0;
    v10 = v9 + v8;
    v37 = v10;
    if ( v10 < 8 )
    {
LABEL_78:
      v34 = -1073741705;
      goto LABEL_79;
    }
    Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v10);
    v6 = Heap;
    if ( !Heap )
    {
      v34 = -1073741801;
LABEL_79:
      v4 = a3;
      goto LABEL_76;
    }
    *(_DWORD *)Heap = 0;
    *(_DWORD *)(Heap + 4) = 0;
    *(_WORD *)(Heap + 2) = 8;
    *(_BYTE *)Heap = 2;
    v38 = (_BYTE *)(Heap + 8);
    if ( a1 )
    {
      Src = 0;
      for ( i = (_BYTE *)(a1 + 8); (unsigned int)Src < *(unsigned __int16 *)(a1 + 4); i += *((unsigned __int16 *)i + 1) )
      {
        if ( *i == 18 && (i[1] & 0x10) == 0 && !RtlpIsAttributeAceInSacl((int)i, v6, 0, &v39) )
        {
          if ( !a2 || a4 )
            IsAttributeAceInSacl = 0;
          else
            IsAttributeAceInSacl = RtlpIsAttributeAceInSacl((int)i, a2, 1, &v39);
          if ( IsAttributeAceInSacl && v39 )
          {
            *(_WORD *)(v6 + 2) += *((_WORD *)i + 1);
            if ( *(unsigned __int16 *)(v6 + 2) > v37 )
              goto LABEL_77;
            memcpy(v38, i, *((unsigned __int16 *)i + 1));
            ++*(_WORD *)(v6 + 4);
            v38[1] |= 0x10u;
            v38 += *((unsigned __int16 *)i + 1);
          }
          else
          {
            *(_WORD *)(v6 + 2) += *((_WORD *)i + 1);
            if ( *(unsigned __int16 *)(v6 + 2) > v37 )
            {
LABEL_77:
              RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v6);
              goto LABEL_78;
            }
            memcpy(v38, i, *((unsigned __int16 *)i + 1));
            ++*(_WORD *)(v6 + 4);
            v38 += *((unsigned __int16 *)i + 1);
          }
        }
        ++Src;
      }
      v7 = a2;
    }
    if ( v7 && a4 )
    {
      v14 = 0;
      v15 = v7 + 8;
      v35 = 0;
      for ( j = *(_WORD *)(v7 + 4) != 0; ; j = (unsigned int)++v14 < *(unsigned __int16 *)(v7 + 4) )
      {
        Srca = (_WORD *)v15;
        if ( !j )
          break;
        if ( *(_BYTE *)v15 == 18 && (*(_BYTE *)(v15 + 1) & 0x10) == 0 )
        {
          v17 = RtlpIsAttributeAceInSacl(v15, v6, 0, &v39);
          v15 = (int)Srca;
          if ( !v17 )
          {
            *(_WORD *)(v6 + 2) += Srca[1];
            if ( *(unsigned __int16 *)(v6 + 2) > v37 )
              goto LABEL_77;
            memcpy(v38, Srca, (unsigned __int16)Srca[1]);
            v15 = (int)Srca;
            ++*(_WORD *)(v6 + 4);
            v38 += (unsigned __int16)Srca[1];
          }
          v14 = v35;
        }
        v35 = v14 + 1;
        v15 += *(unsigned __int16 *)(v15 + 2);
      }
    }
    if ( a1 )
    {
      v18 = (_WORD *)(a1 + 8);
      Srcb = 0;
      v19 = (_BYTE *)(a1 + 8);
      v36 = (_WORD *)(a1 + 8);
      v20 = v38;
      if ( *(_WORD *)(a1 + 4) )
      {
        do
        {
          if ( *v19 == 18 && (v19[1] & 0x10) != 0 )
          {
            if ( RtlpIsAttributeAceInSacl((int)v19, v6, 0, &v39) )
            {
              v20 = v38;
            }
            else
            {
              if ( a2 )
                v21 = RtlpIsAttributeAceInSacl((int)v19, a2, 1, &v39);
              else
                v21 = 0;
              if ( v21 && v39 )
              {
                *(_WORD *)(v6 + 2) += *((_WORD *)v19 + 1);
                if ( *(unsigned __int16 *)(v6 + 2) > v37 )
                  goto LABEL_77;
                memcpy(v38, v19, *((unsigned __int16 *)v19 + 1));
                v22 = v38;
                ++*(_WORD *)(v6 + 4);
                v38[1] |= 0x10u;
              }
              else
              {
                *(_WORD *)(v6 + 2) += *((_WORD *)v19 + 1);
                if ( *(unsigned __int16 *)(v6 + 2) > v37 )
                  goto LABEL_77;
                memcpy(v38, v19, *((unsigned __int16 *)v19 + 1));
                v22 = v38;
                ++*(_WORD *)(v6 + 4);
                v38[1] &= ~0x10u;
              }
              v20 = &v22[*((unsigned __int16 *)v19 + 1)];
              v38 = v20;
            }
          }
          ++Srcb;
          v19 += *((unsigned __int16 *)v19 + 1);
          v23 = *(unsigned __int16 *)(a1 + 4);
        }
        while ( (unsigned int)Srcb < v23 );
        v18 = (_WORD *)(a1 + 8);
      }
      else
      {
        LOWORD(v23) = 0;
      }
      v24 = 0;
      if ( (_WORD)v23 )
      {
        do
        {
          if ( *(_BYTE *)v18 != 18 )
          {
            *(_WORD *)(v6 + 2) += v18[1];
            if ( *(unsigned __int16 *)(v6 + 2) > v37 )
              goto LABEL_77;
            memcpy(v20, v18, (unsigned __int16)v18[1]);
            v18 = v36;
            ++*(_WORD *)(v6 + 4);
            v20 = &v38[(unsigned __int16)v36[1]];
            v38 = v20;
          }
          ++v24;
          v18 = (_WORD *)((char *)v18 + (unsigned __int16)v18[1]);
          v36 = v18;
        }
        while ( v24 < *(unsigned __int16 *)(a1 + 4) );
      }
      v7 = a2;
    }
    if ( v7 && a4 )
    {
      v25 = (_WORD *)(v7 + 8);
      v26 = 0;
      v27 = *(_WORD *)(a2 + 4) != 0;
      v28 = v38;
      while ( 1 )
      {
        Srcc = (void *)v26;
        if ( !v27 )
          break;
        if ( *(_BYTE *)v25 != 18 )
        {
          *(_WORD *)(v6 + 2) += v25[1];
          if ( *(unsigned __int16 *)(v6 + 2) > v37 )
            goto LABEL_77;
          memcpy(v28, v25, (unsigned __int16)v25[1]);
          ++*(_WORD *)(v6 + 4);
          v26 = (unsigned int)Srcc;
          v28 = &v38[(unsigned __int16)v25[1]];
          v38 = v28;
        }
        ++v26;
        v25 = (_WORD *)((char *)v25 + (unsigned __int16)v25[1]);
        v27 = v26 < *(unsigned __int16 *)(a2 + 4);
      }
    }
    v4 = a3;
LABEL_75:
    v5 = v6;
    goto LABEL_76;
  }
  v34 = -1073741811;
LABEL_76:
  result = v34;
  *v4 = v5;
  return result;
}
