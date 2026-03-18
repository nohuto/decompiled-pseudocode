/*
 * XREFs of ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C0079870
 * Callers:
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C0029AD8 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C0053B00 (GreTransferSpriteStateToDwmState.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C007C1E0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026F0D4 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C026F474 (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C026FE1C (GreAddBitmapD3DDirtyRgn.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C001D0B8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C002B110 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C0071268 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C011B8F8 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C026E598 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z @ 0x1C02C193C (-bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z.c)
 *     ?vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z @ 0x1C02C1CC8 (-vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z.c)
 *     ?vCalculateNoMoveDirty@METAREGION@@AEAAXXZ @ 0x1C02C2008 (-vCalculateNoMoveDirty@METAREGION@@AEAAXXZ.c)
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
  __int64 v12; // rcx
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 *v21; // rsi
  bool v22; // zf
  int v23; // eax
  __int64 v24; // rcx
  REGION *v25; // rcx
  __int64 v26; // rcx
  int v27; // eax
  LONG v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // rdi
  int v31; // eax
  REGION *v32; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v34; // r8d
  int v35; // r9d
  int v36; // ecx
  int v37; // ecx
  __int64 v38; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v39; // [rsp+50h] [rbp-B8h]
  __int64 v40; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int *v41; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+70h] [rbp-98h] BYREF
  __int64 v43; // [rsp+78h] [rbp-90h] BYREF
  int v44; // [rsp+80h] [rbp-88h]
  __int64 v45; // [rsp+88h] [rbp-80h] BYREF
  int v46; // [rsp+90h] [rbp-78h]
  __int64 v47; // [rsp+98h] [rbp-70h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-68h] BYREF
  int v49; // [rsp+A8h] [rbp-60h]
  struct _RECTL v50; // [rsp+B0h] [rbp-58h] BYREF
  struct _RECTL v51; // [rsp+C0h] [rbp-48h] BYREF

  v7 = a5;
  v9 = 0;
  v41 = a5;
  if ( !*((_QWORD *)a2 + 16) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v51);
    v22 = v51.right == 1;
    *((_QWORD *)a2 + 16) = *(_QWORD *)&v51.left;
    if ( v22 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v51);
  }
  if ( !*((_QWORD *)a2 + 10) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v51);
    v29 = *(_QWORD *)a2;
    *((_QWORD *)a2 + 10) = *(_QWORD *)&v51.left;
    EtwTraceLifetimeAccum(v29, 1LL);
    v9 = 1;
    if ( v51.right == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v51);
  }
  if ( !*((_QWORD *)a2 + 23) )
  {
    v40 = *((_QWORD *)a2 + 16);
    RGNOBJ::vSet((RGNOBJ *)&v40);
    if ( *((_QWORD *)a2 + 10) )
    {
      v42 = *((_QWORD *)a2 + 10);
      RGNOBJ::vSet((RGNOBJ *)&v42);
      EtwTraceLifetimeAccum(*(_QWORD *)a2, 1LL);
    }
  }
  v47 = *((_QWORD *)a2 + 16);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v43);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v43);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v45);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v45);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v48);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v48);
  if ( v47 && v43 && v45 && v48 )
  {
    v13 = 0;
    RGNOBJ::vSet((RGNOBJ *)&v43, a4);
    if ( (*((_DWORD *)a2 + 63) & 1) == 0 )
      goto LABEL_113;
    if ( !a3 )
      goto LABEL_113;
    LOBYTE(v14) = 1;
    v15 = HmgShareLockEx(a3, v14, 0LL);
    v16 = v15;
    if ( !v15 )
      goto LABEL_113;
    if ( (*(_DWORD *)(v15 + 36) & 1) != 0 )
    {
      v17 = *(_QWORD *)(v15 + 1152);
      if ( !v17
        || (*(_DWORD *)(v15 + 40) & 2) == 0
        || (v22 = (unsigned int)DC::bDpiScaledSurface((DC *)v15) == 0, v18 = v17, v22) )
      {
        v18 = *(_QWORD *)(v16 + 1136);
      }
      if ( v18 )
      {
        if ( !v17 || (*(_DWORD *)(v16 + 40) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface((DC *)v16) )
          v19 = *(_QWORD *)(v16 + 1136);
      }
      else if ( !*(_QWORD *)(v16 + 1144)
             || (*(_DWORD *)(v16 + 40) & 2) == 0
             || !(unsigned int)DC::bDpiScaledSurface((DC *)v16) )
      {
        v19 = *(_QWORD *)(v16 + 1128);
      }
      v42 = v19;
      if ( v19 )
      {
        if ( RGNOBJ::bMerge((RGNOBJ *)&v45, (struct RGNOBJ *)&v42, (struct RGNOBJ *)&v43, 8u) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v45, (struct RGNOBJ *)&v43);
          v13 = 1;
        }
        else
        {
          RGNOBJ::vSet((RGNOBJ *)&v45);
        }
      }
    }
    v20 = *(_QWORD *)v16;
    LODWORD(v40) = 0;
    HmgDecrementShareReferenceCountEx(v16, &v40);
    if ( (_DWORD)v40 )
      bDeleteDCInternalEx(v20, 0LL);
    if ( !v13 )
    {
LABEL_113:
      if ( !a1 )
        goto LABEL_72;
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v38);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v38);
      v50.right = *((_DWORD *)a1 + 16) - *((_DWORD *)a1 + 14);
      v28 = *((_DWORD *)a1 + 17) - *((_DWORD *)a1 + 15);
      *(_QWORD *)&v50.left = 0LL;
      v50.bottom = v28;
      if ( v38 )
      {
        RGNOBJ::vSet((RGNOBJ *)&v38, &v50);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v45, (struct RGNOBJ *)&v43, (struct RGNOBJ *)&v38, 8u) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v45, (struct RGNOBJ *)&v43);
          v13 = 1;
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v38);
      if ( !v13 )
LABEL_72:
        RGNOBJ::vSet((RGNOBJ *)&v43);
    }
    if ( !RGNOBJ::bMerge((RGNOBJ *)&v45, (struct RGNOBJ *)&v47, (struct RGNOBJ *)&v43, 0xEu) )
      goto LABEL_28;
    RGNOBJ::vSwap((RGNOBJ *)&v45, (struct RGNOBJ *)&v47);
    v21 = (__int64 *)((char *)a2 + 128);
    if ( a6 )
    {
      EtwTranslationUpdateOffset(*(_QWORD *)a2, (unsigned int)*((_QWORD *)a2 + 19), HIDWORD(*((_QWORD *)a2 + 19)));
      EtwTranslationUpdate(
        *(_QWORD *)a2,
        (unsigned int)a4->left,
        (unsigned int)a4->top,
        (unsigned int)a4->right,
        a4->bottom);
      v30 = v47;
      v31 = METAREGION::vApplyMoveData(
              (struct SFMLOGICALSURFACE *)((char *)a2 + 128),
              (struct _RECTL *)a2 + 7,
              (struct _POINTL *)a2 + 13,
              *((struct REGION **)a2 + 12));
      *v21 = v30;
      if ( v31 )
        METAREGION::vCalculateNoMoveDirty((struct SFMLOGICALSURFACE *)((char *)a2 + 128));
      goto LABEL_26;
    }
    EtwDirtyRectUpdate(
      *(_QWORD *)a2,
      (unsigned int)a4->left,
      (unsigned int)a4->top,
      (unsigned int)a4->right,
      a4->bottom);
    v22 = *((_DWORD *)a2 + 42) == 0;
    *v21 = v47;
    if ( v22 )
    {
LABEL_26:
      v23 = *((_DWORD *)a2 + 63);
      if ( (v23 & 2) == 0 )
      {
        *((_DWORD *)a2 + 63) = v23 | 2;
        *v41 |= 1u;
      }
LABEL_28:
      if ( *((_QWORD *)a2 + 10) )
      {
        v40 = *((_QWORD *)a2 + 10);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v48, (struct RGNOBJ *)&v40, (struct RGNOBJ *)&v43, 0xEu) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v48, (struct RGNOBJ *)&v40);
          v24 = *(_QWORD *)a2;
          *((_QWORD *)a2 + 10) = v40;
          EtwTraceLifetimeAccum(v24, 1LL);
        }
        if ( !v9 && *(_DWORD *)(v40 + 84) != 1 && *(_DWORD *)(v40 + 80) <= 0x38u )
        {
          v51 = 0LL;
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v38);
          if ( v38 )
          {
            v25 = (REGION *)*((_QWORD *)a2 + 10);
            v51 = *(struct _RECTL *)(v40 + 96);
            REGION::vDeleteREGION(v25);
            RGNOBJ::vSet((RGNOBJ *)&v38, &v51);
            v26 = *(_QWORD *)a2;
            *((_QWORD *)a2 + 10) = v38;
            EtwTraceLifetimeAccum(v26, 1LL);
          }
          if ( (_DWORD)v39 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v38);
        }
      }
      v7 = v41;
      goto LABEL_39;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v50);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v50);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v38);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v38);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v40);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v40);
    v42 = *((_QWORD *)a2 + 20);
    if ( RGNOBJ::bCopy((RGNOBJ *)&v38, (struct RGNOBJ *)&v42)
      && RGNOBJ::bOffset((RGNOBJ *)&v38, (struct _POINTL *)a2 + 19) )
    {
      RGNOBJ::vSet((RGNOBJ *)&v50, a4);
      if ( !*(_QWORD *)&v50.left
        || !v38
        || !v40
        || !RGNOBJ::iCombine((RGNOBJ *)&v40, (struct RGNOBJ *)&v50, (struct RGNOBJ *)&v38, 1)
        || (v51 = *(struct _RECTL *)(v40 + 96), ERECTL::bEmpty((ERECTL *)&v51))
        || (unsigned int)METAREGION::bTrimMoveWithRegion(
                           (struct SFMLOGICALSURFACE *)((char *)a2 + 128),
                           *(struct REGION **)&v50.left,
                           1) )
      {
LABEL_85:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v40);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v38);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v50);
        if ( !*((_DWORD *)a2 + 42) )
          goto LABEL_26;
        v40 = *v21;
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v50);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v38);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v38);
        v32 = (REGION *)*((_QWORD *)a2 + 17);
        v42 = *((_QWORD *)a2 + 20);
        if ( v32 )
        {
          REGION::vDeleteREGION(v32);
          *((_QWORD *)a2 + 17) = 0LL;
        }
        if ( RGNOBJ::bCopy((RGNOBJ *)&v38, (struct RGNOBJ *)&v42)
          && RGNOBJ::bOffset((RGNOBJ *)&v38, (struct _POINTL *)a2 + 19) )
        {
          RGNOBJ::vSet((RGNOBJ *)&v50);
          if ( v40
            && v38
            && *(_QWORD *)&v50.left
            && RGNOBJ::iCombine((RGNOBJ *)&v50, (struct RGNOBJ *)&v40, (struct RGNOBJ *)&v38, 4) )
          {
            *((_QWORD *)a2 + 17) = *(_QWORD *)&v50.left;
          }
          else
          {
            METAREGION::vClearMoveData((struct SFMLOGICALSURFACE *)((char *)a2 + 128), 1);
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v50);
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v38);
          if ( v50.right != 1 )
            goto LABEL_26;
        }
        else
        {
          METAREGION::vClearMoveData((struct SFMLOGICALSURFACE *)((char *)a2 + 128), 1);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v38);
          if ( v50.right != 1 )
            goto LABEL_26;
        }
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v50);
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
  v27 = *((_DWORD *)a2 + 63);
  if ( (v27 & 0x20) != 0 )
  {
    if ( (v27 & 4) != 0 )
    {
      *v7 |= 2u;
      v27 = *((_DWORD *)a2 + 63);
    }
    *((_DWORD *)a2 + 63) = v27 & 0xFFFFFFDF;
  }
  if ( a1 )
  {
    if ( (*((_DWORD *)a1 + 41) & 2) != 0 && (*v7 & 1) != 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
      if ( CurrentProcessWin32Process )
      {
        v36 = *(_DWORD *)(CurrentProcessWin32Process + 288);
        if ( (v36 & 4) == 0 )
        {
          v37 = v36 | 4;
          *(_DWORD *)(CurrentProcessWin32Process + 288) = v37;
          if ( (unsigned int)dword_1C032B3F8 > 5
            && (qword_1C032B408 & 0x400000000000LL) != 0
            && (qword_1C032B410 & 0x400000000000LL) == qword_1C032B410 )
          {
            v42 = 0x2000000LL;
            LODWORD(v40) = 1;
            LODWORD(v41) = 1;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              v37,
              (unsigned int)&unk_1C02F33EA,
              v34,
              v35,
              (__int64)&v41,
              (__int64)&v40,
              (__int64)&v42);
          }
        }
      }
    }
  }
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v48);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v48);
  if ( v49 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v48);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v45);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v45);
  if ( v46 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v45);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v43);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v43);
  if ( v44 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v43);
}
