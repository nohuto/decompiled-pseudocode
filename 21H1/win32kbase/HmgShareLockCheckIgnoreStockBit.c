/*
 * XREFs of HmgShareLockCheckIgnoreStockBit @ 0x1C00063B0
 * Callers:
 *     EngAssociateSurface @ 0x1C0030440 (EngAssociateSurface.c)
 *     NtGdiDeleteObjectApp @ 0x1C006C610 (NtGdiDeleteObjectApp.c)
 *     EngLockSurface @ 0x1C0086390 (EngLockSurface.c)
 *     bDeleteSurface @ 0x1C009AEA0 (bDeleteSurface.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C007FBF4 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0083290 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0083F70 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C01574E8 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

__int64 __fastcall HmgShareLockCheckIgnoreStockBit(unsigned int a1, char a2)
{
  __int64 v4; // rsi
  _DWORD *v5; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rdx
  unsigned int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // r9
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v11; // rdx
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
  unsigned __int16 *v25; // [rsp+30h] [rbp-38h] BYREF
  int v26; // [rsp+38h] [rbp-30h]

  v25 = 0LL;
  v26 = 0;
  v4 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v25, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 1, 0, 0);
  if ( v26 )
  {
    v5 = v25;
    if ( *((_BYTE *)v25 + 14) == a2 && ((HIWORD(a1) ^ v25[6]) & 0xFFFFFF7F) == 0 )
    {
      v6 = *(_DWORD *)v25 & 0xFFFFFF;
      if ( v6 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      *v25,
                                      1)
               + 13) == HIWORD(v6) )
            v6 = (unsigned __int16)v6;
        }
        else
        {
          v6 = *v25;
        }
      }
      v7 = *((_QWORD *)gpHandleManager + 2);
      v8 = *(_DWORD *)(v7 + 2056);
      if ( v6 >= v8 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
        goto LABEL_40;
      v9 = ((v6 - v8) >> 16) + 1;
      if ( v6 < v8 )
        v9 = 0LL;
      v10 = *(_QWORD *)(v7 + 8 * v9 + 8);
      if ( (_DWORD)v9 )
        v6 += ((1 - (_DWORD)v9) << 16) - v8;
      if ( v6 >= *(_DWORD *)(v10 + 20) )
LABEL_40:
        v4 = 0LL;
      else
        v4 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v10 + 24) + 8 * ((unsigned __int64)v6 >> 8))
                       + 16LL * (unsigned __int8)v6
                       + 8);
      ++*(_DWORD *)(v4 + 8);
      if ( a2 == 5 )
      {
        v11 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v4 + 680);
        if ( v11 && qword_1C024D3D8 )
          NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
            qword_1C024D3D8,
            v11,
            1);
      }
      else if ( a2 == 16 )
      {
        TrackObjectReferenceIncrement(2LL, *(_QWORD *)(v4 + 136));
      }
    }
    v12 = *v5 & 0xFFFFFF;
    if ( v12 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *(unsigned __int16 *)v5,
                                    1)
             + 13) == HIWORD(v12) )
          v12 = (unsigned __int16)v12;
      }
      else
      {
        v12 = *(unsigned __int16 *)v5;
      }
    }
    v13 = gpHandleManager;
    v14 = *((_QWORD *)gpHandleManager + 2);
    v15 = *(_DWORD *)(v14 + 2056);
    if ( v12 >= v15 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16) )
      goto LABEL_48;
    v16 = ((v12 - v15) >> 16) + 1;
    if ( v12 < v15 )
      v16 = 0LL;
    v17 = *(_QWORD *)(v14 + 8 * v16 + 8);
    if ( (_DWORD)v16 )
      v12 += ((1 - (_DWORD)v16) << 16) - v15;
    if ( v12 >= *(_DWORD *)(v17 + 20) )
LABEL_48:
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
  }
  return v4;
}
