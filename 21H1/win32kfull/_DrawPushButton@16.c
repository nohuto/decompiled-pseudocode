/*
 * XREFs of _DrawPushButton@16 @ 0x904D2
 * Callers:
 *     _DrawFrameControl@16 @ 0x901FE (_DrawFrameControl@16.c)
 *     _DrawThumb2@24 @ 0xC1CFA (_DrawThumb2@24.c)
 * Callees:
 *     _FillRect@12 @ 0x7226C (_FillRect@12.c)
 *     _DrawEdge@16 @ 0x90568 (_DrawEdge@16.c)
 *     _GreSetTextColor@8 @ 0x90E92 (_GreSetTextColor@8.c)
 *     _GreSetBkColor@8 @ 0x90F50 (_GreSetBkColor@8.c)
 */

int __fastcall DrawPushButton(HDC a1, _DWORD *a2, __int16 a3, __int16 a4)
{
  HDC v5; // esi
  int result; // eax
  _DWORD *v7; // edi
  const RECT *v8; // [esp+0h] [ebp-28h]
  HBRUSH v9; // [esp+4h] [ebp-24h]
  int v10; // [esp+Ch] [ebp-1Ch] BYREF
  int v11; // [esp+10h] [ebp-18h]
  int v12; // [esp+14h] [ebp-14h]
  int v13; // [esp+18h] [ebp-10h]
  _DWORD *v14; // [esp+1Ch] [ebp-Ch]
  int v15; // [esp+20h] [ebp-8h]
  int v16; // [esp+24h] [ebp-4h]

  v15 = 0;
  v14 = a2;
  v10 = *a2;
  v11 = a2[1];
  v12 = a2[2];
  v13 = a2[3];
  DrawEdge(a1, &v10, (a3 & 0x600) != 0 ? 10 : 5, a4 & 0xD000 | 0x200F);
  v16 = 0;
  if ( (a3 & 0x400) != 0 )
  {
    if ( *(_WORD *)(_gpsi + 6240) < 8u || *(_DWORD *)(_gpsi + 4248) == 0xFFFFFF )
    {
      v5 = *(HDC *)(_gpsi + 4416);
      GreSetBkColor(a1);
      v15 = GreSetTextColor(a1);
      v16 = 1;
    }
    else
    {
      v5 = *(HDC *)(_gpsi + 4372);
    }
  }
  else
  {
    v5 = *(HDC *)(_gpsi + 4352);
  }
  result = FillRect(v5, v8, v9);
  if ( v16 )
  {
    GreSetBkColor(a1);
    result = GreSetTextColor(a1);
  }
  if ( (a4 & 0x2000) != 0 )
  {
    v7 = v14;
    *v14 = v10;
    *++v7 = v11;
    *++v7 = v12;
    v7[1] = v13;
  }
  return result;
}
