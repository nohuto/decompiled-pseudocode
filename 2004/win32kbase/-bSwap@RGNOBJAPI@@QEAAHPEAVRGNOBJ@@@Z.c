/*
 * XREFs of ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C007B390
 * Callers:
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C00266F0 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C007B2B0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     GreCombineRgn @ 0x1C0084B00 (GreCombineRgn.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C009262C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 * Callees:
 *     HmgReplaceObject @ 0x1C007B3E0 (HmgReplaceObject.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C0084160 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 */

__int64 __fastcall RGNOBJAPI::bSwap(RGNOBJAPI *this, struct RGNOBJ *a2, __int64 a3)
{
  LOBYTE(a3) = 4;
  if ( !(unsigned int)HmgReplaceObject(*(_QWORD *)this, *(_QWORD *)a2, a3) )
    return 0LL;
  RGNOBJ::vSwap(this, a2);
  return 1LL;
}
