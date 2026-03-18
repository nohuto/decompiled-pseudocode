/*
 * XREFs of ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0037A40
 * Callers:
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0037960 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     GreCombineRgn @ 0x1C003F0E0 (GreCombineRgn.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004C72C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0090190 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 * Callees:
 *     HmgReplaceObject @ 0x1C0037A90 (HmgReplaceObject.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C003E1F0 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 */

__int64 __fastcall RGNOBJAPI::bSwap(RGNOBJAPI *this, struct RGNOBJ *a2, __int64 a3)
{
  LOBYTE(a3) = 4;
  if ( !(unsigned int)HmgReplaceObject(*(_QWORD *)this, *(_QWORD *)a2, a3) )
    return 0LL;
  RGNOBJ::vSwap(this, a2);
  return 1LL;
}
