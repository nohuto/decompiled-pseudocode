/*
 * XREFs of ?ulIndexToRGB@XEPALOBJ@@QEAAKK@Z @ 0x1C0077CD0
 * Callers:
 *     ulIndexToRGB @ 0x1C0077C80 (ulIndexToRGB.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XEPALOBJ::ulIndexToRGB(XEPALOBJ *this, unsigned int a2)
{
  __int64 v2; // r8
  unsigned int v3; // eax
  int v4; // eax
  _DWORD *v6; // r9
  unsigned int v7; // r8d
  unsigned int v8; // r10d
  unsigned int v9; // r11d
  unsigned int v10; // r8d
  unsigned int v11; // r11d
  unsigned int v12; // eax
  unsigned int v13; // r8d
  unsigned int v14; // [rsp+18h] [rbp+10h]

  v2 = *(_QWORD *)this;
  v3 = *(_DWORD *)(*(_QWORD *)this + 28LL);
  if ( v3 )
  {
    if ( v3 <= a2 )
      return 0LL;
    else
      return *(_DWORD *)(*(_QWORD *)(v2 + 112) + 4LL * a2) & 0xFFFFFF;
  }
  else
  {
    v4 = *(_DWORD *)(v2 + 24);
    if ( (v4 & 2) != 0 )
    {
      v6 = *(_DWORD **)(v2 + 112);
      v7 = v6[9];
      v8 = (a2 & *v6) >> v6[6];
      if ( v7 < 8 )
        v8 = (v8 << (8 - v7) >> v7) | (v8 << (8 - v7));
      v9 = v6[10];
      v10 = (a2 & v6[1]) >> v6[7];
      if ( v9 < 8 )
        v10 = (v10 << (8 - v9) >> v9) | (v10 << (8 - v9));
      v11 = v6[11];
      v12 = (a2 & v6[2]) >> v6[8];
      v13 = v10 << 8;
      if ( v11 < 8 )
        v12 = (v12 << (8 - v11) >> v11) | (v12 << (8 - v11));
      return v8 | v13 | (v12 << 16);
    }
    else if ( (v4 & 8) != 0 )
    {
      HIWORD(v14) = (unsigned __int8)a2;
      LOBYTE(v14) = BYTE2(a2);
      BYTE1(v14) = BYTE1(a2);
      return v14;
    }
    else
    {
      return a2 & 0xFFFFFF;
    }
  }
}
