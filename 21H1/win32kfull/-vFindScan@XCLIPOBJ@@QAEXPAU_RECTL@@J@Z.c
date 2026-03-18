/*
 * XREFs of ?vFindScan@XCLIPOBJ@@QAEXPAU_RECTL@@J@Z @ 0x9AB36
 * Callers:
 *     ?vStrWrite01@@YGXPAU_STRRUN@@PAU_XRUNLEN@@PAVSURFACE@@PAU_CLIPOBJ@@@Z @ 0x4D98E (-vStrWrite01@@YGXPAU_STRRUN@@PAU_XRUNLEN@@PAVSURFACE@@PAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite32@@YGXPAU_STRRUN@@PAU_XRUNLEN@@PAVSURFACE@@PAU_CLIPOBJ@@@Z @ 0xC5B30 (-vStrWrite32@@YGXPAU_STRRUN@@PAU_XRUNLEN@@PAVSURFACE@@PAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite04@@YGXPAU_STRRUN@@PAU_XRUNLEN@@PAVSURFACE@@PAU_CLIPOBJ@@@Z @ 0x22A92A (-vStrWrite04@@YGXPAU_STRRUN@@PAU_XRUNLEN@@PAVSURFACE@@PAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite08@@YGXPAU_STRRUN@@PAU_XRUNLEN@@PAVSURFACE@@PAU_CLIPOBJ@@@Z @ 0x22ADDE (-vStrWrite08@@YGXPAU_STRRUN@@PAU_XRUNLEN@@PAVSURFACE@@PAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite16@@YGXPAU_STRRUN@@PAU_XRUNLEN@@PAVSURFACE@@PAU_CLIPOBJ@@@Z @ 0x22B106 (-vStrWrite16@@YGXPAU_STRRUN@@PAU_XRUNLEN@@PAVSURFACE@@PAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite24@@YGXPAU_STRRUN@@PAU_XRUNLEN@@PAVSURFACE@@PAU_CLIPOBJ@@@Z @ 0x22B437 (-vStrWrite24@@YGXPAU_STRRUN@@PAU_XRUNLEN@@PAVSURFACE@@PAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite16@@YGXPAU_PLGRUN@@0PAVSURFACE@@PAU_CLIPOBJ@@@Z @ 0x245597 (-vPlgWrite16@@YGXPAU_PLGRUN@@0PAVSURFACE@@PAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite1@@YGXPAU_PLGRUN@@0PAVSURFACE@@PAU_CLIPOBJ@@@Z @ 0x24578D (-vPlgWrite1@@YGXPAU_PLGRUN@@0PAVSURFACE@@PAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite24@@YGXPAU_PLGRUN@@0PAVSURFACE@@PAU_CLIPOBJ@@@Z @ 0x245ADB (-vPlgWrite24@@YGXPAU_PLGRUN@@0PAVSURFACE@@PAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite32@@YGXPAU_PLGRUN@@0PAVSURFACE@@PAU_CLIPOBJ@@@Z @ 0x245D07 (-vPlgWrite32@@YGXPAU_PLGRUN@@0PAVSURFACE@@PAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite4@@YGXPAU_PLGRUN@@0PAVSURFACE@@PAU_CLIPOBJ@@@Z @ 0x245EFB (-vPlgWrite4@@YGXPAU_PLGRUN@@0PAVSURFACE@@PAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite8@@YGXPAU_PLGRUN@@0PAVSURFACE@@PAU_CLIPOBJ@@@Z @ 0x246293 (-vPlgWrite8@@YGXPAU_PLGRUN@@0PAVSURFACE@@PAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWriteAND@@YGXPAU_PLGRUN@@0PAVSURFACE@@PAU_CLIPOBJ@@@Z @ 0x24656C (-vPlgWriteAND@@YGXPAU_PLGRUN@@0PAVSURFACE@@PAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWriteOR@@YGXPAU_PLGRUN@@0PAVSURFACE@@PAU_CLIPOBJ@@@Z @ 0x2468B7 (-vPlgWriteOR@@YGXPAU_PLGRUN@@0PAVSURFACE@@PAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall XCLIPOBJ::vFindScan(XCLIPOBJ *this, struct _RECTL *a2, LONG a3)
{
  _DWORD *v4; // edx
  _DWORD *v5; // eax
  LONG v6; // esi
  LONG v7; // edx
  LONG v8; // eax
  LONG right; // eax
  LONG v10; // ecx
  LONG v11; // edx
  LONG v12; // eax

  v4 = (_DWORD *)*((_DWORD *)this + 17);
  if ( a3 >= v4[1] )
  {
    if ( a3 < v4[2] )
      return;
    do
    {
      v5 = &v4[*v4];
      v4 = v5 + 4;
      *((_DWORD *)this + 17) = v5 + 4;
      v6 = v5[6];
    }
    while ( a3 >= v6 );
    v7 = v5[5];
    if ( v7 <= *((_DWORD *)this + 2) )
      v7 = *((_DWORD *)this + 2);
    v8 = *((_DWORD *)this + 4);
    a2->top = v7;
    if ( v6 >= v8 )
      v6 = v8;
    right = a2->right;
    a2->bottom = v6;
    a2->left = right;
    if ( v7 >= v6 )
    {
      a2->bottom = 0x7FFFFFFF;
    }
    else if ( v6 != 0x7FFFFFFF )
    {
      return;
    }
    a2->top = 0x7FFFFFFF;
    return;
  }
  do
  {
    v4 = &v4[-*(v4 - 1) - 4];
    *((_DWORD *)this + 17) = v4;
    v10 = v4[1];
  }
  while ( a3 < v10 );
  if ( v10 <= *((_DWORD *)this + 2) )
    v10 = *((_DWORD *)this + 2);
  v11 = v4[2];
  v12 = *((_DWORD *)this + 4);
  a2->top = v10;
  if ( v11 >= v12 )
    v11 = v12;
  a2->left = a2->right;
  a2->bottom = v11;
  if ( v10 >= v11 )
  {
    a2->top = 0x80000000;
    v10 = 0x80000000;
  }
  if ( v10 == 0x80000000 )
    a2->bottom = 0x80000000;
}
