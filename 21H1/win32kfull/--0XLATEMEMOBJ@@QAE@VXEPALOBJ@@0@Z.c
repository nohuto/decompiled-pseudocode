/*
 * XREFs of ??0XLATEMEMOBJ@@QAE@VXEPALOBJ@@0@Z @ 0x225896
 * Callers:
 *     _NtGdiUpdateColors@4 @ 0x21EB48 (_NtGdiUpdateColors@4.c)
 * Callees:
 *     ?pCreateXlate@@YGPAVXLATE@@K@Z @ 0x225E3B (-pCreateXlate@@YGPAVXLATE@@K@Z.c)
 *     ?vCheckForTrivial@XLATE@@QAEXXZ @ 0x225F31 (-vCheckForTrivial@XLATE@@QAEXXZ.c)
 */

XLATE **__thiscall XLATEMEMOBJ::XLATEMEMOBJ(XLATE **this, int a2, _DWORD *a3)
{
  XLATE **v3; // esi
  struct XLATE *Xlate; // eax
  unsigned int v5; // eax
  XLATE *v6; // ecx
  int v7; // edx
  int v8; // edi
  unsigned __int8 *v9; // edx
  int v10; // ebx
  int v11; // edi
  int v12; // eax
  int v13; // ecx
  unsigned int v15; // [esp+0h] [ebp-10h]
  int i; // [esp+8h] [ebp-8h]

  v3 = this;
  *this = 0;
  Xlate = pCreateXlate(v15);
  *v3 = Xlate;
  if ( Xlate )
  {
    *((_DWORD *)Xlate + 9) = a2;
    *((_DWORD *)*v3 + 10) = a2;
    *((_DWORD *)*v3 + 11) = a3;
    v5 = 0;
    v6 = *v3;
    v7 = (int)*v3 + 60;
    for ( i = v7; v5 < *((_DWORD *)*v3 + 3); v6 = *v3 )
    {
      *(_DWORD *)(v7 + 4 * v5) = v5;
      ++v5;
    }
    v8 = a3[15];
    if ( a3[5] )
    {
      v9 = (unsigned __int8 *)(v8 + 4);
      v10 = a3[14] - v8;
      v11 = -4 - v8;
      do
      {
        v12 = *v9;
        v13 = (v9++)[v10];
        *(_DWORD *)(i + 4 * v12) = v13;
      }
      while ( (unsigned int)&v9[v11] < a3[5] );
      v3 = this;
      v6 = *this;
    }
    XLATE::vCheckForTrivial(v6);
  }
  return v3;
}
