/*
 * XREFs of ?GetCursorHeight@@YAHXZ @ 0x1C0242144
 * Callers:
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C024288C (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 * Callees:
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C00951E8 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     GreExtGetObjectW @ 0x1C0099FD8 (GreExtGetObjectW.c)
 *     GreGetBitmapBits @ 0x1C00F1B94 (GreGetBitmapBits.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 GetCursorHeight(void)
{
  unsigned int v0; // ebx
  __int64 v1; // rax
  struct tagCURSOR *v2; // rcx
  unsigned __int64 v3; // rcx
  unsigned int v4; // r9d
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // rdx
  unsigned int v10; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v11; // [rsp+38h] [rbp-C8h] BYREF
  HBRUSH v12[2]; // [rsp+48h] [rbp-B8h]
  _OWORD v13[2]; // [rsp+58h] [rbp-A8h] BYREF
  _WORD v14[128]; // [rsp+80h] [rbp-80h] BYREF

  memset(v13, 0, sizeof(v13));
  v0 = 16;
  v10 = 0;
  v11 = 0LL;
  v1 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)v12 = 0LL;
  v2 = *(struct tagCURSOR **)(v1 + 376);
  if ( v2 && _InternalGetIconInfo(v2, (struct _ICONINFO *)&v11, 0LL, 0LL, 0LL, 0) )
  {
    if ( (unsigned int)GreExtGetObjectW(v12[0], 32LL, (char *)v13)
      && (unsigned int)GreGetBitmapBits((__int64)v12[0], 0x100u, v14, &v10) )
    {
      v3 = (unsigned __int64)(DWORD1(v13[0]) * DWORD2(v13[0])) >> 4;
      if ( v12[1] )
      {
        v4 = 0;
      }
      else
      {
        v4 = v3 - 1;
        LODWORD(v3) = (int)v3 / 2;
      }
      if ( (unsigned int)v3 >= 0x80 )
        LODWORD(v3) = 127;
      v5 = v3 - 1;
      v6 = v5;
      if ( v5 >= 0 )
      {
        v7 = v4 < 0x80 ? (int)v4 : 0;
        do
        {
          if ( v7 )
          {
            if ( v14[v7--] )
              break;
          }
          if ( v14[v6] != 0xFFFF )
            break;
          --v5;
          --v6;
        }
        while ( v6 >= 0 );
      }
      v0 = 16LL * (v5 + 1) / (unsigned __int64)SDWORD1(v13[0]) - DWORD2(v11);
    }
    if ( v12[1] )
      GreDeleteObject(v12[1]);
    if ( v12[0] )
      GreDeleteObject(v12[0]);
  }
  return v0;
}
