/*
 * XREFs of _LinkWindow@12 @ 0x34D24
 * Callers:
 *     _ImeSetTopmost@12 @ 0x1C212 (_ImeSetTopmost@12.c)
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxCreateDesktopEx@24 @ 0x7E854 (_xxxCreateDesktopEx@24.c)
 *     _SetWindowGroupBand@12 @ 0x97764 (_SetWindowGroupBand@12.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 * Callees:
 *     _TrackLayeredZorder@4 @ 0x2343C (_TrackLayeredZorder@4.c)
 *     _IsPseudoPwnd@4 @ 0x2A852 (_IsPseudoPwnd@4.c)
 *     _GetBandOrdinal@4 @ 0x33526 (_GetBandOrdinal@4.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     ?LockPointer@@YG?AU_LOCKASSIGNPAIR@@PAV?$SharedUserObjPointerFieldspwndPrev@UtagWND@@@tagWND@@PAX@Z @ 0x72F28 (-LockPointer@@YG-AU_LOCKASSIGNPAIR@@PAV-$SharedUserObjPointerFieldspwndPrev@UtagWND@@@tagWND@@PA.c)
 *     ?LockPointer@@YG?AU_LOCKASSIGNPAIR@@PAV?$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@PAX@Z @ 0x73060 (-LockPointer@@YG-AU_LOCKASSIGNPAIR@@PAV-$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@PA.c)
 *     ?IsParentLinked@@YGHQAUtagWND@@0@Z @ 0x9230C (-IsParentLinked@@YGHQAUtagWND@@0@Z.c)
 *     _GetLastTopMostWindow@4 @ 0x933C8 (_GetLastTopMostWindow@4.c)
 *     _DwmAsyncChildLink@20 @ 0x994CC (_DwmAsyncChildLink@20.c)
 *     ?LockPointer@@YG?AU_LOCKASSIGNPAIR@@PAV?$SharedUserObjPointerFieldspwndChild@UtagWND@@@tagWND@@PAX@Z @ 0xA3C6E (-LockPointer@@YG-AU_LOCKASSIGNPAIR@@PAV-$SharedUserObjPointerFieldspwndChild@UtagWND@@@tagWND@@P.c)
 *     _HWInsertAfter@4 @ 0xA50E8 (_HWInsertAfter@4.c)
 *     _DirtyVisRgnTrackers@4 @ 0xF4CDE (_DirtyVisRgnTrackers@4.c)
 *     ?_LogLinkWindow@@YGXW4LogBeforeOrAfter@@PAUtagWND@@11@Z @ 0x185013 (-_LogLinkWindow@@YGXW4LogBeforeOrAfter@@PAUtagWND@@11@Z.c)
 */

