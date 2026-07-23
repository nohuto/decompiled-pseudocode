/*
 * XREFs of RtlpCreateServerAcl @ 0x1800E865C
 * Callers:
 *     RtlpNewSecurityObject @ 0x180038B7C (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x1800777DC (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlCreateAcl @ 0x18003A450 (RtlCreateAcl.c)
 *     memmove @ 0x1800A4480 (memmove.c)
 *     RtlUShortAdd @ 0x1800E7228 (RtlUShortAdd.c)
 */

__int64 __fastcall RtlpCreateServerAcl(__int64 a1, char a2, unsigned __int8 *a3, ACL **a4, _BYTE *a5)
{
  unsigned __int16 v6; // cx
  _BYTE *v9; // rax
  unsigned __int16 *v10; // rdi
  unsigned int v11; // ebp
  unsigned __int16 v12; // r9
  __int64 v13; // r10
  __int64 result; // rax
  __int16 v15; // dx
  __int16 v16; // ax
  __int64 v17; // r10
  int v18; // r11d
  ACL *Heap; // rax
  ULONG v20; // edx
  ACL *v21; // r15
  unsigned int v22; // ebp
  unsigned int v23; // eax
  char *v24; // rbx
  unsigned __int8 *v25; // r15
  char v26; // al
  __int64 v27; // rax
  char *v28; // r12
  unsigned __int8 *v29; // r14
  char *v30; // rbx
  char *v31; // rbx
  __int16 v32; // cx
  ACL *v33; // [rsp+60h] [rbp+8h] BYREF
  void *Src; // [rsp+70h] [rbp+18h]

  Src = a3;
  v6 = 8;
  LOWORD(v33) = 8;
  if ( !a1 )
  {
    v9 = a5;
    *a4 = 0LL;
    *v9 = 0;
    return 0LL;
  }
  v10 = (unsigned __int16 *)(a1 + 8);
  v11 = *(unsigned __int16 *)(a1 + 4);
  v12 = 4 * (a3[1] + 2);
  v13 = a1 + 8;
  if ( *(_WORD *)(a1 + 4) )
  {
    while ( *(_BYTE *)v13 )
    {
      if ( a2 && *(_BYTE *)v13 == 4 )
      {
        v16 = 4 * *(unsigned __int8 *)(v13 + 13);
        if ( (unsigned __int16)(v16 + 8) <= v12 )
          v15 = v12 - v16 - 8;
        else
          v15 = v16 + 8 - v12;
LABEL_12:
        result = RtlUShortAdd(v6, v15, (__int16 *)&v33);
        if ( (int)result < 0 )
          return result;
        v6 = (unsigned __int16)v33;
      }
      result = RtlUShortAdd(v6, *(_WORD *)(v13 + 2), (__int16 *)&v33);
      if ( (int)result < 0 )
        return result;
      v6 = (unsigned __int16)v33;
      v13 = *(unsigned __int16 *)(v17 + 2) + v17;
      if ( v18 + 1 >= v11 )
        goto LABEL_16;
    }
    result = RtlUShortAdd(v6, v12, (__int16 *)&v33);
    if ( (int)result < 0 )
      return result;
    v6 = (unsigned __int16)v33;
    v15 = 4;
    goto LABEL_12;
  }
LABEL_16:
  Heap = (ACL *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v6);
  *a4 = Heap;
  if ( !Heap )
    return 3221225626LL;
  v20 = (unsigned __int16)v33;
  *a5 = 1;
  RtlCreateAcl(Heap, v20, 3u);
  v21 = *a4;
  v22 = 0;
  LOWORD(v23) = *(_WORD *)(a1 + 4);
  v33 = v21;
  v24 = (char *)&v21[1];
  if ( (_WORD)v23 )
  {
    v25 = (unsigned __int8 *)Src;
    do
    {
      v26 = *(_BYTE *)v10;
      if ( !*(_BYTE *)v10 || a2 && v26 == 4 )
      {
        v28 = v24;
        if ( v26 )
          v29 = (unsigned __int8 *)&v10[2 * *((unsigned __int8 *)v10 + 13) + 10];
        else
          v29 = (unsigned __int8 *)(v10 + 4);
        *(_QWORD *)v24 = *(_QWORD *)v10;
        v30 = v24 + 12;
        memmove(v30, v25, 4LL * v25[1] + 8);
        v31 = &v30[(unsigned __int8)(4 * (v25[1] + 2))];
        memmove(v31, v29, 4LL * v29[1] + 8);
        v27 = v29[1];
        v32 = v25[1];
        *v28 = 4;
        *((_WORD *)v28 + 1) = 4 * (v27 + v32 + 7);
        *((_WORD *)v28 + 4) = 1;
        v24 = &v31[4 * v27 + 8];
        LOWORD(v27) = v10[1];
      }
      else
      {
        memmove(v24, v10, v10[1]);
        v27 = v10[1];
        v24 += v27;
      }
      ++v22;
      v10 = (unsigned __int16 *)((char *)v10 + (unsigned __int16)v27);
      v23 = *(unsigned __int16 *)(a1 + 4);
    }
    while ( v22 < v23 );
    v21 = v33;
  }
  v21->AceCount = v23;
  return 0LL;
}
