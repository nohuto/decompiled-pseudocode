/*
 * XREFs of ?bSearchAllSpans@FLOODBM@@QAEHJJAAJ0PAEAAVSTACKOBJ@@PAVSCANLINE@@@Z @ 0x21FCAC
 * Callers:
 *     ?bExtendScanline@FLOODBM@@QAEHAAVSTACKOBJ@@0JPAE1@Z @ 0x21F71A (-bExtendScanline@FLOODBM@@QAEHAAVSTACKOBJ@@0JPAE1@Z.c)
 * Callees:
 *     ?bExpandScanline@STACKOBJ@@QAEHKK@Z @ 0x21F6AA (-bExpandScanline@STACKOBJ@@QAEHKK@Z.c)
 *     ?iColorGet@FLOODBM@@QAEKJ@Z @ 0x21FEA5 (-iColorGet@FLOODBM@@QAEKJ@Z.c)
 *     ?vFindExtent@FLOODBM@@QAEXJAAJ0@Z @ 0x21FF52 (-vFindExtent@FLOODBM@@QAEXJAAJ0@Z.c)
 */

int __thiscall FLOODBM::bSearchAllSpans(
        FLOODBM *this,
        int a2,
        int a3,
        int *a4,
        int *a5,
        unsigned __int8 *a6,
        struct STACKOBJ *a7,
        struct SCANLINE *a8)
{
  int v8; // esi
  unsigned int v9; // ebx
  _DWORD *v10; // edi
  unsigned int v11; // eax
  FLOODBM *v12; // ecx
  bool v13; // zf
  unsigned int v14; // ecx
  int *v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // ecx
  int *v18; // eax
  size_t v19; // eax
  int v20; // eax
  unsigned int v22; // edx
  STACKOBJ *v23; // esi
  unsigned int v24; // ecx
  STACKOBJ *v25; // edi
  int v26; // esi
  unsigned int v27; // eax
  int v28; // ecx
  int v29; // edx
  int v30; // [esp+Ch] [ebp-10h]
  _DWORD *v31; // [esp+10h] [ebp-Ch]
  int v32; // [esp+14h] [ebp-8h]
  FLOODBM *v33; // [esp+18h] [ebp-4h]
  int v34; // [esp+24h] [ebp+8h]
  unsigned int v35; // [esp+24h] [ebp+8h]
  unsigned __int8 *v36; // [esp+34h] [ebp+18h]
  STACKOBJ *v37; // [esp+38h] [ebp+1Ch]

  v8 = a2;
  v9 = 0;
  v33 = this;
  v10 = (_DWORD *)*((_DWORD *)a7 + 3);
  v31 = v10;
  v30 = v10[1];
  v32 = 8 * v30 + 16;
  *((_DWORD *)this + 6) = a6;
  v36 = 0;
  if ( a2 >= a3 )
    goto LABEL_34;
  while ( 2 )
  {
    v34 = *((_DWORD *)this + 5);
    v11 = FLOODBM::iColorGet(this, v8);
    v12 = v33;
    if ( *((_DWORD *)v33 + 7) )
    {
      while ( v11 != v34 )
      {
        v13 = ++v8 == a3;
        if ( v8 >= a3 )
          goto LABEL_12;
        v11 = FLOODBM::iColorGet(v12, v8);
        v12 = v33;
      }
    }
    else
    {
      while ( v11 == v34 )
      {
        v13 = ++v8 == a3;
        if ( v8 >= a3 )
          goto LABEL_12;
        v11 = FLOODBM::iColorGet(v12, v8);
        v12 = v33;
      }
    }
    v13 = v8 == a3;
LABEL_12:
    if ( v13 )
      break;
    if ( a8 )
    {
      v14 = 0;
      v35 = *((_DWORD *)a8 + 1);
      if ( v35 )
      {
        v15 = (int *)((char *)a8 + 20);
        do
        {
          if ( v8 < *(v15 - 1) )
            break;
          if ( v8 < *v15 )
          {
            v8 = *v15;
            goto LABEL_29;
          }
          ++v14;
          v15 += 2;
        }
        while ( v14 < v35 );
      }
    }
    v16 = 0;
    if ( !v10[1] )
    {
LABEL_25:
      v19 = v32 + 8;
      v32 = v19;
      if ( v19 > v10[2] )
      {
        if ( !STACKOBJ::bExpandScanline(a7, v19, 0) )
          return 0;
        v10 = (_DWORD *)*((_DWORD *)a7 + 3);
        v31 = v10;
      }
      FLOODBM::vFindExtent(v33, v8, &v10[2 * v10[1] + 4], &v10[2 * v10[1] + 5]);
      v20 = v10[1];
      v8 = v10[2 * v20 + 5] + 1;
      v10[1] = v20 + 1;
      goto LABEL_29;
    }
    v17 = v10[1];
    v18 = v10 + 5;
    while ( v8 < *(v18 - 1) )
    {
LABEL_24:
      ++v16;
      v18 += 2;
      if ( v16 >= v17 )
        goto LABEL_25;
    }
    if ( v8 >= *v18 )
    {
      v17 = v10[1];
      goto LABEL_24;
    }
    v8 = *v18;
LABEL_29:
    if ( v8 < a3 )
    {
      this = v33;
      continue;
    }
    break;
  }
LABEL_34:
  v22 = v10[1];
  if ( v30 == v22 )
  {
    *a5 = 0;
    *a4 = 0;
  }
  else
  {
    *a4 = v10[2 * v30 + 4];
    *a5 = v10[2 * v22 + 3];
    if ( v22 != 1 )
    {
      v23 = (STACKOBJ *)(v10 + 4);
      v37 = (STACKOBJ *)(v10 + 4);
      do
      {
        v24 = v9;
        if ( v9 < v22 )
        {
          v25 = v23;
          v26 = *(_DWORD *)v23;
          v27 = v9;
          do
          {
            if ( *(_DWORD *)v25 < v26 )
            {
              v26 = *(_DWORD *)v25;
              v27 = v24;
            }
            ++v24;
            v25 = (STACKOBJ *)((char *)v25 + 8);
          }
          while ( v24 < v22 );
          v9 = (unsigned int)v36;
          v10 = v31;
          v23 = v37;
          if ( v36 != (unsigned __int8 *)v27 )
          {
            v28 = *(_DWORD *)v37;
            v29 = *((_DWORD *)v37 + 1);
            *(_DWORD *)v37 = v31[2 * v27 + 4];
            *((_DWORD *)v37 + 1) = v31[2 * v27 + 5];
            v31[2 * v27 + 4] = v28;
            v31[2 * v27 + 5] = v29;
          }
        }
        v22 = v10[1];
        ++v9;
        v23 = (STACKOBJ *)((char *)v23 + 8);
        v36 = (unsigned __int8 *)v9;
        v37 = v23;
      }
      while ( v9 < v22 - 1 );
    }
  }
  return 1;
}
