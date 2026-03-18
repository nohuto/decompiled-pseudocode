/*
 * XREFs of vDynamicConvertNewSurfaceDCs @ 0x1C0018F80
 * Callers:
 *     bDynamicProcessAllDriverRealizations @ 0x1C001A100 (bDynamicProcessAllDriverRealizations.c)
 *     pProcessDfbSurfacesInternal @ 0x1C001AA60 (pProcessDfbSurfacesInternal.c)
 * Callees:
 *     HmgSafeNextObjt @ 0x1C001A270 (HmgSafeNextObjt.c)
 *     HmgQueryAltLock @ 0x1C001B590 (HmgQueryAltLock.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003D970 (GreReleaseHmgrSemaphore.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C003E50C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0043DF0 (HmgDecrementShareReferenceCountEx.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00471A0 (HmgIncrementShareReferenceCount.c)
 *     GreAcquireHmgrSemaphore @ 0x1C005EA20 (GreAcquireHmgrSemaphore.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C2190 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

__int64 __fastcall vDynamicConvertNewSurfaceDCs(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  DC *Objt; // rax
  DC *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rsi

  v2 = 0LL;
  GreAcquireHmgrSemaphore();
  while ( 1 )
  {
    LOBYTE(v4) = 1;
    Objt = (DC *)HmgSafeNextObjt(v2, v4);
    v6 = Objt;
    if ( !Objt )
      break;
    v7 = *((_QWORD *)Objt + 62);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 560);
      if ( v8 )
      {
        DC::pSurface(Objt, *(struct SURFACE **)(v7 + 560));
        *((_DWORD *)v6 + 79) |= 0xFu;
        HmgIncrementShareReferenceCount(v8);
        if ( (unsigned int)HmgQueryAltLock(*(_QWORD *)v7) == 1 )
        {
          *(_QWORD *)(v7 + 560) = 0LL;
          SURFACE::bDeleteSurface(v7, 0LL, 0LL);
          if ( v7 == a2 )
            return GreReleaseHmgrSemaphore();
        }
        else
        {
          HmgDecrementShareReferenceCountEx(v7, 0LL);
        }
      }
    }
    v2 = *(_QWORD *)v6;
  }
  return GreReleaseHmgrSemaphore();
}
