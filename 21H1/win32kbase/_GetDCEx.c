/*
 * XREFs of _GetDCEx @ 0x1C0086DA0
 * Callers:
 *     UserGetDesktopDC @ 0x1C0031E28 (UserGetDesktopDC.c)
 *     _GetDC @ 0x1C00400A0 (_GetDC.c)
 *     UserGetMonitorDC @ 0x1C006A2F0 (UserGetMonitorDC.c)
 *     NtUserGetDC @ 0x1C0089A70 (NtUserGetDC.c)
 * Callees:
 *     IsCalcVisRgnSupported @ 0x1C002CFB0 (IsCalcVisRgnSupported.c)
 *     IsGreSelectFontSupported @ 0x1C002CFDC (IsGreSelectFontSupported.c)
 *     IsSpbCheckDceSupported @ 0x1C002E1D8 (IsSpbCheckDceSupported.c)
 *     IsDeleteHrgnClipSupported @ 0x1C0031AF4 (IsDeleteHrgnClipSupported.c)
 *     GreSetLayout @ 0x1C006A460 (GreSetLayout.c)
 *     IsGreSelectRedirectionBitmapSupported @ 0x1C006C4C4 (IsGreSelectRedirectionBitmapSupported.c)
 *     DestroyCacheDC @ 0x1C006C4F0 (DestroyCacheDC.c)
 *     bDeleteDCInternalEx @ 0x1C006D2D0 (bDeleteDCInternalEx.c)
 *     GreGetStockObject @ 0x1C006DD20 (GreGetStockObject.c)
 *     GreOffsetRgn @ 0x1C0076320 (GreOffsetRgn.c)
 *     DelayedDestroyCacheDC @ 0x1C0076CDC (DelayedDestroyCacheDC.c)
 *     GreUnlockVisRgn @ 0x1C007A540 (GreUnlockVisRgn.c)
 *     GreCreateRectRgnIndirect @ 0x1C007CB20 (GreCreateRectRgnIndirect.c)
 *     GreCombineRgn @ 0x1C007DB50 (GreCombineRgn.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C008034C (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0082DC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0083290 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0083F70 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleEntryDirectory@@QEAAPEAVOBJECT@@I@Z @ 0x1C00840B0 (-GetEntryObject@GdiHandleEntryDirectory@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00841C0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00854A0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C0089390 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     GreSetDCOwnerEx @ 0x1C0089500 (GreSetDCOwnerEx.c)
 *     GreValidateVisrgn @ 0x1C008CBA0 (GreValidateVisrgn.c)
 *     GreSelectVisRgn @ 0x1C008CC10 (GreSelectVisRgn.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008CC7C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreIsRendering @ 0x1C0090860 (GreIsRendering.c)
 *     CreateEmptyRgnPublic @ 0x1C00A8220 (CreateEmptyRgnPublic.c)
 *     CreateCacheDC @ 0x1C00A8290 (CreateCacheDC.c)
 *     GreSetRectRgn @ 0x1C00A97A0 (GreSetRectRgn.c)
 *     HmgMarkUndeletable @ 0x1C00A9F30 (HmgMarkUndeletable.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C01566C8 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0156780 (McTemplateK0pz_EtwWriteTransfer.c)
 *     IsFlushWEFCOMPOSITEDDCEBoundsSupported @ 0x1C01FDA54 (IsFlushWEFCOMPOSITEDDCEBoundsSupported.c)
 */

