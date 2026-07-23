/*
 * XREFs of RtlpLocateRelatedBlocks @ 0x180109ABC
 * Callers:
 *     RtlpHpHeapHandleError @ 0x1801084C0 (RtlpHpHeapHandleError.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpLocateRelatedBlocks(__int64 a1, unsigned __int64 a2)
{
  __int64 *v4; // rcx
  __int64 result; // rax
  __int64 v6; // rsi
  unsigned __int64 *v7; // r8
  unsigned __int64 v8; // rdx
  int v9; // r9d
  _QWORD *v10; // r11
  _QWORD *v11; // rdx
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rbx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rax
  __int64 v16; // r11
  __int64 v17; // r9
  int v18; // edx
  int v19; // eax
  unsigned __int16 v20; // ax
  unsigned __int64 i; // rcx
  unsigned __int16 v22; // ax
  int v23; // eax
  unsigned __int16 v24; // r10
  int v25; // ecx
  int v26; // eax
  unsigned __int16 v27; // cx
  int v28; // eax
  unsigned __int16 v29; // ax
  int v30; // eax
  int v31; // [rsp+8h] [rbp-10h]
  int v32; // [rsp+8h] [rbp-10h]
  int v33; // [rsp+8h] [rbp-10h]
  int v34; // [rsp+8h] [rbp-10h]
  int v35; // [rsp+8h] [rbp-10h]

  v4 = (__int64 *)(a1 + 288);
  for ( result = *v4; ; result = *(_QWORD *)result )
  {
    if ( (__int64 *)result == v4 )
    {
      v7 = (unsigned __int64 *)(a1 + 272);
      v8 = *v7;
      if ( (unsigned __int64 *)*v7 != v7 )
      {
        v9 = dword_1801697F8;
        do
        {
          if ( (v8 & 0xFFFFFFFFFFFF0000uLL) <= a2 )
          {
            result = 5LL;
            if ( *(_QWORD *)(v8 + 40) + (v8 & 0xFFFFFFFFFFFF0000uLL) > a2 )
              v9 = 5;
            dword_1801697F8 = v9;
          }
          v8 = *(_QWORD *)v8;
        }
        while ( (unsigned __int64 *)v8 != v7 );
      }
      return result;
    }
    v6 = result - 24;
    if ( *(_QWORD *)(result + 24) <= a2 && *(_QWORD *)(result + 48) > a2 )
      break;
  }
  v10 = (_QWORD *)(result + 72);
  v11 = *(_QWORD **)(result + 72);
  v12 = 0LL;
  v13 = 0LL;
  while ( v11 != v10 )
  {
    v14 = v11[2];
    v15 = v14 + v11[3];
    if ( v15 < a2 && v15 > v12 )
      v12 = v14 + v11[3];
    if ( v14 > a2 && (!v13 || v14 < v13[4]) )
      v13 = v11 - 2;
    v11 = (_QWORD *)*v11;
  }
  v16 = 0LL;
  v17 = 0LL;
  if ( !v12 )
    v12 = v6;
  if ( v12 < a2 )
  {
    v18 = *(_DWORD *)(a1 + 124);
    do
    {
      v17 = v12;
      if ( v18 )
      {
        v19 = *(_DWORD *)(v12 + 8);
        v18 = *(_DWORD *)(a1 + 124);
        LOWORD(v31) = v19;
        if ( (v18 & v19) != 0 )
          v31 = *(_DWORD *)(a1 + 136) ^ v19;
        v20 = v31;
      }
      else
      {
        v20 = *(_WORD *)(v12 + 8);
      }
      if ( !v20 )
        break;
      v12 += 16LL * v20;
    }
    while ( v12 < a2 );
  }
  for ( i = (unsigned __int64)(v13 - 2); i > a2; i += -16LL * v22 )
  {
    v16 = i;
    v22 = *(_WORD *)(a1 + 140) ^ *(_WORD *)(i + 12);
    if ( !v22 )
      break;
  }
  qword_180169828 = v17;
  qword_180169830 = v16;
  if ( !v17 || !v16 )
    goto LABEL_73;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v23 = *(_DWORD *)(v17 + 8);
    LOWORD(v32) = v23;
    if ( (v23 & *(_DWORD *)(a1 + 124)) != 0 )
      v32 = *(_DWORD *)(a1 + 136) ^ v23;
    v24 = v32;
  }
  else
  {
    v24 = *(_WORD *)(v17 + 8);
  }
  result = v17 + 16LL * v24;
  if ( result != v16 - 16 * (*(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v16 + 12)) )
  {
    dword_1801697F8 = 4;
  }
  else
  {
LABEL_73:
    if ( *(_DWORD *)(a1 + 124) )
    {
      v25 = *(_DWORD *)(v17 + 8);
      v26 = *(_DWORD *)(a1 + 124);
      LOWORD(v33) = v25;
      if ( (v26 & v25) != 0 )
        v33 = *(_DWORD *)(a1 + 136) ^ v25;
      v27 = v33;
    }
    else
    {
      v27 = *(_WORD *)(v17 + 8);
      v26 = 0;
    }
    if ( v16 )
    {
      qword_180169838 = *(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v16 + 12);
      v26 = *(_DWORD *)(a1 + 124);
    }
    if ( v17 )
    {
      if ( v26 )
      {
        v28 = *(_DWORD *)(v17 + 8);
        LOWORD(v34) = v28;
        if ( (v28 & *(_DWORD *)(a1 + 124)) != 0 )
          v34 = *(_DWORD *)(a1 + 136) ^ v28;
        v29 = v34;
      }
      else
      {
        v29 = *(_WORD *)(v17 + 8);
      }
      qword_180169840 = v29;
      v26 = *(_DWORD *)(a1 + 124);
    }
    if ( v26 )
    {
      v30 = *(_DWORD *)(v17 + 16LL * v27 + 8);
      LOWORD(v35) = v30;
      if ( (v30 & *(_DWORD *)(a1 + 124)) != 0 )
        v35 = *(_DWORD *)(a1 + 136) ^ v30;
      LOWORD(result) = v35;
    }
    else
    {
      LOWORD(result) = *(_WORD *)(v17 + 16LL * v27 + 8);
    }
    result = (unsigned __int16)result;
    if ( qword_180169838 == (unsigned __int16)result )
    {
      result = *(unsigned __int16 *)(a1 + 140);
      if ( qword_180169840 != (result ^ *(unsigned __int16 *)(v17 + 16LL * v27 + 12)) )
        dword_1801697F8 = 7;
    }
    else
    {
      dword_1801697F8 = 6;
    }
  }
  return result;
}