// bad sp value at call has been detected, the output may be wrong!
void __fastcall LinkWindow(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // ebx
  unsigned int BandOrdinal; // esi
  _DWORD *LastTopMostWindow; // edi
  int DesktopWindow; // esi
  int v7; // eax
  _DWORD *v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  _DWORD *v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rax
  int v18; // ecx
  int v19; // edx
  _DWORD *v20; // edx
  _DWORD *v21; // eax
  int v22; // ecx
  unsigned int i; // eax
  int v24; // ecx
  int v25; // ecx
  int v26; // esi
  int v27; // ecx
  _DWORD *v28; // eax
  _DWORD *v29; // esi
  int v30; // ecx
  int v31; // eax
  int v32; // [esp-20h] [ebp-44h]
  int v33; // [esp-20h] [ebp-44h]
  int v34; // [esp-1Ch] [ebp-40h]
  int v35; // [esp-1Ch] [ebp-40h]
  int v36; // [esp-18h] [ebp-3Ch]
  int v37; // [esp-18h] [ebp-3Ch]
  __int64 v38; // [esp-14h] [ebp-38h]
  __int64 v39; // [esp-Ch] [ebp-30h]
  __int64 v40; // [esp-4h] [ebp-28h]
  __int64 v41; // [esp+4h] [ebp-20h]
  __int64 v42; // [esp+4h] [ebp-20h]
  _DWORD *v43; // [esp+10h] [ebp-14h]
  _DWORD *v44; // [esp+18h] [ebp-Ch]
  _DWORD *v45; // [esp+1Ch] [ebp-8h]
  _DWORD *v46; // [esp+1Ch] [ebp-8h]

  v3 = a1;
  BandOrdinal = 0;
  LastTopMostWindow = a2;
  v44 = a3 + 15;
  if ( (_DWORD *)a3[15] == a1 )
    return;
  if ( IsPseudoPwnd(a2) )
    goto LABEL_7;
  DesktopWindow = _GetDesktopWindow(v3);
  if ( _GetDesktopWindow(LastTopMostWindow) == DesktopWindow )
  {
LABEL_6:
    BandOrdinal = 0;
LABEL_7:
    v8 = a3;
    goto LABEL_8;
  }
  v7 = _GetDesktopWindow(v3);
  v8 = a3;
  if ( a3 == (_DWORD *)v7 )
  {
    LastTopMostWindow = (_DWORD *)GetLastTopMostWindow(v3);
    goto LABEL_6;
  }
  LastTopMostWindow = 0;
  BandOrdinal = 0;
LABEL_8:
  if ( (gdwPostMortemLogging & 4) != 0 )
    _LogLinkWindow(0, v3, LastTopMostWindow, v8);
  v9 = _GetDesktopWindow(a3);
  v10 = 0;
  if ( v11 == v9 )
    BandOrdinal = GetBandOrdinal(*(void **)(v3[5] + 148));
  if ( !LastTopMostWindow )
    goto LABEL_36;
  if ( LastTopMostWindow != (_DWORD *)1 )
  {
    if ( v10 )
    {
      if ( BandOrdinal > GetBandOrdinal(*(void **)(LastTopMostWindow[5] + 148)) )
      {
        while ( 1 )
        {
          LastTopMostWindow = (_DWORD *)LastTopMostWindow[13];
          if ( !LastTopMostWindow )
            goto LABEL_36;
          if ( BandOrdinal <= GetBandOrdinal(*(void **)(LastTopMostWindow[5] + 148)) )
            goto LABEL_25;
        }
      }
      while ( 1 )
      {
        v19 = LastTopMostWindow[12];
        if ( !v19 || GetBandOrdinal(*(void **)(*(_DWORD *)(v19 + 20) + 148)) <= BandOrdinal )
          break;
        LastTopMostWindow = v20;
      }
    }
LABEL_25:
    v13 = LastTopMostWindow[12];
    if ( v13 )
    {
      v42 = LockPointer(v13 + 52, v3);
      HMAssignmentLock(v14, HIDWORD(v42));
      v40 = LockPointer(v3 + 12, LastTopMostWindow[12], v42);
      HMAssignmentLock(v15, HIDWORD(v40));
    }
    v39 = LockPointer(v3 + 13, LastTopMostWindow);
    HMAssignmentLock(v16, HIDWORD(v39));
    v17 = LockPointer(LastTopMostWindow + 12, v3, v39);
    goto LABEL_49;
  }
  LastTopMostWindow = (_DWORD *)*v44;
  if ( *v44 && (*(_BYTE *)(LastTopMostWindow[5] + 12) & 0x20) == 0 )
  {
    while ( 1 )
    {
      v12 = (_DWORD *)LastTopMostWindow[12];
      v45 = v12;
      if ( !v12 )
        break;
      if ( v10 )
      {
        if ( GetBandOrdinal(*(void **)(v12[5] + 148)) < BandOrdinal )
          break;
        v12 = v45;
      }
      if ( (*(_BYTE *)(v12[5] + 12) & 0x20) != 0 )
        break;
      LastTopMostWindow = v12;
    }
    if ( !v10 || GetBandOrdinal(*(void **)(LastTopMostWindow[5] + 148)) >= BandOrdinal )
      goto LABEL_25;
  }
LABEL_36:
  v21 = (_DWORD *)*v44;
  v46 = (_DWORD *)*v44;
  if ( *v44 )
  {
    if ( v10 )
    {
      if ( GetBandOrdinal(*(void **)(v21[5] + 148)) > BandOrdinal )
      {
        for ( LastTopMostWindow = v46; ; LastTopMostWindow = (_DWORD *)LastTopMostWindow[12] )
        {
          v22 = LastTopMostWindow[12];
          if ( !v22 )
            break;
          for ( i = 0; i < 0x12; ++i )
          {
            if ( gazbidOrder[i] == *(_DWORD *)(*(_DWORD *)(v22 + 20) + 148) )
              break;
          }
          if ( i <= BandOrdinal )
            break;
        }
        goto LABEL_25;
      }
      v21 = v46;
    }
    v41 = LockPointer(v21 + 13, v3);
    HMAssignmentLock(v24, HIDWORD(v41));
    v40 = LockPointer(v3 + 12, *v43, v41);
    HMAssignmentLock(v25, HIDWORD(v40));
  }
  v17 = LockPointer(HIDWORD(v41), v3, v40);
LABEL_49:
  v38 = v17;
  HMAssignmentLock(v18, HIDWORD(v17));
  *(_DWORD *)(v3[5] + 144) |= 8u;
  v26 = v3[5];
  *(_DWORD *)(v26 + 144) ^= (*(_DWORD *)(v26 + 144) ^ (16
                                                     * IsParentLinked(
                                                         (struct tagWND *const)v38,
                                                         (struct tagWND *const)HIDWORD(v38)))) & 0x10;
  if ( (*(_BYTE *)(v3[5] + 144) & 0x10) != 0 && IsWindowDesktopComposed(v3) && v3 != (_DWORD *)_GetDesktopWindow(v3) )
  {
    v27 = v3[3];
    v28 = 0;
    if ( v27 )
      v28 = *(_DWORD **)(v27 + 52);
    if ( v3 != v28 && a3 != *((_DWORD **)&_gTermIO + 1) )
    {
      DirtyVisRgnTrackers(v3);
      v36 = *(_DWORD *)(v3[5] + 148);
      v34 = HWInsertAfter(LastTopMostWindow);
      v32 = *a3;
      ReferenceDwmApiPort();
      DwmAsyncChildLink(v32, v34, v36);
      v29 = (_DWORD *)v3[12];
      if ( v29 )
      {
        do
        {
          v30 = v29[5];
          v31 = *(_DWORD *)(v30 + 144);
          if ( (v31 & 0x10) == 0 )
          {
            *(_DWORD *)(v30 + 144) = v31 | 0x10;
            DirtyVisRgnTrackers(v29);
            v37 = *(_DWORD *)(v29[5] + 148);
            v35 = HWInsertAfter(v29[13]);
            v33 = *a3;
            ReferenceDwmApiPort();
            DwmAsyncChildLink(v33, v35, v37);
          }
          v29 = (_DWORD *)v29[12];
        }
        while ( v29 );
        v3 = (_DWORD *)HIDWORD(v40);
      }
    }
  }
  if ( (*(_BYTE *)(v3[5] + 18) & 8) != 0 )
    TrackLayeredZorder(v3);
  if ( (gdwPostMortemLogging & 4) != 0 )
    _LogLinkWindow(1, v3, 0, 0);
}