__int64 __fastcall GetDCEx(_QWORD *a1, HRGN a2, unsigned int a3)
{
  unsigned int v4; // r15d
  const wchar_t *v5; // rcx
  struct _ERESOURCE *v6; // rbx
  const wchar_t *v7; // rcx
  struct _ERESOURCE *v8; // rbx
  const wchar_t *v9; // rcx
  __int64 v10; // r14
  __int64 v11; // r12
  _QWORD *v12; // rdx
  char v13; // al
  int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // r8
  _QWORD *v17; // r10
  char v18; // r9
  unsigned int v19; // ecx
  __int64 v20; // rdi
  __int64 v21; // r13
  _QWORD *v22; // r9
  HRGN v23; // r13
  unsigned int v24; // r13d
  __int64 v25; // r15
  _QWORD *v26; // r12
  __int64 v27; // r15
  __int64 v28; // rdi
  struct OBJECT *EntryObject; // r14
  unsigned int v30; // ebx
  _DWORD *v31; // rsi
  GdiHandleManager *v32; // rbx
  unsigned int v33; // eax
  GdiHandleManager *v34; // rbx
  unsigned int v35; // eax
  __int64 v36; // r8
  unsigned __int64 v37; // rdx
  unsigned int v38; // r9d
  __int64 v39; // rcx
  __int64 v40; // r10
  _DWORD *v41; // rdx
  unsigned int v42; // eax
  __int64 v43; // r10
  unsigned int v44; // edx
  unsigned int v45; // r8d
  __int64 v46; // rcx
  __int64 v47; // r10
  int v48; // ebx
  int v49; // eax
  bool v50; // zf
  _QWORD *v51; // rbx
  __int64 v52; // r12
  __int64 v53; // r14
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  GdiHandleManager *v57; // rsi
  unsigned int v58; // ebx
  __int64 v59; // rsi
  unsigned int v60; // edx
  __int64 v61; // rcx
  __int64 v62; // rsi
  unsigned __int16 *v63; // rdi
  __int64 v64; // r15
  unsigned __int64 v65; // r13
  char v66; // al
  unsigned int v67; // ebx
  __int64 v68; // rdx
  unsigned int v69; // r8d
  __int64 v70; // rcx
  __int64 v71; // r9
  unsigned int v72; // ebx
  GdiHandleManager *v73; // rsi
  __int64 v74; // rdx
  unsigned int v75; // r8d
  __int64 v76; // rcx
  __int64 v77; // r9
  _DWORD *v78; // rdx
  unsigned int v79; // ebx
  __int64 v80; // rdx
  unsigned int v81; // r8d
  __int64 v82; // rcx
  __int64 v83; // r10
  int v84; // ebx
  unsigned __int8 v85; // cl
  int v86; // edx
  __int64 v87; // r15
  __int64 v88; // r14
  __int64 v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // rcx
  GdiHandleManager *v92; // rsi
  unsigned int v93; // ebx
  __int64 v94; // rsi
  unsigned int v95; // edx
  __int64 v96; // rcx
  __int64 v97; // rsi
  unsigned __int16 *v98; // rdi
  __int64 v99; // r13
  char v100; // al
  unsigned int v101; // ebx
  __int64 v102; // rdx
  unsigned int v103; // r8d
  __int64 v104; // rcx
  __int64 v105; // r9
  unsigned int v106; // ebx
  GdiHandleManager *v107; // rdi
  __int64 v108; // rdx
  unsigned int v109; // r8d
  __int64 v110; // rcx
  __int64 v111; // r9
  _DWORD *v112; // rdx
  unsigned int v113; // ebx
  __int64 v114; // rdx
  unsigned int v115; // r8d
  __int64 v116; // rcx
  __int64 v117; // r10
  HDC v118; // r15
  unsigned int v119; // ebx
  __int64 v120; // rcx
  __int64 v121; // rdx
  __int64 v122; // rcx
  GdiHandleManager *v123; // rsi
  __int64 v124; // rsi
  unsigned int v125; // edx
  __int64 v126; // rcx
  __int64 v127; // rsi
  unsigned __int16 *v128; // rdi
  __int64 v129; // r12
  unsigned __int64 v130; // r13
  char v131; // al
  unsigned int v132; // ebx
  GdiHandleManager *v133; // rdi
  __int64 v134; // rdx
  unsigned int v135; // r8d
  __int64 v136; // rcx
  __int64 v137; // r9
  _DWORD *v138; // rdx
  unsigned int v139; // ebx
  __int64 v140; // rdx
  unsigned int v141; // r8d
  __int64 v142; // rcx
  __int64 v143; // r10
  unsigned int v144; // ebx
  __int64 v145; // r14
  __int64 v146; // r15
  __int64 v147; // rsi
  __int64 v148; // rcx
  __int64 v149; // rdx
  __int64 v150; // rcx
  GdiHandleManager *v151; // r14
  unsigned int v152; // ebx
  __int64 v153; // r14
  unsigned int v154; // edx
  __int64 v155; // rcx
  __int64 v156; // r14
  unsigned __int16 *v157; // rdi
  __int64 v158; // r13
  char v159; // al
  unsigned int v160; // ebx
  __int64 v161; // rdx
  unsigned int v162; // r8d
  __int64 v163; // rcx
  __int64 v164; // r9
  unsigned int v165; // ebx
  GdiHandleManager *v166; // rdi
  __int64 v167; // rdx
  unsigned int v168; // r8d
  __int64 v169; // rcx
  __int64 v170; // r9
  _DWORD *v171; // rdx
  unsigned int v172; // ebx
  __int64 v173; // rdx
  unsigned int v174; // r8d
  __int64 v175; // rcx
  __int64 v176; // r10
  __int64 v177; // rax
  unsigned __int64 v178; // xmm0_8
  HDC v179; // r15
  unsigned int v180; // ebx
  __int64 v181; // rcx
  __int64 v182; // rdx
  __int64 v183; // rcx
  GdiHandleManager *v184; // r14
  __int64 v185; // r14
  unsigned int v186; // edx
  __int64 v187; // rcx
  __int64 v188; // r14
  unsigned __int16 *v189; // rdi
  __int64 v190; // r12
  unsigned __int64 v191; // r13
  char v192; // al
  unsigned int v193; // ebx
  GdiHandleManager *v194; // rdi
  __int64 v195; // rdx
  unsigned int v196; // r8d
  __int64 v197; // rcx
  __int64 v198; // r9
  _DWORD *v199; // rdx
  unsigned int v200; // ebx
  __int64 v201; // rdx
  unsigned int v202; // r8d
  __int64 v203; // rcx
  __int64 v204; // r10
  __int64 v205; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v207; // rdi
  __int64 v208; // rdx
  __int64 v209; // rcx
  __int64 *v210; // rax
  __int64 v211; // r15
  __int64 v212; // rsi
  __int64 v213; // rcx
  __int64 v214; // rdx
  __int64 v215; // rcx
  GdiHandleManager *v216; // r14
  unsigned int v217; // ebx
  __int64 v218; // r14
  unsigned int v219; // edx
  __int64 v220; // rcx
  __int64 v221; // r14
  unsigned __int16 *v222; // rdi
  __int64 v223; // r13
  char v224; // al
  unsigned int v225; // ebx
  __int64 v226; // rdx
  unsigned int v227; // r8d
  __int64 v228; // rcx
  __int64 v229; // r9
  unsigned int v230; // ebx
  GdiHandleManager *v231; // rdi
  __int64 v232; // rdx
  unsigned int v233; // r8d
  __int64 v234; // rcx
  __int64 v235; // r9
  _DWORD *v236; // rdx
  unsigned int v237; // ebx
  __int64 v238; // rdx
  unsigned int v239; // r8d
  __int64 v240; // rcx
  __int64 v241; // r10
  __int64 v242; // rcx
  int v243; // r8d
  HDC v244; // r15
  unsigned int v245; // ebx
  __int64 v246; // rcx
  __int64 v247; // rdx
  __int64 v248; // rcx
  GdiHandleManager *v249; // r14
  __int64 v250; // r14
  unsigned int v251; // edx
  __int64 v252; // rcx
  __int64 v253; // r14
  unsigned __int16 *v254; // rdi
  __int64 v255; // r12
  unsigned __int64 v256; // r13
  char v257; // al
  unsigned int v258; // ebx
  GdiHandleManager *v259; // rdi
  __int64 v260; // rdx
  unsigned int v261; // r8d
  __int64 v262; // rcx
  __int64 v263; // r9
  _DWORD *v264; // rdx
  unsigned int v265; // ebx
  __int64 v266; // rdx
  unsigned int v267; // r8d
  __int64 v268; // rcx
  __int64 v269; // r10
  _QWORD *v270; // rdi
  __int64 v271; // rbx
  int v272; // ecx
  __int64 v273; // rcx
  int v274; // ecx
  __int64 v275; // rcx
  __int64 v276; // rcx
  void *StockObject; // rdx
  HRGN v279; // rdi
  struct HOBJ__ *v280; // rax
  int v281; // ecx
  HRGN v282; // rax
  __int64 v283; // rdx
  _QWORD *v284; // r9
  HRGN v285; // rdx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v287; // rcx
  __int64 v288; // rax
  __int64 ThreadWin32Thread; // rax
  int v290; // eax
  __int64 CurrentProcess; // rax
  __int64 v292; // rcx
  __int64 CurrentThreadProcess; // rax
  GdiHandleManager *v294; // rbx
  unsigned int v295; // eax
  __int64 v296; // r9
  unsigned __int64 v297; // rdx
  unsigned int v298; // r8d
  __int64 v299; // rcx
  __int64 v300; // r10
  __int64 v301; // rdx
  __int64 v302; // rax
  __int64 v303; // rcx
  __int64 v304; // rax
  GdiHandleManager *v305; // rbx
  unsigned int v306; // eax
  struct OBJECT *v307; // rax
  __int64 v308; // rax
  __int64 v309; // rcx
  __int64 v310; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v311; // rdx
  unsigned int v312; // ecx
  struct HOBJ__ *RectRgnIndirect; // rax
  int v314; // ecx
  HRGN v315; // rax
  __int64 v316; // rax
  __int64 v317; // rcx
  __int64 v318; // rax
  GdiHandleManager *v319; // rbx
  unsigned int v320; // eax
  struct OBJECT *v321; // rax
  __int64 v322; // rax
  __int64 v323; // rcx
  __int64 v324; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v325; // rdx
  unsigned int v326; // ecx
  __int64 v327; // rax
  int ProcessSessionId; // ebx
  __int64 v329; // rcx
  __int64 v330; // rax
  __int64 v331; // rax
  __int64 v332; // rcx
  __int64 v333; // rax
  GdiHandleManager *v334; // rbx
  unsigned int v335; // eax
  struct OBJECT *v336; // rax
  __int64 v337; // rax
  __int64 v338; // rcx
  __int64 v339; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v340; // rdx
  unsigned int v341; // ecx
  const wchar_t *v342; // [rsp+20h] [rbp-E0h]
  __int64 v343; // [rsp+28h] [rbp-D8h]
  __int64 v344; // [rsp+30h] [rbp-D0h]
  __int64 v345; // [rsp+38h] [rbp-C8h]
  __int64 v346; // [rsp+38h] [rbp-C8h]
  __int64 v347; // [rsp+38h] [rbp-C8h]
  __int64 v348; // [rsp+38h] [rbp-C8h]
  __int64 v349; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v350; // [rsp+40h] [rbp-C0h]
  HDC v351; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v352; // [rsp+40h] [rbp-C0h]
  HDC v353; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v354; // [rsp+40h] [rbp-C0h]
  HDC v355; // [rsp+40h] [rbp-C0h]
  __int64 v356; // [rsp+48h] [rbp-B8h]
  unsigned int v357; // [rsp+50h] [rbp-B0h]
  BOOL v358; // [rsp+54h] [rbp-ACh]
  BOOL v359; // [rsp+58h] [rbp-A8h]
  int v360; // [rsp+5Ch] [rbp-A4h]
  BOOL v361; // [rsp+60h] [rbp-A0h]
  __int64 v362; // [rsp+68h] [rbp-98h]
  _QWORD *v363; // [rsp+70h] [rbp-90h]
  HRGN v364; // [rsp+78h] [rbp-88h] BYREF
  __int64 v365; // [rsp+80h] [rbp-80h]
  __int64 v366; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v367; // [rsp+90h] [rbp-70h] BYREF
  int v368; // [rsp+98h] [rbp-68h]
  int v369; // [rsp+9Ch] [rbp-64h]
  _QWORD v370[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v371; // [rsp+B8h] [rbp-48h] BYREF
  int v372; // [rsp+C0h] [rbp-40h]
  __int64 v373; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v374; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v375; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v376; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v377; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v378; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v379; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v380[2]; // [rsp+108h] [rbp+8h] BYREF
  unsigned __int16 *v381; // [rsp+118h] [rbp+18h] BYREF
  int v382; // [rsp+120h] [rbp+20h]
  int v383; // [rsp+124h] [rbp+24h]
  unsigned __int16 *v384; // [rsp+130h] [rbp+30h] BYREF
  int v385; // [rsp+138h] [rbp+38h]
  int v386; // [rsp+13Ch] [rbp+3Ch]
  unsigned __int16 *v387; // [rsp+148h] [rbp+48h] BYREF
  int v388; // [rsp+150h] [rbp+50h]
  int v389; // [rsp+154h] [rbp+54h]
  unsigned __int16 *v390; // [rsp+160h] [rbp+60h] BYREF
  int v391; // [rsp+168h] [rbp+68h]
  int v392; // [rsp+16Ch] [rbp+6Ch]
  unsigned __int16 *v393; // [rsp+178h] [rbp+78h] BYREF
  int v394; // [rsp+180h] [rbp+80h]
  int v395; // [rsp+184h] [rbp+84h]
  unsigned __int16 *v396; // [rsp+190h] [rbp+90h] BYREF
  int v397; // [rsp+198h] [rbp+98h]
  int v398; // [rsp+19Ch] [rbp+9Ch]
  _QWORD *v399; // [rsp+200h] [rbp+100h]
  HRGN EmptyRgnPublic; // [rsp+208h] [rbp+108h]
  unsigned int v401; // [rsp+210h] [rbp+110h]
  int v402; // [rsp+218h] [rbp+118h]
  __int64 v403; // [rsp+218h] [rbp+118h]
  __int64 v404; // [rsp+218h] [rbp+118h]

  v401 = a3;
  EmptyRgnPublic = a2;
  v4 = a3;
  v364 = 0LL;
  v363 = 0LL;
  v365 = 0LL;
  v402 = 0;
  v360 = 0;
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  v5 = L"ghsemDynamicModeChange";
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
  {
    v342 = L"ghsemDynamicModeChange";
    McTemplateK0pz_EtwWriteTransfer(
      (unsigned int)L"ghsemDynamicModeChange",
      (unsigned int)&LockAcquireShared,
      a3,
      (__int64)ghsemDynamicModeChange);
  }
  v6 = (struct _ERESOURCE *)ghsemGreLock;
  if ( ghsemGreLock )
  {
    PsEnterPriorityRegion(v5);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v6);
  }
  v7 = L"ghsemGreLock";
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(
      (unsigned int)L"ghsemGreLock",
      (_DWORD)a2,
      a3,
      (_DWORD)ghsemGreLock,
      2,
      (__int64)L"ghsemGreLock");
  v8 = (struct _ERESOURCE *)ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    PsEnterPriorityRegion(v7);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v8);
  }
  v9 = L"ghsemDCVisRgn";
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(
      (unsigned int)L"ghsemDCVisRgn",
      (_DWORD)a2,
      a3,
      (_DWORD)ghsemDCVisRgn,
      3,
      (__int64)L"ghsemDCVisRgn");
  if ( !a1 )
  {
    v9 = *(const wchar_t **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 448);
    a1 = *(_QWORD **)(*((_QWORD *)v9 + 1) + 24LL);
  }
  v399 = a1;
  v10 = 0LL;
  v356 = (__int64)a1;
  v11 = (__int64)a1;
  v12 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v9 = (const wchar_t *)v12[5];
      v13 = *((_BYTE *)v9 + 31);
      if ( (v13 & 0x10) == 0 || (v13 & 0x20) != 0 && v12 != a1 )
        break;
      if ( (v9[21] & 0x3FFF) != 0x29D )
      {
        v12 = (_QWORD *)v12[13];
        if ( v12 )
          continue;
      }
      goto LABEL_17;
    }
    v14 = 0;
    v366 = 0LL;
  }
  else
  {
LABEL_17:
    v14 = 1;
    v366 = 1LL;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 12) & 0x200) != 0 )
    DelayedDestroyCacheDC(0, v15, v16);
  if ( (v4 & 0x10000) != 0 )
  {
    v15 = v4 & 0xFFFFFFC7;
    if ( (v4 & 1) != 0 )
    {
      v4 = v15 | 0x10;
      if ( (*(_BYTE *)(a1[5] + 31LL) & 4) == 0 )
        v4 = v15;
    }
    else
    {
      v17 = (_QWORD *)a1[17];
      LODWORD(v16) = v15 | 0x20;
      v18 = *(_BYTE *)(v17[1] + 8LL);
      if ( v18 >= 0 )
        LODWORD(v16) = v4 & 0xFFFFFFC7;
      if ( (((v16 & 2) == 0) & (unsigned __int8)~((unsigned __int8)v18 >> 5)) != 0 )
      {
        if ( (v18 & 0x40) != 0 )
        {
          v288 = v17[5];
          if ( v288 )
            v10 = *(_QWORD *)(v288 + 8);
        }
        else
        {
          LODWORD(v16) = v16 | 2;
        }
      }
      v19 = v16 | 8;
      v15 = *(unsigned __int8 *)(a1[5] + 31LL);
      if ( (*(_BYTE *)(a1[5] + 31LL) & 2) == 0 )
        v19 = v16;
      v4 = v19 | 0x10;
      if ( (*(_BYTE *)(a1[5] + 31LL) & 4) == 0 )
        v4 = v19;
      v401 = v4;
      if ( (v15 & 0x20) == 0 )
        goto LABEL_37;
      v4 &= ~8u;
      v401 = v4;
      if ( !v17[10] )
        goto LABEL_37;
    }
    v4 |= 2u;
    v401 = v4;
  }
