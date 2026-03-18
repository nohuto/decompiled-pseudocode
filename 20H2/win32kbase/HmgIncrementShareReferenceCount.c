/*
 * XREFs of HmgIncrementShareReferenceCount @ 0x1C00471A0
 * Callers:
 *     vDynamicConvertNewSurfaceDCs @ 0x1C0018F80 (vDynamicConvertNewSurfaceDCs.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C001A520 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     bMigrateSurfaceForConversion @ 0x1C001AC00 (bMigrateSurfaceForConversion.c)
 *     EngLockSurface @ 0x1C00473A0 (EngLockSurface.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0087248 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C00C3D90 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C013DF90 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C013FDB0 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C0143ED0 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C0145DCC (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0044950 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C0045770 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0045800 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0047384 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C014EBE8 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall HmgIncrementShareReferenceCount(int *a1)
{
  unsigned int v1; // eax
  unsigned int v2; // edx
  _DWORD *v4; // rdi
  char v5; // al
  GdiHandleManager *v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edx
  unsigned int v10; // r9d
  __int64 v11; // r8
  GdiHandleEntryTable *v12; // rcx
  struct OBJECT *EntryObject; // rax
  unsigned int v14; // eax
  __int64 v15; // r10
  unsigned int v16; // edx
  unsigned int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // r10
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v20; // rdx
  __int64 v21; // [rsp+30h] [rbp-28h] BYREF
  int v22; // [rsp+38h] [rbp-20h]

  v1 = *a1;
  v2 = *a1;
  v21 = 0LL;
  v22 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v21, (unsigned __int16)v1 | (v2 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v22 )
  {
    v4 = (_DWORD *)v21;
    v5 = *(_BYTE *)(v21 + 14);
    if ( v5 == 5 )
    {
      v20 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)a1 + 85);
      if ( v20 && qword_1C02453D8 )
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C02453D8, v20, 1);
    }
    else if ( v5 == 16 )
    {
      TrackObjectReferenceIncrement(2LL, *((_QWORD *)a1 + 17));
    }
    ++a1[2];
    v6 = gpHandleManager;
    v7 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *v4 & 0xFFFFFF);
    v8 = *((_QWORD *)v6 + 2);
    v9 = v7;
    v10 = *(_DWORD *)(v8 + 2056);
    if ( v7 >= v10 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
    {
      EntryObject = 0LL;
    }
    else
    {
      v11 = ((v7 - v10) >> 16) + 1;
      if ( v7 < v10 )
        v11 = 0LL;
      v12 = *(GdiHandleEntryTable **)(v8 + 8 * v11 + 8);
      if ( (_DWORD)v11 )
        v9 = ((1 - (_DWORD)v11) << 16) - v10 + v7;
      EntryObject = GdiHandleEntryTable::GetEntryObject(v12, v9);
    }
    v14 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)v6,
            (unsigned __int16)*(_DWORD *)EntryObject | (*(_DWORD *)EntryObject >> 8) & 0xFF0000u);
    v15 = *((_QWORD *)v6 + 2);
    v16 = v14;
    v17 = *(_DWORD *)(v15 + 2056);
    if ( v14 < v17 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
    {
      v18 = ((v14 - v17) >> 16) + 1;
      if ( v14 < v17 )
        v18 = 0LL;
      v19 = *(_QWORD *)(v15 + 8 * v18 + 8);
      if ( (_DWORD)v18 )
        v16 = ((1 - (_DWORD)v18) << 16) - v17 + v14;
      *(_DWORD *)(*(_QWORD *)v19 + 24LL * v16 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * ((unsigned __int64)v16 >> 8)) + 16LL * (unsigned __int8)v16,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
}
