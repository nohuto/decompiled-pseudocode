/*
 * XREFs of ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0075DA0
 * Callers:
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0016C30 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C0032EF0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C00751E0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0075C60 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0078690 (-bCompute@DC@@QEAAHXZ.c)
 *     GreCombineRgn @ 0x1C007DB50 (GreCombineRgn.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C008CE0C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00C43F0 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     GreIntersectVisRect @ 0x1C0155C90 (GreIntersectVisRect.c)
 * Callees:
 *     memmove @ 0x1C00D2F00 (memmove.c)
 */

void __fastcall RGNOBJ::vCopy(RGNOBJ *this, struct RGNOBJ *a2)
{
  *(_DWORD *)(*(_QWORD *)this + 80LL) = *(_DWORD *)(*(_QWORD *)a2 + 80LL);
  *(_DWORD *)(*(_QWORD *)this + 84LL) = *(_DWORD *)(*(_QWORD *)a2 + 84LL);
  *(_OWORD *)(*(_QWORD *)this + 96LL) = *(_OWORD *)(*(_QWORD *)a2 + 96LL);
  memmove(
    *(void **)(*(_QWORD *)this + 88LL),
    *(const void **)(*(_QWORD *)a2 + 88LL),
    *(unsigned int *)(*(_QWORD *)a2 + 80LL));
  *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)(*(_QWORD *)this + 88LL)
                                      + *(_DWORD *)(*(_QWORD *)a2 + 40LL)
                                      - *(_DWORD *)(*(_QWORD *)a2 + 88LL);
}