LABEL_37:
  if ( (v4 & 0x80000) != 0 )
  {
    v4 = v4 & 0xFFFFFFD5 | 2;
    v401 = v4;
  }
  if ( qword_1C0258538 && (int)qword_1C0258538() >= 0 && qword_1C0258540 )
    v20 = qword_1C0258540(a1);
  else
    v20 = 0LL;
  if ( !v20 || (*(_DWORD *)(*(_QWORD *)(v20 + 40) + 24LL) & 0x20000000) == 0 )
    goto LABEL_507;
  v21 = qword_1C0258548 && (int)qword_1C0258548() >= 0 && qword_1C0258550 ? qword_1C0258550(v20) : 0LL;
  v365 = v21;
  if ( !v21 && (*(_BYTE *)(*(_QWORD *)(v20 + 40) + 26LL) & 0x20) == 0 )
    goto LABEL_507;
  v22 = v399;
  v4 |= 0x4000u;
  v363 = (_QWORD *)v20;
  v401 = v4;
  if ( v399 == (_QWORD *)v20 && (v4 & 0x20) != 0 )
  {
    v4 = v4 & 0xFFFFFFDD | 2;
    v401 = v4;
  }
  v23 = EmptyRgnPublic;
  if ( (unsigned __int64)EmptyRgnPublic > 2 )
  {
    if ( (v4 & 0x40000) != 0 )
    {
      EmptyRgnPublic = (HRGN)CreateEmptyRgnPublic();
      v285 = v23;
      v23 = EmptyRgnPublic;
      GreCombineRgn(EmptyRgnPublic, v285, 0LL, 5);
      v4 &= ~0x40000u;
      v401 = v4;
    }
    GreOffsetRgn(v23, -*(_DWORD *)(*(_QWORD *)(v20 + 40) + 88LL), -*(_DWORD *)(*(_QWORD *)(v20 + 40) + 92LL));
LABEL_507:
    v22 = v399;
  }
  if ( (v4 & 0x20) != 0 )
  {
    v15 = v22[13];
    if ( !v15 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v22 = v399;
      v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 448) + 8LL) + 24LL);
    }
    v4 |= 2u;
    v401 = v4;
    if ( (v4 & 0x18) == 0 )
    {
      v16 = v22[5];
      if ( (*(_BYTE *)(v16 + 21) & 1) != 0 || (*(_BYTE *)(*(_QWORD *)(v15 + 40) + 31LL) & 2) == 0 )
      {
        v85 = *(_BYTE *)(*(_QWORD *)(v15 + 40) + 31LL);
        if ( ((v85 ^ *(_BYTE *)(v16 + 31)) & 0x10) == 0 )
        {
          v4 &= 0xFFFFFFE7;
          v356 = v15;
          v401 = v4;
          v11 = v15;
          if ( (v85 & 4) != 0 )
          {
            v4 |= 0x10u;
            v401 = v4;
          }
        }
      }
    }
  }
  if ( (v4 & 2) == 0 && (!v22 || v399[2] != W32GetThreadWin32Thread((__int64)KeGetCurrentThread())) )
  {
    v4 |= 2u;
    v401 = v4;
  }
  v24 = v4 & 0x8080441F;
  v357 = v4 & 0x8080441F;
  if ( (v4 & 2) != 0 )
  {
    while ( 1 )
    {
      v362 = gpDispInfo + 24;
      v25 = *(_QWORD *)(gpDispInfo + 24);
      v344 = v25;
      if ( v25 )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)(v25 + 24) != v11 || *(_QWORD **)(v25 + 32) != v363 || *(_QWORD *)(v25 + 88) )
            goto LABEL_59;
          v52 = *(_QWORD *)(v25 + 8);
          v373 = 0LL;
          v53 = 0LL;
          v370[1] = 0LL;
          PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v373);
          if ( (unsigned __int8)KeIsAttachedProcess(v54) )
          {
            CurrentProcess = PsGetCurrentProcess(v56, v55);
            PsGetProcessSessionIdEx(CurrentProcess);
            CurrentThreadProcess = PsGetCurrentThreadProcess(v292);
            PsGetProcessSessionIdEx(CurrentThreadProcess);
          }
          v57 = gpHandleManager;
          v58 = (unsigned __int16)v52 | ((unsigned int)v52 >> 8) & 0xFF0000;
          v368 = 1;
          if ( v58 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          (unsigned __int16)v52,
                                          1)
                   + 13) == ((unsigned __int16)v52 | ((unsigned int)v52 >> 8) & 0xFF0000) >> 16 )
                v58 = (unsigned __int16)v52;
            }
            else
            {
              v58 = (unsigned __int16)v52;
            }
          }
          v59 = *((_QWORD *)v57 + 2);
          v60 = *(_DWORD *)(v59 + 2056);
          if ( v58 >= v60 + ((*(unsigned __int16 *)(v59 + 2) + 0xFFFF) << 16) )
          {
            v367 = 0LL;
LABEL_591:
            v368 = 0;
            KeLeaveCriticalRegion();
            v370[0] = 0LL;
LABEL_167:
            v86 = *(_DWORD *)(v25 + 64);
            v11 = v356;
            if ( v24 == (v86 & 0x80C05C1F)
              && ((*(_BYTE *)(*(_QWORD *)(v356 + 40) + 31LL) & 0x20) == 0
               || *(_QWORD *)(v25 + 16) == *(_QWORD *)(v25 + 24))
              && (!v366 || (v86 & 0x10000000) == 0) )
            {
              *(_DWORD *)(v25 + 64) = v86 | 0x1000;
              if ( v399 != *(_QWORD **)(v25 + 16) )
              {
                if ( (int)IsSpbCheckDceSupported() >= 0 && qword_1C02585A0 )
                  qword_1C02585A0(v25);
                *(_QWORD *)(v25 + 16) = v399;
                ResetOrg(0LL, (struct tagDCE *)v25, 0);
              }
              v51 = (_QWORD *)v362;
              goto LABEL_173;
            }
            goto LABEL_59;
          }
          v61 = ((v58 - v60) >> 16) + 1;
          if ( v58 < v60 )
            v61 = 0LL;
          v62 = *(_QWORD *)(v59 + 8 * v61 + 8);
          if ( (_DWORD)v61 )
            v58 += ((1 - (_DWORD)v61) << 16) - v60;
          v63 = 0LL;
          if ( v58 < *(_DWORD *)(v62 + 20) )
          {
            v64 = 16LL * (unsigned __int8)v58;
            v65 = 8 * ((unsigned __int64)v58 >> 8);
            v345 = v64 + *(_QWORD *)(**(_QWORD **)(v62 + 24) + v65);
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v345, 0LL);
            if ( v58 < *(_DWORD *)(v62 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v62 + 24) + v65) + v64 + 8) )
            {
              *(_DWORD *)(*(_QWORD *)v62 + 24LL * v58 + 8) |= 1u;
              v63 = (unsigned __int16 *)(24LL * v58 + *(_QWORD *)v62);
            }
            else
            {
              ExReleasePushLockExclusiveEx(v345, 0LL);
              KeLeaveCriticalRegion();
            }
            v53 = 0LL;
            v25 = v344;
            v24 = v357;
          }
          v367 = v63;
          if ( !v63 )
            goto LABEL_591;
          _m_prefetchw(v63 + 4);
          v369 = *((_DWORD *)v63 + 2);
          v66 = *((_BYTE *)v63 + 15);
          if ( (v66 & 0x20) == 0 )
          {
            if ( (v66 & 0x40) == 0 )
              goto LABEL_122;
            v294 = gpHandleManager;
            v295 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v63 & 0xFFFFFF);
            v296 = *((_QWORD *)v294 + 2);
            v297 = v295;
            v298 = *(_DWORD *)(v296 + 2056);
            if ( v295 >= v298 + ((*(unsigned __int16 *)(v296 + 2) + 0xFFFF) << 16) )
              goto LABEL_574;
            v299 = ((v295 - v298) >> 16) + 1;
            if ( v295 < v298 )
              v299 = 0LL;
            v300 = *(_QWORD *)(v296 + 8 * v299 + 8);
            if ( (_DWORD)v299 )
              v297 = ((1 - (_DWORD)v299) << 16) - v298 + v295;
            if ( (unsigned int)v297 >= *(_DWORD *)(v300 + 20) )
LABEL_574:
              v301 = 0LL;
            else
              v301 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v300 + 24) + 8 * (v297 >> 8))
                               + 16LL * (unsigned __int8)v297
                               + 8);
            if ( *(_WORD *)(v301 + 12) && *(struct _KTHREAD **)(v301 + 16) == KeGetCurrentThread() )
              break;
          }
          HANDLELOCK::vUnlock((HANDLELOCK *)&v367);
          if ( v368 )
            break;
LABEL_155:
          v370[0] = v53;
          if ( !v53 )
            goto LABEL_167;
          v84 = *(_DWORD *)(v53 + 40);
          XDCOBJ::vAltUnlockFast((XDCOBJ *)v370);
          if ( (v84 & 1) == 0 )
            goto LABEL_167;
          v11 = v356;
LABEL_59:
          v362 = v25;
          v25 = *(_QWORD *)v25;
          v344 = v25;
          if ( !v25 )
            goto LABEL_60;
        }
        v63 = v367;
LABEL_122:
        if ( *((_BYTE *)v63 + 14) == 1 && v63[6] == WORD1(v52) )
        {
          v67 = *(_DWORD *)v63 & 0xFFFFFF;
          if ( v67 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          *v63,
                                          1)
                   + 13) == HIWORD(v67) )
                v67 = (unsigned __int16)v67;
            }
            else
            {
              v67 = *v63;
            }
          }
          v68 = *((_QWORD *)gpHandleManager + 2);
          v69 = *(_DWORD *)(v68 + 2056);
          if ( v67 >= v69 + ((*(unsigned __int16 *)(v68 + 2) + 0xFFFF) << 16) )
            goto LABEL_582;
          v70 = ((v67 - v69) >> 16) + 1;
          if ( v67 < v69 )
            v70 = 0LL;
          v71 = *(_QWORD *)(v68 + 8 * v70 + 8);
          if ( (_DWORD)v70 )
            v67 += ((1 - (_DWORD)v70) << 16) - v69;
          if ( v67 >= *(_DWORD *)(v71 + 20) )
LABEL_582:
            v53 = 0LL;
          else
            v53 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v71 + 24) + 8 * ((unsigned __int64)v67 >> 8))
                            + 16LL * (unsigned __int8)v67
                            + 8);
          ++*(_DWORD *)(v53 + 8);
        }
        v72 = *(_DWORD *)v63 & 0xFFFFFF;
        if ( v72 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        *v63,
                                        1)
                 + 13) == HIWORD(v72) )
              v72 = (unsigned __int16)v72;
          }
          else
          {
            v72 = *v63;
          }
        }
        v73 = gpHandleManager;
        v74 = *((_QWORD *)gpHandleManager + 2);
        v75 = *(_DWORD *)(v74 + 2056);
        if ( v72 >= v75 + ((*(unsigned __int16 *)(v74 + 2) + 0xFFFF) << 16) )
          goto LABEL_586;
        v76 = ((v72 - v75) >> 16) + 1;
        if ( v72 < v75 )
          v76 = 0LL;
        v77 = *(_QWORD *)(v74 + 8 * v76 + 8);
        if ( (_DWORD)v76 )
          v72 += ((1 - (_DWORD)v76) << 16) - v75;
        if ( v72 >= *(_DWORD *)(v77 + 20) )
