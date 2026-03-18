/*
 * XREFs of ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C00A4D00
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C0080B34 (GreTransferSpriteStateToDwmState.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C00A76A0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C00C5D84 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026DAB4 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C026DE54 (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C026E7FC (GreAddBitmapD3DDirtyRgn.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00690E4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C009ECF8 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C00C4BB4 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C011C2E8 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C026CF78 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z @ 0x1C02C03DC (-bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z.c)
 *     ?vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z @ 0x1C02C0768 (-vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z.c)
 *     ?vCalculateNoMoveDirty@METAREGION@@AEAAXXZ @ 0x1C02C0AA8 (-vCalculateNoMoveDirty@METAREGION@@AEAAXXZ.c)
 */

void __fastcall vSpUpdateDirtyRgn(
        struct DWMSPRITE *a1,
        struct SFMLOGICALSURFACE *a2,
        HDC a3,
        struct _RECTL *a4,
        unsigned int *a5,
        int a6)
{
  unsigned int *v7; // rsi
  int v9; // r13d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r12
  __int64 *v23; // rsi
  bool v24; // zf
  int v25; // eax
  __int64 v26; // rcx
  REGION *v27; // rcx
  __int64 v28; // rcx
  int v29; // eax
  LONG v30; // ecx
  __int64 v31; // rcx
  __int64 v32; // rdi
  int v33; // eax
  REGION *v34; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v36; // r8d
  int v37; // r9d
  int v38; // ecx
  int v39; // ecx
  __int64 v40; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v41; // [rsp+50h] [rbp-B8h]
  __int64 v42; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int *v43; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+70h] [rbp-98h] BYREF
  __int64 v45; // [rsp+78h] [rbp-90h] BYREF
  int v46; // [rsp+80h] [rbp-88h]
  __int64 v47; // [rsp+88h] [rbp-80h] BYREF
  int v48; // [rsp+90h] [rbp-78h]
  __int64 v49; // [rsp+98h] [rbp-70h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-68h] BYREF
  int v51; // [rsp+A8h] [rbp-60h]
  struct _RECTL v52; // [rsp+B0h] [rbp-58h] BYREF
  struct _RECTL v53; // [rsp+C0h] [rbp-48h] BYREF

  v7 = a5;
  v9 = 0;
  v43 = a5;
  if ( !*((_QWORD *)a2 + 16) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v53);
    v24 = v53.right == 1;
    *((_QWORD *)a2 + 16) = *(_QWORD *)&v53.left;
    if ( v24 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v53);
  }
  if ( !*((_QWORD *)a2 + 10) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v53);
    v31 = *(_QWORD *)a2;
    *((_QWORD *)a2 + 10) = *(_QWORD *)&v53.left;
    EtwTraceLifetimeAccum(v31, 1LL);
    v9 = 1;
    if ( v53.right == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v53);
  }
  if ( !*((_QWORD *)a2 + 23) )
  {
    v42 = *((_QWORD *)a2 + 16);
    RGNOBJ::vSet((RGNOBJ *)&v42);
    if ( *((_QWORD *)a2 + 10) )
    {
      v44 = *((_QWORD *)a2 + 10);
      RGNOBJ::vSet((RGNOBJ *)&v44);
      EtwTraceLifetimeAccum(*(_QWORD *)a2, 1LL);
    }
  }
  v49 = *((_QWORD *)a2 + 16);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v45);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v45);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v47);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v47);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v50);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v50);
  if ( v49 && v45 && v47 && v50 )
  {
    v15 = 0;
    RGNOBJ::vSet((RGNOBJ *)&v45, a4);
    if ( (*((_DWORD *)a2 + 63) & 1) == 0 )
      goto LABEL_113;
    if ( !a3 )
      goto LABEL_113;
    LOBYTE(v16) = 1;
    v17 = HmgShareLockEx(a3, v16, 0LL);
    v18 = v17;
    if ( !v17 )
      goto LABEL_113;
    if ( (*(_DWORD *)(v17 + 36) & 1) != 0 )
    {
      v19 = *(_QWORD *)(v17 + 1152);
      if ( !v19
        || (*(_DWORD *)(v17 + 40) & 2) == 0
        || (v24 = (unsigned int)DC::bDpiScaledSurface((DC *)v17) == 0, v20 = v19, v24) )
      {
        v20 = *(_QWORD *)(v18 + 1136);
      }
      if ( v20 )
      {
        if ( !v19 || (*(_DWORD *)(v18 + 40) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface((DC *)v18) )
          v21 = *(_QWORD *)(v18 + 1136);
      }
      else if ( !*(_QWORD *)(v18 + 1144)
             || (*(_DWORD *)(v18 + 40) & 2) == 0
             || !(unsigned int)DC::bDpiScaledSurface((DC *)v18) )
      {
        v21 = *(_QWORD *)(v18 + 1128);
      }
      v44 = v21;
      if ( v21 )
      {
        if ( RGNOBJ::bMerge((RGNOBJ *)&v47, (struct RGNOBJ *)&v44, (struct RGNOBJ *)&v45, 8u) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v47, (struct RGNOBJ *)&v45);
          v15 = 1;
        }
        else
        {
          RGNOBJ::vSet((RGNOBJ *)&v47);
        }
      }
    }
    v22 = *(_QWORD *)v18;
    LODWORD(v42) = 0;
    HmgDecrementShareReferenceCountEx(v18, &v42);
    if ( (_DWORD)v42 )
      bDeleteDCInternalEx(v22, 0LL);
    if ( !v15 )
    {
LABEL_113:
      if ( !a1 )
        goto LABEL_72;
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v40);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v40);
      v52.right = *((_DWORD *)a1 + 16) - *((_DWORD *)a1 + 14);
      v30 = *((_DWORD *)a1 + 17) - *((_DWORD *)a1 + 15);
      *(_QWORD *)&v52.left = 0LL;
      v52.bottom = v30;
      if ( v40 )
      {
        RGNOBJ::vSet((RGNOBJ *)&v40, &v52);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v47, (struct RGNOBJ *)&v45, (struct RGNOBJ *)&v40, 8u) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v47, (struct RGNOBJ *)&v45);
          v15 = 1;
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v40);
      if ( !v15 )
