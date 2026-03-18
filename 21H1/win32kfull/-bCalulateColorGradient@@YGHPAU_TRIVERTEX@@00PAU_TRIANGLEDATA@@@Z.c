/*
 * XREFs of ?bCalulateColorGradient@@YGHPAU_TRIVERTEX@@00PAU_TRIANGLEDATA@@@Z @ 0x1E9CBD
 * Callers:
 *     ?bCalculateAndDrawTriangle@@YGHPAVSURFACE@@PAU_TRIVERTEX@@11PAU_TRIANGLEDATA@@P6GX02@Z@Z @ 0x1E9AC4 (-bCalculateAndDrawTriangle@@YGHPAVSURFACE@@PAU_TRIVERTEX@@11PAU_TRIANGLEDATA@@P6GX02@Z@Z.c)
 * Callees:
 *     __alldvrm @ 0xF91D9 (__alldvrm.c)
 *     ?bDoGradient@@YGHPA_J00JJJPAU_GRADSTRUCT@@@Z @ 0x1E9E03 (-bDoGradient@@YGHPA_J00JJJPAU_GRADSTRUCT@@@Z.c)
 */

int __userpurge bCalulateColorGradient@<eax>(
        unsigned __int16 *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct _TRIVERTEX *a3,
        struct _TRIVERTEX *a4,
        struct _TRIVERTEX *a5,
        struct _TRIANGLEDATA *a6)
{
  int v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // edx
  int v12; // ebx
  _DWORD *v13; // ebx
  unsigned __int16 *v14; // edi
  __int64 v16; // [esp-Ch] [ebp-54h]
  int v17; // [esp+0h] [ebp-48h]
  int v18; // [esp+0h] [ebp-48h]
  int v19; // [esp+0h] [ebp-48h]
  int v20; // [esp+0h] [ebp-48h]
  struct _GRADSTRUCT *v21; // [esp+4h] [ebp-44h]
  struct _GRADSTRUCT *v22; // [esp+4h] [ebp-44h]
  struct _GRADSTRUCT *v23; // [esp+4h] [ebp-44h]
  struct _GRADSTRUCT *v24; // [esp+4h] [ebp-44h]
  int v25[6]; // [esp+10h] [ebp-38h] BYREF
  __int64 v26; // [esp+28h] [ebp-20h]
  __int64 v27; // [esp+30h] [ebp-18h]
  unsigned __int16 *v28; // [esp+3Ch] [ebp-Ch]
  _DWORD *v29; // [esp+40h] [ebp-8h]
  int v30; // [esp+44h] [ebp-4h]

  v6 = *(_DWORD *)a1 - *a2;
  v30 = *a2;
  v7 = a3->x - v30;
  v29 = a2;
  v8 = a2[1];
  v9 = *((_DWORD *)a1 + 1);
  v28 = a1;
  v10 = v9 - v8;
  v11 = a3->y - v8;
  v25[0] = v6;
  v25[1] = v7;
  v25[2] = v10;
  v25[3] = v11;
  v12 = v6 * v11 - v7 * v10;
  v25[5] = v12;
  if ( v6 >= 0 )
    v6 = 0;
  if ( v10 >= 0 )
    v10 = 0;
  if ( v6 >= v7 )
    v6 = v7;
  if ( v10 >= v11 )
    v10 = v11;
  v25[4] = v6 + v10;
  v16 = (int)abs32(v12);
  v13 = v29;
  v14 = v28;
  v26 = 0x1000000000000LL / v16;
  v27 = 0x1000000000000LL % v16;
  *(_DWORD *)&a4[8].Red = v30;
  *(_DWORD *)&a4[8].Blue = v13[1];
  bDoGradient(
    (__int64 *)&a4[5].x,
    (__int64 *)*((unsigned __int16 *)v13 + 4),
    (__int64 *)v14[4],
    a3->Red,
    (int)v25,
    v17,
    v21);
  bDoGradient(
    (__int64 *)&a4[5].Red,
    (__int64 *)*((unsigned __int16 *)v13 + 5),
    (__int64 *)v14[5],
    a3->Green,
    (int)v25,
    v18,
    v22);
  bDoGradient(
    (__int64 *)&a4[6].x,
    (__int64 *)*((unsigned __int16 *)v13 + 6),
    (__int64 *)v14[6],
    a3->Blue,
    (int)v25,
    v19,
    v23);
  bDoGradient(
    (__int64 *)&a4[6].Red,
    (__int64 *)*((unsigned __int16 *)v13 + 7),
    (__int64 *)v14[7],
    a3->Alpha,
    (int)v25,
    v20,
    v24);
  return 1;
}