LABEL_586:
          v78 = 0LL;
        else
          v78 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v77 + 24) + 8 * ((unsigned __int64)v72 >> 8))
                           + 16LL * (unsigned __int8)v72
                           + 8);
        v79 = (unsigned __int16)*v78 | (*v78 >> 8) & 0xFF0000;
        if ( v79 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)*v78,
                                        1)
                 + 13) == HIWORD(v79) )
              v79 = (unsigned __int16)v79;
          }
          else
          {
            v79 = (unsigned __int16)*v78;
          }
        }
        v80 = *((_QWORD *)v73 + 2);
        v81 = *(_DWORD *)(v80 + 2056);
        if ( v79 < v81 + ((*(unsigned __int16 *)(v80 + 2) + 0xFFFF) << 16) )
        {
          v82 = ((v79 - v81) >> 16) + 1;
          if ( v79 < v81 )
            v82 = 0LL;
          v83 = *(_QWORD *)(v80 + 8 * v82 + 8);
          if ( (_DWORD)v82 )
            v79 += ((1 - (_DWORD)v82) << 16) - v81;
          *(_DWORD *)(*(_QWORD *)v83 + 24LL * v79 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v83 + 24) + 8 * ((unsigned __int64)v79 >> 8)) + 16LL * (unsigned __int8)v79,
            0LL);
          KeLeaveCriticalRegion();
        }
        v368 = 0;
        v367 = 0LL;
        KeLeaveCriticalRegion();
        goto LABEL_155;
      }
LABEL_60:
      v26 = 0LL;
      v27 = gpDispInfo + 24;
      v28 = *(_QWORD *)(gpDispInfo + 24);
      if ( v28 )
      {
        do
        {
          if ( (*(_DWORD *)(v28 + 64) & 0x400002) == 2 )
          {
            v371 = 0LL;
            v372 = 0;
            EntryObject = 0LL;
            v30 = *(_DWORD *)(v28 + 8);
            v380[1] = 0LL;
            HANDLELOCK::vLockHandle((HANDLELOCK *)&v371, (unsigned __int16)v30 | (v30 >> 8) & 0xFF0000, 0, 0, 0);
            if ( v372 )
            {
              v31 = (_DWORD *)v371;
              if ( *(_BYTE *)(v371 + 14) == 1 && *(_WORD *)(v371 + 12) == HIWORD(v30) )
              {
                v32 = gpHandleManager;
                v33 = GdiHandleManager::DecodeIndex(
                        (GdiHandleEntryDirectory **)gpHandleManager,
                        *(_DWORD *)v371 & 0xFFFFFF);
                EntryObject = GdiHandleEntryDirectory::GetEntryObject(*((GdiHandleEntryDirectory **)v32 + 2), v33);
                ++*((_DWORD *)EntryObject + 2);
              }
              v34 = gpHandleManager;
              v35 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *v31 & 0xFFFFFF);
              v36 = *((_QWORD *)v34 + 2);
              v37 = v35;
              v38 = *(_DWORD *)(v36 + 2056);
              if ( v35 >= v38 + ((*(unsigned __int16 *)(v36 + 2) + 0xFFFF) << 16) )
                goto LABEL_592;
              v39 = ((v35 - v38) >> 16) + 1;
              if ( v35 < v38 )
                v39 = 0LL;
              v40 = *(_QWORD *)(v36 + 8 * v39 + 8);
              if ( (_DWORD)v39 )
                v37 = ((1 - (_DWORD)v39) << 16) - v38 + v35;
              if ( (unsigned int)v37 >= *(_DWORD *)(v40 + 20) )
LABEL_592:
                v41 = 0LL;
              else
                v41 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v40 + 24) + 8 * (v37 >> 8))
                                 + 16LL * (unsigned __int8)v37
                                 + 8);
              v42 = GdiHandleManager::DecodeIndex(
                      (GdiHandleEntryDirectory **)v34,
                      (unsigned __int16)*v41 | (*v41 >> 8) & 0xFF0000u);
              v43 = *((_QWORD *)v34 + 2);
              v44 = v42;
              v45 = *(_DWORD *)(v43 + 2056);
              if ( v42 < v45 + ((*(unsigned __int16 *)(v43 + 2) + 0xFFFF) << 16) )
              {
                v46 = ((v42 - v45) >> 16) + 1;
                if ( v42 < v45 )
                  v46 = 0LL;
                v47 = *(_QWORD *)(v43 + 8 * v46 + 8);
                if ( (_DWORD)v46 )
                  v44 = ((1 - (_DWORD)v46) << 16) - v45 + v42;
                *(_DWORD *)(*(_QWORD *)v47 + 24LL * v44 + 8) &= ~1u;
                ExReleasePushLockExclusiveEx(
                  *(_QWORD *)(**(_QWORD **)(v47 + 24) + 8 * ((unsigned __int64)v44 >> 8)) + 16LL * (unsigned __int8)v44,
                  0LL);
                KeLeaveCriticalRegion();
              }
              v372 = 0;
              v371 = 0LL;
              KeLeaveCriticalRegion();
            }
            v380[0] = EntryObject;
            if ( !EntryObject
              || (v48 = *((_DWORD *)EntryObject + 10), XDCOBJ::vAltUnlockFast((XDCOBJ *)v380), (v48 & 1) == 0) )
            {
              if ( !*(_QWORD *)(v28 + 88) )
              {
                v49 = *(_DWORD *)(v28 + 64);
                if ( (v49 & 0x800) != 0 )
                  break;
                if ( (v49 & 0x1000) == 0 )
                  v26 = (_QWORD *)v27;
              }
            }
          }
          v27 = v28;
          v28 = *(_QWORD *)v28;
        }
        while ( v28 );
        v24 = v357;
        v50 = v28 == 0;
        if ( v28 )
          goto LABEL_90;
      }
      if ( v26 )
        break;
      if ( !CreateCacheDC(v399, v401 & 0x4000 | 0x802, 0LL) )
        goto LABEL_681;
      v11 = v356;
    }
    v50 = v28 == 0;
LABEL_90:
    if ( !v50 )
      v26 = (_QWORD *)v27;
    v51 = v26;
    v25 = *v26;
    v344 = *v26;
  }
  else
  {
    v51 = (_QWORD *)(gpDispInfo + 24);
    v25 = *(_QWORD *)(gpDispInfo + 24);
    v344 = v25;
    if ( !v25 )
    {
LABEL_681:
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v15, v16);
      return 0LL;
    }
    while ( 1 )
    {
      if ( (*(_DWORD *)(v25 + 64) & 0x400002) == 0 && !(unsigned int)GreIsRendering(*(HDC *)(v25 + 8)) )
      {
        v284 = v399;
        if ( *(_QWORD **)(v25 + 16) == v399 || *(_QWORD *)(v25 + 8) == v10 )
          break;
      }
      v51 = (_QWORD *)v25;
      v25 = *(_QWORD *)v25;
      v344 = v25;
      if ( !v25 )
        goto LABEL_681;
    }
    if ( *(_QWORD *)(v25 + 56) && (v401 & 0xC0) != 0 )
    {
      v290 = IsDeleteHrgnClipSupported();
      if ( v290 >= 0 && qword_1C0258580 )
        qword_1C0258580(v25);
      v284 = v399;
    }
    if ( (*(_DWORD *)(v25 + 64) & 0x4000) != 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v25 + 32) + 40LL) + 27LL) & 2) != 0
        && (int)IsFlushWEFCOMPOSITEDDCEBoundsSupported() >= 0
        && qword_1C0258590 )
      {
        qword_1C0258590(v25);
      }
      if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0 && qword_1C0257968 )
        qword_1C0257968(*(_QWORD *)(v25 + 8), 0LL);
      v284 = v399;
    }
    if ( *(_QWORD **)(v25 + 16) == v284
      && *(_QWORD **)(v25 + 32) == v363
      && *(_QWORD *)(v25 + 24) == v11
      && v14
      && ((v401 ^ *(_DWORD *)(v25 + 64)) & 0x4000) == 0
      && (*(_DWORD *)(v25 + 64) & 0x10000000) == 0 )
    {
      goto LABEL_173;
    }
  }
  do
  {
    v360 = 1;
    if ( (*(_DWORD *)(v25 + 64) & 0x800) == 0 && (int)IsSpbCheckDceSupported() >= 0 && qword_1C02585A0 )
      qword_1C02585A0(v25);
    *(_DWORD *)(v25 + 64) = v24 | 0x1000;
    GreValidateVisrgn(*(_QWORD *)(v25 + 8), 0LL);
    v364 = 0LL;
    if ( (int)IsCalcVisRgnSupported() < 0 || !qword_1C0258560 || !(unsigned int)qword_1C0258560(&v364, v399, v356, v24) )
      *(_DWORD *)(v25 + 64) |= 0x10000000u;
    *(_QWORD *)(v25 + 16) = v399;
    *(_QWORD *)(v25 + 24) = v356;
    *(_QWORD *)(v25 + 32) = v363;
    *(_QWORD *)(v25 + 40) = 0LL;
    *(_QWORD *)(v25 + 48) = 0LL;
    ResetOrg(v364, (struct tagDCE *)v25, 1);
    if ( !v364 )
      v402 = 1;
LABEL_173:
    ;
  }
  while ( (*(_DWORD *)(v25 + 64) & 0x8080441F) != v24 );
  if ( v25 != *(_QWORD *)(gpDispInfo + 24) )
  {
    *v51 = *(_QWORD *)v25;
    *(_QWORD *)v25 = *(_QWORD *)(gpDispInfo + 24);
    *(_QWORD *)(gpDispInfo + 24) = v25;
  }
  v87 = *(_QWORD *)(v25 + 8);
  v374 = 0LL;
  v88 = 0LL;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v374);
  if ( (unsigned __int8)KeIsAttachedProcess(v89) )
  {
    v302 = PsGetCurrentProcess(v91, v90);
    PsGetProcessSessionIdEx(v302);
    v304 = PsGetCurrentThreadProcess(v303);
    PsGetProcessSessionIdEx(v304);
  }
  v92 = gpHandleManager;
  v93 = (unsigned __int16)v87 | ((unsigned int)v87 >> 8) & 0xFF0000;
  v382 = 1;
  if ( v93 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v87,
                                  1)
           + 13) == ((unsigned __int16)v87 | ((unsigned int)v87 >> 8) & 0xFF0000) >> 16 )
        v93 = (unsigned __int16)v87;
    }
    else
    {
      v93 = (unsigned __int16)v87;
    }
  }
  v94 = *((_QWORD *)v92 + 2);
  v95 = *(_DWORD *)(v94 + 2056);
  if ( v93 >= v95 + ((*(unsigned __int16 *)(v94 + 2) + 0xFFFF) << 16) )
    goto LABEL_629;
  v96 = ((v93 - v95) >> 16) + 1;
  if ( v93 < v95 )
    v96 = 0LL;
  v97 = *(_QWORD *)(v94 + 8 * v96 + 8);
  if ( (_DWORD)v96 )
    v93 += ((1 - (_DWORD)v96) << 16) - v95;
  v98 = 0LL;
  if ( v93 < *(_DWORD *)(v97 + 20) )
  {
    v99 = 16LL * (unsigned __int8)v93;
    v350 = 8 * ((unsigned __int64)v93 >> 8);
    v346 = v99 + *(_QWORD *)(**(_QWORD **)(v97 + 24) + v350);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v346, 0LL);
    if ( v93 < *(_DWORD *)(v97 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v97 + 24) + v350) + v99 + 8) )
    {
      *(_DWORD *)(24LL * v93 + *(_QWORD *)v97 + 8) |= 1u;
      v98 = (unsigned __int16 *)(24LL * v93 + *(_QWORD *)v97);
    }
    else
    {
      ExReleasePushLockExclusiveEx(v346, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  v381 = v98;
  if ( !v98 )
  {
LABEL_629:
    KeLeaveCriticalRegion();
    goto LABEL_267;
  }
  _m_prefetchw(v98 + 4);
  v383 = *((_DWORD *)v98 + 2);
  v100 = *((_BYTE *)v98 + 15);
  if ( (v100 & 0x20) != 0 )
    goto LABEL_600;
  if ( (v100 & 0x40) != 0 )
  {
    v305 = gpHandleManager;
    v306 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v98 & 0xFFFFFF);
    v307 = GdiHandleEntryDirectory::GetEntryObject(*((GdiHandleEntryDirectory **)v305 + 2), v306);
    if ( *((_WORD *)v307 + 6) && *((struct _KTHREAD **)v307 + 2) == KeGetCurrentThread() )
    {
LABEL_601:
      v98 = v381;
      goto LABEL_193;
    }
LABEL_600:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v381);
    if ( !v382 )
      goto LABEL_267;
    goto LABEL_601;
  }