LABEL_72:
        RGNOBJ::vSet((RGNOBJ *)&v45);
    }
    if ( !RGNOBJ::bMerge((RGNOBJ *)&v47, (struct RGNOBJ *)&v49, (struct RGNOBJ *)&v45, 0xEu) )
      goto LABEL_28;
    RGNOBJ::vSwap((RGNOBJ *)&v47, (struct RGNOBJ *)&v49);
    v23 = (__int64 *)((char *)a2 + 128);
    if ( a6 )
    {
      EtwTranslationUpdateOffset(*(_QWORD *)a2, (unsigned int)*((_QWORD *)a2 + 19), HIDWORD(*((_QWORD *)a2 + 19)));
      EtwTranslationUpdate(
        *(_QWORD *)a2,
        (unsigned int)a4->left,
        (unsigned int)a4->top,
        (unsigned int)a4->right,
        a4->bottom);
      v32 = v49;
      v33 = METAREGION::vApplyMoveData(
              (struct SFMLOGICALSURFACE *)((char *)a2 + 128),
              (struct _RECTL *)a2 + 7,
              (struct _POINTL *)a2 + 13,
              *((struct REGION **)a2 + 12));
      *v23 = v32;
      if ( v33 )
        METAREGION::vCalculateNoMoveDirty((struct SFMLOGICALSURFACE *)((char *)a2 + 128));
      goto LABEL_26;
    }
    EtwDirtyRectUpdate(
      *(_QWORD *)a2,
      (unsigned int)a4->left,
      (unsigned int)a4->top,
      (unsigned int)a4->right,
      a4->bottom);
    v24 = *((_DWORD *)a2 + 42) == 0;
    *v23 = v49;
    if ( v24 )
    {
LABEL_26:
      v25 = *((_DWORD *)a2 + 63);
      if ( (v25 & 2) == 0 )
      {
        *((_DWORD *)a2 + 63) = v25 | 2;
        *v43 |= 1u;
      }
LABEL_28:
      if ( *((_QWORD *)a2 + 10) )
      {
        v42 = *((_QWORD *)a2 + 10);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v50, (struct RGNOBJ *)&v42, (struct RGNOBJ *)&v45, 0xEu) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v50, (struct RGNOBJ *)&v42);
          v26 = *(_QWORD *)a2;
          *((_QWORD *)a2 + 10) = v42;
          EtwTraceLifetimeAccum(v26, 1LL);
        }
        if ( !v9 && *(_DWORD *)(v42 + 84) != 1 && *(_DWORD *)(v42 + 80) <= 0x38u )
        {
          v53 = 0LL;
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v40);
          if ( v40 )
          {
            v27 = (REGION *)*((_QWORD *)a2 + 10);
            v53 = *(struct _RECTL *)(v42 + 96);
            REGION::vDeleteREGION(v27);
            RGNOBJ::vSet((RGNOBJ *)&v40, &v53);
            v28 = *(_QWORD *)a2;
            *((_QWORD *)a2 + 10) = v40;
            EtwTraceLifetimeAccum(v28, 1LL);
          }
          if ( (_DWORD)v41 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v40);
        }
      }
      v7 = v43;
      goto LABEL_39;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v52);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v52);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v40);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v40);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v42);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v42);
    v44 = *((_QWORD *)a2 + 20);
    if ( RGNOBJ::bCopy((RGNOBJ *)&v40, (struct RGNOBJ *)&v44)
      && RGNOBJ::bOffset((RGNOBJ *)&v40, (struct _POINTL *)a2 + 19) )
    {
      RGNOBJ::vSet((RGNOBJ *)&v52, a4);
      if ( !*(_QWORD *)&v52.left
        || !v40
        || !v42
        || !RGNOBJ::iCombine((RGNOBJ *)&v42, (struct RGNOBJ *)&v52, (struct RGNOBJ *)&v40, 1)
        || (v53 = *(struct _RECTL *)(v42 + 96), ERECTL::bEmpty((ERECTL *)&v53))
        || (unsigned int)METAREGION::bTrimMoveWithRegion(
                           (struct SFMLOGICALSURFACE *)((char *)a2 + 128),
                           *(struct REGION **)&v52.left,
                           1) )
      {
LABEL_85:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v42);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v40);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v52);
        if ( !*((_DWORD *)a2 + 42) )
          goto LABEL_26;
        v42 = *v23;
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v52);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v40);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v40);
        v34 = (REGION *)*((_QWORD *)a2 + 17);
        v44 = *((_QWORD *)a2 + 20);
        if ( v34 )
        {
          REGION::vDeleteREGION(v34);
          *((_QWORD *)a2 + 17) = 0LL;
        }
        if ( RGNOBJ::bCopy((RGNOBJ *)&v40, (struct RGNOBJ *)&v44)
          && RGNOBJ::bOffset((RGNOBJ *)&v40, (struct _POINTL *)a2 + 19) )
        {
          RGNOBJ::vSet((RGNOBJ *)&v52);
          if ( v42
            && v40
            && *(_QWORD *)&v52.left
            && RGNOBJ::iCombine((RGNOBJ *)&v52, (struct RGNOBJ *)&v42, (struct RGNOBJ *)&v40, 4) )
          {
            *((_QWORD *)a2 + 17) = *(_QWORD *)&v52.left;
          }
          else
          {
            METAREGION::vClearMoveData((struct SFMLOGICALSURFACE *)((char *)a2 + 128), 1);
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v52);
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v40);
          if ( v52.right != 1 )
            goto LABEL_26;
        }
        else
        {
          METAREGION::vClearMoveData((struct SFMLOGICALSURFACE *)((char *)a2 + 128), 1);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v40);
          if ( v52.right != 1 )
            goto LABEL_26;
        }
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v52);
        goto LABEL_26;
      }
      EtwLogicalSurfRemovedTranslationFromDirtyEvent(
        *((_QWORD *)a2 + 22),
        (unsigned int)a4->left,
        (unsigned int)a4->top,
        (unsigned int)a4->right,
        a4->bottom);
      EtwTraceMoveRegion(*((_QWORD *)a2 + 20), 0LL, 0LL, *((_QWORD *)a2 + 20));
    }
    METAREGION::vClearMoveData((struct SFMLOGICALSURFACE *)((char *)a2 + 128), 1);
    goto LABEL_85;
  }
