/*
 * XREFs of RtlpCreateServerAcl @ 0x1406DE744
 * Callers:
 *     RtlpNewSecurityObject @ 0x140602F70 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x140614910 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlLengthSid @ 0x14025B480 (RtlLengthSid.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     RtlCreateAcl @ 0x140615800 (RtlCreateAcl.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RtlpCreateServerAcl(__int64 a1, char a2, unsigned __int8 *a3, ACL **a4, _BYTE *a5)
{
  unsigned __int16 v8; // bx
  unsigned __int16 *v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // rdx
  unsigned __int16 v12; // cx
  __int64 i; // r9
  __int16 v14; // ax
  __int64 v15; // rax
  ACL *PoolWithTag; // rax
  ACL *v17; // r15
  unsigned int v18; // ebp
  unsigned int v19; // eax
  ACL *v20; // rbx
  char v21; // al
  ACL *v22; // r13
  unsigned __int8 *v23; // r14
  USHORT *p_AceCount; // rbx
  char *v25; // rbx
  __int16 v26; // cx
  __int64 v27; // rax
  __int16 v29; // r8
  ACL *v30; // [rsp+60h] [rbp+8h]

  v8 = 8;
  if ( !a1 )
  {
    *a4 = 0LL;
    *a5 = 0;
    return 0LL;
  }
  v9 = (unsigned __int16 *)(a1 + 8);
  v10 = *(unsigned __int16 *)(a1 + 4);
  v11 = a1 + 8;
  v12 = 4 * (a3[1] + 2);
  if ( (_WORD)v10 )
  {
    for ( i = v10; i; --i )
    {
      if ( *(_BYTE *)v11 )
      {
        if ( !a2 || *(_BYTE *)v11 != 4 )
          goto LABEL_7;
        v29 = 4 * *(unsigned __int8 *)(v11 + 13);
        if ( (unsigned __int16)(v29 + 8) <= v12 )
          v14 = v12 - v29 - 8;
        else
          v14 = v29 + 8 - v12;
      }
      else
      {
        v14 = v12 + 4;
      }
      v8 += v14;
LABEL_7:
      v15 = *(unsigned __int16 *)(v11 + 2);
      v8 += v15;
      v11 += v15;
    }
  }
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v8, 0x63416553u);
  *a4 = PoolWithTag;
  if ( PoolWithTag )
  {
    *a5 = 1;
    RtlCreateAcl(PoolWithTag, v8, 3u);
    v17 = *a4;
    v18 = 0;
    LOWORD(v19) = *(_WORD *)(a1 + 4);
    v30 = *a4;
    v20 = *a4 + 1;
    if ( (_WORD)v19 )
    {
      do
      {
        v21 = *(_BYTE *)v9;
        if ( !*(_BYTE *)v9 || a2 && v21 == 4 )
        {
          v22 = v20;
          if ( v21 )
            v23 = (unsigned __int8 *)v9 + RtlLengthSid(v9 + 6) + 12;
          else
            v23 = (unsigned __int8 *)(v9 + 4);
          *v20 = *(ACL *)v9;
          p_AceCount = &v20[1].AceCount;
          memmove(p_AceCount, a3, 4LL * a3[1] + 8);
          v25 = (char *)p_AceCount + (unsigned __int8)(4 * (a3[1] + 2));
          memmove(v25, v23, 4LL * v23[1] + 8);
          v27 = v23[1];
          v26 = a3[1];
          v22->AclRevision = 4;
          v22->AclSize = 4 * (v27 + v26 + 7);
          *(_WORD *)&v22[1].AclRevision = 1;
          v20 = (ACL *)&v25[4 * v27 + 8];
          LOWORD(v27) = v9[1];
        }
        else
        {
          memmove(v20, v9, v9[1]);
          v27 = v9[1];
          v20 = (ACL *)((char *)v20 + v27);
        }
        ++v18;
        v9 = (unsigned __int16 *)((char *)v9 + (unsigned __int16)v27);
        v19 = *(unsigned __int16 *)(a1 + 4);
      }
      while ( v18 < v19 );
      v17 = v30;
    }
    v17->AceCount = v19;
    return 0LL;
  }
  return 3221225626LL;
}