LABEL_193:
  if ( *((_BYTE *)v98 + 14) == 1 && v98[6] == WORD1(v87) )
  {
    v101 = *(_DWORD *)v98 & 0xFFFFFF;
    if ( v101 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *v98,
                                    1)
             + 13) == HIWORD(v101) )
          v101 = (unsigned __int16)v101;
      }
      else
      {
        v101 = *v98;
      }
    }
    v102 = *((_QWORD *)gpHandleManager + 2);
    v103 = *(_DWORD *)(v102 + 2056);
    if ( v101 >= v103 + ((*(unsigned __int16 *)(v102 + 2) + 0xFFFF) << 16) )
      goto LABEL_605;
    v104 = ((v101 - v103) >> 16) + 1;
    if ( v101 < v103 )
      v104 = 0LL;
    v105 = *(_QWORD *)(v102 + 8 * v104 + 8);
    if ( (_DWORD)v104 )
      v101 += ((1 - (_DWORD)v104) << 16) - v103;
    if ( v101 >= *(_DWORD *)(v105 + 20) )
LABEL_605:
      v88 = 0LL;
    else
      v88 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v105 + 24) + 8 * ((unsigned __int64)v101 >> 8))
                      + 16LL * (unsigned __int8)v101
                      + 8);
    ++*(_DWORD *)(v88 + 8);
  }
  v106 = *(_DWORD *)v98 & 0xFFFFFF;
  if ( v106 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  *v98,
                                  1)
           + 13) == HIWORD(v106) )
        v106 = (unsigned __int16)v106;
    }
    else
    {
      v106 = *v98;
    }
  }
  v107 = gpHandleManager;
  v108 = *((_QWORD *)gpHandleManager + 2);
  v109 = *(_DWORD *)(v108 + 2056);
  if ( v106 >= v109 + ((*(unsigned __int16 *)(v108 + 2) + 0xFFFF) << 16) )
    goto LABEL_609;
  v110 = ((v106 - v109) >> 16) + 1;
  if ( v106 < v109 )
    v110 = 0LL;
  v111 = *(_QWORD *)(v108 + 8 * v110 + 8);
  if ( (_DWORD)v110 )
    v106 += ((1 - (_DWORD)v110) << 16) - v109;
  if ( v106 >= *(_DWORD *)(v111 + 20) )
LABEL_609:
    v112 = 0LL;
  else
    v112 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v111 + 24) + 8 * ((unsigned __int64)v106 >> 8))
                      + 16LL * (unsigned __int8)v106
                      + 8);
  v113 = (unsigned __int16)*v112 | (*v112 >> 8) & 0xFF0000;
  if ( v113 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)*v112,
                                  1)
           + 13) == HIWORD(v113) )
        v113 = (unsigned __int16)v113;
    }
    else
    {
      v113 = (unsigned __int16)*v112;
    }
  }
  v114 = *((_QWORD *)v107 + 2);
  v115 = *(_DWORD *)(v114 + 2056);
  if ( v113 < v115 + ((*(unsigned __int16 *)(v114 + 2) + 0xFFFF) << 16) )
  {
    v116 = ((v113 - v115) >> 16) + 1;
    if ( v113 < v115 )
      v116 = 0LL;
    v117 = *(_QWORD *)(v114 + 8 * v116 + 8);
    if ( (_DWORD)v116 )
      v113 += ((1 - (_DWORD)v116) << 16) - v115;
    *(_DWORD *)(*(_QWORD *)v117 + 24LL * v113 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v117 + 24) + 8 * ((unsigned __int64)v113 >> 8)) + 16LL * (unsigned __int8)v113,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  if ( v88 )
  {
    *(_DWORD *)(v88 + 36) &= ~0x100000u;
    GrepValidateVisRgn((struct DC *)v88, *(struct REGION **)(v88 + 1120));
    v118 = *(HDC *)v88;
    v358 = 0;
    v119 = (unsigned __int16)*(_DWORD *)v88 | (*(_DWORD *)v88 >> 8) & 0xFF0000;
    v351 = *(HDC *)v88;
    v375 = 0LL;
    PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v375);
    if ( (unsigned __int8)KeIsAttachedProcess(v120) )
    {
      v308 = PsGetCurrentProcess(v122, v121);
      PsGetProcessSessionIdEx(v308);
      v310 = PsGetCurrentThreadProcess(v309);
      PsGetProcessSessionIdEx(v310);
    }
    v123 = gpHandleManager;
    v385 = 1;
    if ( v119 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v119,
                                    1)
             + 13) == HIWORD(v119) )
          v119 = (unsigned __int16)v119;
      }
      else
      {
        v119 = (unsigned __int16)v119;
      }
    }
    v124 = *((_QWORD *)v123 + 2);
    v125 = *(_DWORD *)(v124 + 2056);
    if ( v119 >= v125 + ((*(unsigned __int16 *)(v124 + 2) + 0xFFFF) << 16) )
      goto LABEL_264;
    v126 = ((v119 - v125) >> 16) + 1;
    if ( v119 < v125 )
      v126 = 0LL;
    v127 = *(_QWORD *)(v124 + 8 * v126 + 8);
    if ( (_DWORD)v126 )
      v119 += ((1 - (_DWORD)v126) << 16) - v125;
    v128 = 0LL;
    if ( v119 < *(_DWORD *)(v127 + 20) )
    {
      v129 = 16LL * (unsigned __int8)v119;
      v130 = 8 * ((unsigned __int64)v119 >> 8);
      v347 = v129 + *(_QWORD *)(**(_QWORD **)(v127 + 24) + v130);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v347, 0LL);
      if ( v119 < *(_DWORD *)(v127 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v127 + 24) + v130) + v129 + 8) )
      {
        *(_DWORD *)(24LL * v119 + *(_QWORD *)v127 + 8) |= 1u;
        v128 = (unsigned __int16 *)(24LL * v119 + *(_QWORD *)v127);
      }
      else
      {
        ExReleasePushLockExclusiveEx(v347, 0LL);
        KeLeaveCriticalRegion();
      }
      v118 = v351;
    }
    v384 = v128;
    if ( !v128 )
      goto LABEL_264;
    _m_prefetchw(v128 + 4);
    v50 = (*((_BYTE *)v128 + 15) & 0x20) == 0;
    v386 = *((_DWORD *)v128 + 2);
    if ( !v50 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v384);
      if ( !v385 )
      {
LABEL_265:
        if ( v358 )
          bDeleteDCInternalEx(v118, 0LL);
        goto LABEL_267;
      }
      v128 = v384;
    }
    v358 = (*((_BYTE *)v128 + 15) & 8) != 0;
    v131 = *((_BYTE *)v128 + 14);
    if ( v131 == 5 )
    {
      v311 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v88 + 680);
      v312 = 0;
    }
    else
    {
      if ( v131 != 16 )
      {
LABEL_245:
        --*(_DWORD *)(v88 + 8);
        v132 = *(_DWORD *)v128 & 0xFFFFFF;
        if ( v132 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        *v128,
                                        1)
                 + 13) == HIWORD(v132) )
              v132 = (unsigned __int16)v132;
          }
          else
          {
            v132 = *v128;
          }
        }
        v133 = gpHandleManager;
        v134 = *((_QWORD *)gpHandleManager + 2);
        v135 = *(_DWORD *)(v134 + 2056);
        if ( v132 >= v135 + ((*(unsigned __int16 *)(v134 + 2) + 0xFFFF) << 16) )
          goto LABEL_625;
        v136 = ((v132 - v135) >> 16) + 1;
        if ( v132 < v135 )
          v136 = 0LL;
        v137 = *(_QWORD *)(v134 + 8 * v136 + 8);
        if ( (_DWORD)v136 )
          v132 += ((1 - (_DWORD)v136) << 16) - v135;
        if ( v132 >= *(_DWORD *)(v137 + 20) )
LABEL_625:
          v138 = 0LL;
        else
          v138 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v137 + 24) + 8 * ((unsigned __int64)v132 >> 8))
                            + 16LL * (unsigned __int8)v132
                            + 8);
        v139 = (unsigned __int16)*v138 | (*v138 >> 8) & 0xFF0000;
        if ( v139 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)*v138,
                                        1)
                 + 13) == HIWORD(v139) )
              v139 = (unsigned __int16)v139;
          }
          else
          {
            v139 = (unsigned __int16)*v138;
          }
        }
        v140 = *((_QWORD *)v133 + 2);
        v141 = *(_DWORD *)(v140 + 2056);
        if ( v139 < v141 + ((*(unsigned __int16 *)(v140 + 2) + 0xFFFF) << 16) )
        {
          v142 = ((v139 - v141) >> 16) + 1;
          if ( v139 < v141 )
            v142 = 0LL;
          v143 = *(_QWORD *)(v140 + 8 * v142 + 8);
          if ( (_DWORD)v142 )
            v139 += ((1 - (_DWORD)v142) << 16) - v141;
          *(_DWORD *)(*(_QWORD *)v143 + 24LL * v139 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v143 + 24) + 8 * ((unsigned __int64)v139 >> 8)) + 16LL * (unsigned __int8)v139,
            0LL);
          KeLeaveCriticalRegion();
        }
LABEL_264:
        KeLeaveCriticalRegion();
        goto LABEL_265;
      }
      v311 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v88 + 136);
      v312 = 2;
    }
    TrackObjectReferenceDecrement(v312, v311);
    goto LABEL_245;
  }
