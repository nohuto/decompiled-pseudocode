/*
 * XREFs of ?GrepSfmGetDirtyRgn@@YGJPAVSFMLOGICALSURFACE@@_KPAPAUHRGN__@@222PAU_POINTL@@PAH4@Z @ 0x227E8
 * Callers:
 *     _GreSfmGetDirtyRgn@40 @ 0x22718 (_GreSfmGetDirtyRgn@40.c)
 * Callees:
 *     ?hrgnAssociate@RGNOBJ@@QAEPAUHRGN__@@XZ @ 0x22A08 (-hrgnAssociate@RGNOBJ@@QAEPAUHRGN__@@XZ.c)
 *     ?vClearMoveData@METAREGION@@QAEXH@Z @ 0x24AE6 (-vClearMoveData@METAREGION@@QAEXH@Z.c)
 */

int __userpurge GrepSfmGetDirtyRgn@<eax>(
        HRGN *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct SFMLOGICALSURFACE *a3,
        unsigned __int64 a4,
        HRGN *a5,
        HRGN *a6,
        HRGN *a7,
        HRGN *a8,
        struct _POINTL *a9,
        int *a10,
        int *a11)
{
  int v12; // ebx
  _DWORD *v13; // esi
  struct _POINTL *v14; // ecx
  int v15; // eax
  struct SFMLOGICALSURFACE *v16; // eax
  HRGN *v17; // edx
  struct RGNOBJ *v18; // eax
  HRGN v19; // eax
  HRGN *v21; // eax
  HRGN v22; // eax
  int v23; // eax
  struct SFMLOGICALSURFACE *v24; // eax
  HRGN *v25; // ebx
  HRGN v26; // eax
  HRGN *v27; // ecx
  int v28; // [esp+14h] [ebp-Ch] BYREF
  HRGN *v29; // [esp+18h] [ebp-8h]
  int v30; // [esp+1Ch] [ebp-4h] BYREF

  v29 = a1;
  v12 = -1073741811;
  v13 = a2 + 42;
  if ( a2 != (_DWORD *)-168 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v13, 0);
  }
  v14 = a9;
  a9->x = 0;
  if ( a2[28] )
  {
    v14->x = a2[26];
    if ( a2[26] == 1
      && ((v23 = a2[28]) == 0 ? (v24 = 0) : (v24 = *(struct SFMLOGICALSURFACE **)(v23 + 4)), v24 == a3 && !(_DWORD)a4) )
    {
      if ( a6 )
      {
        v25 = a5;
        v30 = a2[25];
        if ( a5 && a2[22] )
        {
          a9 = (struct _POINTL *)a2[22];
          *v25 = RGNOBJ::hrgnAssociate((RGNOBJ *)&a9);
        }
        EtwTranslationUpdateOffsetDWM(*a2, a2[23], a2[24]);
        EtwTraceMoveRegion(*a2, (int)*a2 >> 31, 0, 6, a2[25]);
        v26 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v30);
        *a6 = v26;
        v27 = a7;
        if ( a7 )
        {
          *a7 = (HRGN)a2[23];
          v27[1] = (HRGN)a2[24];
        }
        METAREGION::vClearMoveData((METAREGION *)(a2 + 20), 0);
      }
    }
    else if ( a6 )
    {
      *a6 = 0;
    }
    if ( a8 )
      *a8 = (HRGN)((a2[41] >> 4) & 1);
    if ( v29 )
    {
      v15 = a2[28];
      v16 = v15 ? *(struct SFMLOGICALSURFACE **)(v15 + 4) : 0;
      if ( v16 == a3 && !(_DWORD)a4 )
      {
        v21 = (HRGN *)a2[20];
        a6 = v21;
        if ( v21 )
        {
          EtwTraceDWMGetDirtyRegion(*a2, (int)*a2 >> 31, 0, v21);
          v22 = RGNOBJ::hrgnAssociate((RGNOBJ *)&a6);
          *v29 = v22;
          if ( v22 )
          {
            a2[41] &= ~2u;
            a2[20] = 0;
          }
        }
      }
    }
    if ( HIDWORD(a4) && ((a2[41] & 4) != 0 || !a3 && !(_DWORD)a4) )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&a3);
      v17 = (HRGN *)a2[11];
      a5 = (HRGN *)a2[12];
      a9 = (struct _POINTL *)a5;
      a6 = v17;
      if ( a3 )
      {
        if ( (a5 != 0) == (v17 != 0) )
        {
          if ( a5 && v17 )
          {
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v28);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v28);
            if ( (a2[41] & 4) != 0 )
            {
              if ( v28 && RGNOBJ::bMerge((RGNOBJ *)&v28, (struct RGNOBJ *)&a9, (struct RGNOBJ *)&a6, 8u) )
                RGNOBJ::vSwap((RGNOBJ *)&v28, (struct RGNOBJ *)&a3);
            }
            else
            {
              RGNOBJ::bCopy((RGNOBJ *)&a3, (struct RGNOBJ *)&a9);
            }
            RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v28);
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v28);
            if ( v29 == (HRGN *)1 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v28);
          }
        }
        else
        {
          v18 = (struct RGNOBJ *)&a6;
          if ( !v17 )
            v18 = (struct RGNOBJ *)&a9;
          RGNOBJ::bCopy((RGNOBJ *)&a3, v18);
        }
        if ( a6 && (a2[41] & 0x10) != 0 )
          RGNOBJ::vSet((RGNOBJ *)&a6);
        if ( a3 )
        {
          v19 = RGNOBJ::hrgnAssociate((RGNOBJ *)&a3);
          *(_DWORD *)HIDWORD(a4) = v19;
          if ( !v19 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&a3);
        }
      }
      if ( (_DWORD)a4 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&a3);
    }
    v12 = 0;
  }
  if ( v13 )
  {
    ExReleasePushLockExclusiveEx(v13, 0);
    KeLeaveCriticalRegion();
  }
  return v12;
}
