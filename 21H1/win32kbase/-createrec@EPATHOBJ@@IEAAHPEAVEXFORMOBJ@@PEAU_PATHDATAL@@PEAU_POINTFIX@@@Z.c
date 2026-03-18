/*
 * XREFs of ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0015DD4
 * Callers:
 *     ?addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z @ 0x1C0015D0C (-addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z.c)
 *     ?bAppend@EPATHOBJ@@QEAAHPEAV1@PEAU_POINTFIX@@@Z @ 0x1C0147780 (-bAppend@EPATHOBJ@@QEAAHPEAV1@PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     newpathalloc @ 0x1C0016280 (newpathalloc.c)
 *     freepathalloc @ 0x1C001B250 (freepathalloc.c)
 *     EngSetLastError @ 0x1C003C4D0 (EngSetLastError.c)
 *     ?bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1C00C3BD0 (-bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 *     ?reinit@EPATHOBJ@@IEAAXXZ @ 0x1C01478C0 (-reinit@EPATHOBJ@@IEAAXXZ.c)
 *     ?vOffsetPoints@@YAXPEAU_POINTFIX@@0IJJ@Z @ 0x1C0147954 (-vOffsetPoints@@YAXPEAU_POINTFIX@@0IJJ@Z.c)
 */

__int64 __fastcall EPATHOBJ::createrec(
        EPATHOBJ *this,
        struct EXFORMOBJ *a2,
        struct _PATHDATAL *a3,
        struct _POINTFIX *a4)
{
  EXFORMOBJ *v6; // r11
  __int64 v8; // r10
  __int64 v9; // r15
  __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned int v13; // r12d
  int v14; // r8d
  __int64 v16; // rdi
  __int64 v17; // rax
  struct _POINTFIX *v18; // rcx
  struct _POINTFIX *v19; // rdx
  _DWORD *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _DWORD *v23; // rax
  int v24; // ecx
  int v25; // ecx
  _QWORD *v26; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // [rsp+40h] [rbp-38h]

  v6 = a2;
  v8 = *((_QWORD *)this + 1);
  v30 = *(_QWORD *)(v8 + 24);
  v9 = v30;
  LODWORD(v10) = 0;
  if ( v30 )
  {
    v11 = *(_QWORD *)(v30 + 8) + 24LL;
    v12 = v30 + *(unsigned int *)(v30 + 16);
    if ( v12 > v11 )
      v10 = (__int64)(v12 - v11) >> 3;
  }
  v13 = *(_DWORD *)(v8 + 80) & 1;
  v14 = *(_DWORD *)a3;
  if ( (v14 & 0x10) != 0 && (_DWORD)v10 )
    LODWORD(v10) = 3 * (((unsigned int)v10 - v13) / 3) + v13;
  if ( (unsigned int)v10 < v13 + *((_DWORD *)a3 + 1) && (unsigned int)v10 < 8 )
  {
    v29 = newpathalloc();
    v9 = v29;
    if ( !v29 )
    {
      EngSetLastError(8u);
      EPATHOBJ::reinit(this);
      return 0LL;
    }
    *(_QWORD *)v29 = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL);
    *(_QWORD *)(*((_QWORD *)this + 1) + 24LL) = v29;
    LODWORD(v10) = (unsigned int)(v29 + *(_DWORD *)(v29 + 16) - *(_DWORD *)(v29 + 8) - 24) >> 3;
    v14 = *(_DWORD *)a3;
    if ( (*(_DWORD *)a3 & 0x10) != 0 )
      LODWORD(v10) = 3 * (((unsigned int)v10 - v13) / 3) + v13;
    v6 = a2;
  }
  if ( (unsigned int)v10 > v13 + *((_DWORD *)a3 + 1) )
    LODWORD(v10) = v13 + *((_DWORD *)a3 + 1);
  v16 = *(_QWORD *)(v9 + 8);
  *(_DWORD *)(v16 + 16) = v14 | 2;
  *(_DWORD *)(v16 + 20) = v10;
  *(_QWORD *)v16 = 0LL;
  *(_QWORD *)(v16 + 8) = *(_QWORD *)(*((_QWORD *)this + 1) + 40LL);
  v17 = *((_QWORD *)this + 1);
  if ( v13 )
  {
    *(_QWORD *)(v16 + 24) = *(_QWORD *)(v17 + 64);
    LODWORD(v10) = v10 - 1;
    *(_DWORD *)(v16 + 16) |= *(_DWORD *)(*((_QWORD *)this + 1) + 80LL) & 5;
    *(_DWORD *)(*((_QWORD *)this + 1) + 80LL) &= 0xFFFFFFFA;
  }
  else
  {
    v28 = *(_QWORD *)(v17 + 40);
    if ( v28 )
      *(_DWORD *)(v28 + 16) &= ~2u;
  }
  v18 = (struct _POINTFIX *)(v16 + 8 * (v13 + 3LL));
  v19 = (struct _POINTFIX *)*((_QWORD *)a3 + 1);
  if ( a4 )
  {
    vOffsetPoints(v18, v19, v10, a4->x, a4->y);
  }
  else if ( v6 )
  {
    EXFORMOBJ::bXformRound(v6, (struct _POINTL *)v19, (struct _POINTFIX *)(v16 + 8 * (v13 + 3LL)), (unsigned int)v10);
  }
  else
  {
    memmove(v18, v19, 8LL * (unsigned int)v10);
  }
  *((_DWORD *)a3 + 1) -= v10;
  *((_QWORD *)a3 + 1) += 8LL * (unsigned int)v10;
  *(_DWORD *)a3 &= 0xFFFFFFFA;
  v20 = (_DWORD *)(v16 + 24);
  v21 = *((_QWORD *)this + 1);
  if ( !*(_QWORD *)(v21 + 40) )
  {
    *(_DWORD *)(v21 + 56) = *v20;
    *(_DWORD *)(*((_QWORD *)this + 1) + 48LL) = *(_DWORD *)(*((_QWORD *)this + 1) + 56LL);
    *(_DWORD *)(*((_QWORD *)this + 1) + 60LL) = *(_DWORD *)(v16 + 28);
    *(_DWORD *)(*((_QWORD *)this + 1) + 52LL) = *(_DWORD *)(*((_QWORD *)this + 1) + 60LL);
    v21 = *((_QWORD *)this + 1);
  }
  if ( v13 + (_DWORD)v10 )
  {
    v22 = v13 + (unsigned int)v10;
    do
    {
      v23 = (_DWORD *)*((_QWORD *)this + 1);
      v24 = *v20;
      if ( v23[12] > *v20 )
      {
        v23[12] = v24;
      }
      else if ( v23[14] < v24 )
      {
        v23[14] = v24;
      }
      v25 = v20[1];
      if ( v23[15] < v25 )
      {
        v23[15] = v25;
      }
      else if ( v23[13] > v25 )
      {
        v23[13] = v25;
      }
      v20 += 2;
      --v22;
    }
    while ( v22 );
    v21 = *((_QWORD *)this + 1);
  }
  v26 = *(_QWORD **)(v21 + 40);
  if ( v26 )
  {
    *v26 = v16;
    *(_QWORD *)(*((_QWORD *)this + 1) + 40LL) = v16;
  }
  else
  {
    *(_QWORD *)(v21 + 40) = v16;
    *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = v16;
  }
  *(_QWORD *)(v9 + 8) = v16 + 8 * (*(unsigned int *)(v16 + 20) + 3LL);
  return 1LL;
}
