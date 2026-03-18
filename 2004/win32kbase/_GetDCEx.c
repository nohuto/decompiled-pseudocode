/*
 * XREFs of _GetDCEx @ 0x1C008DE30
 * Callers:
 *     UserGetDesktopDC @ 0x1C0040DE8 (UserGetDesktopDC.c)
 *     _GetDC @ 0x1C004CC10 (_GetDC.c)
 *     NtUserGetDC @ 0x1C0090AC0 (NtUserGetDC.c)
 *     UserGetMonitorDC @ 0x1C00A52E8 (UserGetMonitorDC.c)
 * Callees:
 *     CreateEmptyRgnPublic @ 0x1C0014170 (CreateEmptyRgnPublic.c)
 *     CreateCacheDC @ 0x1C00141E0 (CreateCacheDC.c)
 *     GreSetRectRgn @ 0x1C0014BB0 (GreSetRectRgn.c)
 *     HmgMarkUndeletable @ 0x1C0015580 (HmgMarkUndeletable.c)
 *     DestroyCacheDC @ 0x1C0030D30 (DestroyCacheDC.c)
 *     IsGreSelectRedirectionBitmapSupported @ 0x1C0030E50 (IsGreSelectRedirectionBitmapSupported.c)
 *     IsCalcVisRgnSupported @ 0x1C003B7D0 (IsCalcVisRgnSupported.c)
 *     IsGreSelectFontSupported @ 0x1C003B7FC (IsGreSelectFontSupported.c)
 *     IsSpbCheckDceSupported @ 0x1C003CC40 (IsSpbCheckDceSupported.c)
 *     GreSetLayout @ 0x1C003CF80 (GreSetLayout.c)
 *     IsDeleteHrgnClipSupported @ 0x1C0040954 (IsDeleteHrgnClipSupported.c)
 *     GreOffsetRgn @ 0x1C007BAB0 (GreOffsetRgn.c)
 *     GreUnlockVisRgn @ 0x1C00811B0 (GreUnlockVisRgn.c)
 *     GreCreateRectRgnIndirect @ 0x1C0083440 (GreCreateRectRgnIndirect.c)
 *     GreGetStockObject @ 0x1C0083DB0 (GreGetStockObject.c)
 *     GreCombineRgn @ 0x1C0084B00 (GreCombineRgn.c)
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C008A000 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C008A360 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C008B040 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleEntryDirectory@@QEAAPEAVOBJECT@@I@Z @ 0x1C008B180 (-GetEntryObject@GdiHandleEntryDirectory@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C008B290 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C008C520 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C008D624 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C00903E0 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     GreSetDCOwnerEx @ 0x1C0090550 (GreSetDCOwnerEx.c)
 *     GreValidateVisrgn @ 0x1C00923C4 (GreValidateVisrgn.c)
 *     GreSelectVisRgn @ 0x1C0092430 (GreSelectVisRgn.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C009249C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     bDeleteDCInternalEx @ 0x1C0093960 (bDeleteDCInternalEx.c)
 *     GreIsRendering @ 0x1C0093E60 (GreIsRendering.c)
 *     DelayedDestroyCacheDC @ 0x1C00A5AA8 (DelayedDestroyCacheDC.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C0150378 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0150430 (McTemplateK0pz_EtwWriteTransfer.c)
 *     IsFlushWEFCOMPOSITEDDCEBoundsSupported @ 0x1C01F8024 (IsFlushWEFCOMPOSITEDDCEBoundsSupported.c)
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
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // r10
  char v19; // r9
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
  __int64 v118; // rcx
  HDC v119; // r15
  unsigned int v120; // ebx
  __int64 v121; // rcx
  __int64 v122; // rdx
  __int64 v123; // rcx
  GdiHandleManager *v124; // rsi
  __int64 v125; // rsi
  unsigned int v126; // edx
  __int64 v127; // rcx
  __int64 v128; // rsi
  unsigned __int16 *v129; // rdi
  __int64 v130; // r12
  unsigned __int64 v131; // r13
  char v132; // al
  unsigned int v133; // ebx
  GdiHandleManager *v134; // rdi
  __int64 v135; // rdx
  unsigned int v136; // r8d
  __int64 v137; // rcx
  __int64 v138; // r9
  _DWORD *v139; // rdx
  unsigned int v140; // ebx
  __int64 v141; // rdx
  unsigned int v142; // r8d
  __int64 v143; // rcx
  __int64 v144; // r10
  unsigned int v145; // ebx
  __int64 v146; // r14
  __int64 v147; // r15
  __int64 v148; // rsi
  __int64 v149; // rcx
  __int64 v150; // rdx
  __int64 v151; // rcx
  GdiHandleManager *v152; // r14
  unsigned int v153; // ebx
  __int64 v154; // r14
  unsigned int v155; // edx
  __int64 v156; // rcx
  __int64 v157; // r14
  unsigned __int16 *v158; // rdi
  __int64 v159; // r13
  char v160; // al
  unsigned int v161; // ebx
  __int64 v162; // rdx
  unsigned int v163; // r8d
  __int64 v164; // rcx
  __int64 v165; // r9
  unsigned int v166; // ebx
  GdiHandleManager *v167; // rdi
  __int64 v168; // rdx
  unsigned int v169; // r8d
  __int64 v170; // rcx
  __int64 v171; // r9
  _DWORD *v172; // rdx
  unsigned int v173; // ebx
  __int64 v174; // rdx
  unsigned int v175; // r8d
  __int64 v176; // rcx
  __int64 v177; // r10
  __int64 v178; // rax
  unsigned __int64 v179; // xmm0_8
  HDC v180; // r15
  unsigned int v181; // ebx
  __int64 v182; // rcx
  __int64 v183; // rdx
  __int64 v184; // rcx
  GdiHandleManager *v185; // r14
  __int64 v186; // r14
  unsigned int v187; // edx
  __int64 v188; // rcx
  __int64 v189; // r14
  unsigned __int16 *v190; // rdi
  __int64 v191; // r12
  unsigned __int64 v192; // r13
  char v193; // al
  unsigned int v194; // ebx
  GdiHandleManager *v195; // rdi
  __int64 v196; // rdx
  unsigned int v197; // r8d
  __int64 v198; // rcx
  __int64 v199; // r9
  _DWORD *v200; // rdx
  unsigned int v201; // ebx
  __int64 v202; // rdx
  unsigned int v203; // r8d
  __int64 v204; // rcx
  __int64 v205; // r10
  __int64 v206; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v208; // rdi
  __int64 v209; // rdx
  __int64 v210; // rcx
  __int64 *v211; // rax
  __int64 v212; // r15
  __int64 v213; // rsi
  __int64 v214; // rcx
  __int64 v215; // rdx
  __int64 v216; // rcx
  GdiHandleManager *v217; // r14
  unsigned int v218; // ebx
  __int64 v219; // r14
  unsigned int v220; // edx
  __int64 v221; // rcx
  __int64 v222; // r14
  unsigned __int16 *v223; // rdi
  __int64 v224; // r13
  char v225; // al
  unsigned int v226; // ebx
  __int64 v227; // rdx
  unsigned int v228; // r8d
  __int64 v229; // rcx
  __int64 v230; // r9
  unsigned int v231; // ebx
  GdiHandleManager *v232; // rdi
  __int64 v233; // rdx
  unsigned int v234; // r8d
  __int64 v235; // rcx
  __int64 v236; // r9
  _DWORD *v237; // rdx
  unsigned int v238; // ebx
  __int64 v239; // rdx
  unsigned int v240; // r8d
  __int64 v241; // rcx
  __int64 v242; // r10
  __int64 v243; // rcx
  int v244; // r8d
  HDC v245; // r15
  unsigned int v246; // ebx
  __int64 v247; // rcx
  __int64 v248; // rdx
  __int64 v249; // rcx
  GdiHandleManager *v250; // r14
  __int64 v251; // r14
  unsigned int v252; // edx
  __int64 v253; // rcx
  __int64 v254; // r14
  unsigned __int16 *v255; // rdi
  __int64 v256; // r12
  unsigned __int64 v257; // r13
  char v258; // al
  unsigned int v259; // ebx
  GdiHandleManager *v260; // rdi
  __int64 v261; // rdx
  unsigned int v262; // r8d
  __int64 v263; // rcx
  __int64 v264; // r9
  _DWORD *v265; // rdx
  unsigned int v266; // ebx
  __int64 v267; // rdx
  unsigned int v268; // r8d
  __int64 v269; // rcx
  __int64 v270; // r10
  _QWORD *v271; // rdi
  __int64 v272; // rbx
  int v273; // ecx
  __int64 v274; // rcx
  int v275; // ecx
  __int64 v276; // rcx
  __int64 v277; // rcx
  void *StockObject; // rdx
  unsigned int v280; // edi
  struct HOBJ__ *v281; // rax
  int v282; // ecx
  HRGN v283; // rax
  _QWORD *v284; // r9
  __int64 v285; // rcx
  HRGN v286; // rdx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v288; // rcx
  __int64 v289; // rax
  __int64 ThreadWin32Thread; // rax
  int v291; // eax
  __int64 CurrentProcess; // rax
  __int64 v293; // rcx
  __int64 CurrentThreadProcess; // rax
  GdiHandleManager *v295; // rbx
  unsigned int v296; // eax
  __int64 v297; // r9
  unsigned __int64 v298; // rdx
  unsigned int v299; // r8d
  __int64 v300; // rcx
  __int64 v301; // r10
  __int64 v302; // rdx
  __int64 v303; // rax
  __int64 v304; // rcx
  __int64 v305; // rax
  GdiHandleManager *v306; // rbx
  unsigned int v307; // eax
  struct OBJECT *v308; // rax
  __int64 v309; // rax
  __int64 v310; // rcx
  __int64 v311; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v312; // rdx
  unsigned int v313; // ecx
  struct HOBJ__ *RectRgnIndirect; // rax
  int v315; // ecx
  HRGN v316; // rax
  __int64 v317; // rax
  __int64 v318; // rcx
  __int64 v319; // rax
  GdiHandleManager *v320; // rbx
  unsigned int v321; // eax
  struct OBJECT *v322; // rax
  __int64 v323; // rax
  __int64 v324; // rcx
  __int64 v325; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v326; // rdx
  unsigned int v327; // ecx
  __int64 v328; // rax
  int ProcessSessionId; // ebx
  __int64 v330; // rcx
  __int64 v331; // rax
  __int64 v332; // rax
  __int64 v333; // rcx
  __int64 v334; // rax
  GdiHandleManager *v335; // rbx
  unsigned int v336; // eax
  struct OBJECT *v337; // rax
  __int64 v338; // rax
  __int64 v339; // rcx
  __int64 v340; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v341; // rdx
  unsigned int v342; // ecx
  const wchar_t *v343; // [rsp+20h] [rbp-E0h]
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
    v343 = L"ghsemDynamicModeChange";
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
  v8 = ghsemDCVisRgn;
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
    DelayedDestroyCacheDC(0LL);
  if ( (v4 & 0x10000) != 0 )
  {
    v15 = v4 & 0xFFFFFFC7;
    if ( (v4 & 1) != 0 )
    {
      v4 = v15 | 0x10;
      v16 = *(unsigned __int8 *)(a1[5] + 31LL);
      LOBYTE(v16) = v16 & 4;
      if ( !(_BYTE)v16 )
        v4 = v15;
    }
    else
    {
      v18 = (_QWORD *)a1[17];
      LODWORD(v17) = v15 | 0x20;
      v19 = *(_BYTE *)(v18[1] + 8LL);
      if ( v19 >= 0 )
        LODWORD(v17) = v4 & 0xFFFFFFC7;
      if ( (((v17 & 2) == 0) & (unsigned __int8)~((unsigned __int8)v19 >> 5)) != 0 )
      {
        if ( (v19 & 0x40) != 0 )
        {
          v289 = v18[5];
          if ( v289 )
            v10 = *(_QWORD *)(v289 + 8);
        }
        else
        {
          LODWORD(v17) = v17 | 2;
        }
      }
      v16 = (unsigned int)v17 | 8;
      v15 = *(unsigned __int8 *)(a1[5] + 31LL);
      if ( (*(_BYTE *)(a1[5] + 31LL) & 2) == 0 )
        v16 = (unsigned int)v17;
      v4 = v16 | 0x10;
      if ( (*(_BYTE *)(a1[5] + 31LL) & 4) == 0 )
        v4 = v16;
      v401 = v4;
      if ( (v15 & 0x20) == 0 )
        goto LABEL_37;
      v4 &= ~8u;
      v401 = v4;
      if ( !v18[10] )
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
  if ( qword_1C0252578 && (int)qword_1C0252578(v16) >= 0 && qword_1C0252580 )
    v20 = qword_1C0252580(a1);
  else
    v20 = 0LL;
  if ( !v20 || (*(_DWORD *)(*(_QWORD *)(v20 + 40) + 24LL) & 0x20000000) == 0 )
    goto LABEL_507;
  v21 = qword_1C0252588 && (int)qword_1C0252588(v16) >= 0 && qword_1C0252590 ? qword_1C0252590(v20) : 0LL;
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
      v286 = v23;
      v23 = EmptyRgnPublic;
      GreCombineRgn(EmptyRgnPublic, v286, 0LL, 5);
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
      v17 = v22[5];
      if ( (*(_BYTE *)(v17 + 21) & 1) != 0 || (*(_BYTE *)(*(_QWORD *)(v15 + 40) + 31LL) & 2) == 0 )
      {
        v85 = *(_BYTE *)(*(_QWORD *)(v15 + 40) + 31LL);
        if ( ((v85 ^ *(_BYTE *)(v17 + 31)) & 0x10) == 0 )
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
            CurrentThreadProcess = PsGetCurrentThreadProcess(v293);
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
                if ( (int)IsSpbCheckDceSupported() >= 0 && qword_1C02525E0 )
                  qword_1C02525E0(v25);
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
            v295 = gpHandleManager;
            v296 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v63 & 0xFFFFFF);
            v297 = *((_QWORD *)v295 + 2);
            v298 = v296;
            v299 = *(_DWORD *)(v297 + 2056);
            if ( v296 >= v299 + ((*(unsigned __int16 *)(v297 + 2) + 0xFFFF) << 16) )
              goto LABEL_574;
            v300 = ((v296 - v299) >> 16) + 1;
            if ( v296 < v299 )
              v300 = 0LL;
            v301 = *(_QWORD *)(v297 + 8 * v300 + 8);
            if ( (_DWORD)v300 )
              v298 = ((1 - (_DWORD)v300) << 16) - v299 + v296;
            if ( (unsigned int)v298 >= *(_DWORD *)(v301 + 20) )
LABEL_574:
              v302 = 0LL;
            else
              v302 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v301 + 24) + 8 * (v298 >> 8))
                               + 16LL * (unsigned __int8)v298
                               + 8);
            if ( *(_WORD *)(v302 + 12) && *(struct _KTHREAD **)(v302 + 16) == KeGetCurrentThread() )
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
      if ( !CreateCacheDC((__int64)v399, v401 & 0x4000 | 0x802, 0LL) )
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
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v15, v17);
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
      v291 = IsDeleteHrgnClipSupported();
      if ( v291 >= 0 && qword_1C02525C0 )
        qword_1C02525C0(v25);
      v284 = v399;
    }
    if ( (*(_DWORD *)(v25 + 64) & 0x4000) != 0 )
    {
      v285 = *(_QWORD *)(*(_QWORD *)(v25 + 32) + 40LL);
      if ( (*(_BYTE *)(v285 + 27) & 2) != 0 && (int)IsFlushWEFCOMPOSITEDDCEBoundsSupported(v285) >= 0 && qword_1C02525D0 )
        qword_1C02525D0(v25);
      if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0 && qword_1C02519A8 )
        qword_1C02519A8(*(_QWORD *)(v25 + 8), 0LL);
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
    if ( (*(_DWORD *)(v25 + 64) & 0x800) == 0 && (int)IsSpbCheckDceSupported() >= 0 && qword_1C02525E0 )
      qword_1C02525E0(v25);
    *(_DWORD *)(v25 + 64) = v24 | 0x1000;
    GreValidateVisrgn(*(_QWORD *)(v25 + 8), 0LL);
    v364 = 0LL;
    if ( (int)IsCalcVisRgnSupported() < 0
      || !qword_1C02525A0
      || !(unsigned int)qword_1C02525A0(&v364, v399, v356, v24, v343) )
    {
      *(_DWORD *)(v25 + 64) |= 0x10000000u;
    }
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
    v303 = PsGetCurrentProcess(v91, v90);
    PsGetProcessSessionIdEx(v303);
    v305 = PsGetCurrentThreadProcess(v304);
    PsGetProcessSessionIdEx(v305);
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
    v306 = gpHandleManager;
    v307 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v98 & 0xFFFFFF);
    v308 = GdiHandleEntryDirectory::GetEntryObject(*((GdiHandleEntryDirectory **)v306 + 2), v307);
    if ( *((_WORD *)v308 + 6) && *((struct _KTHREAD **)v308 + 2) == KeGetCurrentThread() )
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
    v119 = *(HDC *)v88;
    v358 = 0;
    v120 = (unsigned __int16)*(_DWORD *)v88 | (*(_DWORD *)v88 >> 8) & 0xFF0000;
    v351 = *(HDC *)v88;
    v375 = 0LL;
    PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v375);
    if ( (unsigned __int8)KeIsAttachedProcess(v121) )
    {
      v309 = PsGetCurrentProcess(v123, v122);
      PsGetProcessSessionIdEx(v309);
      v311 = PsGetCurrentThreadProcess(v310);
      PsGetProcessSessionIdEx(v311);
    }
    v124 = gpHandleManager;
    v385 = 1;
    if ( v120 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v120,
                                    1)
             + 13) == HIWORD(v120) )
          v120 = (unsigned __int16)v120;
      }
      else
      {
        v120 = (unsigned __int16)v120;
      }
    }
    v125 = *((_QWORD *)v124 + 2);
    v126 = *(_DWORD *)(v125 + 2056);
    if ( v120 >= v126 + ((*(unsigned __int16 *)(v125 + 2) + 0xFFFF) << 16) )
      goto LABEL_264;
    v127 = ((v120 - v126) >> 16) + 1;
    if ( v120 < v126 )
      v127 = 0LL;
    v128 = *(_QWORD *)(v125 + 8 * v127 + 8);
    if ( (_DWORD)v127 )
      v120 += ((1 - (_DWORD)v127) << 16) - v126;
    v129 = 0LL;
    if ( v120 < *(_DWORD *)(v128 + 20) )
    {
      v130 = 16LL * (unsigned __int8)v120;
      v131 = 8 * ((unsigned __int64)v120 >> 8);
      v347 = v130 + *(_QWORD *)(**(_QWORD **)(v128 + 24) + v131);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v347, 0LL);
      if ( v120 < *(_DWORD *)(v128 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v128 + 24) + v131) + v130 + 8) )
      {
        *(_DWORD *)(24LL * v120 + *(_QWORD *)v128 + 8) |= 1u;
        v129 = (unsigned __int16 *)(24LL * v120 + *(_QWORD *)v128);
      }
      else
      {
        ExReleasePushLockExclusiveEx(v347, 0LL);
        KeLeaveCriticalRegion();
      }
      v119 = v351;
    }
    v384 = v129;
    if ( !v129 )
      goto LABEL_264;
    _m_prefetchw(v129 + 4);
    v50 = (*((_BYTE *)v129 + 15) & 0x20) == 0;
    v386 = *((_DWORD *)v129 + 2);
    if ( !v50 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v384);
      if ( !v385 )
      {
LABEL_265:
        if ( v358 )
          bDeleteDCInternalEx(v119);
        goto LABEL_267;
      }
      v129 = v384;
    }
    v358 = (*((_BYTE *)v129 + 15) & 8) != 0;
    v132 = *((_BYTE *)v129 + 14);
    if ( v132 == 5 )
    {
      v312 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v88 + 680);
      v313 = 0;
    }
    else
    {
      if ( v132 != 16 )
      {
LABEL_245:
        --*(_DWORD *)(v88 + 8);
        v133 = *(_DWORD *)v129 & 0xFFFFFF;
        if ( v133 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        *v129,
                                        1)
                 + 13) == HIWORD(v133) )
              v133 = (unsigned __int16)v133;
          }
          else
          {
            v133 = *v129;
          }
        }
        v134 = gpHandleManager;
        v135 = *((_QWORD *)gpHandleManager + 2);
        v136 = *(_DWORD *)(v135 + 2056);
        if ( v133 >= v136 + ((*(unsigned __int16 *)(v135 + 2) + 0xFFFF) << 16) )
          goto LABEL_625;
        v137 = ((v133 - v136) >> 16) + 1;
        if ( v133 < v136 )
          v137 = 0LL;
        v138 = *(_QWORD *)(v135 + 8 * v137 + 8);
        if ( (_DWORD)v137 )
          v133 += ((1 - (_DWORD)v137) << 16) - v136;
        if ( v133 >= *(_DWORD *)(v138 + 20) )
LABEL_625:
          v139 = 0LL;
        else
          v139 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v138 + 24) + 8 * ((unsigned __int64)v133 >> 8))
                            + 16LL * (unsigned __int8)v133
                            + 8);
        v140 = (unsigned __int16)*v139 | (*v139 >> 8) & 0xFF0000;
        if ( v140 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)*v139,
                                        1)
                 + 13) == HIWORD(v140) )
              v140 = (unsigned __int16)v140;
          }
          else
          {
            v140 = (unsigned __int16)*v139;
          }
        }
        v141 = *((_QWORD *)v134 + 2);
        v142 = *(_DWORD *)(v141 + 2056);
        if ( v140 < v142 + ((*(unsigned __int16 *)(v141 + 2) + 0xFFFF) << 16) )
        {
          v143 = ((v140 - v142) >> 16) + 1;
          if ( v140 < v142 )
            v143 = 0LL;
          v144 = *(_QWORD *)(v141 + 8 * v143 + 8);
          if ( (_DWORD)v143 )
            v140 += ((1 - (_DWORD)v143) << 16) - v142;
          *(_DWORD *)(*(_QWORD *)v144 + 24LL * v140 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v144 + 24) + 8 * ((unsigned __int64)v140 >> 8)) + 16LL * (unsigned __int8)v140,
            0LL);
          KeLeaveCriticalRegion();
        }
LABEL_264:
        KeLeaveCriticalRegion();
        goto LABEL_265;
      }
      v312 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v88 + 136);
      v313 = 2;
    }
    TrackObjectReferenceDecrement(v313, v312);
    goto LABEL_245;
  }
LABEL_267:
  v145 = v401;
  if ( (v401 & 0x80u) == 0 )
  {
    if ( (v401 & 0x40) != 0 )
    {
      v280 = (unsigned int)EmptyRgnPublic;
      if ( EmptyRgnPublic )
      {
        GreSetRectRgn(ghrgnGDC, gZero.LowPart, gZero.HighPart, 0, 0);
        RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
        v146 = v344;
        *(_QWORD *)(v344 + 56) = RectRgnIndirect;
        GreSelectVisRgn(*(_QWORD *)(v344 + 8), RectRgnIndirect, 4LL);
        *(_QWORD *)(v344 + 40) = EmptyRgnPublic;
        v315 = *(_DWORD *)(v344 + 64);
        if ( (v401 & 0x40000) != 0 )
          v315 |= 0x40000u;
        *(_DWORD *)(v344 + 64) = v315 | 0x40;
        if ( EmptyRgnPublic == (HRGN)1 )
        {
          *(_QWORD *)(v344 + 48) = 1LL;
          goto LABEL_503;
        }
        GreCombineRgn(ghrgnGDC, *(HRGN *)(v344 + 56), EmptyRgnPublic, 4);
        v316 = (HRGN)CreateEmptyRgnPublic();
        *(_QWORD *)(v344 + 48) = v316;
        GreCombineRgn(v316, EmptyRgnPublic, 0LL, 5);
        if ( (unsigned __int64)EmptyRgnPublic <= 2 || (*(_DWORD *)(v344 + 64) & 0x40000) != 0 )
          goto LABEL_503;
        goto LABEL_502;
      }
    }
LABEL_269:
    v146 = v344;
    goto LABEL_270;
  }
  v280 = (unsigned int)EmptyRgnPublic;
  if ( EmptyRgnPublic == (HRGN)1 )
    goto LABEL_269;
  GreSetRectRgn(ghrgnGDC, gZero.LowPart, gZero.HighPart, 0, 0);
  v281 = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
  v146 = v344;
  *(_QWORD *)(v344 + 56) = v281;
  GreSelectVisRgn(*(_QWORD *)(v344 + 8), v281, 4LL);
  *(_QWORD *)(v344 + 40) = EmptyRgnPublic;
  v282 = *(_DWORD *)(v344 + 64);
  if ( (v401 & 0x40000) != 0 )
    v282 |= 0x40000u;
  *(_DWORD *)(v344 + 64) = v282 | 0x80;
  if ( !EmptyRgnPublic )
  {
    *(_QWORD *)(v344 + 48) = 0LL;
    goto LABEL_503;
  }
  GreCombineRgn(ghrgnGDC, *(HRGN *)(v344 + 56), EmptyRgnPublic, 1);
  v283 = (HRGN)CreateEmptyRgnPublic();
  *(_QWORD *)(v344 + 48) = v283;
  GreCombineRgn(v283, EmptyRgnPublic, 0LL, 5);
  if ( (unsigned __int64)EmptyRgnPublic <= 2 || (*(_DWORD *)(v344 + 64) & 0x40000) != 0 )
    goto LABEL_503;
LABEL_502:
  PsGetCurrentProcessId();
  HmgMarkUndeletable(v280, 4);
LABEL_503:
  *(_DWORD *)(v146 + 64) &= ~0x2000u;
  GreSelectVisRgn(*(_QWORD *)(v146 + 8), ghrgnGDC, 4LL);
LABEL_270:
  if ( (*(_DWORD *)(v146 + 64) & 0x4000) == 0 )
    goto LABEL_371;
  if ( qword_1C02519A0
    && (int)qword_1C02519A0(v118) >= 0
    && (!qword_1C02519A8 || !(unsigned int)qword_1C02519A8(*(_QWORD *)(v146 + 8), v365)) )
  {
    v402 = 1;
  }
  v147 = *(_QWORD *)(v146 + 8);
  v376 = 0LL;
  v148 = 0LL;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v376);
  if ( (unsigned __int8)KeIsAttachedProcess(v149) )
  {
    v317 = PsGetCurrentProcess(v151, v150);
    PsGetProcessSessionIdEx(v317);
    v319 = PsGetCurrentThreadProcess(v318);
    PsGetProcessSessionIdEx(v319);
  }
  v152 = gpHandleManager;
  v153 = (unsigned __int16)v147 | ((unsigned int)v147 >> 8) & 0xFF0000;
  v388 = 1;
  if ( v153 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v147,
                                  1)
           + 13) == ((unsigned __int16)v147 | ((unsigned int)v147 >> 8) & 0xFF0000) >> 16 )
        v153 = (unsigned __int16)v147;
    }
    else
    {
      v153 = (unsigned __int16)v147;
    }
  }
  v154 = *((_QWORD *)v152 + 2);
  v155 = *(_DWORD *)(v154 + 2056);
  if ( v153 >= v155 + ((*(unsigned __int16 *)(v154 + 2) + 0xFFFF) << 16) )
    goto LABEL_677;
  v156 = ((v153 - v155) >> 16) + 1;
  if ( v153 < v155 )
    v156 = 0LL;
  v157 = *(_QWORD *)(v154 + 8 * v156 + 8);
  if ( (_DWORD)v156 )
    v153 += ((1 - (_DWORD)v156) << 16) - v155;
  v158 = 0LL;
  if ( v153 < *(_DWORD *)(v157 + 20) )
  {
    v159 = 16LL * (unsigned __int8)v153;
    v352 = 8 * ((unsigned __int64)v153 >> 8);
    v348 = v159 + *(_QWORD *)(**(_QWORD **)(v157 + 24) + v352);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v348, 0LL);
    if ( v153 < *(_DWORD *)(v157 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v157 + 24) + v352) + v159 + 8) )
    {
      *(_DWORD *)(*(_QWORD *)v157 + 24LL * v153 + 8) |= 1u;
      v158 = (unsigned __int16 *)(24LL * v153 + *(_QWORD *)v157);
    }
    else
    {
      ExReleasePushLockExclusiveEx(v348, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  v387 = v158;
  if ( v158 )
  {
    _m_prefetchw(v158 + 4);
    v389 = *((_DWORD *)v158 + 2);
    v160 = *((_BYTE *)v158 + 15);
    if ( (v160 & 0x20) == 0 )
    {
      if ( (v160 & 0x40) == 0 )
      {
LABEL_292:
        if ( *((_BYTE *)v158 + 14) == 1 && v158[6] == WORD1(v147) )
        {
          v161 = *(_DWORD *)v158 & 0xFFFFFF;
          if ( v161 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          *v158,
                                          1)
                   + 13) == HIWORD(v161) )
                v161 = (unsigned __int16)v161;
            }
            else
            {
              v161 = *v158;
            }
          }
          v162 = *((_QWORD *)gpHandleManager + 2);
          v163 = *(_DWORD *)(v162 + 2056);
          if ( v161 >= v163 + ((*(unsigned __int16 *)(v162 + 2) + 0xFFFF) << 16) )
            goto LABEL_650;
          v164 = ((v161 - v163) >> 16) + 1;
          if ( v161 < v163 )
            v164 = 0LL;
          v165 = *(_QWORD *)(v162 + 8 * v164 + 8);
          if ( (_DWORD)v164 )
            v161 += ((1 - (_DWORD)v164) << 16) - v163;
          if ( v161 >= *(_DWORD *)(v165 + 20) )
LABEL_650:
            v148 = 0LL;
          else
            v148 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v165 + 24) + 8 * ((unsigned __int64)v161 >> 8))
                             + 16LL * (unsigned __int8)v161
                             + 8);
          ++*(_DWORD *)(v148 + 8);
        }
        v166 = *(_DWORD *)v158 & 0xFFFFFF;
        if ( v166 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        *v158,
                                        1)
                 + 13) == HIWORD(v166) )
              v166 = (unsigned __int16)v166;
          }
          else
          {
            v166 = *v158;
          }
        }
        v167 = gpHandleManager;
        v168 = *((_QWORD *)gpHandleManager + 2);
        v169 = *(_DWORD *)(v168 + 2056);
        if ( v166 >= v169 + ((*(unsigned __int16 *)(v168 + 2) + 0xFFFF) << 16) )
          goto LABEL_654;
        v170 = ((v166 - v169) >> 16) + 1;
        if ( v166 < v169 )
          v170 = 0LL;
        v171 = *(_QWORD *)(v168 + 8 * v170 + 8);
        if ( (_DWORD)v170 )
          v166 += ((1 - (_DWORD)v170) << 16) - v169;
        if ( v166 >= *(_DWORD *)(v171 + 20) )
LABEL_654:
          v172 = 0LL;
        else
          v172 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v171 + 24) + 8 * ((unsigned __int64)v166 >> 8))
                            + 16LL * (unsigned __int8)v166
                            + 8);
        v173 = (unsigned __int16)*v172 | (*v172 >> 8) & 0xFF0000;
        if ( v173 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)*v172,
                                        1)
                 + 13) == HIWORD(v173) )
              v173 = (unsigned __int16)v173;
          }
          else
          {
            v173 = (unsigned __int16)*v172;
          }
        }
        v174 = *((_QWORD *)v167 + 2);
        v175 = *(_DWORD *)(v174 + 2056);
        if ( v173 < v175 + ((*(unsigned __int16 *)(v174 + 2) + 0xFFFF) << 16) )
        {
          v176 = ((v173 - v175) >> 16) + 1;
          if ( v173 < v175 )
            v176 = 0LL;
          v177 = *(_QWORD *)(v174 + 8 * v176 + 8);
          if ( (_DWORD)v176 )
            v173 += ((1 - (_DWORD)v176) << 16) - v175;
          *(_DWORD *)(*(_QWORD *)v177 + 24LL * v173 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v177 + 24) + 8 * ((unsigned __int64)v173 >> 8)) + 16LL * (unsigned __int8)v173,
            0LL);
          KeLeaveCriticalRegion();
        }
        KeLeaveCriticalRegion();
        if ( !v148 )
          goto LABEL_368;
        *(_DWORD *)(v148 + 36) |= 0x40u;
        v178 = *(_QWORD *)(v148 + 1080);
        v179 = _mm_srli_si128(*(__m128i *)(v148 + 1080), 8).m128i_u64[0];
        if ( (_DWORD)v178 != (_DWORD)v179
          && (int)v178 < (int)v179
          && HIDWORD(v178) != HIDWORD(v179)
          && SHIDWORD(v178) < SHIDWORD(v179) )
        {
          *(_DWORD *)(v148 + 1080) = 0x7FFFFFFF;
          *(_DWORD *)(v148 + 1084) = 0x7FFFFFFF;
          *(_DWORD *)(v148 + 1088) = 0x80000000;
          *(_DWORD *)(v148 + 1092) = 0x80000000;
        }
        v180 = *(HDC *)v148;
        v359 = 0;
        v181 = (unsigned __int16)*(_DWORD *)v148 | (*(_DWORD *)v148 >> 8) & 0xFF0000;
        v353 = *(HDC *)v148;
        v377 = 0LL;
        PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v377);
        if ( (unsigned __int8)KeIsAttachedProcess(v182) )
        {
          v323 = PsGetCurrentProcess(v184, v183);
          PsGetProcessSessionIdEx(v323);
          v325 = PsGetCurrentThreadProcess(v324);
          PsGetProcessSessionIdEx(v325);
        }
        v185 = gpHandleManager;
        v391 = 1;
        if ( v181 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)v181,
                                        1)
                 + 13) == HIWORD(v181) )
              v181 = (unsigned __int16)v181;
          }
          else
          {
            v181 = (unsigned __int16)v181;
          }
        }
        v186 = *((_QWORD *)v185 + 2);
        v187 = *(_DWORD *)(v186 + 2056);
        if ( v181 >= v187 + ((*(unsigned __int16 *)(v186 + 2) + 0xFFFF) << 16) )
          goto LABEL_365;
        v188 = ((v181 - v187) >> 16) + 1;
        if ( v181 < v187 )
          v188 = 0LL;
        v189 = *(_QWORD *)(v186 + 8 * v188 + 8);
        if ( (_DWORD)v188 )
          v181 += ((1 - (_DWORD)v188) << 16) - v187;
        v190 = 0LL;
        if ( v181 < *(_DWORD *)(v189 + 20) )
        {
          v191 = 16LL * (unsigned __int8)v181;
          v192 = 8 * ((unsigned __int64)v181 >> 8);
          v349 = v191 + *(_QWORD *)(**(_QWORD **)(v189 + 24) + v192);
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v349, 0LL);
          if ( v181 < *(_DWORD *)(v189 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v189 + 24) + v192) + v191 + 8) )
          {
            *(_DWORD *)(24LL * v181 + *(_QWORD *)v189 + 8) |= 1u;
            v190 = (unsigned __int16 *)(24LL * v181 + *(_QWORD *)v189);
          }
          else
          {
            ExReleasePushLockExclusiveEx(v349, 0LL);
            KeLeaveCriticalRegion();
          }
          v180 = v353;
        }
        v390 = v190;
        if ( !v190 )
          goto LABEL_365;
        _m_prefetchw(v190 + 4);
        v50 = (*((_BYTE *)v190 + 15) & 0x20) == 0;
        v392 = *((_DWORD *)v190 + 2);
        if ( !v50 )
        {
          HANDLELOCK::vUnlock((HANDLELOCK *)&v390);
          if ( !v391 )
          {
LABEL_366:
            if ( v359 )
              bDeleteDCInternalEx(v180);
            goto LABEL_368;
          }
          v190 = v390;
        }
        v359 = (*((_BYTE *)v190 + 15) & 8) != 0;
        v193 = *((_BYTE *)v190 + 14);
        if ( v193 == 5 )
        {
          v326 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v148 + 680);
          v327 = 0;
        }
        else
        {
          if ( v193 != 16 )
          {
LABEL_346:
            --*(_DWORD *)(v148 + 8);
            v194 = *(_DWORD *)v190 & 0xFFFFFF;
            if ( v194 >= 0x10000 )
            {
              if ( *(_DWORD *)gpHandleManager > 0x10000u )
              {
                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                            *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                            *v190,
                                            1)
                     + 13) == HIWORD(v194) )
                  v194 = (unsigned __int16)v194;
              }
              else
              {
                v194 = *v190;
              }
            }
            v195 = gpHandleManager;
            v196 = *((_QWORD *)gpHandleManager + 2);
            v197 = *(_DWORD *)(v196 + 2056);
            if ( v194 >= v197 + ((*(unsigned __int16 *)(v196 + 2) + 0xFFFF) << 16) )
              goto LABEL_673;
            v198 = ((v194 - v197) >> 16) + 1;
            if ( v194 < v197 )
              v198 = 0LL;
            v199 = *(_QWORD *)(v196 + 8 * v198 + 8);
            if ( (_DWORD)v198 )
              v194 += ((1 - (_DWORD)v198) << 16) - v197;
            if ( v194 >= *(_DWORD *)(v199 + 20) )
LABEL_673:
              v200 = 0LL;
            else
              v200 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v199 + 24) + 8 * ((unsigned __int64)v194 >> 8))
                                + 16LL * (unsigned __int8)v194
                                + 8);
            v201 = (unsigned __int16)*v200 | (*v200 >> 8) & 0xFF0000;
            if ( v201 >= 0x10000 )
            {
              if ( *(_DWORD *)gpHandleManager > 0x10000u )
              {
                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                            *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                            (unsigned __int16)*v200,
                                            1)
                     + 13) == HIWORD(v201) )
                  v201 = (unsigned __int16)v201;
              }
              else
              {
                v201 = (unsigned __int16)*v200;
              }
            }
            v202 = *((_QWORD *)v195 + 2);
            v203 = *(_DWORD *)(v202 + 2056);
            if ( v201 < v203 + ((*(unsigned __int16 *)(v202 + 2) + 0xFFFF) << 16) )
            {
              v204 = ((v201 - v203) >> 16) + 1;
              if ( v201 < v203 )
                v204 = 0LL;
              v205 = *(_QWORD *)(v202 + 8 * v204 + 8);
              if ( (_DWORD)v204 )
                v201 += ((1 - (_DWORD)v204) << 16) - v203;
              *(_DWORD *)(*(_QWORD *)v205 + 24LL * v201 + 8) &= ~1u;
              ExReleasePushLockExclusiveEx(
                *(_QWORD *)(**(_QWORD **)(v205 + 24) + 8 * ((unsigned __int64)v201 >> 8)) + 16LL * (unsigned __int8)v201,
                0LL);
              KeLeaveCriticalRegion();
            }
LABEL_365:
            KeLeaveCriticalRegion();
            goto LABEL_366;
          }
          v326 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v148 + 136);
          v327 = 2;
        }
        TrackObjectReferenceDecrement(v327, v326);
        goto LABEL_346;
      }
      v320 = gpHandleManager;
      v321 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v158 & 0xFFFFFF);
      v322 = GdiHandleEntryDirectory::GetEntryObject(*((GdiHandleEntryDirectory **)v320 + 2), v321);
      if ( *((_WORD *)v322 + 6) )
      {
        if ( *((struct _KTHREAD **)v322 + 2) == KeGetCurrentThread() )
          goto LABEL_646;
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v387);
    if ( v388 )
    {
LABEL_646:
      v158 = v387;
      goto LABEL_292;
    }
  }
  else
  {
LABEL_677:
    KeLeaveCriticalRegion();
  }
LABEL_368:
  v146 = v344;
  if ( v402 )
    GreSelectVisRgn(*(_QWORD *)(v344 + 8), 0LL, 1LL);
  v145 = v401;
LABEL_371:
  if ( (*(_DWORD *)(v146 + 64) & 2) == 0 )
    goto LABEL_377;
  if ( !(unsigned int)GreSetDCOwnerEx(*(_QWORD *)(v146 + 8), 2147483650LL, 0LL, 0LL) )
  {
    *(_DWORD *)(v146 + 64) &= ~0x1000u;
    DestroyCacheDC((__int64 *)(gpDispInfo + 24), 0LL);
    goto LABEL_681;
  }
  CurrentThread = KeGetCurrentThread();
  v208 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v206)
    || (v328 = PsGetCurrentProcess(v210, v209),
        ProcessSessionId = PsGetProcessSessionIdEx(v328),
        v331 = PsGetCurrentThreadProcess(v330),
        v50 = ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(v331),
        v145 = v401,
        v50) )
  {
    v211 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v211 )
      v208 = *v211;
  }
  *(_QWORD *)(v146 + 72) = v208;
  *(_QWORD *)(v146 + 80) = 0LL;
  --gnDCECount;
  if ( v360 )
  {
    if ( (int)IsGreSelectFontSupported() >= 0 )
    {
      StockObject = GreGetStockObject(13LL);
      if ( qword_1C02519B8 )
        qword_1C02519B8(*(_QWORD *)(v146 + 8), StockObject);
    }
  }
LABEL_377:
  if ( (*(_BYTE *)(v399[5] + 26LL) & 0x40) != 0 && (v145 & 0x40000000) == 0 )
    GreSetLayout(*(HDC *)(v146 + 8), -1, 1u);
  v212 = *(_QWORD *)(v146 + 8);
  v378 = 0LL;
  v213 = 0LL;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v378);
  if ( (unsigned __int8)KeIsAttachedProcess(v214) )
  {
    v332 = PsGetCurrentProcess(v216, v215);
    PsGetProcessSessionIdEx(v332);
    v334 = PsGetCurrentThreadProcess(v333);
    PsGetProcessSessionIdEx(v334);
  }
  v217 = gpHandleManager;
  v218 = (unsigned __int16)v212 | ((unsigned int)v212 >> 8) & 0xFF0000;
  v394 = 1;
  if ( v218 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v212,
                                  1)
           + 13) == ((unsigned __int16)v212 | ((unsigned int)v212 >> 8) & 0xFF0000) >> 16 )
        v218 = (unsigned __int16)v212;
    }
    else
    {
      v218 = (unsigned __int16)v212;
    }
  }
  v219 = *((_QWORD *)v217 + 2);
  v220 = *(_DWORD *)(v219 + 2056);
  if ( v218 >= v220 + ((*(unsigned __int16 *)(v219 + 2) + 0xFFFF) << 16) )
    goto LABEL_719;
  v221 = ((v218 - v220) >> 16) + 1;
  if ( v218 < v220 )
    v221 = 0LL;
  v222 = *(_QWORD *)(v219 + 8 * v221 + 8);
  if ( (_DWORD)v221 )
    v218 += ((1 - (_DWORD)v221) << 16) - v220;
  v223 = 0LL;
  if ( v218 < *(_DWORD *)(v222 + 20) )
  {
    v224 = 16LL * (unsigned __int8)v218;
    v354 = 8 * ((unsigned __int64)v218 >> 8);
    v403 = v224 + *(_QWORD *)(**(_QWORD **)(v222 + 24) + v354);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v403, 0LL);
    if ( v218 < *(_DWORD *)(v222 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v222 + 24) + v354) + v224 + 8) )
    {
      *(_DWORD *)(24LL * v218 + *(_QWORD *)v222 + 8) |= 1u;
      v223 = (unsigned __int16 *)(24LL * v218 + *(_QWORD *)v222);
    }
    else
    {
      ExReleasePushLockExclusiveEx(v403, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  v393 = v223;
  if ( v223 )
  {
    _m_prefetchw(v223 + 4);
    v395 = *((_DWORD *)v223 + 2);
    v225 = *((_BYTE *)v223 + 15);
    if ( (v225 & 0x20) == 0 )
    {
      if ( (v225 & 0x40) == 0 )
      {
LABEL_395:
        if ( *((_BYTE *)v223 + 14) == 1 && v223[6] == WORD1(v212) )
        {
          v226 = *(_DWORD *)v223 & 0xFFFFFF;
          if ( v226 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          *v223,
                                          1)
                   + 13) == HIWORD(v226) )
                v226 = (unsigned __int16)v226;
            }
            else
            {
              v226 = *v223;
            }
          }
          v227 = *((_QWORD *)gpHandleManager + 2);
          v228 = *(_DWORD *)(v227 + 2056);
          if ( v226 >= v228 + ((*(unsigned __int16 *)(v227 + 2) + 0xFFFF) << 16) )
            goto LABEL_695;
          v229 = ((v226 - v228) >> 16) + 1;
          if ( v226 < v228 )
            v229 = 0LL;
          v230 = *(_QWORD *)(v227 + 8 * v229 + 8);
          if ( (_DWORD)v229 )
            v226 += ((1 - (_DWORD)v229) << 16) - v228;
          if ( v226 >= *(_DWORD *)(v230 + 20) )
LABEL_695:
            v213 = 0LL;
          else
            v213 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v230 + 24) + 8 * ((unsigned __int64)v226 >> 8))
                             + 16LL * (unsigned __int8)v226
                             + 8);
          ++*(_DWORD *)(v213 + 8);
        }
        v231 = *(_DWORD *)v223 & 0xFFFFFF;
        if ( v231 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        *v223,
                                        1)
                 + 13) == HIWORD(v231) )
              v231 = (unsigned __int16)v231;
          }
          else
          {
            v231 = *v223;
          }
        }
        v232 = gpHandleManager;
        v233 = *((_QWORD *)gpHandleManager + 2);
        v234 = *(_DWORD *)(v233 + 2056);
        if ( v231 >= v234 + ((*(unsigned __int16 *)(v233 + 2) + 0xFFFF) << 16) )
          goto LABEL_699;
        v235 = ((v231 - v234) >> 16) + 1;
        if ( v231 < v234 )
          v235 = 0LL;
        v236 = *(_QWORD *)(v233 + 8 * v235 + 8);
        if ( (_DWORD)v235 )
          v231 += ((1 - (_DWORD)v235) << 16) - v234;
        if ( v231 >= *(_DWORD *)(v236 + 20) )
LABEL_699:
          v237 = 0LL;
        else
          v237 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v236 + 24) + 8 * ((unsigned __int64)v231 >> 8))
                            + 16LL * (unsigned __int8)v231
                            + 8);
        v238 = (unsigned __int16)*v237 | (*v237 >> 8) & 0xFF0000;
        if ( v238 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)*v237,
                                        1)
                 + 13) == HIWORD(v238) )
              v238 = (unsigned __int16)v238;
          }
          else
          {
            v238 = (unsigned __int16)*v237;
          }
        }
        v239 = *((_QWORD *)v232 + 2);
        v240 = *(_DWORD *)(v239 + 2056);
        if ( v238 < v240 + ((*(unsigned __int16 *)(v239 + 2) + 0xFFFF) << 16) )
        {
          v241 = ((v238 - v240) >> 16) + 1;
          if ( v238 < v240 )
            v241 = 0LL;
          v242 = *(_QWORD *)(v239 + 8 * v241 + 8);
          if ( (_DWORD)v241 )
            v238 += ((1 - (_DWORD)v241) << 16) - v240;
          *(_DWORD *)(*(_QWORD *)v242 + 24LL * v238 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v242 + 24) + 8 * ((unsigned __int64)v238 >> 8)) + 16LL * (unsigned __int8)v238,
            0LL);
          KeLeaveCriticalRegion();
        }
        KeLeaveCriticalRegion();
        if ( !v213 )
          goto LABEL_469;
        *(_DWORD *)(v213 + 36) |= 0x100000u;
        GrepValidateVisRgn((struct DC *)v213, *(struct REGION **)(v213 + 1120));
        v245 = *(HDC *)v213;
        v361 = 0;
        v246 = (unsigned __int16)*(_DWORD *)v213 | (*(_DWORD *)v213 >> 8) & 0xFF0000;
        v355 = *(HDC *)v213;
        v379 = 0LL;
        PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v379);
        if ( (unsigned __int8)KeIsAttachedProcess(v247) )
        {
          v338 = PsGetCurrentProcess(v249, v248);
          PsGetProcessSessionIdEx(v338);
          v340 = PsGetCurrentThreadProcess(v339);
          PsGetProcessSessionIdEx(v340);
        }
        v250 = gpHandleManager;
        v397 = 1;
        if ( v246 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)v246,
                                        1)
                 + 13) == HIWORD(v246) )
              v246 = (unsigned __int16)v246;
          }
          else
          {
            v246 = (unsigned __int16)v246;
          }
        }
        v251 = *((_QWORD *)v250 + 2);
        v252 = *(_DWORD *)(v251 + 2056);
        if ( v246 >= v252 + ((*(unsigned __int16 *)(v251 + 2) + 0xFFFF) << 16) )
          goto LABEL_466;
        v253 = ((v246 - v252) >> 16) + 1;
        if ( v246 < v252 )
          v253 = 0LL;
        v254 = *(_QWORD *)(v251 + 8 * v253 + 8);
        if ( (_DWORD)v253 )
          v246 += ((1 - (_DWORD)v253) << 16) - v252;
        v255 = 0LL;
        if ( v246 < *(_DWORD *)(v254 + 20) )
        {
          v256 = 16LL * (unsigned __int8)v246;
          v257 = 8 * ((unsigned __int64)v246 >> 8);
          v404 = v256 + *(_QWORD *)(**(_QWORD **)(v254 + 24) + v257);
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v404, 0LL);
          if ( v246 < *(_DWORD *)(v254 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v254 + 24) + v257) + v256 + 8) )
          {
            *(_DWORD *)(24LL * v246 + *(_QWORD *)v254 + 8) |= 1u;
            v255 = (unsigned __int16 *)(24LL * v246 + *(_QWORD *)v254);
          }
          else
          {
            ExReleasePushLockExclusiveEx(v404, 0LL);
            KeLeaveCriticalRegion();
          }
          v245 = v355;
        }
        v396 = v255;
        if ( !v255 )
          goto LABEL_466;
        _m_prefetchw(v255 + 4);
        v50 = (*((_BYTE *)v255 + 15) & 0x20) == 0;
        v398 = *((_DWORD *)v255 + 2);
        if ( !v50 )
        {
          HANDLELOCK::vUnlock((HANDLELOCK *)&v396);
          if ( !v397 )
          {
LABEL_467:
            if ( v361 )
              bDeleteDCInternalEx(v245);
            goto LABEL_469;
          }
          v255 = v396;
        }
        v361 = (*((_BYTE *)v255 + 15) & 8) != 0;
        v258 = *((_BYTE *)v255 + 14);
        if ( v258 == 5 )
        {
          v341 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v213 + 680);
          v342 = 0;
        }
        else
        {
          if ( v258 != 16 )
          {
LABEL_447:
            --*(_DWORD *)(v213 + 8);
            v259 = *(_DWORD *)v255 & 0xFFFFFF;
            if ( v259 >= 0x10000 )
            {
              if ( *(_DWORD *)gpHandleManager > 0x10000u )
              {
                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                            *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                            *v255,
                                            1)
                     + 13) == HIWORD(v259) )
                  v259 = (unsigned __int16)v259;
              }
              else
              {
                v259 = *v255;
              }
            }
            v260 = gpHandleManager;
            v261 = *((_QWORD *)gpHandleManager + 2);
            v262 = *(_DWORD *)(v261 + 2056);
            if ( v259 >= v262 + ((*(unsigned __int16 *)(v261 + 2) + 0xFFFF) << 16) )
              goto LABEL_715;
            v263 = ((v259 - v262) >> 16) + 1;
            if ( v259 < v262 )
              v263 = 0LL;
            v264 = *(_QWORD *)(v261 + 8 * v263 + 8);
            if ( (_DWORD)v263 )
              v259 += ((1 - (_DWORD)v263) << 16) - v262;
            if ( v259 >= *(_DWORD *)(v264 + 20) )
LABEL_715:
              v265 = 0LL;
            else
              v265 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v264 + 24) + 8 * ((unsigned __int64)v259 >> 8))
                                + 16LL * (unsigned __int8)v259
                                + 8);
            v266 = (unsigned __int16)*v265 | (*v265 >> 8) & 0xFF0000;
            if ( v266 >= 0x10000 )
            {
              if ( *(_DWORD *)gpHandleManager > 0x10000u )
              {
                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                            *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                            (unsigned __int16)*v265,
                                            1)
                     + 13) == HIWORD(v266) )
                  v266 = (unsigned __int16)v266;
              }
              else
              {
                v266 = (unsigned __int16)*v265;
              }
            }
            v267 = *((_QWORD *)v260 + 2);
            v268 = *(_DWORD *)(v267 + 2056);
            if ( v266 < v268 + ((*(unsigned __int16 *)(v267 + 2) + 0xFFFF) << 16) )
            {
              v269 = ((v266 - v268) >> 16) + 1;
              if ( v266 < v268 )
                v269 = 0LL;
              v270 = *(_QWORD *)(v267 + 8 * v269 + 8);
              if ( (_DWORD)v269 )
                v266 += ((1 - (_DWORD)v269) << 16) - v268;
              *(_DWORD *)(*(_QWORD *)v270 + 24LL * v266 + 8) &= ~1u;
              ExReleasePushLockExclusiveEx(
                *(_QWORD *)(**(_QWORD **)(v270 + 24) + 8 * ((unsigned __int64)v266 >> 8)) + 16LL * (unsigned __int8)v266,
                0LL);
              KeLeaveCriticalRegion();
            }
LABEL_466:
            KeLeaveCriticalRegion();
            goto LABEL_467;
          }
          v341 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v213 + 136);
          v342 = 2;
        }
        TrackObjectReferenceDecrement(v342, v341);
        goto LABEL_447;
      }
      v335 = gpHandleManager;
      v336 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v223 & 0xFFFFFF);
      v337 = GdiHandleEntryDirectory::GetEntryObject(*((GdiHandleEntryDirectory **)v335 + 2), v336);
      if ( *((_WORD *)v337 + 6) )
      {
        if ( *((struct _KTHREAD **)v337 + 2) == KeGetCurrentThread() )
          goto LABEL_691;
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v393);
    if ( v394 )
    {
LABEL_691:
      v223 = v393;
      goto LABEL_395;
    }
  }
  else
  {
LABEL_719:
    KeLeaveCriticalRegion();
  }
LABEL_469:
  if ( qword_1C02519C0 )
  {
    v271 = v399;
    v272 = v344;
    if ( (int)qword_1C02519C0(v243) >= 0 && qword_1C02519C8 )
    {
      LODWORD(v343) = 0;
      qword_1C02519C8(*(_QWORD *)(v344 + 8), *v399, 0LL, 0LL, v343);
    }
  }
  else
  {
    v272 = v344;
    v271 = v399;
  }
  if ( v363 )
  {
    if ( (*(_BYTE *)(v363[5] + 26LL) & 8) != 0 )
    {
      if ( qword_1C02519C0 )
      {
        if ( (int)qword_1C02519C0(v243) >= 0 )
        {
          v243 = v363[5];
          if ( qword_1C02519C8 )
          {
            LODWORD(v343) = (*(_WORD *)(v243 + 42) & 0x3FFF) == 669;
            qword_1C02519C8(*(_QWORD *)(v272 + 8), *v271, *v363, (*(_BYTE *)(v243 + 27) & 2) == 0, v343);
          }
        }
      }
    }
  }
  if ( *(int *)(v272 + 64) < 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v243);
    *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200u;
    *(_QWORD *)(v272 + 72) = 0LL;
    *(_QWORD *)(v272 + 80) = PsGetCurrentProcessWin32Process(v288);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v243, (unsigned int)&LockRelease, v244, (__int64)ghsemDCVisRgn);
  v273 = (int)ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
    PsLeavePriorityRegion(v274);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v273, (unsigned int)&LockRelease, v244, (__int64)ghsemGreLock);
  v275 = (int)ghsemGreLock;
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
    PsLeavePriorityRegion(v276);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v275, (unsigned int)&LockRelease, v244, (__int64)ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v277);
  }
  return *(_QWORD *)(v272 + 8);
}
