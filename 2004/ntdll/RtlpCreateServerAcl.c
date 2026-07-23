/*
 * XREFs of RtlpCreateServerAcl @ 0x1800E8364
 * Callers:
 *     RtlpNewSecurityObject @ 0x180038B7C (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x1800766AC (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlCreateAcl @ 0x18003A450 (RtlCreateAcl.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 */

__int64 __fastcall RtlpCreateServerAcl(__int64 a1, char a2, unsigned __int8 *a3, ACL **a4, _BYTE *a5)
{
  unsigned __int16 v8; // bx
  unsigned __int16 *v9; // rdi
  __int64 v10; // rdx
  unsigned __int16 v11; // cx
  __int64 i; // r9
  __int16 v13; // ax
  __int16 v14; // r8
  __int64 v15; // rax
  ACL *Heap; // rax
  ACL *v18; // r15
  unsigned int v19; // ebp
  unsigned int v20; // eax
  ACL *v21; // rbx
  char v22; // al
  __int64 v23; // rax
  ACL *v24; // r12
  unsigned __int8 *v25; // r14
  char *p_AceCount; // rbx
  char *v27; // rbx
  __int16 v28; // cx
  ACL *v29; // [rsp+60h] [rbp+8h]

  v8 = 8;
  if ( !a1 )
  {
    *a4 = 0LL;
    *a5 = 0;
    return 0LL;
  }
  v9 = (unsigned __int16 *)(a1 + 8);
  v10 = a1 + 8;
  v11 = 4 * (a3[1] + 2);
  if ( *(_WORD *)(a1 + 4) )
  {
    for ( i = *(unsigned __int16 *)(a1 + 4); i; --i )
    {
      if ( *(_BYTE *)v10 )
      {
        if ( !a2 || *(_BYTE *)v10 != 4 )
          goto LABEL_13;
        v14 = 4 * *(unsigned __int8 *)(v10 + 13);
        if ( (unsigned __int16)(v14 + 8) <= v11 )
          v13 = v11 - v14 - 8;
        else
          v13 = v14 + 8 - v11;
      }
      else
      {
        v13 = v11 + 4;
      }
      v8 += v13;
LABEL_13:
      v15 = *(unsigned __int16 *)(v10 + 2);
      v8 += v15;
      v10 += v15;
    }
  }
  Heap = (ACL *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v8);
  *a4 = Heap;
  if ( !Heap )
    return 3221225626LL;
  *a5 = 1;
  RtlCreateAcl(Heap, v8, 3u);
  v18 = *a4;
  v19 = 0;
  LOWORD(v20) = *(_WORD *)(a1 + 4);
  v29 = *a4;
  v21 = *a4 + 1;
  if ( (_WORD)v20 )
  {
    do
    {
      v22 = *(_BYTE *)v9;
      if ( !*(_BYTE *)v9 || a2 && v22 == 4 )
      {
        v24 = v21;
        if ( v22 )
          v25 = (unsigned __int8 *)&v9[2 * *((unsigned __int8 *)v9 + 13) + 10];
        else
          v25 = (unsigned __int8 *)(v9 + 4);
        *v21 = *(ACL *)v9;
        p_AceCount = (char *)&v21[1].AceCount;
        memmove(p_AceCount, a3, 4LL * a3[1] + 8);
        v27 = &p_AceCount[(unsigned __int8)(4 * (a3[1] + 2))];
        memmove(v27, v25, 4LL * v25[1] + 8);
        v23 = v25[1];
        v28 = a3[1];
        v24->AclRevision = 4;
        v24->AclSize = 4 * (v23 + v28 + 7);
        *(_WORD *)&v24[1].AclRevision = 1;
        v21 = (ACL *)&v27[4 * v23 + 8];
        LOWORD(v23) = v9[1];
      }
      else
      {
        memmove(v21, v9, v9[1]);
        v23 = v9[1];
        v21 = (ACL *)((char *)v21 + v23);
      }
      ++v19;
      v9 = (unsigned __int16 *)((char *)v9 + (unsigned __int16)v23);
      v20 = *(unsigned __int16 *)(a1 + 4);
    }
    while ( v19 < v20 );
    v18 = v29;
  }
  v18->AceCount = v20;
  return 0LL;
}
