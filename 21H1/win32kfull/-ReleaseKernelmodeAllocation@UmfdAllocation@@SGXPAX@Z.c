/*
 * XREFs of ?ReleaseKernelmodeAllocation@UmfdAllocation@@SGXPAX@Z @ 0xD3290
 * Callers:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SGPAXW4FontDriverType@@KPAXIPA_NP6G_N11I@Z@Z @ 0x8CDC4 (-ObtainKernelmodeAllocation@UmfdAllocation@@SGPAXW4FontDriverType@@KPAXIPA_NP6G_N11I@Z@Z.c)
 *     ?CaptureGlyphSet@QueryFontTreeRequest@@AAEXXZ @ 0x8D1AE (-CaptureGlyphSet@QueryFontTreeRequest@@AAEXXZ.c)
 *     _UmfdDrvFree@8 @ 0xCE1D0 (_UmfdDrvFree@8.c)
 *     _UmfdTrueTypeFreeGlyphset@12 @ 0xD3248 (_UmfdTrueTypeFreeGlyphset@12.c)
 *     ?CaptureUsermodeParameters@QueryFontRequest@@UAEXPAX@Z @ 0xE00D8 (-CaptureUsermodeParameters@QueryFontRequest@@UAEXPAX@Z.c)
 * Callees:
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QAE_NPBXPAPAX@Z @ 0xCFE32 (-Remove@CPointerHashTable@NSInstrumentation@@QAE_NPBXPAPAX@Z.c)
 */

void __stdcall UmfdAllocation::ReleaseKernelmodeAllocation(char *a1)
{
  PVOID v1; // esi
  char *v2; // edi
  _QWORD *v4; // eax

  v1 = UmfdAllocation::s_allocationLookupLock;
  v2 = a1 - 20;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v1, 0);
  if ( (*(_DWORD *)v2)-- == 1 )
  {
    if ( UmfdAllocation::s_allocationLookup )
    {
      v4 = (_QWORD *)*((_DWORD *)v2 + 3);
      if ( v4 )
      {
        a1 = 0;
        NSInstrumentation::CPointerHashTable::Remove(UmfdAllocation::s_allocationLookup, v4, (void **)&a1);
      }
    }
    ExReleasePushLockExclusiveEx(v1, 0);
    KeLeaveCriticalRegion();
    EngFreeMem(v2);
  }
  else
  {
    ExReleasePushLockExclusiveEx(v1, 0);
    KeLeaveCriticalRegion();
  }
}
