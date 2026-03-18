/*
 * XREFs of ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0042800
 * Callers:
 *     bDeleteDCInternalEx @ 0x1C003A1C0 (bDeleteDCInternalEx.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00409E8 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ReleaseCacheDC @ 0x1C00418A0 (ReleaseCacheDC.c)
 *     GreGetClipBox @ 0x1C004C930 (GreGetClipBox.c)
 *     GreCreateCompatibleDC @ 0x1C004DB90 (GreCreateCompatibleDC.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C0060600 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     GreGetDCPoint @ 0x1C0060930 (GreGetDCPoint.c)
 *     hbmSelectBitmap @ 0x1C009AF40 (hbmSelectBitmap.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00C2B54 (-vCleanupDCs@@YAXK@Z.c)
 *     GreSelectBrushInternal @ 0x1C00CE850 (GreSelectBrushInternal.c)
 *     GreSelectPenInternal @ 0x1C00CE8D0 (GreSelectPenInternal.c)
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C0149CCC (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C014A160 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     NtGdiGetGammaRampCapability @ 0x1C014A330 (NtGdiGetGammaRampCapability.c)
 * Callees:
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x1C0040B20 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0044950 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C0045770 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0045800 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C013E110 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

void __fastcall XDCOBJ::vLock(XDCOBJ *this, HDC a2)
{
  int v2; // r14d
  __int16 v3; // edi^2
  int v5; // esi
  struct OBJECT *EntryObject; // rbp
  _DWORD *v7; // r15
  struct _KTHREAD *CurrentThread; // r14
  GdiHandleManager *v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // r8
  unsigned int v12; // edx
  unsigned int v13; // r9d
  __int64 v14; // rcx
  __int16 v15; // ax
  GdiHandleManager *v16; // rdi
  unsigned int v17; // eax
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  unsigned int v20; // r10d
  __int64 v21; // rcx
  __int64 v22; // r9
  _DWORD *v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // r10
  unsigned int v26; // edx
  unsigned int v27; // r8d
  __int64 v28; // rcx
  __int64 v29; // r10
  DC *v30; // rdi
  __int64 v31; // rcx
  GdiHandleManager *v32; // r15
  unsigned int v33; // eax
  __int64 v34; // r14
  unsigned int v35; // r9d
  unsigned int v36; // edx
  __int64 v37; // rcx
  __int64 v38; // r10
  __int64 v39; // rbp
  unsigned int v40; // eax
  unsigned int v41; // r9d
  unsigned __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  DC *v45; // rdx
  struct _DC_ATTR *v46; // rdx
  int v47; // edi
  __int64 v48; // [rsp+30h] [rbp-38h] BYREF
  int v49; // [rsp+38h] [rbp-30h]

  v2 = *((_DWORD *)this + 3);
  v3 = WORD1(a2);
  v48 = 0LL;
  v5 = 1;
  v49 = 0;
  EntryObject = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v48, (unsigned __int16)a2 | ((unsigned int)a2 >> 8) & 0xFF0000, 1, v2, 0);
  if ( v49 )
  {
    v7 = (_DWORD *)v48;
    if ( *(_BYTE *)(v48 + 14) == 1 && *(_WORD *)(v48 + 12) == v3 && (!v2 || (*(_BYTE *)(v48 + 15) & 0x20) != 0) )
    {
      CurrentThread = KeGetCurrentThread();
      v7 = (_DWORD *)v48;
      v9 = gpHandleManager;
      v10 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v48 & 0xFFFFFF);
      v11 = *((_QWORD *)v9 + 2);
      v12 = v10;
      v13 = *(_DWORD *)(v11 + 2056);
      if ( v10 < v13 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16) )
      {
        v14 = ((v10 - v13) >> 16) + 1;
        if ( v10 < v13 )
          v14 = 0LL;
        if ( (_DWORD)v14 )
          v12 = ((1 - (_DWORD)v14) << 16) - v13 + v10;
        EntryObject = GdiHandleEntryTable::GetEntryObject(*(GdiHandleEntryTable **)(v11 + 8 * v14 + 8), v12);
      }
      v15 = *((_WORD *)EntryObject + 6);
      if ( !v15 || *((struct _KTHREAD **)EntryObject + 2) == CurrentThread )
      {
        *((_QWORD *)EntryObject + 2) = CurrentThread;
        *((_WORD *)EntryObject + 6) = v15 + 1;
      }
      else
      {
        EntryObject = 0LL;
      }
    }
    v16 = gpHandleManager;
    v17 = GdiHandleManager::DecodeIndex(gpHandleManager, *v7 & 0xFFFFFF);
    v18 = *((_QWORD *)v16 + 2);
    v19 = v17;
    v20 = *(_DWORD *)(v18 + 2056);
    if ( v17 >= v20 + ((*(unsigned __int16 *)(v18 + 2) + 0xFFFF) << 16) )
      goto LABEL_62;
    v21 = ((v17 - v20) >> 16) + 1;
    if ( v17 < v20 )
      v21 = 0LL;
    v22 = *(_QWORD *)(v18 + 8 * v21 + 8);
    if ( (_DWORD)v21 )
      v19 = ((1 - (_DWORD)v21) << 16) - v20 + v17;
    if ( (unsigned int)v19 >= *(_DWORD *)(v22 + 20) )
LABEL_62:
      v23 = 0LL;
    else
      v23 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v22 + 24) + 8 * (v19 >> 8)) + 16LL * (unsigned __int8)v19 + 8);
    v24 = GdiHandleManager::DecodeIndex(v16, (unsigned __int16)*v23 | (*v23 >> 8) & 0xFF0000);
    v25 = *((_QWORD *)v16 + 2);
    v26 = v24;
    v27 = *(_DWORD *)(v25 + 2056);
    if ( v24 < v27 + ((*(unsigned __int16 *)(v25 + 2) + 0xFFFF) << 16) )
    {
      v28 = ((v24 - v27) >> 16) + 1;
      if ( v24 < v27 )
        v28 = 0LL;
      v29 = *(_QWORD *)(v25 + 8 * v28 + 8);
      if ( (_DWORD)v28 )
        v26 = ((1 - (_DWORD)v28) << 16) - v27 + v24;
      *(_DWORD *)(*(_QWORD *)v29 + 24LL * v26 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v29 + 24) + 8 * ((unsigned __int64)v26 >> 8)) + 16LL * (unsigned __int8)v26,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
  *(_QWORD *)this = EntryObject;
  if ( EntryObject )
  {
    if ( !*((_DWORD *)this + 3)
      || (*(_DWORD *)(*((_QWORD *)EntryObject + 6) + 40LL) & 0x8000) != 0
      && (v47 = *((_DWORD *)EntryObject + 524), v47 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)) )
    {
      v30 = *(DC **)this;
      if ( (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) == 0 )
      {
        if ( *((_DWORD *)this + 3) )
          goto LABEL_55;
        v32 = gpHandleManager;
        v33 = GdiHandleManager::DecodeIndex(
                gpHandleManager,
                (unsigned __int16)*(_DWORD *)v30 | (*(_DWORD *)v30 >> 8) & 0xFF0000);
        v34 = *((_QWORD *)v32 + 2);
        v35 = v33;
        v36 = *(_DWORD *)(v34 + 2056);
        if ( v33 >= v36 + ((*(unsigned __int16 *)(v34 + 2) + 0xFFFF) << 16) )
        {
          v39 = 0LL;
        }
        else
        {
          v37 = ((v33 - v36) >> 16) + 1;
          if ( v33 < v36 )
            v37 = 0LL;
          v38 = *(_QWORD *)(v34 + 8 * v37 + 8);
          if ( (_DWORD)v37 )
            v33 += ((1 - (_DWORD)v37) << 16) - v36;
          v39 = 0LL;
          if ( v33 < *(_DWORD *)(v38 + 20)
            && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v38 + 24) + 8 * ((unsigned __int64)v33 >> 8))
                         + 16LL * (unsigned __int8)v33
                         + 8) )
          {
            v39 = *(_QWORD *)v38 + 24LL * v33;
          }
        }
        v40 = GdiHandleManager::DecodeIndex(v32, v35);
        v41 = *(_DWORD *)(v34 + 2056);
        v42 = v40;
        if ( v40 >= v41 + ((*(unsigned __int16 *)(v34 + 2) + 0xFFFF) << 16) )
          goto LABEL_58;
        v43 = ((v40 - v41) >> 16) + 1;
        if ( v40 < v41 )
          v43 = 0LL;
        v44 = *(_QWORD *)(v34 + 8 * v43 + 8);
        if ( (_DWORD)v43 )
          v42 = ((1 - (_DWORD)v43) << 16) - v41 + v40;
        if ( (unsigned int)v42 >= *(_DWORD *)(v44 + 20) )
LABEL_58:
          v45 = 0LL;
        else
          v45 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v44 + 24) + 8 * (v42 >> 8)) + 16LL * (unsigned __int8)v42 + 8);
        if ( v45 == v30
          && v39
          && (v46 = *(struct _DC_ATTR **)(v39 + 16)) != 0LL
          && !(unsigned int)DC::SaveAttributes(v30, v46) )
        {
          v5 = 0;
        }
        else
        {
LABEL_55:
          *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
          *((_DWORD *)this + 2) = 1;
        }
      }
      v31 = *(_QWORD *)this;
      if ( v5 )
      {
        if ( (*(_DWORD *)(v31 + 520) & 4) != 0 )
          DC::vMarkTransformDirty((DC *)v31);
      }
      else
      {
        _InterlockedDecrement((volatile signed __int32 *)(v31 + 12));
        *(_QWORD *)this = 0LL;
      }
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
      *(_QWORD *)this = 0LL;
    }
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
}
