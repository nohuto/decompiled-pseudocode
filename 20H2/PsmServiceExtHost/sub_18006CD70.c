/*
 * XREFs of sub_18006CD70 @ 0x18006CD70
 * Callers:
 *     sub_18006D174 @ 0x18006D174 (sub_18006D174.c)
 * Callees:
 *     memset @ 0x18004683A (memset.c)
 *     sub_18006C574 @ 0x18006C574 (sub_18006C574.c)
 *     sub_18006CED4 @ 0x18006CED4 (sub_18006CED4.c)
 */

char __fastcall sub_18006CD70(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4, _WORD *a5, __int64 a6, int a7)
{
  __int64 v9; // r15
  __int64 v12; // rax
  unsigned __int64 *v13; // r11
  unsigned int v14; // r14d
  char v15; // r10
  unsigned __int64 v16; // rdx
  __int64 v17; // rdx
  int v18; // r9d
  __int64 v19; // r11
  int v20; // ecx
  __int64 v21; // rax
  _WORD *v22; // r10
  _QWORD *v23; // r8
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rcx
  int v29; // [rsp+70h] [rbp+18h] BYREF

  v9 = a3;
  memset(a2, 0, 16LL * a3);
  if ( a6 )
  {
    LOBYTE(v12) = sub_18006CED4(a1, (_DWORD)a2, a3, a4, a6, a7);
  }
  else
  {
    v13 = (unsigned __int64 *)(a1 + 248);
    v14 = 0;
    v15 = (*(_DWORD *)(a4 + 172) & 2) != 0;
    do
    {
      v16 = *v13;
      while ( 1 )
      {
        LOBYTE(v12) = sub_18006C574(&v29, v16, v15);
        if ( !(_BYTE)v12 )
          break;
        v20 = v29;
        v16 = v17 & ~(1LL << v29);
        v21 = 2LL * v14++;
        LODWORD(a2[v21]) = v18;
        HIDWORD(a2[v21]) = v20;
      }
      v13 = (unsigned __int64 *)(v19 + 8);
    }
    while ( (unsigned int)(v18 + 1) < 0x14 );
  }
  if ( a3 )
  {
    v22 = a5;
    v23 = a2 + 1;
    do
    {
      v24 = *(_DWORD *)(a4 + 168);
      if ( v24 )
      {
        if ( (v24 & 1) == 0
          || (v25 = *(_QWORD *)(a4 + 8LL * *((unsigned int *)v23 - 2) + 8), _bittest64(&v25, *((unsigned int *)v23 - 1))) )
        {
          *v23 |= 0x80000000uLL;
        }
      }
      v26 = *v23;
      v12 = *v23 | 1LL;
      *v23 = v12;
      if ( (*(_BYTE *)(a4 + 172) & 1) != 0 )
      {
        if ( *v22 )
        {
          LODWORD(v12) = (unsigned __int16)*v22;
          if ( *((_DWORD *)v23 - 2) < (unsigned int)v12 )
          {
            v12 = *((unsigned int *)v23 - 2);
            v27 = *(_QWORD *)&v22[4 * v12 + 4];
            if ( _bittest64(&v27, *((unsigned int *)v23 - 1)) )
              *v23 = v26 & 0xFFFFFFFFFFFFFFFEuLL;
          }
        }
      }
      v23 += 2;
      --v9;
    }
    while ( v9 );
  }
  return v12;
}
