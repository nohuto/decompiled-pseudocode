/*
 * XREFs of ?bDoGetSetBitmapBits@@YGHPAU_SURFOBJ@@0H@Z @ 0x21096
 * Callers:
 *     _GreSetBitmapBits@16 @ 0x20D9E (_GreSetBitmapBits@16.c)
 *     _GreGetBitmapBits@16 @ 0xE2B7A (_GreGetBitmapBits@16.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __userpurge bDoGetSetBitmapBits@<eax>(
        struct _SURFOBJ *a1@<edx>,
        struct _SURFOBJ *a2@<ecx>,
        struct _SURFOBJ *Src,
        struct _SURFOBJ *a4,
        int a5)
{
  LONG cy; // edx
  unsigned int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int cjBits; // edi
  int v12; // edx
  size_t v13; // edi
  unsigned int v16; // edx
  unsigned int v17; // ecx
  unsigned int v18; // edi
  int v19; // edx
  size_t v20; // edi
  size_t lDelta; // [esp+10h] [ebp-2Ch]
  size_t v23; // [esp+10h] [ebp-2Ch]
  size_t v24; // [esp+10h] [ebp-2Ch]
  size_t MaxCount; // [esp+14h] [ebp-28h]
  size_t MaxCounta; // [esp+14h] [ebp-28h]
  size_t MaxCountb; // [esp+14h] [ebp-28h]
  size_t v28; // [esp+18h] [ebp-24h]
  unsigned int v29; // [esp+1Ch] [ebp-20h]
  struct _SURFOBJ *v30; // [esp+20h] [ebp-1Ch]
  char *pvBits; // [esp+20h] [ebp-1Ch]

  if ( Src )
  {
    Src = (struct _SURFOBJ *)a1->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&Src, a1, 0, 0);
    Src = (struct _SURFOBJ *)a2->pvBits;
    cy = a1->sizlBitmap.cy;
    v8 = ((unsigned int)(a1->sizlBitmap.cx * gaulConvert[a1->iBitmapFormat] + 15) >> 3) & 0x1FFFFFFE;
    if ( Src )
    {
      v30 = Src;
      Src = (struct _SURFOBJ *)a1->pvScan0;
      lDelta = a1->lDelta;
      v28 = v8;
      v9 = v8 * cy;
      v10 = a2->lDelta;
      cjBits = a2->cjBits;
      if ( (v10 & 0x80000000) != 0 || v10 >= v9 )
      {
        a2->cjBits = 0;
        return 0;
      }
      if ( cjBits + v10 > v9 )
        cjBits = v9 - v10;
      a2->cjBits = cjBits;
      v12 = v10 % v28;
      Src = (struct _SURFOBJ *)((char *)Src + lDelta * (v10 / v28));
      if ( v10 % v28 )
      {
        MaxCount = v28 - v12;
        if ( v28 - v12 >= cjBits )
          MaxCount = cjBits;
        memcpy(v30, (char *)Src + v12, MaxCount);
        v30 = (struct _SURFOBJ *)((char *)v30 + MaxCount);
        Src = (struct _SURFOBJ *)((char *)Src + lDelta);
        cjBits -= MaxCount;
      }
      MaxCounta = cjBits / v28;
      v13 = cjBits % v28;
      while ( MaxCounta-- )
      {
        memcpy(v30, Src, v28);
        v30 = (struct _SURFOBJ *)((char *)v30 + v28);
        Src = (struct _SURFOBJ *)((char *)Src + lDelta);
      }
      if ( v13 )
        memcpy(v30, Src, v13);
    }
    else
    {
      a2->cjBits = cy * v8;
    }
  }
  else
  {
    Src = (struct _SURFOBJ *)a2->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&Src, a2, 0, 0);
    pvBits = (char *)a1->pvBits;
    Src = (struct _SURFOBJ *)a2->pvScan0;
    MaxCountb = a2->lDelta;
    v29 = ((unsigned int)(a2->sizlBitmap.cx * gaulConvert[a2->iBitmapFormat] + 15) >> 3) & 0x1FFFFFFE;
    v16 = v29 * a2->sizlBitmap.cy;
    v17 = a1->lDelta;
    v18 = a1->cjBits;
    if ( (v17 & 0x80000000) != 0 || v17 >= v16 )
    {
      a1->cjBits = 0;
    }
    else
    {
      if ( v18 + v17 > v16 )
        v18 = v16 - v17;
      a1->cjBits = v18;
      v19 = v17 % v29;
      Src = (struct _SURFOBJ *)((char *)Src + MaxCountb * (v17 / v29));
      if ( v17 % v29 )
      {
        v23 = v29 - v19;
        if ( v29 - v19 >= v18 )
          v23 = v18;
        memcpy((char *)Src + v19, pvBits, v23);
        pvBits += v23;
        Src = (struct _SURFOBJ *)((char *)Src + MaxCountb);
        v18 -= v23;
      }
      v24 = v18 / v29;
      v20 = v18 % v29;
      while ( v24-- )
      {
        memcpy(Src, pvBits, v29);
        pvBits += v29;
        Src = (struct _SURFOBJ *)((char *)Src + MaxCountb);
      }
      if ( v20 )
        memcpy(Src, pvBits, v20);
    }
  }
  return 1;
}
