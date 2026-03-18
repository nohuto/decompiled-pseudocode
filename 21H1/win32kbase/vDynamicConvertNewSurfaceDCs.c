/*
 * XREFs of vDynamicConvertNewSurfaceDCs @ 0x1C0099640
 * Callers:
 *     bDynamicProcessAllDriverRealizations @ 0x1C009A7C0 (bDynamicProcessAllDriverRealizations.c)
 *     pProcessDfbSurfacesInternal @ 0x1C009B2E0 (pProcessDfbSurfacesInternal.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0076C90 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C007B8A0 (GreReleaseHmgrSemaphore.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C007D4D8 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00804F0 (HmgIncrementShareReferenceCount.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0082370 (HmgDecrementShareReferenceCountEx.c)
 *     HmgSafeNextObjt @ 0x1C009A930 (HmgSafeNextObjt.c)
 *     HmgQueryAltLock @ 0x1C009BD40 (HmgQueryAltLock.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C2860 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

__int64 __fastcall vDynamicConvertNewSurfaceDCs(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdx
  DC *Objt; // rax
  int v7; // ecx
  int v8; // r8d
  DC *v9; // rdi
  __int64 v10; // rbx
  int *v11; // rsi

  v3 = 0LL;
  GreAcquireHmgrSemaphore(a1, a2, a3);
  while ( 1 )
  {
    LOBYTE(v5) = 1;
    Objt = (DC *)HmgSafeNextObjt(v3, v5);
    v9 = Objt;
    if ( !Objt )
      break;
    v10 = *((_QWORD *)Objt + 62);
    if ( v10 )
    {
      v11 = *(int **)(v10 + 560);
      if ( v11 )
      {
        DC::pSurface(Objt, *(struct SURFACE **)(v10 + 560));
        *((_DWORD *)v9 + 79) |= 0xFu;
        HmgIncrementShareReferenceCount(v11);
        if ( (unsigned int)HmgQueryAltLock(*(_QWORD *)v10) == 1 )
        {
          *(_QWORD *)(v10 + 560) = 0LL;
          SURFACE::bDeleteSurface(v10, 0LL, 0LL);
          if ( v10 == a2 )
            return GreReleaseHmgrSemaphore(v7, v5, v8);
        }
        else
        {
          HmgDecrementShareReferenceCountEx(v10, 0LL);
        }
      }
    }
    v3 = *(_QWORD *)v9;
  }
  return GreReleaseHmgrSemaphore(v7, v5, v8);
}
