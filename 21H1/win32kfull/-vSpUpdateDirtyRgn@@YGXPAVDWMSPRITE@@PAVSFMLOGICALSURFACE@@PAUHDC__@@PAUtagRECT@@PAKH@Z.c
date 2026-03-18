/*
 * XREFs of ?vSpUpdateDirtyRgn@@YGXPAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUHDC__@@PAUtagRECT@@PAKH@Z @ 0x60D20
 * Callers:
 *     ?GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUNCTION@@KPAUtagRECT@@PAUtagMINIWINDOWINFO@@HH@Z @ 0x603A0 (-GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_.c)
 *     _GreAddBitmapD3DDirtyRgn@12 @ 0xB93E6 (_GreAddBitmapD3DDirtyRgn@12.c)
 *     ?bSpDwmUpdateSpriteShape@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAU_SURFOBJ@@PAU_RECTL@@PAVPALETTE@@PAK4PAPAV3@@Z @ 0xC62AC (-bSpDwmUpdateSpriteShape@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAU_SURFOBJ@@PAU_REC.c)
 *     _GreTransferSpriteStateToDwmState@8 @ 0xE11CA (_GreTransferSpriteStateToDwmState@8.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YGJPAUHDC__@@PAX@Z @ 0x1CD3D4 (-SpDdNotifyFullscreenSpriteUpdate@@YGJPAUHDC__@@PAX@Z.c)
 *     ?bSpDwmUpdateDragRectShape@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagPOINT@@PAUtagSIZE@@PAKPAPAV3@@Z @ 0x1CD629 (-bSpDwmUpdateDragRectShape@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagPOINT@@PAUta.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByRef@$07@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@3ABU?$_tlgWrapperByRef@$07@@@Z @ 0x11000 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByRef@$07@@@-$_tlgWriteTemplate@$$A6GJPBU_tlg.c)
 *     ?bDpiScaledSurface@DC@@QBEHXZ @ 0x11CEA (-bDpiScaledSurface@DC@@QBEHXZ.c)
 *     ?vClearMoveData@METAREGION@@QAEXH@Z @ 0x24AE6 (-vClearMoveData@METAREGION@@QAEXH@Z.c)
 *     ?vDirtyRegionAccum@SFMLOGICALSURFACE@@QAEXPAVREGION@@@Z @ 0x24B32 (-vDirtyRegionAccum@SFMLOGICALSURFACE@@QAEXPAVREGION@@@Z.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??1RGNMEMOBJTMP@@QAE@XZ @ 0xF5B78 (--1RGNMEMOBJTMP@@QAE@XZ.c)
 *     ?bTrimMoveWithRegion@METAREGION@@AAEHPAVREGION@@H@Z @ 0x2287C0 (-bTrimMoveWithRegion@METAREGION@@AAEHPAVREGION@@H@Z.c)
 *     ?vApplyMoveData@METAREGION@@AAEHPAU_RECTL@@PAU_POINTL@@PAVREGION@@@Z @ 0x228A76 (-vApplyMoveData@METAREGION@@AAEHPAU_RECTL@@PAU_POINTL@@PAVREGION@@@Z.c)
 *     ?vCalculateNoMoveDirty@METAREGION@@AAEXXZ @ 0x228D7A (-vCalculateNoMoveDirty@METAREGION@@AAEXXZ.c)
 */

