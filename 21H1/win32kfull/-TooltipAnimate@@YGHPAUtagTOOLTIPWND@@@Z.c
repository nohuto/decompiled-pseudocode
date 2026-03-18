/*
 * XREFs of ?TooltipAnimate@@YGHPAUtagTOOLTIPWND@@@Z @ 0x1A0923
 * Callers:
 *     ?xxxTooltipHandleTimer@@YGHPAUtagTOOLTIPWND@@I@Z @ 0x1A0F63 (-xxxTooltipHandleTimer@@YGHPAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     ?GetTooltipDC@@YGPAUHDC__@@PAUtagTOOLTIPWND@@PAUtagMONITOR@@@Z @ 0xE4980 (-GetTooltipDC@@YGPAUHDC__@@PAUtagTOOLTIPWND@@PAUtagMONITOR@@@Z.c)
 */

int __thiscall TooltipAnimate(_DWORD *this)
{
  int v2; // esi
  HDC TooltipDC; // eax
  int v5; // edx
  _DWORD *v6; // eax
  int v7; // ebx
  int v8; // ecx
  unsigned int v9; // ecx
  int v10; // ebx
  int v11; // edx
  HDC v12; // edi
  HDC v13; // [esp-18h] [ebp-40h]
  HDC v14; // [esp-18h] [ebp-40h]
  int v15; // [esp+10h] [ebp-18h]
  int v16; // [esp+18h] [ebp-10h]
  unsigned int v17; // [esp+1Ch] [ebp-Ch]
  HDC v18; // [esp+20h] [ebp-8h]
  int v19; // [esp+24h] [ebp-4h]

  v2 = 0;
  if ( !this[9] )
    return 1;
  TooltipDC = GetTooltipDC(this, 0);
  v5 = MEMORY[0xFFDF0004];
  v18 = TooltipDC;
  v6 = *(_DWORD **)(*this + 20);
  v7 = v6[16] - v6[14];
  v15 = v6[15] - v6[13];
  v19 = v7;
  if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
  {
    v16 = MEMORY[0xFFDF0324];
    v17 = MEMORY[0xFFDF0320];
    if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
    {
      do
      {
        _mm_pause();
        v17 = MEMORY[0xFFDF0320];
        v16 = MEMORY[0xFFDF0324];
      }
      while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
      v7 = v6[16] - v6[14];
      v2 = 0;
      v5 = MEMORY[0xFFDF0004];
    }
    v8 = MEMORY[0xFFDF0004] * (v16 << 8) + (((unsigned int)v5 * (unsigned __int64)v17) >> 24);
  }
  else
  {
    v8 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
  }
  v9 = v8 - this[7];
  v10 = (int)(v7 * v9 + 67) / 135;
  if ( v9 > 0x87 || v10 == v19 )
  {
    v14 = (HDC)this[3];
    v12 = v18;
    NtGdiBitBltInternal(v18, 0, 0, v15, v19, v14, 0, 0, -2134114272, 0, 0);
    v2 = 1;
  }
  else if ( this[8] == v10 )
  {
    v12 = v18;
  }
  else
  {
    v11 = this[5] & 1;
    this[8] = v10;
    v13 = (HDC)this[3];
    v12 = v18;
    NtGdiBitBltInternal(
      v18,
      0,
      (struct XDCOBJ *)(v10 * (v11 - 1) + (v11 == 0 ? v19 : 0)),
      v15,
      v10,
      v13,
      0,
      v11 != 0 ? (struct ECLIPOBJ *)(v19 - v10) : 0,
      -2134114272,
      0,
      0);
  }
  _ReleaseDC(v12);
  return v2;
}
