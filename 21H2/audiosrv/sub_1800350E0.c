/*
 * XREFs of sub_1800350E0 @ 0x1800350E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 */

__int64 __fastcall sub_1800350E0(__int64 a1, unsigned int a2)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // r14
  _DWORD *v7; // r15
  _DWORD *v8; // rdi
  unsigned __int64 i; // rcx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 *v12; // rsi
  void *v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 *v16; // r14
  void *v17; // rbp
  __int64 v18; // rcx
  __int64 v19; // rdx
  HANDLE ProcessHeap; // rax
  void *v22; // r8
  HANDLE v23; // rax
  void *v24; // r8
  __int64 v25; // rdx
  HANDLE v26; // rax
  void *v27; // r8
  void *retaddr; // [rsp+48h] [rbp+0h]
  char v29; // [rsp+50h] [rbp+8h] BYREF

  v3 = a2;
  if ( *(_DWORD *)(a1 + 92) == a2 )
    goto LABEL_11;
  v4 = 4LL * a2;
  if ( !is_mul_ok(a2, 4uLL) )
    v4 = -1LL;
  v5 = sub_18006A1B0(v4, &unk_18019F848);
  v6 = (__int64 *)(a1 + 440);
  if ( (char *)(a1 + 440) == &v29 )
  {
    if ( !v5 )
      goto LABEL_6;
    ProcessHeap = GetProcessHeap();
    v22 = (void *)v5;
LABEL_29:
    HeapFree(ProcessHeap, 0, v22);
    goto LABEL_6;
  }
  v7 = (_DWORD *)*v6;
  *v6 = v5;
  if ( v7 )
  {
    ProcessHeap = GetProcessHeap();
    v22 = v7;
    goto LABEL_29;
  }
LABEL_6:
  v8 = (_DWORD *)*v6;
  if ( !*v6 )
  {
    sub_18004BD84(retaddr, 1536LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", 2147942414LL);
    return 2147942414LL;
  }
  if ( (_DWORD)v3 )
  {
    for ( i = v3; i; --i )
      *v8++ = 1065353216;
  }
LABEL_11:
  if ( *(_DWORD *)(a1 + 92) == (_DWORD)v3 )
    return 0LL;
  *(_DWORD *)(a1 + 92) = v3;
  v10 = 4 * v3;
  if ( !is_mul_ok(v3, 4uLL) )
    v10 = -1LL;
  v11 = sub_18006A1B0(v10, &unk_18019F848);
  v12 = (__int64 *)(a1 + 112);
  if ( (char *)(a1 + 112) == &v29 )
  {
    if ( !v11 )
      goto LABEL_16;
    v23 = GetProcessHeap();
    v24 = (void *)v11;
  }
  else
  {
    v13 = (void *)*v12;
    *v12 = v11;
    if ( !v13 )
      goto LABEL_16;
    v23 = GetProcessHeap();
    v24 = v13;
  }
  HeapFree(v23, 0, v24);
LABEL_16:
  if ( *v12 )
  {
    v14 = 4LL * *(unsigned int *)(a1 + 92);
    if ( !is_mul_ok(*(unsigned int *)(a1 + 92), 4uLL) )
      v14 = -1LL;
    v15 = sub_18006A1B0(v14, &unk_18019F848);
    v16 = (__int64 *)(a1 + 120);
    if ( (char *)(a1 + 120) == &v29 )
    {
      if ( !v15 )
        goto LABEL_21;
      v26 = GetProcessHeap();
      v27 = (void *)v15;
    }
    else
    {
      v17 = (void *)*v16;
      *v16 = v15;
      if ( !v17 )
      {
LABEL_21:
        if ( *v16 )
        {
          v18 = 0LL;
          if ( *(_DWORD *)(a1 + 92) )
          {
            v19 = *v12;
            do
            {
              *(_DWORD *)(v19 + 4 * v18) = 1065353216;
              v18 = (unsigned int)(v18 + 1);
            }
            while ( (unsigned int)v18 < *(_DWORD *)(a1 + 92) );
          }
          return 0LL;
        }
        v25 = 216LL;
        goto LABEL_41;
      }
      v26 = GetProcessHeap();
      v27 = v17;
    }
    HeapFree(v26, 0, v27);
    goto LABEL_21;
  }
  v25 = 214LL;
LABEL_41:
  sub_18004BD84(retaddr, v25, "avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", 2147942414LL);
  sub_18004BD84(retaddr, 1544LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", 2147942414LL);
  return 2147942414LL;
}
