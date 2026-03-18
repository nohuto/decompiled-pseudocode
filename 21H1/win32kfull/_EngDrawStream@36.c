/*
 * XREFs of _EngDrawStream@36 @ 0x50172
 * Callers:
 *     ?RedirDrawStream@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@KPAXPAU_DSSTATE@@@Z @ 0x1FB2C8 (-RedirDrawStream@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@KPAXPAU_DSS.c)
 *     ?MulDrawStream@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@KPAXPAU_DSSTATE@@@Z @ 0x202E96 (-MulDrawStream@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@KPAXPAU_DSSTA.c)
 * Callees:
 *     ?bRedirHooked@SURFACE@@QAEHXZ @ 0x525DA (-bRedirHooked@SURFACE@@QAEHXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __stdcall EngDrawStream(int a1, int a2, int a3, int a4, int a5, int *a6, unsigned int a7, _DWORD *a8, _DWORD *a9)
{
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // esi
  int v13; // ecx
  int v14; // ebx
  unsigned int v15; // ebx
  int (__stdcall *v16)(int, int, int, int, int, int, int, int, int); // edx
  _DWORD *v18; // [esp+14h] [ebp-54h]
  int v19; // [esp+20h] [ebp-48h]
  int v20; // [esp+24h] [ebp-44h]
  int v21; // [esp+2Ch] [ebp-3Ch]
  _DWORD v22[4]; // [esp+44h] [ebp-24h] BYREF
  int v23; // [esp+54h] [ebp-14h] BYREF
  int v24; // [esp+58h] [ebp-10h]
  int v25; // [esp+5Ch] [ebp-Ch]
  int v26; // [esp+60h] [ebp-8h]

  v10 = 1;
  v11 = a7;
  v12 = *(_DWORD *)(a1 != 0 ? a1 - 16 + 0x1C : 28);
  while ( 1 )
  {
    v18 = a8;
    if ( v11 < 4 || *a8 != 9 || v11 < 0x3C )
      return v10;
    v13 = a8[1];
    v23 = v13;
    v24 = a8[2];
    v14 = a8[3];
    v25 = v14;
    v19 = a8[4];
    v26 = v19;
    v21 = *a6;
    if ( (unsigned __int64)(*a6 + (__int64)v13 + 0x80000000LL) >> 32 )
      goto LABEL_21;
    if ( (unsigned __int64)(*a6 + (__int64)v14 + 0x80000000LL) >> 32 )
      goto LABEL_21;
    v20 = a6[1];
    if ( (unsigned __int64)(v20 + (__int64)v24 + 0x80000000LL) >> 32
      || (unsigned __int64)(v20 + (__int64)v19 + 0x80000000LL) >> 32 )
    {
      goto LABEL_21;
    }
    v24 += v20;
    v23 = v21 + v13;
    v25 = v14 + v21;
    v26 = v20 + v19;
    if ( v21 + v13 >= v14 + v21 )
    {
      if ( v13 - v14 < 0 )
        goto LABEL_21;
      v15 = 0;
    }
    else
    {
      v15 = (unsigned int)(v14 - v13) >> 31;
    }
    if ( v15 )
    {
LABEL_21:
      v10 = 0;
      goto LABEL_22;
    }
    v16 = *(int (__stdcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)(a1 != 0 ? a1 - 16 + 0x1C : 28)
                                                                           + 2264);
    if ( !v16 )
      v16 = EngNineGrid;
    if ( (!*(_DWORD *)(a1 + 8) || (*(_DWORD *)(v12 + 1416) & 0x400) == 0)
      && !SURFACE::bRedirHooked(a1 != 0 ? (SURFACE *)(a1 - 16) : 0)
      && (*(_BYTE *)(a1 != 0 ? a1 - 16 + 0x48 : 72) & 0x10) == 0 )
    {
      v16 = EngNineGrid;
    }
    v22[0] = 33488896;
    v22[3] = a9[9];
    v22[2] = a9[8];
    v22[1] = a9[7];
    v10 = v16(a1, a2, a3, a4, (int)&v23, (int)(v18 + 5), (int)(v18 + 9), (int)v22, 0);
LABEL_22:
    v11 = a7 - 60;
    a7 -= 60;
    a8 = v18 + 15;
  }
}