void __userpurge vSpUpdateDirtyRgn(
        _DWORD *a1@<edx>,
        int a2@<ecx>,
        struct REGION **a3,
        struct _RECTL *a4,
        HDC a5,
        struct tagRECT *a6,
        unsigned int *a7,
        int a8)
{
  bool v9; // zf
  void (__thiscall *v10)(RGNMEMOBJ *__hidden); // esi
  int v11; // edx
  int v12; // eax
  int v13; // esi
  int v14; // edx
  int v15; // eax
  struct REGION **v16; // edx
  struct REGION **v17; // eax
  _DWORD (__thiscall *v18)(RGNOBJ *__hidden, struct RGNOBJ *, struct RGNOBJ *, unsigned __int8); // esi
  int v19; // eax
  int v20; // esi
  int v21; // eax
  REGION *v22; // ecx
  int v23; // eax
  void (__stdcall *v24)(_DWORD, int, int, struct REGION *); // esi
  REGION *v25; // ecx
  int v26; // eax
  int CurrentProcessWin32Process; // eax
  int v28; // ecx
  int v29; // ecx
  int v30; // [esp+40h] [ebp-8Ch]
  int v31; // [esp+44h] [ebp-88h]
  int v32; // [esp+50h] [ebp-7Ch]
  struct _RECTL *v33; // [esp+50h] [ebp-7Ch]
  struct REGION *v34; // [esp+50h] [ebp-7Ch]
  struct REGION *v35; // [esp+64h] [ebp-68h] BYREF
  int v36; // [esp+68h] [ebp-64h]
  struct REGION *v37; // [esp+70h] [ebp-5Ch] BYREF
  int v38; // [esp+74h] [ebp-58h]
  struct _RECTL *v39; // [esp+78h] [ebp-54h] BYREF
  struct REGION **v40; // [esp+7Ch] [ebp-50h] BYREF
  _DWORD v41[2]; // [esp+80h] [ebp-4Ch] BYREF
  _DWORD v42[2]; // [esp+88h] [ebp-44h] BYREF
  int v43; // [esp+90h] [ebp-3Ch] BYREF
  int v44; // [esp+94h] [ebp-38h] BYREF
  _DWORD v45[2]; // [esp+98h] [ebp-34h] BYREF
  int v46; // [esp+A0h] [ebp-2Ch]
  HDC v47; // [esp+A4h] [ebp-28h]
  struct _RECTL v48; // [esp+A8h] [ebp-24h] BYREF
  _DWORD v49[4]; // [esp+B8h] [ebp-14h] BYREF

  v40 = a3;
  v9 = a1[20] == 0;
  v39 = a4;
  v46 = a2;
  v47 = a5;
  v44 = 0;
  if ( v9 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v35);
    v9 = v36 == 1;
    a1[20] = v35;
    if ( v9 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v35);
  }
  if ( !a1[11] )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v35);
    SFMLOGICALSURFACE::vDirtyRegionAccum((SFMLOGICALSURFACE *)a1, v35);
    v44 = 1;
    if ( v36 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v35);
  }
  if ( !a1[28] )
  {
    v48.left = a1[20];
    RGNOBJ::vSet((RGNOBJ *)&v48);
    if ( a1[11] )
    {
      v37 = (struct REGION *)a1[11];
      RGNOBJ::vSet((RGNOBJ *)&v37);
      EtwTraceLifetimeAccum(*a1, (int)*a1 >> 31, 1, a1[11]);
    }
  }
  v43 = a1[20];
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v41);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v41);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v42);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v42);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v45);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v45);
  v10 = RGNMEMOBJ::vPopThreadGuardedObject;
  if ( v43 && v41[0] && v42[0] && v45[0] )
  {
    v37 = 0;
    RGNOBJ::vSet((RGNOBJ *)v41, v39);
    if ( (a1[41] & 1) != 0 && v40 )
    {
      LOBYTE(v11) = 1;
      v12 = HmgShareLockEx(v40, v11, 0);
      v13 = v12;
      if ( v12 )
      {
        if ( (*(_BYTE *)(v12 + 24) & 1) != 0 )
        {
          v14 = *(_DWORD *)(v12 + 1164);
          if ( !v14 || (*(_BYTE *)(v12 + 28) & 2) == 0 || (v9 = !DC::bDpiScaledSurface((DC *)v12), v15 = v14, v9) )
            v15 = *(_DWORD *)(v13 + 1156);
          if ( v15 )
          {
            if ( !v14 || (*(_BYTE *)(v13 + 28) & 2) == 0 || !DC::bDpiScaledSurface((DC *)v13) )
              v16 = *(struct REGION ***)(v13 + 1156);
          }
          else if ( !*(_DWORD *)(v13 + 1160) || (*(_BYTE *)(v13 + 28) & 2) == 0 || !DC::bDpiScaledSurface((DC *)v13) )
          {
            v16 = *(struct REGION ***)(v13 + 1152);
          }
          v40 = v16;
          if ( v16 )
          {
            if ( RGNOBJ::bMerge((RGNOBJ *)v42, (struct RGNOBJ *)&v40, (struct RGNOBJ *)v41, 8u) )
            {
              RGNOBJ::vSwap((RGNOBJ *)v42, (struct RGNOBJ *)v41);
              v37 = (struct REGION *)1;
            }
            else
            {
              RGNOBJ::vSet((RGNOBJ *)v42);
            }
          }
        }
        v17 = *(struct REGION ***)v13;
        v48.left = 0;
        v40 = v17;
        HmgDecrementShareReferenceCountEx(v13, &v48);
        if ( v48.left )
          bDeleteDCInternalEx(v40, 0);
        if ( v37 )
        {
LABEL_47:
          v18 = RGNOBJ::bMerge;
          if ( !RGNOBJ::bMerge((RGNOBJ *)v42, (struct RGNOBJ *)&v43, (struct RGNOBJ *)v41, 0xEu) )
          {
LABEL_87:
            if ( a1[11] )
            {
              v39 = (struct _RECTL *)a1[11];
              if ( v18((RGNOBJ *)v45, (struct RGNOBJ *)&v39, (struct RGNOBJ *)v41, 0xEu) )
              {
                RGNOBJ::vSwap((RGNOBJ *)v45, (struct RGNOBJ *)&v39);
                v24 = (void (__stdcall *)(_DWORD, int, int, struct REGION *))EtwTraceLifetimeAccum;
                v33 = v39;
                a1[11] = v39;
                EtwTraceLifetimeAccum(*a1, (int)*a1 >> 31, 1, v33);
              }
              else
              {
                v24 = (void (__stdcall *)(_DWORD, int, int, struct REGION *))EtwTraceLifetimeAccum;
              }
              if ( !v44 && v39[3].right != 1 && v39[3].top <= 0x38u )
              {
                memset(&v48, 0, sizeof(v48));
                RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v35);
                if ( v35 )
                {
                  v48.left = v39[4].left;
                  v48.top = v39[4].top;
                  v48.right = v39[4].right;
                  v25 = (REGION *)a1[11];
                  v48.bottom = v39[4].bottom;
                  REGION::vDeleteREGION(v25);
                  RGNOBJ::vSet((RGNOBJ *)&v35, &v48);
                  v34 = v35;
                  a1[11] = v35;
                  v24(*a1, (int)*a1 >> 31, 1, v34);
                }
                if ( v36 == 1 )
                  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v35);
              }
            }
            v10 = RGNMEMOBJ::vPopThreadGuardedObject;
            goto LABEL_99;
          }
          RGNOBJ::vSwap((RGNOBJ *)v42, (struct RGNOBJ *)&v43);
          if ( a6 )
          {
            v32 = a1[24];
            v19 = *a1;
            v35 = (struct REGION *)a1[23];
            EtwTranslationUpdateOffset(v19, v35, v32);
            EtwTranslationUpdate(*a1, v39->left, v39->top, v39->right, v39->bottom);
            v20 = v43;
            v21 = METAREGION::vApplyMoveData(
                    (METAREGION *)(a1 + 20),
                    (struct _RECTL *)a1 + 4,
                    (struct _POINTL *)a1 + 7,
                    (struct REGION *)a1[13]);
            a1[20] = v20;
            if ( v21 )
              METAREGION::vCalculateNoMoveDirty((METAREGION *)(a1 + 20));
            goto LABEL_85;
          }
          EtwDirtyRectUpdate(*a1, v39->left, v39->top, v39->right, v39->bottom);
          v9 = a1[26] == 0;
          a1[20] = v43;
          if ( v9 )
          {
LABEL_85:
            v23 = a1[41];
            v18 = RGNOBJ::bMerge;
            if ( (v23 & 2) == 0 )
            {
              a1[41] = v23 | 2;
              *(_DWORD *)v47 |= 1u;
            }
            goto LABEL_87;
          }
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v37);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v37);
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v48);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v48);
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v35);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v35);
          v40 = (struct REGION **)a1[25];
          if ( !RGNOBJ::bCopy((RGNOBJ *)&v48, (struct RGNOBJ *)&v40) )
          {
            METAREGION::vClearMoveData((METAREGION *)(a1 + 20), 1);
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v35);
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v48);
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v37);
LABEL_69:
            if ( a1[26] )
            {
              v48.left = a1[20];
              RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v35);
              RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v37);
              RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v37);
              v22 = (REGION *)a1[21];
              v40 = (struct REGION **)a1[25];
              if ( v22 )
              {
                REGION::vDeleteREGION(v22);
                a1[21] = 0;
              }
              if ( RGNOBJ::bCopy((RGNOBJ *)&v37, (struct RGNOBJ *)&v40)
                && RGNOBJ::bOffset((RGNOBJ *)&v37, (struct _POINTL *)(a1 + 23)) )
              {
                RGNOBJ::vSet((RGNOBJ *)&v35);
                if ( v48.left
                  && v37
                  && v35
                  && RGNOBJ::iCombine((RGNOBJ *)&v35, (struct RGNOBJ *)&v48, (struct RGNOBJ *)&v37, 4) )
                {
                  a1[21] = v35;
                }
                else
                {
                  METAREGION::vClearMoveData((METAREGION *)(a1 + 20), 1);
                  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v35);
                }
              }
              else
              {
                METAREGION::vClearMoveData((METAREGION *)(a1 + 20), 1);
              }
              RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v37);
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v37);
              if ( v38 == 1 )
                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v37);
              if ( v36 == 1 )
                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v35);
            }
            goto LABEL_85;
          }
          if ( RGNOBJ::bOffset((RGNOBJ *)&v48, (struct _POINTL *)(a1 + 23)) )
          {
            RGNOBJ::vSet((RGNOBJ *)&v37, v39);
            if ( !v37 )
              goto LABEL_63;
            if ( !v48.left )
              goto LABEL_63;
            if ( !v35 )
              goto LABEL_63;
            if ( !RGNOBJ::iCombine((RGNOBJ *)&v35, (struct RGNOBJ *)&v37, (struct RGNOBJ *)&v48, 1) )
              goto LABEL_63;
            v49[0] = *((_DWORD *)v35 + 16);
            v49[1] = *((_DWORD *)v35 + 17);
            v49[2] = *((_DWORD *)v35 + 18);
            v49[3] = *((_DWORD *)v35 + 19);
            if ( ERECTL::bEmpty((ERECTL *)v49) || METAREGION::bTrimMoveWithRegion((METAREGION *)(a1 + 20), v37, 1) )
              goto LABEL_63;
            EtwLogicalSurfRemovedTranslationFromDirtyEvent(a1[27], v39->left, v39->top, v39->right, v39->bottom);
            EtwTraceMoveRegion(a1[25], (int)a1[25] >> 31, 0, 0, a1[25]);
          }
          METAREGION::vClearMoveData((METAREGION *)(a1 + 20), 1);
