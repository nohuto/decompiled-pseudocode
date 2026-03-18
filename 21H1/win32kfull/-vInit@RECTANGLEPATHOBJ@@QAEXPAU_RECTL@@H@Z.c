/*
 * XREFs of ?vInit@RECTANGLEPATHOBJ@@QAEXPAU_RECTL@@H@Z @ 0x1E6288
 * Callers:
 *     _GreRectangle@20 @ 0xBB904 (_GreRectangle@20.c)
 * Callees:
 *     <none>
 */

void __thiscall RECTANGLEPATHOBJ::vInit(RECTANGLEPATHOBJ *this, struct _RECTL *a2, int a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // ecx

  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 80) = 0;
  *((_DWORD *)this + 17) = (char *)this + 320;
  *((_DWORD *)this + 18) = (char *)this + 320;
  *((_DWORD *)this + 2) = (char *)this + 48;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 81) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 82) = 15;
  *((_DWORD *)this + 83) = 4;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 1) = 4;
  *(_DWORD *)this = 0;
  v4 = 16 * a2->left;
  *((_DWORD *)this + 86) = v4;
  *((_DWORD *)this + 88) = v4;
  *((_DWORD *)this + 19) = v4;
  v5 = 16 * a2->right;
  *((_DWORD *)this + 84) = v5;
  *((_DWORD *)this + 90) = v5;
  *((_DWORD *)this + 21) = v5;
  v6 = 16 * a2->top;
  *((_DWORD *)this + 20) = v6;
  v7 = 16 * a2->bottom;
  *((_DWORD *)this + 22) = v7;
  if ( a3 )
  {
    v8 = v7;
    v7 = v6;
  }
  else
  {
    v8 = v6;
    v6 = v7;
  }
  *((_DWORD *)this + 89) = v6;
  *((_DWORD *)this + 91) = v7;
  *((_DWORD *)this + 85) = v8;
  *((_DWORD *)this + 87) = v8;
}
