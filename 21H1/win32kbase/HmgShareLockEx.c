/*
 * XREFs of HmgShareLockEx @ 0x1C0080DE0
 * Callers:
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C0017780 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C00448E0 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     GreMarkDCUnreadable @ 0x1C0050C48 (GreMarkDCUnreadable.c)
 *     DestroyCacheDC @ 0x1C006C4F0 (DestroyCacheDC.c)
 *     GreValidateVisrgn @ 0x1C008CBA0 (GreValidateVisrgn.c)
 *     GreSelectVisRgn @ 0x1C008CC10 (GreSelectVisRgn.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0090828 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     bDynamicModeChange @ 0x1C0099854 (bDynamicModeChange.c)
 *     bMigrateSurfaceForConversion @ 0x1C009B480 (bMigrateSurfaceForConversion.c)
 *     bInitICM @ 0x1C029ABA8 (bInitICM.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C007FBF4 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0083290 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0083F70 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall HmgShareLockEx(unsigned int a1, char a2, int a3)
{
  __int16 v4; // ebx^2
  __int64 v5; // rsi
  _DWORD *v6; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // r9
  unsigned int v12; // ebx
  GdiHandleManager *v13; // rdi
  __int64 v14; // rdx
  unsigned int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // r9
  _DWORD *v18; // rdx
  unsigned int v19; // ebx
  __int64 v20; // rdx
  unsigned int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // r10
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v25; // rdx
  unsigned int v26; // ecx
  unsigned __int16 *v27; // [rsp+30h] [rbp-38h] BYREF
  int v28; // [rsp+38h] [rbp-30h]

  v27 = 0LL;
  v4 = HIWORD(a1);
  v28 = 0;
  v5 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v27, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, a3);
  if ( !v28 )
    return v5;
  v6 = v27;
  if ( *((_BYTE *)v27 + 14) == a2 && v27[6] == v4 )
  {
    v7 = *(_DWORD *)v27 & 0xFFFFFF;
    if ( v7 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *v27,
                                    1)
             + 13) == HIWORD(v7) )
          v7 = (unsigned __int16)v7;
      }
      else
      {
        v7 = *v27;
      }
    }
    v8 = *((_QWORD *)gpHandleManager + 2);
    v9 = *(_DWORD *)(v8 + 2056);
    if ( v7 >= v9 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
      goto LABEL_42;
    v10 = ((v7 - v9) >> 16) + 1;
    if ( v7 < v9 )
      v10 = 0LL;
    v11 = *(_QWORD *)(v8 + 8 * v10 + 8);
    if ( (_DWORD)v10 )
      v7 += ((1 - (_DWORD)v10) << 16) - v9;
    if ( v7 >= *(_DWORD *)(v11 + 20) )
LABEL_42:
      v5 = 0LL;
    else
      v5 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * ((unsigned __int64)v7 >> 8))
                     + 16LL * (unsigned __int8)v7
                     + 8);
    ++*(_DWORD *)(v5 + 8);
    if ( a2 == 5 )
    {
      v25 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v5 + 680);
      v26 = 0;
    }
    else
    {
      if ( a2 != 16 )
        goto LABEL_16;
      v25 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v5 + 136);
      v26 = 2;
    }
    TrackObjectReferenceIncrement(v26, v25);
  }
LABEL_16:
  v12 = *v6 & 0xFFFFFF;
  if ( v12 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  *(unsigned __int16 *)v6,
                                  1)
           + 13) == HIWORD(v12) )
        v12 = (unsigned __int16)v12;
    }
    else
    {
      v12 = *(unsigned __int16 *)v6;
    }
  }
  v13 = gpHandleManager;
  v14 = *((_QWORD *)gpHandleManager + 2);
  v15 = *(_DWORD *)(v14 + 2056);
  if ( v12 >= v15 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16) )
    goto LABEL_47;
  v16 = ((v12 - v15) >> 16) + 1;
  if ( v12 < v15 )
    v16 = 0LL;
  v17 = *(_QWORD *)(v14 + 8 * v16 + 8);
  if ( (_DWORD)v16 )
    v12 += ((1 - (_DWORD)v16) << 16) - v15;
  if ( v12 >= *(_DWORD *)(v17 + 20) )
LABEL_47:
    v18 = 0LL;
  else
    v18 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8 * ((unsigned __int64)v12 >> 8))
                     + 16LL * (unsigned __int8)v12
                     + 8);
  v19 = (unsigned __int16)*v18 | (*v18 >> 8) & 0xFF0000;
  if ( v19 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)*v18,
                                  1)
           + 13) == HIWORD(v19) )
        v19 = (unsigned __int16)v19;
    }
    else
    {
      v19 = (unsigned __int16)*v18;
    }
  }
  v20 = *((_QWORD *)v13 + 2);
  v21 = *(_DWORD *)(v20 + 2056);
  if ( v19 < v21 + ((*(unsigned __int16 *)(v20 + 2) + 0xFFFF) << 16) )
  {
    v22 = ((v19 - v21) >> 16) + 1;
    if ( v19 < v21 )
      v22 = 0LL;
    v23 = *(_QWORD *)(v20 + 8 * v22 + 8);
    if ( (_DWORD)v22 )
      v19 += ((1 - (_DWORD)v22) << 16) - v21;
    *(_DWORD *)(*(_QWORD *)v23 + 24LL * v19 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v23 + 24) + 8 * ((unsigned __int64)v19 >> 8)) + 16LL * (unsigned __int8)v19,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  return v5;
}
