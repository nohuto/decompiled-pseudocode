/*
 * XREFs of ?bExtendScanline@FLOODBM@@QAEHAAVSTACKOBJ@@0JPAE1@Z @ 0x21F71A
 * Callers:
 *     _NtGdiExtFloodFill@20 @ 0x2200C8 (_NtGdiExtFloodFill@20.c)
 * Callees:
 *     ?bPushMergeScrScan@STACKOBJ@@QAEHXZ @ 0x21FBAB (-bPushMergeScrScan@STACKOBJ@@QAEHXZ.c)
 *     ?bSearchAllSpans@FLOODBM@@QAEHJJAAJ0PAEAAVSTACKOBJ@@PAVSCANLINE@@@Z @ 0x21FCAC (-bSearchAllSpans@FLOODBM@@QAEHJJAAJ0PAEAAVSTACKOBJ@@PAVSCANLINE@@@Z.c)
 */

int __thiscall FLOODBM::bExtendScanline(
        FLOODBM *this,
        struct STACKOBJ *a2,
        struct STACKOBJ *a3,
        struct STACKOBJ *a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6)
{
  struct STACKOBJ *v6; // ebx
  _DWORD *v7; // edx
  _DWORD *v8; // ecx
  struct STACKOBJ **v9; // esi
  struct STACKOBJ *v10; // edx
  struct SCANLINE *v11; // esi
  struct STACKOBJ **v12; // eax
  int v13; // edi
  int *v14; // ecx
  int v15; // eax
  int v16; // ecx
  struct STACKOBJ *v17; // esi
  int v18; // esi
  struct STACKOBJ *v19; // ecx
  int v20; // edx
  int v21; // esi
  int *v23; // [esp+Ch] [ebp-24h]
  unsigned int v24; // [esp+10h] [ebp-20h]
  struct STACKOBJ *v25; // [esp+14h] [ebp-1Ch]
  struct STACKOBJ *v26; // [esp+18h] [ebp-18h]
  struct SCANLINE *v27; // [esp+1Ch] [ebp-14h]
  struct STACKOBJ *v28; // [esp+20h] [ebp-10h]
  struct SCANLINE *v29; // [esp+24h] [ebp-Ch]
  int v31; // [esp+2Ch] [ebp-4h] BYREF

  v6 = a2;
  v7 = (_DWORD *)*((_DWORD *)a3 + 3);
  v8 = (_DWORD *)*((_DWORD *)a2 + 2);
  v9 = (struct STACKOBJ **)*((_DWORD *)a2 + 3);
  v7[1] = 0;
  v27 = (struct SCANLINE *)v8;
  v9[1] = 0;
  *v7 = *v8;
  v10 = a4;
  *v9 = a4;
  v11 = 0;
  v29 = 0;
  v12 = *(struct STACKOBJ ***)(*((_DWORD *)v6 + 2) + 12);
  if ( v12 && *v12 == v10 )
  {
    v11 = *(struct SCANLINE **)(*((_DWORD *)v6 + 2) + 12);
    v29 = v11;
  }
  v24 = 0;
  v13 = 1;
  if ( v8[1] )
  {
    v14 = v8 + 5;
    v23 = v14;
    while ( 1 )
    {
      v15 = *(v14 - 1);
      v16 = *v14;
      a2 = 0;
      a4 = 0;
      v25 = (struct STACKOBJ *)v16;
      v26 = (struct STACKOBJ *)v15;
      v13 = FLOODBM::bSearchAllSpans(this, v15, v16, (int *)&a2, (int *)&a4, a6, v6, v11);
      if ( !v13 )
        break;
      v17 = a2;
      v28 = a4;
      if ( a2 != a4 )
      {
        do
        {
          if ( (int)v17 >= (int)((char *)v26 - 1) )
            break;
          v31 = (int)v26 - 1;
          v13 &= FLOODBM::bSearchAllSpans(this, (int)v17, (int)v26 - 1, (int *)&a2, &v31, a5, a3, v27);
          if ( !v13 )
            return v13;
          v26 = a2;
          if ( a2 == (struct STACKOBJ *)v31 )
            break;
          v18 = (int)v17 - 1;
          if ( (int)a2 >= v18 )
            break;
          v31 = v18;
          v13 &= FLOODBM::bSearchAllSpans(this, (int)a2, v18, (int *)&a2, &v31, a6, v6, v29);
          if ( !v13 )
            return v13;
          v17 = a2;
        }
        while ( a2 != (struct STACKOBJ *)v31 );
        v19 = v28;
        do
        {
          if ( (int)v19 <= (int)((char *)v25 + 1) )
            break;
          v13 &= FLOODBM::bSearchAllSpans(this, (int)v25 + 1, (int)v19, (int *)&a2, (int *)&a4, a5, a3, v27);
          if ( !v13 )
            return v13;
          v25 = a4;
          if ( a2 == a4 || (int)a4 <= (int)((char *)v28 + 1) )
            break;
          v13 &= FLOODBM::bSearchAllSpans(this, (int)v28 + 1, (int)a4, (int *)&a2, (int *)&a4, a6, v6, v29);
          if ( !v13 )
            return v13;
          v19 = a4;
          v28 = a4;
        }
        while ( a2 != a4 );
      }
      v14 = v23 + 2;
      ++v24;
      v23 += 2;
      v11 = v29;
      if ( v24 >= *((_DWORD *)v27 + 1) )
        goto LABEL_22;
    }
  }
  else
  {
LABEL_22:
    v20 = *((_DWORD *)v6 + 2);
    *((_DWORD *)v6 + 1) -= *(_DWORD *)(v20 + 8);
    *((_DWORD *)v6 + 2) = *(_DWORD *)(v20 + 12);
    v21 = STACKOBJ::bPushMergeScrScan(v6);
    return v21 & STACKOBJ::bPushMergeScrScan(a3) & v13;
  }
  return v13;
}