LABEL_267:
  v144 = v401;
  if ( (v401 & 0x80u) == 0 )
  {
    if ( (v401 & 0x40) != 0 )
    {
      v279 = EmptyRgnPublic;
      if ( EmptyRgnPublic )
      {
        GreSetRectRgn(ghrgnGDC, 0);
        RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
        v145 = v344;
        *(_QWORD *)(v344 + 56) = RectRgnIndirect;
        GreSelectVisRgn(*(_QWORD *)(v344 + 8), RectRgnIndirect, 4LL);
        *(_QWORD *)(v344 + 40) = EmptyRgnPublic;
        v314 = *(_DWORD *)(v344 + 64);
        if ( (v401 & 0x40000) != 0 )
          v314 |= 0x40000u;
        *(_DWORD *)(v344 + 64) = v314 | 0x40;
        if ( EmptyRgnPublic == (HRGN)1 )
        {
          *(_QWORD *)(v344 + 48) = 1LL;
          goto LABEL_503;
        }
        GreCombineRgn(ghrgnGDC, *(HRGN *)(v344 + 56), EmptyRgnPublic, 4);
        v315 = (HRGN)CreateEmptyRgnPublic();
        *(_QWORD *)(v344 + 48) = v315;
        GreCombineRgn(v315, EmptyRgnPublic, 0LL, 5);
        if ( (unsigned __int64)EmptyRgnPublic <= 2 || (*(_DWORD *)(v344 + 64) & 0x40000) != 0 )
          goto LABEL_503;
        goto LABEL_502;
      }
    }
LABEL_269:
    v145 = v344;
    goto LABEL_270;
  }
  v279 = EmptyRgnPublic;
  if ( EmptyRgnPublic == (HRGN)1 )
    goto LABEL_269;
  GreSetRectRgn(ghrgnGDC, 0);
  v280 = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
  v145 = v344;
  *(_QWORD *)(v344 + 56) = v280;
  GreSelectVisRgn(*(_QWORD *)(v344 + 8), v280, 4LL);
  *(_QWORD *)(v344 + 40) = EmptyRgnPublic;
  v281 = *(_DWORD *)(v344 + 64);
  if ( (v401 & 0x40000) != 0 )
    v281 |= 0x40000u;
  *(_DWORD *)(v344 + 64) = v281 | 0x80;
  if ( !EmptyRgnPublic )
  {
    *(_QWORD *)(v344 + 48) = 0LL;
    goto LABEL_503;
  }
  GreCombineRgn(ghrgnGDC, *(HRGN *)(v344 + 56), EmptyRgnPublic, 1);
  v282 = (HRGN)CreateEmptyRgnPublic();
  *(_QWORD *)(v344 + 48) = v282;
  GreCombineRgn(v282, EmptyRgnPublic, 0LL, 5);
  if ( (unsigned __int64)EmptyRgnPublic <= 2 || (*(_DWORD *)(v344 + 64) & 0x40000) != 0 )
    goto LABEL_503;
LABEL_502:
  PsGetCurrentProcessId();
  LOBYTE(v283) = 4;
  HmgMarkUndeletable(v279, v283);
LABEL_503:
  *(_DWORD *)(v145 + 64) &= ~0x2000u;
  GreSelectVisRgn(*(_QWORD *)(v145 + 8), ghrgnGDC, 4LL);
LABEL_270:
  if ( (*(_DWORD *)(v145 + 64) & 0x4000) == 0 )
    goto LABEL_371;
  if ( qword_1C0257960
    && (int)qword_1C0257960() >= 0
    && (!qword_1C0257968 || !(unsigned int)qword_1C0257968(*(_QWORD *)(v145 + 8), v365)) )
  {
    v402 = 1;
  }
  v146 = *(_QWORD *)(v145 + 8);
  v376 = 0LL;
  v147 = 0LL;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v376);
  if ( (unsigned __int8)KeIsAttachedProcess(v148) )
  {
    v316 = PsGetCurrentProcess(v150, v149);
    PsGetProcessSessionIdEx(v316);
    v318 = PsGetCurrentThreadProcess(v317);
    PsGetProcessSessionIdEx(v318);
  }
  v151 = gpHandleManager;
  v152 = (unsigned __int16)v146 | ((unsigned int)v146 >> 8) & 0xFF0000;
  v388 = 1;
  if ( v152 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v146,
                                  1)
           + 13) == ((unsigned __int16)v146 | ((unsigned int)v146 >> 8) & 0xFF0000) >> 16 )
        v152 = (unsigned __int16)v146;
    }
    else
    {
      v152 = (unsigned __int16)v146;
    }
  }
  v153 = *((_QWORD *)v151 + 2);
  v154 = *(_DWORD *)(v153 + 2056);
  if ( v152 >= v154 + ((*(unsigned __int16 *)(v153 + 2) + 0xFFFF) << 16) )
    goto LABEL_677;
  v155 = ((v152 - v154) >> 16) + 1;
  if ( v152 < v154 )
    v155 = 0LL;
  v156 = *(_QWORD *)(v153 + 8 * v155 + 8);
  if ( (_DWORD)v155 )
    v152 += ((1 - (_DWORD)v155) << 16) - v154;
  v157 = 0LL;
  if ( v152 < *(_DWORD *)(v156 + 20) )
  {
    v158 = 16LL * (unsigned __int8)v152;
    v352 = 8 * ((unsigned __int64)v152 >> 8);
    v348 = v158 + *(_QWORD *)(**(_QWORD **)(v156 + 24) + v352);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v348, 0LL);
    if ( v152 < *(_DWORD *)(v156 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v156 + 24) + v352) + v158 + 8) )
    {
      *(_DWORD *)(*(_QWORD *)v156 + 24LL * v152 + 8) |= 1u;
      v157 = (unsigned __int16 *)(24LL * v152 + *(_QWORD *)v156);
    }
    else
    {
      ExReleasePushLockExclusiveEx(v348, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  v387 = v157;
  if ( v157 )
  {
    _m_prefetchw(v157 + 4);
    v389 = *((_DWORD *)v157 + 2);
    v159 = *((_BYTE *)v157 + 15);
    if ( (v159 & 0x20) == 0 )
    {
      if ( (v159 & 0x40) == 0 )
      {
LABEL_292:
        if ( *((_BYTE *)v157 + 14) == 1 && v157[6] == WORD1(v146) )
        {
          v160 = *(_DWORD *)v157 & 0xFFFFFF;
          if ( v160 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          *v157,
                                          1)
                   + 13) == HIWORD(v160) )
                v160 = (unsigned __int16)v160;
            }
            else
            {
              v160 = *v157;
            }
          }
          v161 = *((_QWORD *)gpHandleManager + 2);
          v162 = *(_DWORD *)(v161 + 2056);
          if ( v160 >= v162 + ((*(unsigned __int16 *)(v161 + 2) + 0xFFFF) << 16) )
            goto LABEL_650;
          v163 = ((v160 - v162) >> 16) + 1;
          if ( v160 < v162 )
            v163 = 0LL;
          v164 = *(_QWORD *)(v161 + 8 * v163 + 8);
          if ( (_DWORD)v163 )
            v160 += ((1 - (_DWORD)v163) << 16) - v162;
          if ( v160 >= *(_DWORD *)(v164 + 20) )
LABEL_650:
            v147 = 0LL;
          else
            v147 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v164 + 24) + 8 * ((unsigned __int64)v160 >> 8))
                             + 16LL * (unsigned __int8)v160
                             + 8);
          ++*(_DWORD *)(v147 + 8);
        }
        v165 = *(_DWORD *)v157 & 0xFFFFFF;
        if ( v165 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        *v157,
                                        1)
                 + 13) == HIWORD(v165) )
              v165 = (unsigned __int16)v165;
          }
          else
          {
            v165 = *v157;
          }
        }
        v166 = gpHandleManager;
        v167 = *((_QWORD *)gpHandleManager + 2);
        v168 = *(_DWORD *)(v167 + 2056);
        if ( v165 >= v168 + ((*(unsigned __int16 *)(v167 + 2) + 0xFFFF) << 16) )
          goto LABEL_654;
        v169 = ((v165 - v168) >> 16) + 1;
        if ( v165 < v168 )
          v169 = 0LL;
        v170 = *(_QWORD *)(v167 + 8 * v169 + 8);
        if ( (_DWORD)v169 )
          v165 += ((1 - (_DWORD)v169) << 16) - v168;
        if ( v165 >= *(_DWORD *)(v170 + 20) )
