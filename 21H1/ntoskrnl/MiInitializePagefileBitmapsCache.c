/*
 * XREFs of MiInitializePagefileBitmapsCache @ 0x1403BBB84
 * Callers:
 *     MiModifiedPageWriter @ 0x1403BAE20 (MiModifiedPageWriter.c)
 *     MiRescanPagefileBitmaps @ 0x1403BB9C4 (MiRescanPagefileBitmaps.c)
 *     MiCreatePagefile @ 0x14079F2D0 (MiCreatePagefile.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14024F7F0 (RtlRbInsertNodeEx.c)
 *     memset @ 0x140408F80 (memset.c)
 */

BOOLEAN __fastcall MiInitializePagefileBitmapsCache(__int64 a1)
{
  __int64 v1; // r14
  BOOLEAN v2; // bl
  __int64 v3; // r15
  _RTL_BALANCED_NODE *v4; // rsi
  _RTL_BALANCED_NODE *v6; // rdi
  _RTL_BALANCED_NODE *v7; // rbp
  _RTL_BALANCED_NODE *i; // rax
  _RTL_BALANCED_NODE *v9; // rcx
  unsigned __int64 v10; // rdx
  BOOLEAN v11; // r8
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  BOOLEAN result; // al

  v1 = a1 + 144;
  v2 = 0;
  *(_QWORD *)(a1 + 144) = 0LL;
  v3 = a1 + 160;
  *(_QWORD *)(a1 + 152) = 0LL;
  v4 = (_RTL_BALANCED_NODE *)(a1 + 176);
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  v6 = *(_RTL_BALANCED_NODE **)(a1 + 192);
  *(_QWORD *)(a1 + 184) = a1 + 176;
  *(_QWORD *)(a1 + 176) = a1 + 176;
  v7 = (_RTL_BALANCED_NODE *)((char *)v6 + 28616);
  memset(v6, 0, 0x7000uLL);
  if ( v6 < (_RTL_BALANCED_NODE *)&v6[1192].Right )
  {
    for ( i = v4->Children[1]; ; i = v9 )
    {
      v9 = v6;
      if ( i->Children[0] != v4 )
        __fastfail(3u);
      v6->Children[0] = v4;
      v6->Children[1] = i;
      i->Children[0] = v6;
      v4->Children[1] = v6;
      v6 = (_RTL_BALANCED_NODE *)((char *)v6 + 56);
      if ( v6 >= v7 )
        break;
    }
  }
  HIDWORD(v6[2].Left) = -1;
  LODWORD(v6[2].Children[0]) = -1;
  v10 = *(_QWORD *)v1;
  if ( (*(_BYTE *)(v1 + 8) & 1) != 0 )
  {
    if ( v10 )
      v10 ^= v1;
    else
      v10 = 0LL;
  }
  v11 = 0;
  if ( v10 )
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(v10 + 8);
      if ( (*(_BYTE *)(v1 + 8) & 1) != 0 )
      {
        if ( !v12 )
          break;
        v12 ^= v10;
      }
      if ( !v12 )
        break;
      v10 = v12;
    }
    v11 = 1;
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)v1, (PRTL_BALANCED_NODE)v10, v11, v6);
  v13 = *(_QWORD *)v3;
  if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
  {
    if ( v13 )
      v13 ^= v3;
    else
      v13 = 0LL;
  }
  if ( v13 )
  {
    while ( 1 )
    {
      if ( LODWORD(v6[2].Children[0]) < *(_DWORD *)(v13 + 24) )
      {
        v14 = *(_QWORD *)v13;
        if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
        {
          if ( !v14 )
            break;
          v14 ^= v13;
        }
        if ( !v14 )
          break;
      }
      else
      {
        v14 = *(_QWORD *)(v13 + 8);
        if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
        {
          if ( !v14 )
            goto LABEL_26;
          v14 ^= v13;
        }
        if ( !v14 )
        {
LABEL_26:
          v2 = 1;
          break;
        }
      }
      v13 = v14;
    }
  }
  result = RtlRbInsertNodeEx((PRTL_RB_TREE)v3, (PRTL_BALANCED_NODE)v13, v2, v6 + 1);
  *(_DWORD *)(a1 + 140) = -1;
  return result;
}
