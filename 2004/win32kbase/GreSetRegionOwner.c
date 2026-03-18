/*
 * XREFs of GreSetRegionOwner @ 0x1C0081470
 * Callers:
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C001307C (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C009262C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     EngCreateRectRgn @ 0x1C014F050 (EngCreateRectRgn.c)
 * Callees:
 *     HmgSetOwner @ 0x1C0081B60 (HmgSetOwner.c)
 */

__int64 __fastcall GreSetRegionOwner(__int64 a1, unsigned int a2)
{
  __int64 v4; // r8

  PsGetCurrentProcessId();
  if ( a2 == -2147483646 )
    a2 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  LOBYTE(v4) = 4;
  return HmgSetOwner(a1, a2, v4);
}
