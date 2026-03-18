/*
 * XREFs of ?bMakePathRecords@@YGHPAU_PATHRECORD@@PBKJPAU_POINTL@@KJJPAU_RECTFX@@PAPAU1@@Z @ 0x1FF4CC
 * Callers:
 *     _NtGdiFastPolyPolyline@16 @ 0xF7700 (_NtGdiFastPolyPolyline@16.c)
 * Callees:
 *     _LongLongToLong@12 @ 0xC28DA (_LongLongToLong@12.c)
 */

BOOL __userpurge bMakePathRecords@<eax>(
        int *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct _PATHRECORD *a3,
        const unsigned int *a4,
        int a5,
        int a6,
        signed int a7,
        int a8,
        _DWORD *a9,
        struct _RECTFX *a10,
        struct _PATHRECORD **a11)
{
  signed int v12; // ebx
  int v13; // edx
  int *v14; // edi
  bool v15; // sf
  const unsigned int *v16; // edi
  int v17; // esi
  signed int v18; // eax
  int v19; // eax
  bool v20; // zf
  struct _PATHRECORD *v21; // esi
  __int64 v24; // kr00_8
  BOOL v25; // eax
  LONG *v26; // [esp+0h] [ebp-20h]
  LONG *v27; // [esp+0h] [ebp-20h]
  LONG *v28; // [esp+0h] [ebp-20h]
  LONG *v29; // [esp+0h] [ebp-20h]
  _DWORD *v30; // [esp+Ch] [ebp-14h]
  int *v31; // [esp+10h] [ebp-10h]
  signed int v32; // [esp+14h] [ebp-Ch]
  int v33; // [esp+18h] [ebp-8h]
  int v34; // [esp+1Ch] [ebp-4h]
  struct _PATHRECORD *i; // [esp+28h] [ebp+8h]
  int v37; // [esp+34h] [ebp+14h]

  a2[1] = 0;
  v34 = 0x7FFFFFFF;
  v12 = 0x80000000;
  v33 = 0x7FFFFFFF;
  v32 = 0x80000000;
  v13 = *a1;
  v14 = a1 + 1;
  v15 = (int)a3 - v13 < 0;
  for ( i = (struct _PATHRECORD *)((char *)a3 - v13); ; i = (struct _PATHRECORD *)((char *)i - *v31) )
  {
    v31 = v14;
    if ( v15 || v13 < 2 )
      return 0;
    v16 = a4;
    v17 = a6;
    a2[3] = v13;
    a2[2] = 3;
    v30 = a2;
    do
    {
      v18 = *v16;
      if ( (signed int)*v16 < v34 )
        v34 = *v16;
      if ( v18 > v12 )
        v12 = *v16;
      a2[4] = v17 + v18;
      v19 = v16[1];
      if ( v19 < v33 )
        v33 = v16[1];
      if ( v19 > v32 )
        v32 = v16[1];
      v16 += 2;
      v17 = a6;
      a2[5] = a7 + v19;
      a2 += 2;
      --v13;
    }
    while ( v13 );
    v20 = a5-- == 1;
    v21 = i;
    a4 = v16;
    if ( v20 )
      break;
    a2 += 4;
    a2[1] = v30;
    *v30 = a2;
    v13 = *v31;
    v14 = v31 + 1;
    v15 = (int)i - *v31 < 0;
  }
  *v30 = 0;
  *a9 = v30;
  v24 = a6;
  v37 = a6 >> 31;
  v25 = LongLongToLong(v24 + v34, v26) >= 0
     && LongLongToLong(__PAIR64__(v37, a6) + v12, v27) >= 0
     && LongLongToLong(a7 + (__int64)v33, v28) >= 0
     && LongLongToLong(a7 + (__int64)v32, v29) >= 0;
  return v21 == 0 && v25;
}