LABEL_63:
          RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v35);
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v35);
          if ( v36 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v35);
          RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v48);
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v48);
          if ( v48.top == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v48);
          RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v37);
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v37);
          if ( v38 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v37);
          goto LABEL_69;
        }
      }
      v10 = RGNMEMOBJ::vPopThreadGuardedObject;
    }
    if ( !v46 )
      goto LABEL_46;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v35);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v35);
    v48.left = 0;
    v48.top = 0;
    v48.right = *(_DWORD *)(v46 + 40) - *(_DWORD *)(v46 + 32);
    v48.bottom = *(_DWORD *)(v46 + 44) - *(_DWORD *)(v46 + 36);
    if ( v35 )
    {
      RGNOBJ::vSet((RGNOBJ *)&v35, &v48);
      if ( RGNOBJ::bMerge((RGNOBJ *)v42, (struct RGNOBJ *)v41, (struct RGNOBJ *)&v35, 8u) )
      {
        RGNOBJ::vSwap((RGNOBJ *)v42, (struct RGNOBJ *)v41);
        v37 = (struct REGION *)1;
      }
    }
    v10((RGNMEMOBJ *)&v35);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v35);
    if ( v36 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v35);
    if ( !v37 )
LABEL_46:
      RGNOBJ::vSet((RGNOBJ *)v41);
    goto LABEL_47;
  }
