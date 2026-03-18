/*
 * XREFs of ?GetLockedSURFOBJ@UMPDSURFOBJ@@AAEPAU_SURFOBJ@@PAU2@@Z @ 0x1F3C16
 * Callers:
 *     ??0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z @ 0x216194 (--0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

struct _SURFOBJ *__thiscall UMPDSURFOBJ::GetLockedSURFOBJ(UMPDSURFOBJ *this, struct _SURFOBJ *a2)
{
  int v2; // ecx
  HSURF hsurf; // [esp+10h] [ebp-1Ch]
  struct _SURFOBJ *v5; // [esp+34h] [ebp+8h]

  v2 = 0;
  hsurf = 0;
  if ( a2 )
  {
    v5 = (struct _SURFOBJ *)((char *)a2 - 8);
    if ( v5->dhsurf == (DHSURF)1431130959 )
      hsurf = v5->hsurf;
  }
  if ( hsurf )
    return EngLockSurface(hsurf);
  return (struct _SURFOBJ *)v2;
}