LABEL_654:
          v171 = 0LL;
        else
          v171 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v170 + 24) + 8 * ((unsigned __int64)v165 >> 8))
                            + 16LL * (unsigned __int8)v165
                            + 8);
        v172 = (unsigned __int16)*v171 | (*v171 >> 8) & 0xFF0000;
        if ( v172 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)*v171,
                                        1)
                 + 13) == HIWORD(v172) )
              v172 = (unsigned __int16)v172;
          }
          else
          {
            v172 = (unsigned __int16)*v171;
          }
        }
        v173 = *((_QWORD *)v166 + 2);
        v174 = *(_DWORD *)(v173 + 2056);
        if ( v172 < v174 + ((*(unsigned __int16 *)(v173 + 2) + 0xFFFF) << 16) )
        {
          v175 = ((v172 - v174) >> 16) + 1;
          if ( v172 < v174 )
            v175 = 0LL;
          v176 = *(_QWORD *)(v173 + 8 * v175 + 8);
          if ( (_DWORD)v175 )
            v172 += ((1 - (_DWORD)v175) << 16) - v174;
          *(_DWORD *)(*(_QWORD *)v176 + 24LL * v172 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v176 + 24) + 8 * ((unsigned __int64)v172 >> 8)) + 16LL * (unsigned __int8)v172,
            0LL);
          KeLeaveCriticalRegion();
        }
        KeLeaveCriticalRegion();
        if ( !v147 )
          goto LABEL_368;
        *(_DWORD *)(v147 + 36) |= 0x40u;
        v177 = *(_QWORD *)(v147 + 1080);
        v178 = _mm_srli_si128(*(__m128i *)(v147 + 1080), 8).m128i_u64[0];
        if ( (_DWORD)v177 != (_DWORD)v178
          && (int)v177 < (int)v178
          && HIDWORD(v177) != HIDWORD(v178)
          && SHIDWORD(v177) < SHIDWORD(v178) )
        {
          *(_DWORD *)(v147 + 1080) = 0x7FFFFFFF;
          *(_DWORD *)(v147 + 1084) = 0x7FFFFFFF;
          *(_DWORD *)(v147 + 1088) = 0x80000000;
          *(_DWORD *)(v147 + 1092) = 0x80000000;
        }
        v179 = *(HDC *)v147;
        v359 = 0;
        v180 = (unsigned __int16)*(_DWORD *)v147 | (*(_DWORD *)v147 >> 8) & 0xFF0000;
        v353 = *(HDC *)v147;
        v377 = 0LL;
        PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v377);
        if ( (unsigned __int8)KeIsAttachedProcess(v181) )
        {
          v322 = PsGetCurrentProcess(v183, v182);
          PsGetProcessSessionIdEx(v322);
          v324 = PsGetCurrentThreadProcess(v323);
          PsGetProcessSessionIdEx(v324);
        }
        v184 = gpHandleManager;
        v391 = 1;
        if ( v180 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)v180,
                                        1)
                 + 13) == HIWORD(v180) )
              v180 = (unsigned __int16)v180;
          }
          else
          {
            v180 = (unsigned __int16)v180;
          }
        }
        v185 = *((_QWORD *)v184 + 2);
        v186 = *(_DWORD *)(v185 + 2056);
        if ( v180 >= v186 + ((*(unsigned __int16 *)(v185 + 2) + 0xFFFF) << 16) )
          goto LABEL_365;
        v187 = ((v180 - v186) >> 16) + 1;
        if ( v180 < v186 )
          v187 = 0LL;
        v188 = *(_QWORD *)(v185 + 8 * v187 + 8);
        if ( (_DWORD)v187 )
          v180 += ((1 - (_DWORD)v187) << 16) - v186;
        v189 = 0LL;
        if ( v180 < *(_DWORD *)(v188 + 20) )
        {
          v190 = 16LL * (unsigned __int8)v180;
          v191 = 8 * ((unsigned __int64)v180 >> 8);
          v349 = v190 + *(_QWORD *)(**(_QWORD **)(v188 + 24) + v191);
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v349, 0LL);
          if ( v180 < *(_DWORD *)(v188 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v188 + 24) + v191) + v190 + 8) )
          {
            *(_DWORD *)(24LL * v180 + *(_QWORD *)v188 + 8) |= 1u;
            v189 = (unsigned __int16 *)(24LL * v180 + *(_QWORD *)v188);
          }
          else
          {
            ExReleasePushLockExclusiveEx(v349, 0LL);
            KeLeaveCriticalRegion();
          }
          v179 = v353;
        }
        v390 = v189;
        if ( !v189 )
          goto LABEL_365;
        _m_prefetchw(v189 + 4);
        v50 = (*((_BYTE *)v189 + 15) & 0x20) == 0;
        v392 = *((_DWORD *)v189 + 2);
        if ( !v50 )
        {
          HANDLELOCK::vUnlock((HANDLELOCK *)&v390);
          if ( !v391 )
          {
LABEL_366:
            if ( v359 )
              bDeleteDCInternalEx(v179, 0LL);
            goto LABEL_368;
          }
          v189 = v390;
        }
        v359 = (*((_BYTE *)v189 + 15) & 8) != 0;
        v192 = *((_BYTE *)v189 + 14);
        if ( v192 == 5 )
        {
          v325 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v147 + 680);
          v326 = 0;
        }
        else
        {
          if ( v192 != 16 )
          {
LABEL_346:
            --*(_DWORD *)(v147 + 8);
            v193 = *(_DWORD *)v189 & 0xFFFFFF;
            if ( v193 >= 0x10000 )
            {
              if ( *(_DWORD *)gpHandleManager > 0x10000u )
              {
                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                            *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                            *v189,
                                            1)
                     + 13) == HIWORD(v193) )
                  v193 = (unsigned __int16)v193;
              }
              else
              {
                v193 = *v189;
              }
            }
            v194 = gpHandleManager;
            v195 = *((_QWORD *)gpHandleManager + 2);
            v196 = *(_DWORD *)(v195 + 2056);
            if ( v193 >= v196 + ((*(unsigned __int16 *)(v195 + 2) + 0xFFFF) << 16) )
              goto LABEL_673;
            v197 = ((v193 - v196) >> 16) + 1;
            if ( v193 < v196 )
              v197 = 0LL;
            v198 = *(_QWORD *)(v195 + 8 * v197 + 8);
            if ( (_DWORD)v197 )
              v193 += ((1 - (_DWORD)v197) << 16) - v196;
            if ( v193 >= *(_DWORD *)(v198 + 20) )
LABEL_673:
              v199 = 0LL;
            else
              v199 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v198 + 24) + 8 * ((unsigned __int64)v193 >> 8))
                                + 16LL * (unsigned __int8)v193
                                + 8);
            v200 = (unsigned __int16)*v199 | (*v199 >> 8) & 0xFF0000;
            if ( v200 >= 0x10000 )
            {
              if ( *(_DWORD *)gpHandleManager > 0x10000u )
              {
                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                            *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                            (unsigned __int16)*v199,
                                            1)
                     + 13) == HIWORD(v200) )
                  v200 = (unsigned __int16)v200;
              }
              else
              {
                v200 = (unsigned __int16)*v199;
              }
            }
            v201 = *((_QWORD *)v194 + 2);
            v202 = *(_DWORD *)(v201 + 2056);
            if ( v200 < v202 + ((*(unsigned __int16 *)(v201 + 2) + 0xFFFF) << 16) )
            {
              v203 = ((v200 - v202) >> 16) + 1;
              if ( v200 < v202 )
                v203 = 0LL;
              v204 = *(_QWORD *)(v201 + 8 * v203 + 8);
              if ( (_DWORD)v203 )
                v200 += ((1 - (_DWORD)v203) << 16) - v202;
              *(_DWORD *)(*(_QWORD *)v204 + 24LL * v200 + 8) &= ~1u;
              ExReleasePushLockExclusiveEx(
                *(_QWORD *)(**(_QWORD **)(v204 + 24) + 8 * ((unsigned __int64)v200 >> 8)) + 16LL * (unsigned __int8)v200,
                0LL);
              KeLeaveCriticalRegion();
            }
LABEL_365:
            KeLeaveCriticalRegion();
            goto LABEL_366;
          }
          v325 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v147 + 136);
          v326 = 2;
        }
        TrackObjectReferenceDecrement(v326, v325);
        goto LABEL_346;
      }
      v319 = gpHandleManager;
      v320 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v157 & 0xFFFFFF);
      v321 = GdiHandleEntryDirectory::GetEntryObject(*((GdiHandleEntryDirectory **)v319 + 2), v320);
      if ( *((_WORD *)v321 + 6) )
      {
        if ( *((struct _KTHREAD **)v321 + 2) == KeGetCurrentThread() )
          goto LABEL_646;
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v387);
    if ( v388 )
    {
LABEL_646:
      v157 = v387;
      goto LABEL_292;
    }
  }
  else
  {
LABEL_677:
    KeLeaveCriticalRegion();
  }
LABEL_368:
  v145 = v344;
  if ( v402 )
    GreSelectVisRgn(*(_QWORD *)(v344 + 8), 0LL, 1LL);
  v144 = v401;
LABEL_371:
  if ( (*(_DWORD *)(v145 + 64) & 2) == 0 )
    goto LABEL_377;
  if ( !(unsigned int)GreSetDCOwnerEx(*(_QWORD *)(v145 + 8), 2147483650LL, 0LL, 0LL, v342, v343, v344) )
  {
    *(_DWORD *)(v145 + 64) &= ~0x1000u;
    DestroyCacheDC((__int64 *)(gpDispInfo + 24), 0LL);
    goto LABEL_681;
  }
  CurrentThread = KeGetCurrentThread();
  v207 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v205)
    || (v327 = PsGetCurrentProcess(v209, v208),
        ProcessSessionId = PsGetProcessSessionIdEx(v327),
        v330 = PsGetCurrentThreadProcess(v329),
        v50 = ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(v330),
        v144 = v401,
        v50) )
  {
    v210 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v210 )
      v207 = *v210;
  }
  *(_QWORD *)(v145 + 72) = v207;
  *(_QWORD *)(v145 + 80) = 0LL;
  --gnDCECount;
  if ( v360 )
  {
    if ( (int)IsGreSelectFontSupported() >= 0 )
    {
      StockObject = GreGetStockObject(13);
      if ( qword_1C0257978 )
        qword_1C0257978(*(_QWORD *)(v145 + 8), StockObject);
    }
  }
LABEL_377:
  if ( (*(_BYTE *)(v399[5] + 26LL) & 0x40) != 0 && (v144 & 0x40000000) == 0 )
    GreSetLayout(*(HDC *)(v145 + 8), -1, 1u);
  v211 = *(_QWORD *)(v145 + 8);
  v378 = 0LL;
  v212 = 0LL;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v378);
  if ( (unsigned __int8)KeIsAttachedProcess(v213) )
  {
    v331 = PsGetCurrentProcess(v215, v214);
    PsGetProcessSessionIdEx(v331);
    v333 = PsGetCurrentThreadProcess(v332);
    PsGetProcessSessionIdEx(v333);
  }
  v216 = gpHandleManager;
  v217 = (unsigned __int16)v211 | ((unsigned int)v211 >> 8) & 0xFF0000;
  v394 = 1;
  if ( v217 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v211,
                                  1)
           + 13) == ((unsigned __int16)v211 | ((unsigned int)v211 >> 8) & 0xFF0000) >> 16 )
        v217 = (unsigned __int16)v211;
    }
    else
    {
      v217 = (unsigned __int16)v211;
    }
  }
  v218 = *((_QWORD *)v216 + 2);
  v219 = *(_DWORD *)(v218 + 2056);
  if ( v217 >= v219 + ((*(unsigned __int16 *)(v218 + 2) + 0xFFFF) << 16) )
    goto LABEL_719;
  v220 = ((v217 - v219) >> 16) + 1;
  if ( v217 < v219 )
    v220 = 0LL;
  v221 = *(_QWORD *)(v218 + 8 * v220 + 8);
  if ( (_DWORD)v220 )
    v217 += ((1 - (_DWORD)v220) << 16) - v219;
  v222 = 0LL;
  if ( v217 < *(_DWORD *)(v221 + 20) )
  {
    v223 = 16LL * (unsigned __int8)v217;
    v354 = 8 * ((unsigned __int64)v217 >> 8);
    v403 = v223 + *(_QWORD *)(**(_QWORD **)(v221 + 24) + v354);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v403, 0LL);
    if ( v217 < *(_DWORD *)(v221 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v221 + 24) + v354) + v223 + 8) )
    {
      *(_DWORD *)(24LL * v217 + *(_QWORD *)v221 + 8) |= 1u;
      v222 = (unsigned __int16 *)(24LL * v217 + *(_QWORD *)v221);
    }
    else
    {
      ExReleasePushLockExclusiveEx(v403, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  v393 = v222;
  if ( v222 )
  {
    _m_prefetchw(v222 + 4);
    v395 = *((_DWORD *)v222 + 2);
    v224 = *((_BYTE *)v222 + 15);
    if ( (v224 & 0x20) == 0 )
    {
      if ( (v224 & 0x40) == 0 )
      {
LABEL_395:
        if ( *((_BYTE *)v222 + 14) == 1 && v222[6] == WORD1(v211) )
        {
          v225 = *(_DWORD *)v222 & 0xFFFFFF;
          if ( v225 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          *v222,
                                          1)
                   + 13) == HIWORD(v225) )
                v225 = (unsigned __int16)v225;
            }
            else
            {
              v225 = *v222;
            }
          }
          v226 = *((_QWORD *)gpHandleManager + 2);
          v227 = *(_DWORD *)(v226 + 2056);
          if ( v225 >= v227 + ((*(unsigned __int16 *)(v226 + 2) + 0xFFFF) << 16) )
            goto LABEL_695;
          v228 = ((v225 - v227) >> 16) + 1;
          if ( v225 < v227 )
            v228 = 0LL;
          v229 = *(_QWORD *)(v226 + 8 * v228 + 8);
          if ( (_DWORD)v228 )
            v225 += ((1 - (_DWORD)v228) << 16) - v227;
          if ( v225 >= *(_DWORD *)(v229 + 20) )
LABEL_695:
            v212 = 0LL;
          else
            v212 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v229 + 24) + 8 * ((unsigned __int64)v225 >> 8))
                             + 16LL * (unsigned __int8)v225
                             + 8);
          ++*(_DWORD *)(v212 + 8);
        }
        v230 = *(_DWORD *)v222 & 0xFFFFFF;
        if ( v230 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        *v222,
                                        1)
                 + 13) == HIWORD(v230) )
              v230 = (unsigned __int16)v230;
          }
          else
          {
            v230 = *v222;
          }
        }
        v231 = gpHandleManager;
        v232 = *((_QWORD *)gpHandleManager + 2);
        v233 = *(_DWORD *)(v232 + 2056);
        if ( v230 >= v233 + ((*(unsigned __int16 *)(v232 + 2) + 0xFFFF) << 16) )
          goto LABEL_699;
        v234 = ((v230 - v233) >> 16) + 1;
        if ( v230 < v233 )
          v234 = 0LL;
        v235 = *(_QWORD *)(v232 + 8 * v234 + 8);
        if ( (_DWORD)v234 )
          v230 += ((1 - (_DWORD)v234) << 16) - v233;
        if ( v230 >= *(_DWORD *)(v235 + 20) )
