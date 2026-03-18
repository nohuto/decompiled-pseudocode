/*
 * XREFs of ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QAEHXZ @ 0x5A5A0
 * Callers:
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QAEHPAVXDCOBJ@@H@Z @ 0x5A4E6 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QAEHPAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?bHookRedir@@YGHAAVXDCOBJ@@@Z @ 0x83A14 (-bHookRedir@@YGHAAVXDCOBJ@@@Z.c)
 *     ?bHookBmpDrv@@YGHAAVXDCOBJ@@@Z @ 0x1FA8B1 (-bHookBmpDrv@@YGHAAVXDCOBJ@@@Z.c)
 */

BOOL __thiscall DEVLOCKBLTOBJ::bMapTrgSurfaceView(DEVLOCKBLTOBJ *this)
{
  int v2; // ecx
  int v3; // edi
  unsigned int v4; // eax
  unsigned int v5; // ebx
  struct XDCOBJ *v7; // [esp+0h] [ebp-Ch]

  v2 = *((_DWORD *)this + 12);
  if ( !v2 )
    return 1;
  if ( !*((_BYTE *)this + 61) )
    return 1;
  if ( (*((_DWORD *)this + 10) & 0x1000) == 0 )
    return 1;
  v3 = *(_DWORD *)(v2 + 504);
  if ( !v3 )
    return 1;
  v4 = SURFACE::Map(v3, this, v2);
  v5 = v4;
  if ( v4 <= 1 )
  {
    if ( (*(_DWORD *)(v3 + 72) & 0x800) != 0 && *(_DWORD *)(v3 + 156) && bHookRedir(v7) )
      *((_DWORD *)this + 10) |= 0x400u;
    if ( (*(_BYTE *)(v3 + 72) & 0x10) != 0 && bHookBmpDrv(v7) )
      *((_DWORD *)this + 10) |= 0x2000u;
    if ( v5 == 1 )
      *((_DWORD *)this + 10) |= 0x40u;
    return 1;
  }
  return v4 != 2;
}
