/*
 * XREFs of vDynamicConvertNewSurfaceDCs @ 0x1C00BDF20
 * Callers:
 *     bDynamicProcessAllDriverRealizations @ 0x1C00BF0A0 (bDynamicProcessAllDriverRealizations.c)
 *     pProcessDfbSurfacesInternal @ 0x1C00BF6C0 (pProcessDfbSurfacesInternal.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C00821C0 (GreReleaseHmgrSemaphore.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C008447C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     HmgIncrementShareReferenceCount @ 0x1C0087570 (HmgIncrementShareReferenceCount.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0089440 (HmgDecrementShareReferenceCountEx.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00A5C20 (GreAcquireHmgrSemaphore.c)
 *     HmgSafeNextObjt @ 0x1C00BF210 (HmgSafeNextObjt.c)
 *     HmgQueryAltLock @ 0x1C00C0120 (HmgQueryAltLock.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C32F0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
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
