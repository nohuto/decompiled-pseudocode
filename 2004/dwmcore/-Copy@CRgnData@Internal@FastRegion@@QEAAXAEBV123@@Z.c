/*
 * XREFs of ?Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z @ 0x180042FD4
 * Callers:
 *     ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x180041C80 (-CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAXPEBUtagRECT@@I@Z @ 0x180041D40 (--$AppendRects@UtagRECT@@@CRegion@@QEAAXPEBUtagRECT@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FastRegion::Internal::CRgnData::Copy(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2)
{
  int v2; // r9d
  char *v3; // rsi
  int v5; // ebp
  __int64 v6; // rdx
  char *v7; // r10
  char *v8; // r8
  _DWORD *v9; // rdi
  __int64 v10; // rax
  char *v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  signed __int64 v14; // r8

  v2 = *(_DWORD *)a2;
  v3 = (char *)a2 + 12;
  *(_DWORD *)this = *(_DWORD *)a2;
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  v5 = 0;
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  v6 = *((int *)a2 + 4);
  v7 = (char *)this + 8 * v2 + 12;
  v8 = &v3[v6];
  if ( v2 > 0 )
  {
    v9 = (_DWORD *)((char *)this + 12);
    do
    {
      *v9 = *(_DWORD *)((char *)v9 + a2 - this);
      v10 = v5;
      v9 += 2;
      ++v5;
      *((_DWORD *)this + 2 * v10 + 4) = (_DWORD)a2
                                      + 8 * v10
                                      + 4 * ((v7 - &v3[v6]) >> 2)
                                      + *((_DWORD *)a2 + 2 * v10 + 4)
                                      - ((_DWORD)this
                                       + 8 * v10);
    }
    while ( v5 < *(_DWORD *)this );
    LODWORD(v6) = *((_DWORD *)v3 + 1);
  }
  v11 = (char *)a2 + 8 * *(_DWORD *)a2 + 4;
  v12 = (unsigned __int64)((int)v11 + *((_DWORD *)v11 + 1) - (int)v6 - (int)v3) >> 2;
  v13 = (int)v12;
  if ( (int)v12 > 0 )
  {
    v14 = v8 - v7;
    do
    {
      *(_DWORD *)v7 = *(_DWORD *)&v7[v14];
      v7 += 4;
      --v13;
    }
    while ( v13 );
  }
}
