/*
 * XREFs of ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0079D00
 * Callers:
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C0041C40 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     GreExtCreateRegion @ 0x1C007C1C0 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C00C5824 (GreCreatePolyPolygonRgnInternal.c)
 *     ?vThreadCleanup@THREAD_GUARDED_EPATHOBJ@@CAXPEAVEPATHOBJ@@@Z @ 0x1C0141640 (-vThreadCleanup@THREAD_GUARDED_EPATHOBJ@@CAXPEAVEPATHOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0144370 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     ?vFreeBlocks@EPATHOBJ@@QEAAXXZ @ 0x1C0079D90 (-vFreeBlocks@EPATHOBJ@@QEAAXXZ.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0079E3C (--$FreeIsolatedType@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0089440 (HmgDecrementShareReferenceCountEx.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C008D640 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 */

void __fastcall EPATHOBJ::vUnlock(EPATHOBJ *this)
{
  __int64 v2; // rcx
  struct HOBJ__ **v3; // rcx
  struct HOBJ__ *v4; // rbx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 84) & 1) != 0 )
    {
      EPATHOBJ::vFreeBlocks(this);
    }
    else
    {
      *(_DWORD *)(v2 + 92) = *((_DWORD *)this + 1);
      *(_DWORD *)(*((_QWORD *)this + 1) + 88LL) = *(_DWORD *)this;
      v3 = (struct HOBJ__ **)*((_QWORD *)this + 1);
      v4 = *v3;
      HmgDecrementShareReferenceCountEx(v3, 0LL);
      if ( HmgRemoveObjectImpl(v4, 0, 0, 1u, 7, 0LL) )
      {
        EPATHOBJ::vFreeBlocks(this);
        FreeIsolatedType<NSInstrumentation::CTypeIsolation<81920,320>>(*((_QWORD *)this + 1));
      }
    }
    *((_QWORD *)this + 1) = 0LL;
  }
}
