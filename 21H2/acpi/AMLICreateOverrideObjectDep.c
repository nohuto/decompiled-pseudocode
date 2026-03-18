/*
 * XREFs of AMLICreateOverrideObjectDep @ 0x1C0065F88
 * Callers:
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C0065C08 (AMLIAddNextNamespaceOverrideObject.c)
 * Callees:
 *     NewObjData @ 0x1C0015D5C (NewObjData.c)
 *     FreeObjData @ 0x1C0018AA0 (FreeObjData.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 */

__int64 __fastcall AMLICreateOverrideObjectDep(_BYTE *Src, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // esi
  _BYTE *v7; // rbp
  unsigned int i; // ecx
  _BYTE *v9; // rdx
  __int64 v10; // rax
  _SLIST_ENTRY *v11; // rax
  _SLIST_ENTRY *v12; // r15
  __int64 v13; // rdi
  _SLIST_ENTRY *v14; // r14
  __int64 v15; // rax
  _SLIST_ENTRY *v16; // rax
  __int128 v17; // xmm1
  _SLIST_ENTRY *v18; // xmm0_8
  __int128 v20; // [rsp+20h] [rbp-48h] BYREF
  __int128 v21; // [rsp+30h] [rbp-38h]
  _SLIST_ENTRY *v22; // [rsp+40h] [rbp-28h]

  v3 = 0;
  v4 = 0;
  v7 = Src;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( a2 && Src[a2 - 1] )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    for ( i = 0; i < a2; i += v10 + 1 )
    {
      v9 = &v7[i];
      if ( !*v9 )
        break;
      v10 = -1LL;
      do
        ++v10;
      while ( v9[v10] );
      ++v4;
    }
    WORD1(v20) = 4;
    DWORD2(v21) = 40 * v4 + 48;
    v11 = NewObjData((struct _SLIST_ENTRY *)gpheapGlobal, (__int64)&v20);
    v22 = v11;
    v12 = v11;
    if ( v11 )
    {
      LODWORD(v13) = 0;
      LODWORD(v11->Next) = v4;
      if ( v4 )
      {
        v14 = v11 + 2;
        while ( 1 )
        {
          *((_WORD *)&v14[-2].Next + 5) = 2;
          v15 = -1LL;
          do
            ++v15;
          while ( v7[v15] );
          LODWORD(v14->Next) = v15 + 1;
          v16 = NewObjData((struct _SLIST_ENTRY *)gpheapGlobal, (__int64)(&v14[-2].Next + 1));
          *((_QWORD *)&v14->Next + 1) = v16;
          if ( !v16 )
            break;
          memmove(v16, v7, LODWORD(v14->Next));
          LODWORD(v13) = v13 + 1;
          v7 += LODWORD(v14->Next);
          v14 = (_SLIST_ENTRY *)((char *)v14 + 40);
          if ( (unsigned int)v13 >= v4 )
            goto LABEL_17;
        }
        v3 = -1073741670;
        while ( (_DWORD)v13 )
        {
          v13 = (unsigned int)(v13 - 1);
          FreeObjData((__int64)(&v12[2 * v13].Next + (unsigned int)v13 + 1));
        }
        FreeObjData((__int64)&v20);
      }
      else
      {
LABEL_17:
        v17 = v21;
        *(_OWORD *)a3 = v20;
        v18 = v22;
        *(_OWORD *)(a3 + 16) = v17;
        *(_QWORD *)(a3 + 32) = v18;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v3;
}