LABEL_99:
  v26 = a1[41];
  if ( (v26 & 0x20) != 0 )
  {
    if ( (v26 & 4) != 0 )
    {
      *(_DWORD *)v47 |= 2u;
      v26 = a1[41];
    }
    a1[41] = v26 & 0xFFFFFFDF;
  }
  if ( v46 )
  {
    if ( (*(_BYTE *)(v46 + 132) & 2) != 0 && (*(_BYTE *)v47 & 1) != 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
      if ( CurrentProcessWin32Process )
      {
        v28 = *(_DWORD *)(CurrentProcessWin32Process + 164);
        if ( (v28 & 4) == 0 )
        {
          *(_DWORD *)(CurrentProcessWin32Process + 164) = v28 | 4;
          if ( (unsigned int)dword_266280 > 5 )
          {
            if ( (unsigned __int8)_tlgKeywordOn(0, 0x4000) )
            {
              v35 = (struct REGION *)0x2000000;
              v40 = &v35;
              v36 = 0;
              v44 = 1;
              v48.left = 1;
              _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<8>>(
                v29,
                (int)&unk_2578D2,
                v30,
                v31,
                (int)&v48,
                (int)&v44,
                (int *)&v40);
            }
          }
        }
      }
    }
  }
  v10((RGNMEMOBJ *)v45);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v45);
  if ( v45[1] == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v45);
  v10((RGNMEMOBJ *)v42);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v42);
  if ( v42[1] == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v42);
  v10((RGNMEMOBJ *)v41);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v41);
  if ( v41[1] == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v41);
}