LABEL_699:
          v236 = 0LL;
        else
          v236 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v235 + 24) + 8 * ((unsigned __int64)v230 >> 8))
                            + 16LL * (unsigned __int8)v230
                            + 8);
        v237 = (unsigned __int16)*v236 | (*v236 >> 8) & 0xFF0000;
        if ( v237 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)*v236,
                                        1)
                 + 13) == HIWORD(v237) )
              v237 = (unsigned __int16)v237;
          }
          else
          {
            v237 = (unsigned __int16)*v236;
          }
        }
        v238 = *((_QWORD *)v231 + 2);
        v239 = *(_DWORD *)(v238 + 2056);
        if ( v237 < v239 + ((*(unsigned __int16 *)(v238 + 2) + 0xFFFF) << 16) )
        {
          v240 = ((v237 - v239) >> 16) + 1;
          if ( v237 < v239 )
            v240 = 0LL;
          v241 = *(_QWORD *)(v238 + 8 * v240 + 8);
          if ( (_DWORD)v240 )
            v237 += ((1 - (_DWORD)v240) << 16) - v239;
          *(_DWORD *)(*(_QWORD *)v241 + 24LL * v237 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v241 + 24) + 8 * ((unsigned __int64)v237 >> 8)) + 16LL * (unsigned __int8)v237,
            0LL);
          KeLeaveCriticalRegion();
        }
        KeLeaveCriticalRegion();
        if ( !v212 )
          goto LABEL_469;
        *(_DWORD *)(v212 + 36) |= 0x100000u;
        GrepValidateVisRgn((struct DC *)v212, *(struct REGION **)(v212 + 1120));
        v244 = *(HDC *)v212;
        v361 = 0;
        v245 = (unsigned __int16)*(_DWORD *)v212 | (*(_DWORD *)v212 >> 8) & 0xFF0000;
        v355 = *(HDC *)v212;
        v379 = 0LL;
        PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v379);
        if ( (unsigned __int8)KeIsAttachedProcess(v246) )
        {
          v337 = PsGetCurrentProcess(v248, v247);
          PsGetProcessSessionIdEx(v337);
          v339 = PsGetCurrentThreadProcess(v338);
          PsGetProcessSessionIdEx(v339);
        }
        v249 = gpHandleManager;
        v397 = 1;
        if ( v245 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)v245,
                                        1)
                 + 13) == HIWORD(v245) )
              v245 = (unsigned __int16)v245;
          }
          else
          {
            v245 = (unsigned __int16)v245;
          }
        }
        v250 = *((_QWORD *)v249 + 2);
        v251 = *(_DWORD *)(v250 + 2056);
        if ( v245 >= v251 + ((*(unsigned __int16 *)(v250 + 2) + 0xFFFF) << 16) )
          goto LABEL_466;
        v252 = ((v245 - v251) >> 16) + 1;
        if ( v245 < v251 )
          v252 = 0LL;
        v253 = *(_QWORD *)(v250 + 8 * v252 + 8);
        if ( (_DWORD)v252 )
          v245 += ((1 - (_DWORD)v252) << 16) - v251;
        v254 = 0LL;
        if ( v245 < *(_DWORD *)(v253 + 20) )
        {
          v255 = 16LL * (unsigned __int8)v245;
          v256 = 8 * ((unsigned __int64)v245 >> 8);
          v404 = v255 + *(_QWORD *)(**(_QWORD **)(v253 + 24) + v256);
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v404, 0LL);
          if ( v245 < *(_DWORD *)(v253 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v253 + 24) + v256) + v255 + 8) )
          {
            *(_DWORD *)(24LL * v245 + *(_QWORD *)v253 + 8) |= 1u;
            v254 = (unsigned __int16 *)(24LL * v245 + *(_QWORD *)v253);
          }
          else
          {
            ExReleasePushLockExclusiveEx(v404, 0LL);
            KeLeaveCriticalRegion();
          }
          v244 = v355;
        }
        v396 = v254;
        if ( !v254 )
          goto LABEL_466;
        _m_prefetchw(v254 + 4);
        v50 = (*((_BYTE *)v254 + 15) & 0x20) == 0;
        v398 = *((_DWORD *)v254 + 2);
        if ( !v50 )
        {
          HANDLELOCK::vUnlock((HANDLELOCK *)&v396);
          if ( !v397 )
          {
LABEL_467:
            if ( v361 )
              bDeleteDCInternalEx(v244, 0LL);
            goto LABEL_469;
          }
          v254 = v396;
        }
        v361 = (*((_BYTE *)v254 + 15) & 8) != 0;
        v257 = *((_BYTE *)v254 + 14);
        if ( v257 == 5 )
        {
          v340 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v212 + 680);
          v341 = 0;
        }
        else
        {
          if ( v257 != 16 )
          {
LABEL_447:
            --*(_DWORD *)(v212 + 8);
            v258 = *(_DWORD *)v254 & 0xFFFFFF;
            if ( v258 >= 0x10000 )
            {
              if ( *(_DWORD *)gpHandleManager > 0x10000u )
              {
                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                            *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                            *v254,
                                            1)
                     + 13) == HIWORD(v258) )
                  v258 = (unsigned __int16)v258;
              }
              else
              {
                v258 = *v254;
              }
            }
            v259 = gpHandleManager;
            v260 = *((_QWORD *)gpHandleManager + 2);
            v261 = *(_DWORD *)(v260 + 2056);
            if ( v258 >= v261 + ((*(unsigned __int16 *)(v260 + 2) + 0xFFFF) << 16) )
              goto LABEL_715;
            v262 = ((v258 - v261) >> 16) + 1;
            if ( v258 < v261 )
              v262 = 0LL;
            v263 = *(_QWORD *)(v260 + 8 * v262 + 8);
            if ( (_DWORD)v262 )
              v258 += ((1 - (_DWORD)v262) << 16) - v261;
            if ( v258 >= *(_DWORD *)(v263 + 20) )
LABEL_715:
              v264 = 0LL;
            else
              v264 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v263 + 24) + 8 * ((unsigned __int64)v258 >> 8))
                                + 16LL * (unsigned __int8)v258
                                + 8);
            v265 = (unsigned __int16)*v264 | (*v264 >> 8) & 0xFF0000;
            if ( v265 >= 0x10000 )
            {
              if ( *(_DWORD *)gpHandleManager > 0x10000u )
              {
                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                            *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                            (unsigned __int16)*v264,
                                            1)
                     + 13) == HIWORD(v265) )
                  v265 = (unsigned __int16)v265;
              }
              else
              {
                v265 = (unsigned __int16)*v264;
              }
            }
            v266 = *((_QWORD *)v259 + 2);
            v267 = *(_DWORD *)(v266 + 2056);
            if ( v265 < v267 + ((*(unsigned __int16 *)(v266 + 2) + 0xFFFF) << 16) )
            {
              v268 = ((v265 - v267) >> 16) + 1;
              if ( v265 < v267 )
                v268 = 0LL;
              v269 = *(_QWORD *)(v266 + 8 * v268 + 8);
              if ( (_DWORD)v268 )
                v265 += ((1 - (_DWORD)v268) << 16) - v267;
              *(_DWORD *)(*(_QWORD *)v269 + 24LL * v265 + 8) &= ~1u;
              ExReleasePushLockExclusiveEx(
                *(_QWORD *)(**(_QWORD **)(v269 + 24) + 8 * ((unsigned __int64)v265 >> 8)) + 16LL * (unsigned __int8)v265,
                0LL);
              KeLeaveCriticalRegion();
            }
LABEL_466:
            KeLeaveCriticalRegion();
            goto LABEL_467;
          }
          v340 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v212 + 136);
          v341 = 2;
        }
        TrackObjectReferenceDecrement(v341, v340);
        goto LABEL_447;
      }
      v334 = gpHandleManager;
      v335 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v222 & 0xFFFFFF);
      v336 = GdiHandleEntryDirectory::GetEntryObject(*((GdiHandleEntryDirectory **)v334 + 2), v335);
      if ( *((_WORD *)v336 + 6) )
      {
        if ( *((struct _KTHREAD **)v336 + 2) == KeGetCurrentThread() )
          goto LABEL_691;
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v393);
    if ( v394 )
    {
LABEL_691:
      v222 = v393;
      goto LABEL_395;
    }
  }
  else
  {
LABEL_719:
    KeLeaveCriticalRegion();
  }
LABEL_469:
  if ( qword_1C0257980 )
  {
    v270 = v399;
    v271 = v344;
    if ( (int)qword_1C0257980() >= 0 && qword_1C0257988 )
      qword_1C0257988(*(_QWORD *)(v344 + 8), *v399, 0LL, 0LL);
  }
  else
  {
    v271 = v344;
    v270 = v399;
  }
  if ( v363 )
  {
    if ( (*(_BYTE *)(v363[5] + 26LL) & 8) != 0 )
    {
      if ( qword_1C0257980 )
      {
        if ( (int)qword_1C0257980() >= 0 )
        {
          v242 = v363[5];
          if ( qword_1C0257988 )
            qword_1C0257988(*(_QWORD *)(v271 + 8), *v270, *v363, (*(_BYTE *)(v242 + 27) & 2) == 0);
        }
      }
    }
  }
  if ( *(int *)(v271 + 64) < 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v242);
    *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200u;
    *(_QWORD *)(v271 + 72) = 0LL;
    *(_QWORD *)(v271 + 80) = PsGetCurrentProcessWin32Process(v287);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v242, (unsigned int)&LockRelease, v243, (__int64)ghsemDCVisRgn);
  v272 = (int)ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDCVisRgn);
    PsLeavePriorityRegion(v273);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v272, (unsigned int)&LockRelease, v243, (__int64)ghsemGreLock);
  v274 = (int)ghsemGreLock;
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
    PsLeavePriorityRegion(v275);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v274, (unsigned int)&LockRelease, v243, (__int64)ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v276);
  }
  return *(_QWORD *)(v271 + 8);
}
