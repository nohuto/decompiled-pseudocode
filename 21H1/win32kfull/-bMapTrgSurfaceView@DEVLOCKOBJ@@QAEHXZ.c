/*
 * XREFs of ?bMapTrgSurfaceView@DEVLOCKOBJ@@QAEHXZ @ 0x83990
 * Callers:
 *     _DEVLOCKOBJ_bPrepareTrgDcoWrap@8 @ 0x838D0 (_DEVLOCKOBJ_bPrepareTrgDcoWrap@8.c)
 * Callees:
 *     ?bHookRedir@@YGHAAVXDCOBJ@@@Z @ 0x83A14 (-bHookRedir@@YGHAAVXDCOBJ@@@Z.c)
 *     ?bHookBmpDrv@@YGHAAVXDCOBJ@@@Z @ 0x1FA8B1 (-bHookBmpDrv@@YGHAAVXDCOBJ@@@Z.c)
 */

BOOL __thiscall DEVLOCKOBJ::bMapTrgSurfaceView(DEVLOCKOBJ *this)
{
  int v2; // eax
  int v3; // esi
  unsigned int v4; // eax
  unsigned int v5; // ebx
  struct XDCOBJ *v7; // [esp+0h] [ebp-Ch]

  v2 = *((_DWORD *)this + 5);
  if ( !v2 )
    return 1;
  if ( !*((_BYTE *)this + 33) )
    return 1;
  if ( (*((_DWORD *)this + 3) & 0x1000) == 0 )
    return 1;
  v3 = *(_DWORD *)(v2 + 504);
  if ( !v3 )
    return 1;
  v4 = SURFACE::Map(v3, this, *((_DWORD *)this + 5));
  v5 = v4;
  if ( v4 <= 1 )
  {
    if ( (*(_DWORD *)(v3 + 72) & 0x800) != 0 && *(_DWORD *)(v3 + 156) && bHookRedir(v7) )
      *((_DWORD *)this + 3) |= 0x400u;
    if ( (*(_BYTE *)(v3 + 72) & 0x10) != 0 && bHookBmpDrv(v7) )
      *((_DWORD *)this + 3) |= 0x2000u;
    if ( v5 == 1 )
      *((_DWORD *)this + 3) |= 0x40u;
    return 1;
  }
  return v4 != 2;
}
