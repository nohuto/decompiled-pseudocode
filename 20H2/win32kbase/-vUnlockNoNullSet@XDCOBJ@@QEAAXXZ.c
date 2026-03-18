/*
 * XREFs of ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0041720
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1C001AA60 (pProcessDfbSurfacesInternal.c)
 *     GreGetNearestColor @ 0x1C001BF60 (GreGetNearestColor.c)
 *     GreGetDeviceCaps @ 0x1C001EC40 (GreGetDeviceCaps.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0041314 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C004C120 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     GreGetClipBox @ 0x1C004C930 (GreGetClipBox.c)
 *     GreCreateCompatibleDC @ 0x1C004DB90 (GreCreateCompatibleDC.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C0090B00 (--1DCMEMOBJ@@QEAA@XZ.c)
 *     GreCleanDC @ 0x1C009B4F0 (GreCleanDC.c)
 *     GreSetLayout @ 0x1C00A0420 (GreSetLayout.c)
 *     NtGdiCreateMetafileDC @ 0x1C00A32F0 (NtGdiCreateMetafileDC.c)
 *     GreIntersectClipRect @ 0x1C00C29C0 (GreIntersectClipRect.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C013F1F4 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C014014C (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C0143990 (NtGdiGetDeviceCapsAll.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C0145A2C (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C0149CCC (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 *     NtGdiGetGammaRampCapability @ 0x1C014A330 (NtGdiGetGammaRampCapability.c)
 *     GreSelectPalette @ 0x1C014ACB0 (GreSelectPalette.c)
 *     GreSetMagicColors @ 0x1C014AD44 (GreSetMagicColors.c)
 *     GreIntersectVisRect @ 0x1C014D3A0 (GreIntersectVisRect.c)
 * Callees:
 *     bDeleteDCInternalEx @ 0x1C003A1C0 (bDeleteDCInternalEx.c)
 *     ?RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z @ 0x1C00410F0 (-RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z.c)
 *     ?ReleaseEntryLock@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1C0044740 (-ReleaseEntryLock@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0044950 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x1C0044FB0 (-GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0045800 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

void __fastcall XDCOBJ::vUnlockNoNullSet(XDCOBJ *this)
{
  DC *v1; // rsi
  struct OBJECT *v3; // rdi
  DC *v4; // r14
  DC *v5; // rax
  struct _DC_ATTR *UserAttr; // rdx
  HDC v7; // rbp
  int v8; // r9d
  unsigned int v9; // edx
  int v10; // esi
  GdiHandleManager *v11; // rbx
  unsigned int v12; // eax
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  unsigned int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // [rsp+30h] [rbp-38h] BYREF
  int v19; // [rsp+38h] [rbp-30h]

  v1 = *(DC **)this;
  if ( *(_QWORD *)this )
  {
    v3 = 0LL;
    v4 = *(DC **)this;
    if ( *((_DWORD *)this + 2) && (*((_DWORD *)v1 + 11) & 2) != 0 )
    {
      v5 = *(DC **)this;
      if ( !*((_DWORD *)this + 3) )
      {
        UserAttr = XDCOBJ::GetUserAttr(this);
        v5 = v1;
        if ( UserAttr )
        {
          DC::RestoreAttributes(v1, UserAttr);
          v5 = *(DC **)this;
        }
      }
      *((_DWORD *)v5 + 11) &= ~2u;
      v4 = *(DC **)this;
      *((_DWORD *)this + 2) = 0;
    }
    v7 = *(HDC *)v4;
    v8 = *((_DWORD *)this + 3);
    v9 = (unsigned __int16)*(_QWORD *)v4 | ((unsigned int)*(_QWORD *)v4 >> 8) & 0xFF0000;
    v18 = 0LL;
    v19 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v18, v9, 0, v8, 1);
    if ( v19 )
    {
      if ( (*(_BYTE *)(v18 + 15) & 8) == 0 || *((_DWORD *)v4 + 2) || (v10 = 1, *((_WORD *)v4 + 6) != 1) )
        v10 = 0;
      _InterlockedDecrement((volatile signed __int32 *)v4 + 3);
      v11 = gpHandleManager;
      v12 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v18 & 0xFFFFFF);
      v13 = *((_QWORD *)v11 + 2);
      v14 = v12;
      v15 = *(_DWORD *)(v13 + 2056);
      v16 = v15 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16);
      if ( v12 < (unsigned int)v16 )
      {
        v16 = ((v12 - v15) >> 16) + 1;
        if ( v12 < v15 )
          v16 = 0LL;
        v17 = *(_QWORD *)(v13 + 8 * v16 + 8);
        if ( (_DWORD)v16 )
          v14 = ((1 - (_DWORD)v16) << 16) - v15 + (unsigned int)v14;
        if ( (unsigned int)v14 < *(_DWORD *)(v17 + 20) )
        {
          v16 = 2LL * (unsigned __int8)v14;
          v3 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8 * (v14 >> 8))
                                 + 16LL * (unsigned __int8)v14
                                 + 8);
        }
      }
      GdiHandleManager::ReleaseEntryLock((GdiHandleManager *)v16, v3);
      KeLeaveCriticalRegion();
      if ( v10 )
        bDeleteDCInternalEx(v7, 0LL);
    }
  }
}
