/*
 * XREFs of ??0EBOX@@QAE@AAVERECTL@@H@Z @ 0x22EF4
 * Callers:
 *     _NtGdiCreateRoundRectRgn@24 @ 0x2245E (_NtGdiCreateRoundRectRgn@24.c)
 *     _NtGdiCreateEllipticRgn@16 @ 0x1FDFC4 (_NtGdiCreateEllipticRgn@16.c)
 * Callees:
 *     ?vOrder@ERECTL@@QAEXXZ @ 0x4E19C (-vOrder@ERECTL@@QAEXXZ.c)
 */

EBOX *__thiscall EBOX::EBOX(EBOX *this, struct ERECTL *a2, int a3)
{
  EBOX *v3; // edi
  int v4; // esi
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // esi
  int v10; // edx

  v3 = this;
  ERECTL::vOrder(a2);
  v3 = (EBOX *)((char *)v3 + 64);
  *(_DWORD *)v3 = *(_DWORD *)a2;
  v3 = (EBOX *)((char *)v3 + 4);
  *(_DWORD *)v3 = *((_DWORD *)a2 + 1);
  v3 = (EBOX *)((char *)v3 + 4);
  *(_DWORD *)v3 = *((_DWORD *)a2 + 2);
  *((_DWORD *)v3 + 1) = *((_DWORD *)a2 + 3);
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  v4 = 16 * *((_DWORD *)a2 + 2) - 16;
  *((_DWORD *)this + 2) = v4;
  v4 -= 12;
  v5 = 16 * *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 3) = v5;
  v5 -= 4;
  v6 = 16 * *(_DWORD *)a2;
  *((_DWORD *)this + 6) = v6;
  v6 -= 4;
  v7 = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 2) = v4;
  *((_DWORD *)this + 8) = v4;
  v8 = 16 * v7 - 28;
  *((_DWORD *)this + 3) = v5;
  *((_DWORD *)this + 5) = v5;
  *((_DWORD *)this + 7) = v8;
  *((_DWORD *)this + 9) = v8;
  *((_DWORD *)this + 6) = v6;
  *((_DWORD *)this + 4) = v6;
  *((_DWORD *)this + 10) = v6;
  v9 = (v4 - v6 + 1) >> 1;
  *((_DWORD *)this + 11) = *((_DWORD *)this + 7);
  *((_DWORD *)this + 12) = v9;
  v10 = (v5 - v8 + 1) >> 1;
  *((_DWORD *)this + 15) = v10;
  *((_DWORD *)this + 10) += v9;
  *((_DWORD *)this + 11) += *((_DWORD *)this + 13);
  *((_DWORD *)this + 10) += *((_DWORD *)this + 14);
  *((_DWORD *)this + 11) += v10;
  return this;
}
