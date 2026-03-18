/*
 * XREFs of _OffGradientFill@48 @ 0xBDDCE
 * Callers:
 *     ?SpGradientFill@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAXKPAU_RECTL@@PAU_POINTL@@K@Z @ 0xBDB96 (-SpGradientFill@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAXKPAU_RECTL@@PAU_P.c)
 *     ?MulGradientFill@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAXKPAU_RECTL@@PAU_POINTL@@K@Z @ 0x203762 (-MulGradientFill@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAXKPAU_RECTL@@PAU_.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z @ 0x92E18 (-CLIPOBJ_vOffset@@YIXPAU_CLIPOBJ@@JJ@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int (__stdcall *__fastcall OffGradientFill(
        int (__stdcall *a1)(int, struct _CLIPOBJ *, int, _DWORD *, _DWORD *, int, int, int *, int *, int),
        LONG *a2,
        int a3,
        struct _CLIPOBJ *a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7,
        int a8,
        int a9,
        _DWORD *a10,
        int *a11,
        int a12))(int, struct _CLIPOBJ *, int, _DWORD *, _DWORD *, int, int, int *, int *, int)
{
  LONG v12; // ebx
  _DWORD *v13; // esi
  LONG v14; // eax
  int *v15; // edx
  LONG v16; // ecx
  int v17; // edi
  _DWORD *v18; // eax
  LONG v19; // eax
  int v21; // [esp+18h] [ebp-30h] BYREF
  int v22; // [esp+1Ch] [ebp-2Ch]
  struct _CLIPOBJ *v23; // [esp+20h] [ebp-28h]
  int (__stdcall *v24)(int, struct _CLIPOBJ *, int, _DWORD *, _DWORD *, int, int, int *, int *, int); // [esp+24h] [ebp-24h]
  int *v25; // [esp+28h] [ebp-20h]
  _DWORD *v26; // [esp+2Ch] [ebp-1Ch]
  LONG v27; // [esp+30h] [ebp-18h]
  int v28; // [esp+34h] [ebp-14h] BYREF
  int v29; // [esp+38h] [ebp-10h]
  int v30; // [esp+3Ch] [ebp-Ch]
  int v31; // [esp+40h] [ebp-8h]

  v12 = *a2;
  v13 = a6;
  v26 = a10;
  v25 = a11;
  v14 = a2[1];
  v24 = a1;
  v23 = a4;
  v27 = v14;
  CLIPOBJ_vOffset(a4, v12, v14);
  v15 = a10;
  v16 = v27;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  if ( a10 )
  {
    v28 = v12 + *v26;
    v30 = v12 + v26[2];
    v29 = v27 + v26[1];
    v15 = &v28;
    v31 = v27 + v26[3];
  }
  v21 = 0;
  v22 = 0;
  if ( v25 )
  {
    v21 = *v25 - v12;
    v22 = v25[1] - v27;
    v25 = &v21;
  }
  v17 = (int)a7;
  v18 = a6;
  if ( a7 )
  {
    v26 = a7;
    do
    {
      *v18 += v12;
      v18 += 4;
      *(v18 - 3) += v16;
      v26 = (_DWORD *)((char *)v26 - 1);
    }
    while ( v26 );
  }
  v24 = (int (__stdcall *)(int, struct _CLIPOBJ *, int, _DWORD *, _DWORD *, int, int, int *, int *, int))v24(a3, v23, a5, a6, a7, a8, a9, v15, v25, a12);
  CLIPOBJ_vOffset(v23, -v12, -v27);
  if ( a7 )
  {
    v19 = v27;
    do
    {
      *v13 -= v12;
      v13 += 4;
      *(v13 - 3) -= v19;
      --v17;
    }
    while ( v17 );
  }
  return v24;
}
