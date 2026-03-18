/*
 * XREFs of ?GetCursorHeight@@YGHXZ @ 0x1A07A4
 * Callers:
 *     ?xxxTooltipGetSizeAndPosition@@YGHPAUtagTOOLTIPWND@@PAUtagSIZE@@PAUtagPOINT@@@Z @ 0x1A0DCF (-xxxTooltipGetSizeAndPosition@@YGHPAUtagTOOLTIPWND@@PAUtagSIZE@@PAUtagPOINT@@@Z.c)
 * Callees:
 *     _GreExtGetObjectW@12 @ 0x4B144 (_GreExtGetObjectW@12.c)
 *     ?_InternalGetIconInfo@@YG_NPAUtagCURSOR@@PAU_ICONINFO@@PAU_UNICODE_STRING@@2PAK_N@Z @ 0x74C30 (-_InternalGetIconInfo@@YG_NPAUtagCURSOR@@PAU_ICONINFO@@PAU_UNICODE_STRING@@2PAK_N@Z.c)
 *     _GreGetBitmapBits@16 @ 0xE2B7A (_GreGetBitmapBits@16.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __stdcall GetCursorHeight()
{
  int v0; // esi
  int v1; // ecx
  struct HLFONT__ *v2; // edi
  int ObjectW; // eax
  int v4; // ebx
  unsigned int v5; // ecx
  unsigned int v6; // esi
  int v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned int *v11; // [esp+0h] [ebp-148h]
  bool v12; // [esp+4h] [ebp-144h]
  _DWORD v13[6]; // [esp+10h] [ebp-138h] BYREF
  _DWORD v14[2]; // [esp+28h] [ebp-120h] BYREF
  int v15; // [esp+30h] [ebp-118h]
  struct HLFONT__ *v16; // [esp+34h] [ebp-114h]
  int v17; // [esp+38h] [ebp-110h]
  LONG v18; // [esp+3Ch] [ebp-10Ch] BYREF
  _WORD v19[130]; // [esp+40h] [ebp-108h] BYREF

  v18 = 0;
  v14[0] = 0;
  v0 = 16;
  v14[1] = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  memset(v13, 0, sizeof(v13));
  v1 = *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 276);
  if ( v1 && _InternalGetIconInfo(v14, v1, 0, 0, 0, 0, v11, v12) )
  {
    v2 = v16;
    ObjectW = GreExtGetObjectW(v16, 24, v13);
    v4 = v17;
    if ( ObjectW && GreGetBitmapBits((int)v2, 0x100u, v19, &v18) )
    {
      v5 = (unsigned int)(v13[1] * v13[2]) >> 4;
      if ( v4 )
      {
        v6 = 0;
      }
      else
      {
        v6 = v5 - 1;
        v5 = (int)v5 / 2;
      }
      if ( v5 >= 0x80 )
        v5 = 127;
      v7 = v5 - 1;
      if ( v7 >= 0 )
      {
        v8 = v6 < 0x80 ? v6 : 0;
        do
        {
          if ( v8 )
          {
            v9 = v8--;
            if ( v19[v9] )
              break;
          }
          if ( v19[v7] != 0xFFFF )
            break;
          --v7;
        }
        while ( v7 >= 0 );
      }
      v0 = (unsigned int)(16 * (v7 + 1)) / v13[1] - v15;
    }
    if ( v4 )
      GreDeleteObject(v4);
    if ( v2 )
      GreDeleteObject(v2);
  }
  return v0;
}
