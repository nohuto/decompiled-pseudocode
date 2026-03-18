/*
 * XREFs of ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C00B028C
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00AE554 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00AF6FC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C00B025C (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall MULTIDEVLOCKOBJ::vUnlock(MULTIDEVLOCKOBJ *this, __int64 a2, int a3)
{
  __int64 v4; // rsi
  struct _ERESOURCE *v5; // rcx
  __int64 v6; // rcx
  int v7; // r8d
  __int64 v8; // rcx
  __int64 v9; // rsi
  struct _ERESOURCE *v10; // rcx
  __int64 v11; // rcx

  if ( *((_QWORD *)this + 1) && (*(_DWORD *)this & 4) != 0 )
  {
    v4 = 0LL;
    if ( (*((_DWORD *)this + 1) & 0xFFFFFFFE) != 0 )
    {
      do
      {
        EtwTraceGreLockReleaseSemaphore((__int64)L"*(phsemArrayD+i)", *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v4), a3);
        v5 = *(struct _ERESOURCE **)(*((_QWORD *)this + 1) + 8 * v4);
        if ( v5 )
        {
          ExReleaseResourceAndLeaveCriticalRegion(v5);
          PsLeavePriorityRegion(v6);
        }
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < *((_DWORD *)this + 1) >> 1 );
    }
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (int)ghsemSprite, a3);
    if ( ghsemSprite )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
      PsLeavePriorityRegion(v8);
    }
    v9 = 0LL;
    if ( (*((_DWORD *)this + 1) & 0xFFFFFFFE) != 0 )
    {
      do
      {
        EtwTraceGreLockReleaseSemaphore((__int64)L"*(phsemArrayP+i)", *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v9), v7);
        v10 = *(struct _ERESOURCE **)(*((_QWORD *)this + 2) + 8 * v9);
        if ( v10 )
        {
          ExReleaseResourceAndLeaveCriticalRegion(v10);
          PsLeavePriorityRegion(v11);
        }
        v9 = (unsigned int)(v9 + 1);
      }
      while ( (unsigned int)v9 < *((_DWORD *)this + 1) >> 1 );
    }
    *(_DWORD *)this &= ~4u;
  }
}
