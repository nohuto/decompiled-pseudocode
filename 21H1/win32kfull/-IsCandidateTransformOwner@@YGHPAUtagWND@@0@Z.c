/*
 * XREFs of ?IsCandidateTransformOwner@@YGHPAUtagWND@@0@Z @ 0x359D0
 * Callers:
 *     _GetInheritedMonitor@4 @ 0x35826 (_GetInheritedMonitor@4.c)
 * Callees:
 *     ?EqualRectInl@@YGKPBUtagRECT@@0@Z @ 0x334C0 (-EqualRectInl@@YGKPBUtagRECT@@0@Z.c)
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     _UnionRect@12 @ 0x982E2 (_UnionRect@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?IsAdjacentRect@@YGHPBUtagRECT@@0@Z @ 0x14FDD9 (-IsAdjacentRect@@YGHPBUtagRECT@@0@Z.c)
 */

int __usercall IsCandidateTransformOwner@<eax>(int a1@<edx>, int a2@<ecx>, unsigned int a3@<ebx>)
{
  int v3; // esi
  int v4; // edi
  _BYTE *v5; // edx
  int v6; // ebx
  int v8; // edx
  unsigned int v9; // edi
  unsigned int v10; // esi
  int v11; // ecx
  int v12; // esi
  int v13; // edi
  int v14; // eax
  int v15; // ebx
  const void *v16; // edx
  const struct tagRECT *v17; // [esp+0h] [ebp-30h]
  const struct tagRECT *v18; // [esp+4h] [ebp-2Ch]
  int v19; // [esp+Ch] [ebp-24h]
  int v20; // [esp+14h] [ebp-1Ch]
  int v21; // [esp+18h] [ebp-18h]
  _BYTE v22[16]; // [esp+1Ch] [ebp-14h] BYREF

  v20 = *(_DWORD *)(a1 + 8);
  v3 = *(_DWORD *)(a2 + 8);
  memset(v22, 0, sizeof(v22));
  v4 = *(_DWORD *)(a1 + 20);
  LOBYTE(a3) = ~*(_BYTE *)(v4 + 19);
  v21 = *(_BYTE *)(v4 + 19) & 8;
  v5 = *(_BYTE **)(a2 + 20);
  v6 = (*(_BYTE *)(v4 + 18) >> 3) & (unsigned __int8)(a3 >> 5) & 1;
  v19 = v6;
  if ( (v5[23] & 0x10) == 0 || (v5[8] & 8) == 0 && (v5[22] & 3) == 0 )
    return 0;
  if ( ERECTL::bWrapped((ERECTL *)(v5 + 68)) || (*(_BYTE *)(v8 + 18) & 8) != 0 && (*(_BYTE *)(v8 + 19) & 0x20) == 0 )
    return 0;
  if ( *(_DWORD *)(v3 + 236) != *(_DWORD *)(v20 + 236) && *(_DWORD *)(v3 + 232) != *(_DWORD *)(v20 + 232) )
    return 0;
  v9 = *(_DWORD *)(v4 + 184);
  v10 = *(_DWORD *)(v8 + 184);
  if ( (((v9 >> 8) ^ (v10 >> 8)) & 0x1FF) != 0 )
    return 0;
  v11 = 0;
  v12 = (v10 & 0xF) == 2 && (v10 & 0x20000000) != 0;
  if ( (v9 & 0xF) == 2 && (v9 & 0x20000000) != 0 )
    v11 = 1;
  if ( v12 == v11
    && (!v21 && !v6
     || ((v13 = v8 + 52, v14 = IsAdjacentRect(v17, v18), v15 = v14, !v21) || v14 || IntersectRect(v13))
     && (!v19 || v15 || UnionRect(v13) && EqualRectInl(v22, v16))) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
