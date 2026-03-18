/*
 * XREFs of ?vFindExtent@FLOODBM@@QAEXJAAJ0@Z @ 0x21FF52
 * Callers:
 *     ?bSearchAllSpans@FLOODBM@@QAEHJJAAJ0PAEAAVSTACKOBJ@@PAVSCANLINE@@@Z @ 0x21FCAC (-bSearchAllSpans@FLOODBM@@QAEHJJAAJ0PAEAAVSTACKOBJ@@PAVSCANLINE@@@Z.c)
 *     _NtGdiExtFloodFill@20 @ 0x2200C8 (_NtGdiExtFloodFill@20.c)
 * Callees:
 *     ?iColorGet@FLOODBM@@QAEKJ@Z @ 0x21FEA5 (-iColorGet@FLOODBM@@QAEKJ@Z.c)
 */

void __thiscall FLOODBM::vFindExtent(FLOODBM *this, int a2, int *a3, int *a4)
{
  int v5; // ebx
  int v6; // edi
  int v7; // eax
  int v8; // [esp+Ch] [ebp-8h]
  int v9; // [esp+Ch] [ebp-8h]
  int v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+Ch] [ebp-8h]
  int v12; // [esp+10h] [ebp-4h]
  int v13; // [esp+10h] [ebp-4h]
  int v14; // [esp+1Ch] [ebp+8h]
  int v15; // [esp+1Ch] [ebp+8h]
  int v16; // [esp+1Ch] [ebp+8h]

  v5 = a2 - 1;
  v6 = a2 + 1;
  v8 = a2 - 1;
  v7 = *((_DWORD *)this + 1);
  v12 = a2 + 1;
  v14 = v7;
  if ( *((_DWORD *)this + 7) )
  {
    if ( v5 >= v7 )
    {
      v11 = *((_DWORD *)this + 5);
      do
      {
        if ( FLOODBM::iColorGet(this, v5) != v11 )
          break;
        --v5;
      }
      while ( v5 >= v14 );
      v6 = v12;
      v8 = v5;
    }
    v16 = *((_DWORD *)this + 3);
    if ( v6 < v16 )
    {
      v13 = *((_DWORD *)this + 5);
      do
      {
        if ( FLOODBM::iColorGet(this, v6) != v13 )
          break;
        ++v6;
      }
      while ( v6 < v16 );
      v5 = v8;
    }
  }
  else
  {
    if ( v5 >= v7 )
    {
      v9 = *((_DWORD *)this + 5);
      do
      {
        if ( FLOODBM::iColorGet(this, v5) == v9 )
          break;
        --v5;
      }
      while ( v5 >= v14 );
      v6 = v12;
    }
    v10 = *((_DWORD *)this + 3);
    if ( v6 < v10 )
    {
      v15 = *((_DWORD *)this + 5);
      do
      {
        if ( FLOODBM::iColorGet(this, v6) == v15 )
          break;
        ++v6;
      }
      while ( v6 < v10 );
    }
  }
  *a3 = v5 + 1;
  *a4 = v6;
}