LABEL_39:
  v29 = *((_DWORD *)a2 + 63);
  if ( (v29 & 0x20) != 0 )
  {
    if ( (v29 & 4) != 0 )
    {
      *v7 |= 2u;
      v29 = *((_DWORD *)a2 + 63);
    }
    *((_DWORD *)a2 + 63) = v29 & 0xFFFFFFDF;
  }
  if ( a1 )
  {
    if ( (*((_DWORD *)a1 + 41) & 2) != 0 && (*v7 & 1) != 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13, v12, v14);
      if ( CurrentProcessWin32Process )
      {
        v38 = *(_DWORD *)(CurrentProcessWin32Process + 288);
        if ( (v38 & 4) == 0 )
        {
          v39 = v38 | 4;
          *(_DWORD *)(CurrentProcessWin32Process + 288) = v39;
          if ( (unsigned int)dword_1C032A3F8 > 5
            && (qword_1C032A408 & 0x400000000000LL) != 0
            && (qword_1C032A410 & 0x400000000000LL) == qword_1C032A410 )
          {
            v44 = 0x2000000LL;
            LODWORD(v42) = 1;
            LODWORD(v43) = 1;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              v39,
              (unsigned int)&unk_1C02F29FA,
              v36,
              v37,
              (__int64)&v43,
              (__int64)&v42,
              (__int64)&v44);
          }
        }
      }
    }
  }
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v50);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v50);
  if ( v51 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v50);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v47);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v47);
  if ( v48 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v47);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v45);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v45);
  if ( v46 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v45);
}
