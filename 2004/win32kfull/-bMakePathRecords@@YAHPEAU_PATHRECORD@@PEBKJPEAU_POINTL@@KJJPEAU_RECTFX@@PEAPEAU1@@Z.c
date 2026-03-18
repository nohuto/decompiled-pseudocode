/*
 * XREFs of ?bMakePathRecords@@YAHPEAU_PATHRECORD@@PEBKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z @ 0x1C013628C
 * Callers:
 *     NtGdiFastPolyPolyline @ 0x1C0136400 (NtGdiFastPolyPolyline.c)
 * Callees:
 *     LongLongToLong @ 0x1C014AF30 (LongLongToLong.c)
 */

__int64 __fastcall bMakePathRecords(
        struct _PATHRECORD *a1,
        const unsigned int *a2,
        int a3,
        struct _POINTL *a4,
        unsigned int a5,
        int a6,
        int a7,
        LONG *plResult,
        struct _PATHRECORD **a9)
{
  __int64 v10; // r8
  int v11; // ebx
  __int64 v12; // rsi
  const unsigned int *v13; // rdx
  struct _PATHRECORD *v14; // r10
  int v15; // edi
  __int64 v16; // r14
  __int64 v17; // rbp
  struct _POINTL *v19; // r11
  struct _PATHRECORD *v20; // r9
  int x; // ecx
  LONG v22; // eax
  LONG v23; // eax
  int y; // ecx
  int v25; // eax
  LONG v26; // eax
  __int64 v27; // r9
  __int64 v28; // r9
  __int64 v29; // r9
  unsigned int v30; // r11d

  *((_QWORD *)a1 + 1) = 0LL;
  LODWORD(v10) = 0x7FFFFFFF;
  v11 = *a2;
  LODWORD(v12) = 0x80000000;
  v13 = a2 + 1;
  v14 = a1;
  v15 = a3 - v11;
  LODWORD(v16) = 0x7FFFFFFF;
  LODWORD(v17) = 0x80000000;
  if ( v15 >= 0 )
  {
    while ( v11 >= 2 )
    {
      v19 = a4;
      v20 = v14;
      *((_DWORD *)v14 + 5) = v11;
      *((_DWORD *)v14 + 4) = 3;
      do
      {
        x = v19->x;
        v22 = v19->x;
        if ( v19->x >= (int)v10 )
          v22 = v10;
        v10 = v22;
        v23 = v19->x;
        if ( x <= (int)v12 )
          v23 = v12;
        v12 = v23;
        *((_DWORD *)v14 + 6) = x + a6;
        y = v19->y;
        v25 = y;
        if ( y >= (int)v16 )
          v25 = v16;
        v16 = v25;
        v26 = v19->y;
        if ( y <= (int)v17 )
          v26 = v17;
        ++v19;
        v17 = v26;
        *((_DWORD *)v14 + 7) = y + a7;
        v14 = (struct _PATHRECORD *)((char *)v14 + 8);
        --v11;
      }
      while ( v11 );
      a4 = v19;
      if ( !--a5 )
      {
        *(_QWORD *)v20 = 0LL;
        *a9 = v20;
        if ( LongLongToLong(v10 + a6, plResult) < 0
          || LongLongToLong(v12 + a6, (LONG *)(v27 + 8)) < 0
          || LongLongToLong(a7 + v16, (LONG *)(v28 + 4)) < 0
          || LongLongToLong(a7 + v17, (LONG *)(v29 + 12)) < 0 )
        {
          v30 = 0;
        }
        if ( v15 )
          return 0;
        return v30;
      }
      v14 = (struct _PATHRECORD *)((char *)v14 + 24);
      *((_QWORD *)v14 + 1) = v20;
      *(_QWORD *)v20 = v14;
      v11 = *v13++;
      v15 -= v11;
      if ( v15 < 0 )
        return 0;
    }
  }
  return 0;
}
