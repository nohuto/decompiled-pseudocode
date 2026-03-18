/*
 * XREFs of ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C00B03A4
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00AE554 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00AF6FC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000F390 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 */

void __fastcall MULTIDEVLOCKOBJ::vLock(MULTIDEVLOCKOBJ *this)
{
  unsigned int v1; // esi
  unsigned int v3; // ebp

  v1 = 0;
  if ( *((_QWORD *)this + 1) && (*(_DWORD *)this & 4) == 0 )
  {
    v3 = 0;
    if ( (*((_DWORD *)this + 1) & 0xFFFFFFFE) != 0 )
    {
      do
      {
        EngAcquireSemaphore(*(HSEMAPHORE *)(*((_QWORD *)this + 2) + 8LL * v3));
        EtwTraceGreLockAcquireSemaphoreExclusive(
          (__int64)L"*(phsemArrayP+i)",
          *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * v3++),
          4);
      }
      while ( v3 < *((_DWORD *)this + 1) >> 1 );
    }
    EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemSprite", (int)ghsemSprite, 5);
    if ( (*((_DWORD *)this + 1) & 0xFFFFFFFE) != 0 )
    {
      do
      {
        EngAcquireSemaphore(*(HSEMAPHORE *)(*((_QWORD *)this + 1) + 8LL * v1));
        EtwTraceGreLockAcquireSemaphoreExclusive(
          (__int64)L"*(phsemArrayD+i)",
          *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * v1++),
          11);
      }
      while ( v1 < *((_DWORD *)this + 1) >> 1 );
    }
    *(_DWORD *)this |= 4u;
  }
}
