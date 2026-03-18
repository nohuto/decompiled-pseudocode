/*
 * XREFs of ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0081D80
 * Callers:
 *     GreSelectPalette @ 0x1C0017520 (GreSelectPalette.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C006923C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     bDeleteDCInternalEx @ 0x1C006D2D0 (bDeleteDCInternalEx.c)
 *     GreIntersectClipRect @ 0x1C00791E0 (GreIntersectClipRect.c)
 *     ReleaseCacheDC @ 0x1C0084AB0 (ReleaseCacheDC.c)
 *     GreCreateCompatibleDC @ 0x1C008AFD0 (GreCreateCompatibleDC.c)
 *     GreGetClipBox @ 0x1C008C160 (GreGetClipBox.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C00B4640 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     GreGetDCPoint @ 0x1C00B4970 (GreGetDCPoint.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00C30E0 (-vCleanupDCs@@YAXK@Z.c)
 *     GreSelectBrushInternal @ 0x1C00CE700 (GreSelectBrushInternal.c)
 *     GreSelectPenInternal @ 0x1C00CE780 (GreSelectPenInternal.c)
 *     hbmSelectBitmapInternal @ 0x1C00CF550 (hbmSelectBitmapInternal.c)
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C01524EC (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C0152990 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     NtGdiGetGammaRampCapability @ 0x1C0152B60 (NtGdiGetGammaRampCapability.c)
 * Callees:
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x1C007FD70 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0083290 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C0084130 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00841C0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C01467B0 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

void __fastcall XDCOBJ::vLock(XDCOBJ *this, HDC a2)
{
  int v2; // r14d
  __int16 v3; // edi^2
  int v5; // esi
  struct OBJECT *EntryObject; // rbp
  __int64 v7; // rcx
  _DWORD *v8; // r15
  struct _KTHREAD *CurrentThread; // r14
  GdiHandleManager *v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // r8
  unsigned int v13; // edx
  unsigned int v14; // r9d
  __int64 v15; // rcx
  __int16 v16; // ax
  GdiHandleManager *v17; // rdi
  unsigned int v18; // eax
  __int64 v19; // r8
  unsigned __int64 v20; // rdx
  unsigned int v21; // r10d
  __int64 v22; // rcx
  __int64 v23; // r9
  _DWORD *v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // r10
  unsigned int v27; // edx
  unsigned int v28; // r8d
  __int64 v29; // rcx
  __int64 v30; // r10
  DC *v31; // rdi
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
  __int64 v47; // rcx
  int v48; // edi
  __int64 v49; // rcx
  __int64 v50; // [rsp+30h] [rbp-38h] BYREF
  int v51; // [rsp+38h] [rbp-30h]

  v2 = *((_DWORD *)this + 3);
  v3 = WORD1(a2);
  v50 = 0LL;
  v5 = 1;
  v51 = 0;
  EntryObject = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v50, (unsigned __int16)a2 | ((unsigned int)a2 >> 8) & 0xFF0000, 1, v2, 0);
  if ( v51 )
  {
    v8 = (_DWORD *)v50;
    if ( *(_BYTE *)(v50 + 14) == 1 && *(_WORD *)(v50 + 12) == v3 && (!v2 || (*(_BYTE *)(v50 + 15) & 0x20) != 0) )
    {
      CurrentThread = KeGetCurrentThread();
      v8 = (_DWORD *)v50;
      v10 = gpHandleManager;
      v11 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v50 & 0xFFFFFF);
      v12 = *((_QWORD *)v10 + 2);
      v13 = v11;
      v14 = *(_DWORD *)(v12 + 2056);
      if ( v11 < v14 + ((*(unsigned __int16 *)(v12 + 2) + 0xFFFF) << 16) )
      {
        v15 = ((v11 - v14) >> 16) + 1;
        if ( v11 < v14 )
          v15 = 0LL;
        if ( (_DWORD)v15 )
          v13 = ((1 - (_DWORD)v15) << 16) - v14 + v11;
        EntryObject = GdiHandleEntryTable::GetEntryObject(*(GdiHandleEntryTable **)(v12 + 8 * v15 + 8), v13);
      }
      v16 = *((_WORD *)EntryObject + 6);
      if ( !v16 || *((struct _KTHREAD **)EntryObject + 2) == CurrentThread )
      {
        *((_QWORD *)EntryObject + 2) = CurrentThread;
        *((_WORD *)EntryObject + 6) = v16 + 1;
      }
      else
      {
        EntryObject = 0LL;
      }
    }
    v17 = gpHandleManager;
    v18 = GdiHandleManager::DecodeIndex(gpHandleManager, *v8 & 0xFFFFFF);
    v19 = *((_QWORD *)v17 + 2);
    v20 = v18;
    v21 = *(_DWORD *)(v19 + 2056);
    if ( v18 >= v21 + ((*(unsigned __int16 *)(v19 + 2) + 0xFFFF) << 16) )
      goto LABEL_61;
    v22 = ((v18 - v21) >> 16) + 1;
    if ( v18 < v21 )
      v22 = 0LL;
    v23 = *(_QWORD *)(v19 + 8 * v22 + 8);
    if ( (_DWORD)v22 )
      v20 = ((1 - (_DWORD)v22) << 16) - v21 + v18;
    if ( (unsigned int)v20 >= *(_DWORD *)(v23 + 20) )
LABEL_61:
      v24 = 0LL;
    else
      v24 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v23 + 24) + 8 * (v20 >> 8)) + 16LL * (unsigned __int8)v20 + 8);
    v25 = GdiHandleManager::DecodeIndex(v17, (unsigned __int16)*v24 | (*v24 >> 8) & 0xFF0000);
    v26 = *((_QWORD *)v17 + 2);
    v27 = v25;
    v28 = *(_DWORD *)(v26 + 2056);
    if ( v25 < v28 + ((*(unsigned __int16 *)(v26 + 2) + 0xFFFF) << 16) )
    {
      v29 = ((v25 - v28) >> 16) + 1;
      if ( v25 < v28 )
        v29 = 0LL;
      v30 = *(_QWORD *)(v26 + 8 * v29 + 8);
      if ( (_DWORD)v29 )
        v27 = ((1 - (_DWORD)v29) << 16) - v28 + v25;
      *(_DWORD *)(*(_QWORD *)v30 + 24LL * v27 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v30 + 24) + 8 * ((unsigned __int64)v27 >> 8)) + 16LL * (unsigned __int8)v27,
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
      && (v48 = *((_DWORD *)EntryObject + 524), v48 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)) )
    {
      v31 = *(DC **)this;
      if ( (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) == 0 )
      {
        if ( *((_DWORD *)this + 3) )
          goto LABEL_50;
        v32 = gpHandleManager;
        v33 = GdiHandleManager::DecodeIndex(
                gpHandleManager,
                (unsigned __int16)*(_DWORD *)v31 | (*(_DWORD *)v31 >> 8) & 0xFF0000);
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
          goto LABEL_66;
        v43 = ((v40 - v41) >> 16) + 1;
        if ( v40 < v41 )
          v43 = 0LL;
        v44 = *(_QWORD *)(v34 + 8 * v43 + 8);
        if ( (_DWORD)v43 )
          v42 = ((1 - (_DWORD)v43) << 16) - v41 + v40;
        if ( (unsigned int)v42 >= *(_DWORD *)(v44 + 20) )
LABEL_66:
          v45 = 0LL;
        else
          v45 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v44 + 24) + 8 * (v42 >> 8)) + 16LL * (unsigned __int8)v42 + 8);
        if ( v45 == v31
          && v39
          && (v46 = *(struct _DC_ATTR **)(v39 + 16)) != 0LL
          && !(unsigned int)DC::SaveAttributes(v31, v46) )
        {
          v5 = 0;
        }
        else
        {
LABEL_50:
          *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
          *((_DWORD *)this + 2) = 1;
        }
      }
      v47 = *(_QWORD *)this;
      if ( v5 )
      {
        if ( (*(_DWORD *)(v47 + 520) & 4) != 0 )
          DC::vMarkTransformDirty((DC *)v47);
      }
      else
      {
        _InterlockedDecrement((volatile signed __int32 *)(v47 + 12));
        *(_QWORD *)this = 0LL;
      }
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
      *(_QWORD *)this = 0LL;
    }
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled(v7) || (unsigned __int8)PsIsWin32KFilterEnabled(v49) )
  {
    PsGetWin32KFilterSet(v49);
  }
}
