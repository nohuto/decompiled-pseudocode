/*
 * XREFs of _GetDCEx @ 0x1C0047DC0
 * Callers:
 *     NtUserGetDC @ 0x1C004AA70 (NtUserGetDC.c)
 *     UserGetMonitorDC @ 0x1C005EB90 (UserGetMonitorDC.c)
 *     UserGetDesktopDC @ 0x1C00A3358 (UserGetDesktopDC.c)
 *     _GetDC @ 0x1C00ADB70 (_GetDC.c)
 * Callees:
 *     GreSetRectRgn @ 0x1C001CDA0 (GreSetRectRgn.c)
 *     HmgMarkUndeletable @ 0x1C001E480 (HmgMarkUndeletable.c)
 *     CreateEmptyRgnPublic @ 0x1C001FA90 (CreateEmptyRgnPublic.c)
 *     CreateCacheDC @ 0x1C001FB00 (CreateCacheDC.c)
 *     DestroyCacheDC @ 0x1C0020B80 (DestroyCacheDC.c)
 *     IsGreSelectRedirectionBitmapSupported @ 0x1C0020CA0 (IsGreSelectRedirectionBitmapSupported.c)
 *     GreGetStockObject @ 0x1C00326E0 (GreGetStockObject.c)
 *     GreOffsetRgn @ 0x1C0037F80 (GreOffsetRgn.c)
 *     bDeleteDCInternalEx @ 0x1C003A1C0 (bDeleteDCInternalEx.c)
 *     GreUnlockVisRgn @ 0x1C003CF80 (GreUnlockVisRgn.c)
 *     GreCreateRectRgnIndirect @ 0x1C003DA50 (GreCreateRectRgnIndirect.c)
 *     GreCombineRgn @ 0x1C003F0E0 (GreCombineRgn.c)
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C00445F0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0044950 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C00455B0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleEntryDirectory@@QEAAPEAVOBJECT@@I@Z @ 0x1C00456F0 (-GetEntryObject@GdiHandleEntryDirectory@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0045800 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00462B0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C00475B4 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C004A370 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     GreSetDCOwnerEx @ 0x1C004A4E0 (GreSetDCOwnerEx.c)
 *     GreValidateVisrgn @ 0x1C004B8CC (GreValidateVisrgn.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004BA04 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreSelectVisRgn @ 0x1C004C6C0 (GreSelectVisRgn.c)
 *     GreIsRendering @ 0x1C004D5D0 (GreIsRendering.c)
 *     DelayedDestroyCacheDC @ 0x1C005E8A8 (DelayedDestroyCacheDC.c)
 *     IsCalcVisRgnSupported @ 0x1C009AFC8 (IsCalcVisRgnSupported.c)
 *     IsGreSelectFontSupported @ 0x1C009AFF4 (IsGreSelectFontSupported.c)
 *     IsSpbCheckDceSupported @ 0x1C00A00D8 (IsSpbCheckDceSupported.c)
 *     GreSetLayout @ 0x1C00A0420 (GreSetLayout.c)
 *     IsDeleteHrgnClipSupported @ 0x1C00A3024 (IsDeleteHrgnClipSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C014DDC8 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C014DE80 (McTemplateK0pz_EtwWriteTransfer.c)
 *     IsFlushWEFCOMPOSITEDDCEBoundsSupported @ 0x1C01F66F4 (IsFlushWEFCOMPOSITEDDCEBoundsSupported.c)
 */

__int64 __fastcall GetDCEx(_QWORD *a1, HRGN a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r15d
  const wchar_t *v6; // rcx
  struct _ERESOURCE *v7; // rbx
  const wchar_t *v8; // rcx
  struct _ERESOURCE *v9; // rbx
  const wchar_t *v10; // rcx
  __int64 v11; // r14
  __int64 v12; // r12
  _QWORD *v13; // rdx
  char v14; // al
  int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // r8
  _QWORD *v18; // r10
  char v19; // r9
  unsigned int v20; // ecx
  __int64 v21; // rdi
  __int64 v22; // r13
  _QWORD *v23; // r9
  HRGN v24; // r13
  unsigned int v25; // r13d
  __int64 v26; // r15
  _QWORD *v27; // r12
  __int64 v28; // r15
  __int64 v29; // rdi
  struct OBJECT *EntryObject; // r14
  unsigned int v31; // ebx
  _DWORD *v32; // rsi
  GdiHandleManager *v33; // rbx
  unsigned int v34; // eax
  GdiHandleManager *v35; // rbx
  unsigned int v36; // eax
  __int64 v37; // r8
  unsigned __int64 v38; // rdx
  unsigned int v39; // r9d
  __int64 v40; // rcx
  __int64 v41; // r10
  _DWORD *v42; // rdx
  unsigned int v43; // eax
  __int64 v44; // r10
  unsigned int v45; // edx
  unsigned int v46; // r8d
  __int64 v47; // rcx
  __int64 v48; // r10
  int v49; // ebx
  int v50; // eax
  bool v51; // zf
  _QWORD *v52; // rbx
  __int64 v53; // r12
  __int64 v54; // r14
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
  __int64 v89; // rdx
  __int64 v90; // rcx
  GdiHandleManager *v91; // rsi
  unsigned int v92; // ebx
  __int64 v93; // rsi
  unsigned int v94; // edx
  __int64 v95; // rcx
  __int64 v96; // rsi
  unsigned __int16 *v97; // rdi
  __int64 v98; // r13
  char v99; // al
  unsigned int v100; // ebx
  __int64 v101; // rdx
  unsigned int v102; // r8d
  __int64 v103; // rcx
  __int64 v104; // r9
  unsigned int v105; // ebx
  GdiHandleManager *v106; // rdi
  __int64 v107; // rdx
  unsigned int v108; // r8d
  __int64 v109; // rcx
  __int64 v110; // r9
  _DWORD *v111; // rdx
  unsigned int v112; // ebx
  __int64 v113; // rdx
  unsigned int v114; // r8d
  __int64 v115; // rcx
  __int64 v116; // r10
  HDC v117; // r15
  unsigned int v118; // ebx
  __int64 v119; // rdx
  __int64 v120; // rcx
  GdiHandleManager *v121; // rsi
  __int64 v122; // rsi
  unsigned int v123; // edx
  __int64 v124; // rcx
  __int64 v125; // rsi
  unsigned __int16 *v126; // rdi
  __int64 v127; // r12
  unsigned __int64 v128; // r13
  char v129; // al
  unsigned int v130; // ebx
  GdiHandleManager *v131; // rdi
  __int64 v132; // rdx
  unsigned int v133; // r8d
  __int64 v134; // rcx
  __int64 v135; // r9
  _DWORD *v136; // rdx
  unsigned int v137; // ebx
  __int64 v138; // rdx
  unsigned int v139; // r8d
  __int64 v140; // rcx
  __int64 v141; // r10
  unsigned int v142; // ebx
  __int64 v143; // r14
  __int64 v144; // r15
  __int64 v145; // rsi
  __int64 v146; // rdx
  __int64 v147; // rcx
  GdiHandleManager *v148; // r14
  unsigned int v149; // ebx
  __int64 v150; // r14
  unsigned int v151; // edx
  __int64 v152; // rcx
  __int64 v153; // r14
  unsigned __int16 *v154; // rdi
  __int64 v155; // r13
  char v156; // al
  unsigned int v157; // ebx
  __int64 v158; // rdx
  unsigned int v159; // r8d
  __int64 v160; // rcx
  __int64 v161; // r9
  unsigned int v162; // ebx
  GdiHandleManager *v163; // rdi
  __int64 v164; // rdx
  unsigned int v165; // r8d
  __int64 v166; // rcx
  __int64 v167; // r9
  _DWORD *v168; // rdx
  unsigned int v169; // ebx
  __int64 v170; // rdx
  unsigned int v171; // r8d
  __int64 v172; // rcx
  __int64 v173; // r10
  __int64 v174; // rax
  unsigned __int64 v175; // xmm0_8
  HDC v176; // r15
  unsigned int v177; // ebx
  __int64 v178; // rdx
  __int64 v179; // rcx
  GdiHandleManager *v180; // r14
  __int64 v181; // r14
  unsigned int v182; // edx
  __int64 v183; // rcx
  __int64 v184; // r14
  unsigned __int16 *v185; // rdi
  __int64 v186; // r12
  unsigned __int64 v187; // r13
  char v188; // al
  unsigned int v189; // ebx
  GdiHandleManager *v190; // rdi
  __int64 v191; // rdx
  unsigned int v192; // r8d
  __int64 v193; // rcx
  __int64 v194; // r9
  _DWORD *v195; // rdx
  unsigned int v196; // ebx
  __int64 v197; // rdx
  unsigned int v198; // r8d
  __int64 v199; // rcx
  __int64 v200; // r10
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v202; // rdi
  __int64 v203; // rdx
  __int64 v204; // rcx
  __int64 *v205; // rax
  __int64 v206; // r15
  __int64 v207; // rsi
  __int64 v208; // rdx
  __int64 v209; // rcx
  GdiHandleManager *v210; // r14
  unsigned int v211; // ebx
  __int64 v212; // r14
  unsigned int v213; // edx
  __int64 v214; // rcx
  __int64 v215; // r14
  unsigned __int16 *v216; // rdi
  __int64 v217; // r13
  char v218; // al
  unsigned int v219; // ebx
  __int64 v220; // rdx
  unsigned int v221; // r8d
  __int64 v222; // rcx
  __int64 v223; // r9
  unsigned int v224; // ebx
  GdiHandleManager *v225; // rdi
  __int64 v226; // rdx
  unsigned int v227; // r8d
  __int64 v228; // rcx
  __int64 v229; // r9
  _DWORD *v230; // rdx
  unsigned int v231; // ebx
  __int64 v232; // rdx
  unsigned int v233; // r8d
  __int64 v234; // rcx
  __int64 v235; // r10
  _BOOL8 v236; // rdx
  __int64 v237; // rcx
  __int64 v238; // r8
  _BOOL8 v239; // r9
  HDC v240; // r15
  unsigned int v241; // ebx
  __int64 v242; // rdx
  __int64 v243; // rcx
  GdiHandleManager *v244; // r14
  __int64 v245; // r14
  unsigned int v246; // edx
  __int64 v247; // rcx
  __int64 v248; // r14
  unsigned __int16 *v249; // rdi
  __int64 v250; // r12
  unsigned __int64 v251; // r13
  char v252; // al
  unsigned int v253; // ebx
  GdiHandleManager *v254; // rdi
  __int64 v255; // rdx
  unsigned int v256; // r8d
  __int64 v257; // rcx
  __int64 v258; // r9
  _DWORD *v259; // rdx
  unsigned int v260; // ebx
  __int64 v261; // rdx
  unsigned int v262; // r8d
  __int64 v263; // rcx
  __int64 v264; // r10
  _QWORD *v265; // rdi
  __int64 v266; // rbx
  int v267; // ecx
  __int64 v268; // rcx
  int v269; // ecx
  __int64 v270; // rcx
  __int64 v271; // rcx
  void *StockObject; // rdx
  unsigned int v274; // edi
  struct HOBJ__ *v275; // rax
  int v276; // ecx
  HRGN v277; // rax
  _QWORD *v278; // r9
  HRGN v279; // rdx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v281; // rdx
  __int64 v282; // rcx
  __int64 v283; // r8
  __int64 v284; // r9
  __int64 v285; // rax
  __int64 ThreadWin32Thread; // rax
  int v287; // eax
  __int64 CurrentProcess; // rax
  __int64 CurrentThreadProcess; // rax
  GdiHandleManager *v290; // rbx
  unsigned int v291; // eax
  __int64 v292; // r9
  unsigned __int64 v293; // rdx
  unsigned int v294; // r8d
  __int64 v295; // rcx
  __int64 v296; // r10
  __int64 v297; // rdx
  __int64 v298; // rax
  __int64 v299; // rax
  GdiHandleManager *v300; // rbx
  unsigned int v301; // eax
  struct OBJECT *v302; // rax
  __int64 v303; // rax
  __int64 v304; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v305; // rdx
  unsigned int v306; // ecx
  struct HOBJ__ *RectRgnIndirect; // rax
  int v308; // ecx
  HRGN v309; // rax
  __int64 v310; // rax
  __int64 v311; // rax
  GdiHandleManager *v312; // rbx
  unsigned int v313; // eax
  struct OBJECT *v314; // rax
  __int64 v315; // rax
  __int64 v316; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v317; // rdx
  unsigned int v318; // ecx
  __int64 v319; // rax
  int ProcessSessionId; // ebx
  __int64 v321; // rax
  __int64 v322; // rax
  __int64 v323; // rax
  GdiHandleManager *v324; // rbx
  unsigned int v325; // eax
  struct OBJECT *v326; // rax
  __int64 v327; // rax
  __int64 v328; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v329; // rdx
  unsigned int v330; // ecx
  __int64 v331; // [rsp+30h] [rbp-D0h]
  __int64 v332; // [rsp+38h] [rbp-C8h]
  __int64 v333; // [rsp+38h] [rbp-C8h]
  __int64 v334; // [rsp+38h] [rbp-C8h]
  __int64 v335; // [rsp+38h] [rbp-C8h]
  __int64 v336; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v337; // [rsp+40h] [rbp-C0h]
  HDC v338; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v339; // [rsp+40h] [rbp-C0h]
  HDC v340; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v341; // [rsp+40h] [rbp-C0h]
  HDC v342; // [rsp+40h] [rbp-C0h]
  __int64 v343; // [rsp+48h] [rbp-B8h]
  unsigned int v344; // [rsp+50h] [rbp-B0h]
  BOOL v345; // [rsp+54h] [rbp-ACh]
  BOOL v346; // [rsp+58h] [rbp-A8h]
  int v347; // [rsp+5Ch] [rbp-A4h]
  BOOL v348; // [rsp+60h] [rbp-A0h]
  __int64 v349; // [rsp+68h] [rbp-98h]
  _QWORD *v350; // [rsp+70h] [rbp-90h]
  HRGN v351; // [rsp+78h] [rbp-88h] BYREF
  __int64 v352; // [rsp+80h] [rbp-80h]
  __int64 v353; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v354; // [rsp+90h] [rbp-70h] BYREF
  int v355; // [rsp+98h] [rbp-68h]
  int v356; // [rsp+9Ch] [rbp-64h]
  _QWORD v357[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v358; // [rsp+B8h] [rbp-48h] BYREF
  int v359; // [rsp+C0h] [rbp-40h]
  __int64 v360; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v361; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v362; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v363; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v364; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v365; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v366; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v367[2]; // [rsp+108h] [rbp+8h] BYREF
  unsigned __int16 *v368; // [rsp+118h] [rbp+18h] BYREF
  int v369; // [rsp+120h] [rbp+20h]
  int v370; // [rsp+124h] [rbp+24h]
  unsigned __int16 *v371; // [rsp+130h] [rbp+30h] BYREF
  int v372; // [rsp+138h] [rbp+38h]
  int v373; // [rsp+13Ch] [rbp+3Ch]
  unsigned __int16 *v374; // [rsp+148h] [rbp+48h] BYREF
  int v375; // [rsp+150h] [rbp+50h]
  int v376; // [rsp+154h] [rbp+54h]
  unsigned __int16 *v377; // [rsp+160h] [rbp+60h] BYREF
  int v378; // [rsp+168h] [rbp+68h]
  int v379; // [rsp+16Ch] [rbp+6Ch]
  unsigned __int16 *v380; // [rsp+178h] [rbp+78h] BYREF
  int v381; // [rsp+180h] [rbp+80h]
  int v382; // [rsp+184h] [rbp+84h]
  unsigned __int16 *v383; // [rsp+190h] [rbp+90h] BYREF
  int v384; // [rsp+198h] [rbp+98h]
  int v385; // [rsp+19Ch] [rbp+9Ch]
  _QWORD *v386; // [rsp+200h] [rbp+100h]
  HRGN EmptyRgnPublic; // [rsp+208h] [rbp+108h]
  unsigned int v388; // [rsp+210h] [rbp+110h]
  int v389; // [rsp+218h] [rbp+118h]
  __int64 v390; // [rsp+218h] [rbp+118h]
  __int64 v391; // [rsp+218h] [rbp+118h]

  v388 = a3;
  EmptyRgnPublic = a2;
  v5 = a3;
  v351 = 0LL;
  v350 = 0LL;
  v352 = 0LL;
  v389 = 0;
  v347 = 0;
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  v6 = L"ghsemDynamicModeChange";
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      (unsigned int)L"ghsemDynamicModeChange",
      (unsigned int)&LockAcquireShared,
      a3,
      (_DWORD)ghsemDynamicModeChange,
      (__int64)L"ghsemDynamicModeChange");
  v7 = (struct _ERESOURCE *)ghsemGreLock;
  if ( ghsemGreLock )
  {
    PsEnterPriorityRegion(v6);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v7);
  }
  v8 = L"ghsemGreLock";
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(
      (unsigned int)L"ghsemGreLock",
      (_DWORD)a2,
      a3,
      (_DWORD)ghsemGreLock,
      2,
      (__int64)L"ghsemGreLock");
  v9 = (struct _ERESOURCE *)ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    PsEnterPriorityRegion(v8);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v9);
  }
  v10 = L"ghsemDCVisRgn";
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
    v10 = *(const wchar_t **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456);
    a1 = *(_QWORD **)(*((_QWORD *)v10 + 1) + 24LL);
  }
  v386 = a1;
  v11 = 0LL;
  v343 = (__int64)a1;
  v12 = (__int64)a1;
  v13 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v10 = (const wchar_t *)v13[5];
      v14 = *((_BYTE *)v10 + 31);
      if ( (v14 & 0x10) == 0 || (v14 & 0x20) != 0 && v13 != a1 )
        break;
      if ( (v10[21] & 0x2FFF) != 0x29D )
      {
        v13 = (_QWORD *)v13[13];
        if ( v13 )
          continue;
      }
      goto LABEL_17;
    }
    v15 = 0;
    v353 = 0LL;
  }
  else
  {
LABEL_17:
    v15 = 1;
    v353 = 1LL;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10, v13, a3, a4) + 12) & 0x200) != 0 )
    DelayedDestroyCacheDC(0LL);
  if ( (v5 & 0x10000) != 0 )
  {
    v16 = v5 & 0xFFFFFFC7;
    if ( (v5 & 1) != 0 )
    {
      v5 = v16 | 0x10;
      if ( (*(_BYTE *)(a1[5] + 31LL) & 4) == 0 )
        v5 = v16;
    }
    else
    {
      v18 = (_QWORD *)a1[17];
      LODWORD(v17) = v16 | 0x20;
      v19 = *(_BYTE *)(v18[1] + 8LL);
      if ( v19 >= 0 )
        LODWORD(v17) = v5 & 0xFFFFFFC7;
      if ( (((v17 & 2) == 0) & (unsigned __int8)~((unsigned __int8)v19 >> 5)) != 0 )
      {
        if ( (v19 & 0x40) != 0 )
        {
          v285 = v18[5];
          if ( v285 )
            v11 = *(_QWORD *)(v285 + 8);
        }
        else
        {
          LODWORD(v17) = v17 | 2;
        }
      }
      v20 = v17 | 8;
      v16 = *(unsigned __int8 *)(a1[5] + 31LL);
      if ( (*(_BYTE *)(a1[5] + 31LL) & 2) == 0 )
        v20 = v17;
      v5 = v20 | 0x10;
      if ( (*(_BYTE *)(a1[5] + 31LL) & 4) == 0 )
        v5 = v20;
      v388 = v5;
      if ( (v16 & 0x20) == 0 )
        goto LABEL_37;
      v5 &= ~8u;
      v388 = v5;
      if ( !v18[10] )
        goto LABEL_37;
    }
    v5 |= 2u;
    v388 = v5;
  }
LABEL_37:
  if ( (v5 & 0x80000) != 0 )
  {
    v5 = v5 & 0xFFFFFFD5 | 2;
    v388 = v5;
  }
  if ( qword_1C0250578 && (int)qword_1C0250578() >= 0 && qword_1C0250580 )
    v21 = qword_1C0250580(a1);
  else
    v21 = 0LL;
  if ( !v21 || (*(_DWORD *)(*(_QWORD *)(v21 + 40) + 24LL) & 0x20000000) == 0 )
    goto LABEL_507;
  v22 = qword_1C0250588 && (int)qword_1C0250588() >= 0 && qword_1C0250590 ? qword_1C0250590(v21) : 0LL;
  v352 = v22;
  if ( !v22 && (*(_BYTE *)(*(_QWORD *)(v21 + 40) + 26LL) & 0x20) == 0 )
    goto LABEL_507;
  v23 = v386;
  v5 |= 0x4000u;
  v350 = (_QWORD *)v21;
  v388 = v5;
  if ( v386 == (_QWORD *)v21 && (v5 & 0x20) != 0 )
  {
    v5 = v5 & 0xFFFFFFDD | 2;
    v388 = v5;
  }
  v24 = EmptyRgnPublic;
  if ( (unsigned __int64)EmptyRgnPublic > 2 )
  {
    if ( (v5 & 0x40000) != 0 )
    {
      EmptyRgnPublic = (HRGN)CreateEmptyRgnPublic();
      v279 = v24;
      v24 = EmptyRgnPublic;
      GreCombineRgn(EmptyRgnPublic, v279, 0LL, 5);
      v5 &= ~0x40000u;
      v388 = v5;
    }
    GreOffsetRgn(v24, -*(_DWORD *)(*(_QWORD *)(v21 + 40) + 88LL), -*(_DWORD *)(*(_QWORD *)(v21 + 40) + 92LL));
LABEL_507:
    v23 = v386;
  }
  if ( (v5 & 0x20) != 0 )
  {
    v16 = v23[13];
    if ( !v16 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v23 = v386;
      v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 456) + 8LL) + 24LL);
    }
    v5 |= 2u;
    v388 = v5;
    if ( (v5 & 0x18) == 0 )
    {
      v17 = v23[5];
      if ( (*(_BYTE *)(v17 + 21) & 1) != 0 || (*(_BYTE *)(*(_QWORD *)(v16 + 40) + 31LL) & 2) == 0 )
      {
        v85 = *(_BYTE *)(*(_QWORD *)(v16 + 40) + 31LL);
        if ( ((v85 ^ *(_BYTE *)(v17 + 31)) & 0x10) == 0 )
        {
          v5 &= 0xFFFFFFE7;
          v343 = v16;
          v388 = v5;
          v12 = v16;
          if ( (v85 & 4) != 0 )
          {
            v5 |= 0x10u;
            v388 = v5;
          }
        }
      }
    }
  }
  if ( (v5 & 2) == 0 && (!v23 || v386[2] != W32GetThreadWin32Thread((__int64)KeGetCurrentThread())) )
  {
    v5 |= 2u;
    v388 = v5;
  }
  v25 = v5 & 0x8080441F;
  v344 = v5 & 0x8080441F;
  if ( (v5 & 2) != 0 )
  {
    while ( 1 )
    {
      v349 = gpDispInfo + 24;
      v26 = *(_QWORD *)(gpDispInfo + 24);
      v331 = v26;
      if ( v26 )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)(v26 + 24) != v12 || *(_QWORD **)(v26 + 32) != v350 || *(_QWORD *)(v26 + 88) )
            goto LABEL_59;
          v53 = *(_QWORD *)(v26 + 8);
          v360 = 0LL;
          v54 = 0LL;
          v357[1] = 0LL;
          PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v360);
          if ( (unsigned __int8)KeIsAttachedProcess() )
          {
            CurrentProcess = PsGetCurrentProcess(v56, v55);
            PsGetProcessSessionIdEx(CurrentProcess);
            CurrentThreadProcess = PsGetCurrentThreadProcess();
            PsGetProcessSessionIdEx(CurrentThreadProcess);
          }
          v57 = gpHandleManager;
          v58 = (unsigned __int16)v53 | ((unsigned int)v53 >> 8) & 0xFF0000;
          v355 = 1;
          if ( v58 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          (unsigned __int16)v53,
                                          1)
                   + 13) == ((unsigned __int16)v53 | ((unsigned int)v53 >> 8) & 0xFF0000) >> 16 )
                v58 = (unsigned __int16)v53;
            }
            else
            {
              v58 = (unsigned __int16)v53;
            }
          }
          v59 = *((_QWORD *)v57 + 2);
          v60 = *(_DWORD *)(v59 + 2056);
          if ( v58 >= v60 + ((*(unsigned __int16 *)(v59 + 2) + 0xFFFF) << 16) )
          {
            v354 = 0LL;
LABEL_591:
            v355 = 0;
            KeLeaveCriticalRegion();
            v357[0] = 0LL;
LABEL_167:
            v86 = *(_DWORD *)(v26 + 64);
            v12 = v343;
            if ( v25 == (v86 & 0x80C05C1F)
              && ((*(_BYTE *)(*(_QWORD *)(v343 + 40) + 31LL) & 0x20) == 0
               || *(_QWORD *)(v26 + 16) == *(_QWORD *)(v26 + 24))
              && (!v353 || (v86 & 0x10000000) == 0) )
            {
              *(_DWORD *)(v26 + 64) = v86 | 0x1000;
              if ( v386 != *(_QWORD **)(v26 + 16) )
              {
                if ( (int)IsSpbCheckDceSupported() >= 0 && qword_1C02505E0 )
                  qword_1C02505E0(v26);
                *(_QWORD *)(v26 + 16) = v386;
                ResetOrg(0LL, (struct tagDCE *)v26, 0);
              }
              v52 = (_QWORD *)v349;
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
            v332 = v64 + *(_QWORD *)(**(_QWORD **)(v62 + 24) + v65);
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v332, 0LL);
            if ( v58 < *(_DWORD *)(v62 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v62 + 24) + v65) + v64 + 8) )
            {
              *(_DWORD *)(*(_QWORD *)v62 + 24LL * v58 + 8) |= 1u;
              v63 = (unsigned __int16 *)(24LL * v58 + *(_QWORD *)v62);
            }
            else
            {
              ExReleasePushLockExclusiveEx(v332, 0LL);
              KeLeaveCriticalRegion();
            }
            v54 = 0LL;
            v26 = v331;
            v25 = v344;
          }
          v354 = v63;
          if ( !v63 )
            goto LABEL_591;
          _m_prefetchw(v63 + 4);
          v356 = *((_DWORD *)v63 + 2);
          v66 = *((_BYTE *)v63 + 15);
          if ( (v66 & 0x20) == 0 )
          {
            if ( (v66 & 0x40) == 0 )
              goto LABEL_122;
            v290 = gpHandleManager;
            v291 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v63 & 0xFFFFFF);
            v292 = *((_QWORD *)v290 + 2);
            v293 = v291;
            v294 = *(_DWORD *)(v292 + 2056);
            if ( v291 >= v294 + ((*(unsigned __int16 *)(v292 + 2) + 0xFFFF) << 16) )
              goto LABEL_574;
            v295 = ((v291 - v294) >> 16) + 1;
            if ( v291 < v294 )
              v295 = 0LL;
            v296 = *(_QWORD *)(v292 + 8 * v295 + 8);
            if ( (_DWORD)v295 )
              v293 = ((1 - (_DWORD)v295) << 16) - v294 + v291;
            if ( (unsigned int)v293 >= *(_DWORD *)(v296 + 20) )
LABEL_574:
              v297 = 0LL;
            else
              v297 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v296 + 24) + 8 * (v293 >> 8))
                               + 16LL * (unsigned __int8)v293
                               + 8);
            if ( *(_WORD *)(v297 + 12) && *(struct _KTHREAD **)(v297 + 16) == KeGetCurrentThread() )
              break;
          }
          HANDLELOCK::vUnlock((HANDLELOCK *)&v354);
          if ( v355 )
            break;
LABEL_155:
          v357[0] = v54;
          if ( !v54 )
            goto LABEL_167;
          v84 = *(_DWORD *)(v54 + 40);
          XDCOBJ::vAltUnlockFast((XDCOBJ *)v357);
          if ( (v84 & 1) == 0 )
            goto LABEL_167;
          v12 = v343;
LABEL_59:
          v349 = v26;
          v26 = *(_QWORD *)v26;
          v331 = v26;
          if ( !v26 )
            goto LABEL_60;
        }
        v63 = v354;
LABEL_122:
        if ( *((_BYTE *)v63 + 14) == 1 && v63[6] == WORD1(v53) )
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
            v54 = 0LL;
          else
            v54 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v71 + 24) + 8 * ((unsigned __int64)v67 >> 8))
                            + 16LL * (unsigned __int8)v67
                            + 8);
          ++*(_DWORD *)(v54 + 8);
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
        v355 = 0;
        v354 = 0LL;
        KeLeaveCriticalRegion();
        goto LABEL_155;
      }
LABEL_60:
      v27 = 0LL;
      v28 = gpDispInfo + 24;
      v29 = *(_QWORD *)(gpDispInfo + 24);
      if ( v29 )
      {
        do
        {
          if ( (*(_DWORD *)(v29 + 64) & 0x400002) == 2 )
          {
            v358 = 0LL;
            v359 = 0;
            EntryObject = 0LL;
            v31 = *(_DWORD *)(v29 + 8);
            v367[1] = 0LL;
            HANDLELOCK::vLockHandle((HANDLELOCK *)&v358, (unsigned __int16)v31 | (v31 >> 8) & 0xFF0000, 0, 0, 0);
            if ( v359 )
            {
              v32 = (_DWORD *)v358;
              if ( *(_BYTE *)(v358 + 14) == 1 && *(_WORD *)(v358 + 12) == HIWORD(v31) )
              {
                v33 = gpHandleManager;
                v34 = GdiHandleManager::DecodeIndex(
                        (GdiHandleEntryDirectory **)gpHandleManager,
                        *(_DWORD *)v358 & 0xFFFFFF);
                EntryObject = GdiHandleEntryDirectory::GetEntryObject(*((GdiHandleEntryDirectory **)v33 + 2), v34);
                ++*((_DWORD *)EntryObject + 2);
              }
              v35 = gpHandleManager;
              v36 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *v32 & 0xFFFFFF);
              v37 = *((_QWORD *)v35 + 2);
              v38 = v36;
              v39 = *(_DWORD *)(v37 + 2056);
              if ( v36 >= v39 + ((*(unsigned __int16 *)(v37 + 2) + 0xFFFF) << 16) )
                goto LABEL_592;
              v40 = ((v36 - v39) >> 16) + 1;
              if ( v36 < v39 )
                v40 = 0LL;
              v41 = *(_QWORD *)(v37 + 8 * v40 + 8);
              if ( (_DWORD)v40 )
                v38 = ((1 - (_DWORD)v40) << 16) - v39 + v36;
              if ( (unsigned int)v38 >= *(_DWORD *)(v41 + 20) )
LABEL_592:
                v42 = 0LL;
              else
                v42 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v41 + 24) + 8 * (v38 >> 8))
                                 + 16LL * (unsigned __int8)v38
                                 + 8);
              v43 = GdiHandleManager::DecodeIndex(
                      (GdiHandleEntryDirectory **)v35,
                      (unsigned __int16)*v42 | (*v42 >> 8) & 0xFF0000u);
              v44 = *((_QWORD *)v35 + 2);
              v45 = v43;
              v46 = *(_DWORD *)(v44 + 2056);
              if ( v43 < v46 + ((*(unsigned __int16 *)(v44 + 2) + 0xFFFF) << 16) )
              {
                v47 = ((v43 - v46) >> 16) + 1;
                if ( v43 < v46 )
                  v47 = 0LL;
                v48 = *(_QWORD *)(v44 + 8 * v47 + 8);
                if ( (_DWORD)v47 )
                  v45 = ((1 - (_DWORD)v47) << 16) - v46 + v43;
                *(_DWORD *)(*(_QWORD *)v48 + 24LL * v45 + 8) &= ~1u;
                ExReleasePushLockExclusiveEx(
                  *(_QWORD *)(**(_QWORD **)(v48 + 24) + 8 * ((unsigned __int64)v45 >> 8)) + 16LL * (unsigned __int8)v45,
                  0LL);
                KeLeaveCriticalRegion();
              }
              v359 = 0;
              v358 = 0LL;
              KeLeaveCriticalRegion();
            }
            v367[0] = EntryObject;
            if ( !EntryObject
              || (v49 = *((_DWORD *)EntryObject + 10), XDCOBJ::vAltUnlockFast((XDCOBJ *)v367), (v49 & 1) == 0) )
            {
              if ( !*(_QWORD *)(v29 + 88) )
              {
                v50 = *(_DWORD *)(v29 + 64);
                if ( (v50 & 0x800) != 0 )
                  break;
                if ( (v50 & 0x1000) == 0 )
                  v27 = (_QWORD *)v28;
              }
            }
          }
          v28 = v29;
          v29 = *(_QWORD *)v29;
        }
        while ( v29 );
        v25 = v344;
        v51 = v29 == 0;
        if ( v29 )
          goto LABEL_90;
      }
      if ( v27 )
        break;
      if ( !CreateCacheDC((__int64)v386, v388 & 0x4000 | 0x802, 0LL) )
        goto LABEL_681;
      v12 = v343;
    }
    v51 = v29 == 0;
LABEL_90:
    if ( !v51 )
      v27 = (_QWORD *)v28;
    v52 = v27;
    v26 = *v27;
    v331 = *v27;
  }
  else
  {
    v52 = (_QWORD *)(gpDispInfo + 24);
    v26 = *(_QWORD *)(gpDispInfo + 24);
    v331 = v26;
    if ( !v26 )
    {
LABEL_681:
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v16, v17);
      return 0LL;
    }
    while ( 1 )
    {
      if ( (*(_DWORD *)(v26 + 64) & 0x400002) == 0 && !(unsigned int)GreIsRendering(*(HDC *)(v26 + 8)) )
      {
        v278 = v386;
        if ( *(_QWORD **)(v26 + 16) == v386 || *(_QWORD *)(v26 + 8) == v11 )
          break;
      }
      v52 = (_QWORD *)v26;
      v26 = *(_QWORD *)v26;
      v331 = v26;
      if ( !v26 )
        goto LABEL_681;
    }
    if ( *(_QWORD *)(v26 + 56) && (v388 & 0xC0) != 0 )
    {
      v287 = IsDeleteHrgnClipSupported();
      if ( v287 >= 0 && qword_1C02505C0 )
        qword_1C02505C0(v26);
      v278 = v386;
    }
    if ( (*(_DWORD *)(v26 + 64) & 0x4000) != 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v26 + 32) + 40LL) + 27LL) & 2) != 0
        && (int)IsFlushWEFCOMPOSITEDDCEBoundsSupported() >= 0
        && qword_1C02505D0 )
      {
        qword_1C02505D0(v26);
      }
      if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0 && qword_1C024F9A8 )
        qword_1C024F9A8(*(_QWORD *)(v26 + 8), 0LL);
      v278 = v386;
    }
    if ( *(_QWORD **)(v26 + 16) == v278
      && *(_QWORD **)(v26 + 32) == v350
      && *(_QWORD *)(v26 + 24) == v12
      && v15
      && ((v388 ^ *(_DWORD *)(v26 + 64)) & 0x4000) == 0
      && (*(_DWORD *)(v26 + 64) & 0x10000000) == 0 )
    {
      goto LABEL_173;
    }
  }
  do
  {
    v347 = 1;
    if ( (*(_DWORD *)(v26 + 64) & 0x800) == 0 && (int)IsSpbCheckDceSupported() >= 0 && qword_1C02505E0 )
      qword_1C02505E0(v26);
    *(_DWORD *)(v26 + 64) = v25 | 0x1000;
    GreValidateVisrgn(*(_QWORD *)(v26 + 8), 0LL);
    v351 = 0LL;
    if ( (int)IsCalcVisRgnSupported() < 0 || !qword_1C02505A0 || !(unsigned int)qword_1C02505A0(&v351, v386, v343, v25) )
      *(_DWORD *)(v26 + 64) |= 0x10000000u;
    *(_QWORD *)(v26 + 16) = v386;
    *(_QWORD *)(v26 + 24) = v343;
    *(_QWORD *)(v26 + 32) = v350;
    *(_QWORD *)(v26 + 40) = 0LL;
    *(_QWORD *)(v26 + 48) = 0LL;
    ResetOrg(v351, (struct tagDCE *)v26, 1);
    if ( !v351 )
      v389 = 1;
LABEL_173:
    ;
  }
  while ( (*(_DWORD *)(v26 + 64) & 0x8080441F) != v25 );
  if ( v26 != *(_QWORD *)(gpDispInfo + 24) )
  {
    *v52 = *(_QWORD *)v26;
    *(_QWORD *)v26 = *(_QWORD *)(gpDispInfo + 24);
    *(_QWORD *)(gpDispInfo + 24) = v26;
  }
  v87 = *(_QWORD *)(v26 + 8);
  v361 = 0LL;
  v88 = 0LL;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v361);
  if ( (unsigned __int8)KeIsAttachedProcess() )
  {
    v298 = PsGetCurrentProcess(v90, v89);
    PsGetProcessSessionIdEx(v298);
    v299 = PsGetCurrentThreadProcess();
    PsGetProcessSessionIdEx(v299);
  }
  v91 = gpHandleManager;
  v92 = (unsigned __int16)v87 | ((unsigned int)v87 >> 8) & 0xFF0000;
  v369 = 1;
  if ( v92 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v87,
                                  1)
           + 13) == ((unsigned __int16)v87 | ((unsigned int)v87 >> 8) & 0xFF0000) >> 16 )
        v92 = (unsigned __int16)v87;
    }
    else
    {
      v92 = (unsigned __int16)v87;
    }
  }
  v93 = *((_QWORD *)v91 + 2);
  v94 = *(_DWORD *)(v93 + 2056);
  if ( v92 >= v94 + ((*(unsigned __int16 *)(v93 + 2) + 0xFFFF) << 16) )
    goto LABEL_629;
  v95 = ((v92 - v94) >> 16) + 1;
  if ( v92 < v94 )
    v95 = 0LL;
  v96 = *(_QWORD *)(v93 + 8 * v95 + 8);
  if ( (_DWORD)v95 )
    v92 += ((1 - (_DWORD)v95) << 16) - v94;
  v97 = 0LL;
  if ( v92 < *(_DWORD *)(v96 + 20) )
  {
    v98 = 16LL * (unsigned __int8)v92;
    v337 = 8 * ((unsigned __int64)v92 >> 8);
    v333 = v98 + *(_QWORD *)(**(_QWORD **)(v96 + 24) + v337);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v333, 0LL);
    if ( v92 < *(_DWORD *)(v96 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v96 + 24) + v337) + v98 + 8) )
    {
      *(_DWORD *)(24LL * v92 + *(_QWORD *)v96 + 8) |= 1u;
      v97 = (unsigned __int16 *)(24LL * v92 + *(_QWORD *)v96);
    }
    else
    {
      ExReleasePushLockExclusiveEx(v333, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  v368 = v97;
  if ( !v97 )
  {
LABEL_629:
    KeLeaveCriticalRegion();
    goto LABEL_267;
  }
  _m_prefetchw(v97 + 4);
  v370 = *((_DWORD *)v97 + 2);
  v99 = *((_BYTE *)v97 + 15);
  if ( (v99 & 0x20) != 0 )
    goto LABEL_600;
  if ( (v99 & 0x40) != 0 )
  {
    v300 = gpHandleManager;
    v301 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v97 & 0xFFFFFF);
    v302 = GdiHandleEntryDirectory::GetEntryObject(*((GdiHandleEntryDirectory **)v300 + 2), v301);
    if ( *((_WORD *)v302 + 6) && *((struct _KTHREAD **)v302 + 2) == KeGetCurrentThread() )
    {
LABEL_601:
      v97 = v368;
      goto LABEL_193;
    }
LABEL_600:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v368);
    if ( !v369 )
      goto LABEL_267;
    goto LABEL_601;
  }
LABEL_193:
  if ( *((_BYTE *)v97 + 14) == 1 && v97[6] == WORD1(v87) )
  {
    v100 = *(_DWORD *)v97 & 0xFFFFFF;
    if ( v100 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *v97,
                                    1)
             + 13) == HIWORD(v100) )
          v100 = (unsigned __int16)v100;
      }
      else
      {
        v100 = *v97;
      }
    }
    v101 = *((_QWORD *)gpHandleManager + 2);
    v102 = *(_DWORD *)(v101 + 2056);
    if ( v100 >= v102 + ((*(unsigned __int16 *)(v101 + 2) + 0xFFFF) << 16) )
      goto LABEL_605;
    v103 = ((v100 - v102) >> 16) + 1;
    if ( v100 < v102 )
      v103 = 0LL;
    v104 = *(_QWORD *)(v101 + 8 * v103 + 8);
    if ( (_DWORD)v103 )
      v100 += ((1 - (_DWORD)v103) << 16) - v102;
    if ( v100 >= *(_DWORD *)(v104 + 20) )
LABEL_605:
      v88 = 0LL;
    else
      v88 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v104 + 24) + 8 * ((unsigned __int64)v100 >> 8))
                      + 16LL * (unsigned __int8)v100
                      + 8);
    ++*(_DWORD *)(v88 + 8);
  }
  v105 = *(_DWORD *)v97 & 0xFFFFFF;
  if ( v105 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  *v97,
                                  1)
           + 13) == HIWORD(v105) )
        v105 = (unsigned __int16)v105;
    }
    else
    {
      v105 = *v97;
    }
  }
  v106 = gpHandleManager;
  v107 = *((_QWORD *)gpHandleManager + 2);
  v108 = *(_DWORD *)(v107 + 2056);
  if ( v105 >= v108 + ((*(unsigned __int16 *)(v107 + 2) + 0xFFFF) << 16) )
    goto LABEL_609;
  v109 = ((v105 - v108) >> 16) + 1;
  if ( v105 < v108 )
    v109 = 0LL;
  v110 = *(_QWORD *)(v107 + 8 * v109 + 8);
  if ( (_DWORD)v109 )
    v105 += ((1 - (_DWORD)v109) << 16) - v108;
  if ( v105 >= *(_DWORD *)(v110 + 20) )
LABEL_609:
    v111 = 0LL;
  else
    v111 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v110 + 24) + 8 * ((unsigned __int64)v105 >> 8))
                      + 16LL * (unsigned __int8)v105
                      + 8);
  v112 = (unsigned __int16)*v111 | (*v111 >> 8) & 0xFF0000;
  if ( v112 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)*v111,
                                  1)
           + 13) == HIWORD(v112) )
        v112 = (unsigned __int16)v112;
    }
    else
    {
      v112 = (unsigned __int16)*v111;
    }
  }
  v113 = *((_QWORD *)v106 + 2);
  v114 = *(_DWORD *)(v113 + 2056);
  if ( v112 < v114 + ((*(unsigned __int16 *)(v113 + 2) + 0xFFFF) << 16) )
  {
    v115 = ((v112 - v114) >> 16) + 1;
    if ( v112 < v114 )
      v115 = 0LL;
    v116 = *(_QWORD *)(v113 + 8 * v115 + 8);
    if ( (_DWORD)v115 )
      v112 += ((1 - (_DWORD)v115) << 16) - v114;
    *(_DWORD *)(*(_QWORD *)v116 + 24LL * v112 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v116 + 24) + 8 * ((unsigned __int64)v112 >> 8)) + 16LL * (unsigned __int8)v112,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  if ( v88 )
  {
    *(_DWORD *)(v88 + 36) &= ~0x100000u;
    GrepValidateVisRgn((struct DC *)v88, *(struct REGION **)(v88 + 1120));
    v117 = *(HDC *)v88;
    v345 = 0;
    v118 = (unsigned __int16)*(_DWORD *)v88 | (*(_DWORD *)v88 >> 8) & 0xFF0000;
    v338 = *(HDC *)v88;
    v362 = 0LL;
    PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v362);
    if ( (unsigned __int8)KeIsAttachedProcess() )
    {
      v303 = PsGetCurrentProcess(v120, v119);
      PsGetProcessSessionIdEx(v303);
      v304 = PsGetCurrentThreadProcess();
      PsGetProcessSessionIdEx(v304);
    }
    v121 = gpHandleManager;
    v372 = 1;
    if ( v118 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v118,
                                    1)
             + 13) == HIWORD(v118) )
          v118 = (unsigned __int16)v118;
      }
      else
      {
        v118 = (unsigned __int16)v118;
      }
    }
    v122 = *((_QWORD *)v121 + 2);
    v123 = *(_DWORD *)(v122 + 2056);
    if ( v118 >= v123 + ((*(unsigned __int16 *)(v122 + 2) + 0xFFFF) << 16) )
      goto LABEL_264;
    v124 = ((v118 - v123) >> 16) + 1;
    if ( v118 < v123 )
      v124 = 0LL;
    v125 = *(_QWORD *)(v122 + 8 * v124 + 8);
    if ( (_DWORD)v124 )
      v118 += ((1 - (_DWORD)v124) << 16) - v123;
    v126 = 0LL;
    if ( v118 < *(_DWORD *)(v125 + 20) )
    {
      v127 = 16LL * (unsigned __int8)v118;
      v128 = 8 * ((unsigned __int64)v118 >> 8);
      v334 = v127 + *(_QWORD *)(**(_QWORD **)(v125 + 24) + v128);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v334, 0LL);
      if ( v118 < *(_DWORD *)(v125 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v125 + 24) + v128) + v127 + 8) )
      {
        *(_DWORD *)(24LL * v118 + *(_QWORD *)v125 + 8) |= 1u;
        v126 = (unsigned __int16 *)(24LL * v118 + *(_QWORD *)v125);
      }
      else
      {
        ExReleasePushLockExclusiveEx(v334, 0LL);
        KeLeaveCriticalRegion();
      }
      v117 = v338;
    }
    v371 = v126;
    if ( !v126 )
      goto LABEL_264;
    _m_prefetchw(v126 + 4);
    v51 = (*((_BYTE *)v126 + 15) & 0x20) == 0;
    v373 = *((_DWORD *)v126 + 2);
    if ( !v51 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v371);
      if ( !v372 )
      {
LABEL_265:
        if ( v345 )
          bDeleteDCInternalEx(v117, 0LL);
        goto LABEL_267;
      }
      v126 = v371;
    }
    v345 = (*((_BYTE *)v126 + 15) & 8) != 0;
    v129 = *((_BYTE *)v126 + 14);
    if ( v129 == 5 )
    {
      v305 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v88 + 680);
      v306 = 0;
    }
    else
    {
      if ( v129 != 16 )
      {
LABEL_245:
        --*(_DWORD *)(v88 + 8);
        v130 = *(_DWORD *)v126 & 0xFFFFFF;
        if ( v130 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        *v126,
                                        1)
                 + 13) == HIWORD(v130) )
              v130 = (unsigned __int16)v130;
          }
          else
          {
            v130 = *v126;
          }
        }
        v131 = gpHandleManager;
        v132 = *((_QWORD *)gpHandleManager + 2);
        v133 = *(_DWORD *)(v132 + 2056);
        if ( v130 >= v133 + ((*(unsigned __int16 *)(v132 + 2) + 0xFFFF) << 16) )
          goto LABEL_625;
        v134 = ((v130 - v133) >> 16) + 1;
        if ( v130 < v133 )
          v134 = 0LL;
        v135 = *(_QWORD *)(v132 + 8 * v134 + 8);
        if ( (_DWORD)v134 )
          v130 += ((1 - (_DWORD)v134) << 16) - v133;
        if ( v130 >= *(_DWORD *)(v135 + 20) )
LABEL_625:
          v136 = 0LL;
        else
          v136 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v135 + 24) + 8 * ((unsigned __int64)v130 >> 8))
                            + 16LL * (unsigned __int8)v130
                            + 8);
        v137 = (unsigned __int16)*v136 | (*v136 >> 8) & 0xFF0000;
        if ( v137 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)*v136,
                                        1)
                 + 13) == HIWORD(v137) )
              v137 = (unsigned __int16)v137;
          }
          else
          {
            v137 = (unsigned __int16)*v136;
          }
        }
        v138 = *((_QWORD *)v131 + 2);
        v139 = *(_DWORD *)(v138 + 2056);
        if ( v137 < v139 + ((*(unsigned __int16 *)(v138 + 2) + 0xFFFF) << 16) )
        {
          v140 = ((v137 - v139) >> 16) + 1;
          if ( v137 < v139 )
            v140 = 0LL;
          v141 = *(_QWORD *)(v138 + 8 * v140 + 8);
          if ( (_DWORD)v140 )
            v137 += ((1 - (_DWORD)v140) << 16) - v139;
          *(_DWORD *)(*(_QWORD *)v141 + 24LL * v137 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v141 + 24) + 8 * ((unsigned __int64)v137 >> 8)) + 16LL * (unsigned __int8)v137,
            0LL);
          KeLeaveCriticalRegion();
        }
LABEL_264:
        KeLeaveCriticalRegion();
        goto LABEL_265;
      }
      v305 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v88 + 136);
      v306 = 2;
    }
    TrackObjectReferenceDecrement(v306, v305);
    goto LABEL_245;
  }
LABEL_267:
  v142 = v388;
  if ( (v388 & 0x80u) == 0 )
  {
    if ( (v388 & 0x40) != 0 )
    {
      v274 = (unsigned int)EmptyRgnPublic;
      if ( EmptyRgnPublic )
      {
        GreSetRectRgn(ghrgnGDC, gZero.LowPart, gZero.HighPart, 0, 0);
        RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
        v143 = v331;
        *(_QWORD *)(v331 + 56) = RectRgnIndirect;
        GreSelectVisRgn(*(_QWORD *)(v331 + 8), RectRgnIndirect, 4LL);
        *(_QWORD *)(v331 + 40) = EmptyRgnPublic;
        v308 = *(_DWORD *)(v331 + 64);
        if ( (v388 & 0x40000) != 0 )
          v308 |= 0x40000u;
        *(_DWORD *)(v331 + 64) = v308 | 0x40;
        if ( EmptyRgnPublic == (HRGN)1 )
        {
          *(_QWORD *)(v331 + 48) = 1LL;
          goto LABEL_503;
        }
        GreCombineRgn(ghrgnGDC, *(HRGN *)(v331 + 56), EmptyRgnPublic, 4);
        v309 = (HRGN)CreateEmptyRgnPublic();
        *(_QWORD *)(v331 + 48) = v309;
        GreCombineRgn(v309, EmptyRgnPublic, 0LL, 5);
        if ( (unsigned __int64)EmptyRgnPublic <= 2 || (*(_DWORD *)(v331 + 64) & 0x40000) != 0 )
          goto LABEL_503;
        goto LABEL_502;
      }
    }
LABEL_269:
    v143 = v331;
    goto LABEL_270;
  }
  v274 = (unsigned int)EmptyRgnPublic;
  if ( EmptyRgnPublic == (HRGN)1 )
    goto LABEL_269;
  GreSetRectRgn(ghrgnGDC, gZero.LowPart, gZero.HighPart, 0, 0);
  v275 = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
  v143 = v331;
  *(_QWORD *)(v331 + 56) = v275;
  GreSelectVisRgn(*(_QWORD *)(v331 + 8), v275, 4LL);
  *(_QWORD *)(v331 + 40) = EmptyRgnPublic;
  v276 = *(_DWORD *)(v331 + 64);
  if ( (v388 & 0x40000) != 0 )
    v276 |= 0x40000u;
  *(_DWORD *)(v331 + 64) = v276 | 0x80;
  if ( !EmptyRgnPublic )
  {
    *(_QWORD *)(v331 + 48) = 0LL;
    goto LABEL_503;
  }
  GreCombineRgn(ghrgnGDC, *(HRGN *)(v331 + 56), EmptyRgnPublic, 1);
  v277 = (HRGN)CreateEmptyRgnPublic();
  *(_QWORD *)(v331 + 48) = v277;
  GreCombineRgn(v277, EmptyRgnPublic, 0LL, 5);
  if ( (unsigned __int64)EmptyRgnPublic <= 2 || (*(_DWORD *)(v331 + 64) & 0x40000) != 0 )
    goto LABEL_503;
LABEL_502:
  PsGetCurrentProcessId();
  HmgMarkUndeletable(v274, 4);
LABEL_503:
  *(_DWORD *)(v143 + 64) &= ~0x2000u;
  GreSelectVisRgn(*(_QWORD *)(v143 + 8), ghrgnGDC, 4LL);
LABEL_270:
  if ( (*(_DWORD *)(v143 + 64) & 0x4000) == 0 )
    goto LABEL_371;
  if ( qword_1C024F9A0
    && (int)qword_1C024F9A0() >= 0
    && (!qword_1C024F9A8 || !(unsigned int)qword_1C024F9A8(*(_QWORD *)(v143 + 8), v352)) )
  {
    v389 = 1;
  }
  v144 = *(_QWORD *)(v143 + 8);
  v363 = 0LL;
  v145 = 0LL;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v363);
  if ( (unsigned __int8)KeIsAttachedProcess() )
  {
    v310 = PsGetCurrentProcess(v147, v146);
    PsGetProcessSessionIdEx(v310);
    v311 = PsGetCurrentThreadProcess();
    PsGetProcessSessionIdEx(v311);
  }
  v148 = gpHandleManager;
  v149 = (unsigned __int16)v144 | ((unsigned int)v144 >> 8) & 0xFF0000;
  v375 = 1;
  if ( v149 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v144,
                                  1)
           + 13) == ((unsigned __int16)v144 | ((unsigned int)v144 >> 8) & 0xFF0000) >> 16 )
        v149 = (unsigned __int16)v144;
    }
    else
    {
      v149 = (unsigned __int16)v144;
    }
  }
  v150 = *((_QWORD *)v148 + 2);
  v151 = *(_DWORD *)(v150 + 2056);
  if ( v149 >= v151 + ((*(unsigned __int16 *)(v150 + 2) + 0xFFFF) << 16) )
    goto LABEL_677;
  v152 = ((v149 - v151) >> 16) + 1;
  if ( v149 < v151 )
    v152 = 0LL;
  v153 = *(_QWORD *)(v150 + 8 * v152 + 8);
  if ( (_DWORD)v152 )
    v149 += ((1 - (_DWORD)v152) << 16) - v151;
  v154 = 0LL;
  if ( v149 < *(_DWORD *)(v153 + 20) )
  {
    v155 = 16LL * (unsigned __int8)v149;
    v339 = 8 * ((unsigned __int64)v149 >> 8);
    v335 = v155 + *(_QWORD *)(**(_QWORD **)(v153 + 24) + v339);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v335, 0LL);
    if ( v149 < *(_DWORD *)(v153 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v153 + 24) + v339) + v155 + 8) )
    {
      *(_DWORD *)(*(_QWORD *)v153 + 24LL * v149 + 8) |= 1u;
      v154 = (unsigned __int16 *)(24LL * v149 + *(_QWORD *)v153);
    }
    else
    {
      ExReleasePushLockExclusiveEx(v335, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  v374 = v154;
  if ( v154 )
  {
    _m_prefetchw(v154 + 4);
    v376 = *((_DWORD *)v154 + 2);
    v156 = *((_BYTE *)v154 + 15);
    if ( (v156 & 0x20) == 0 )
    {
      if ( (v156 & 0x40) == 0 )
      {
LABEL_292:
        if ( *((_BYTE *)v154 + 14) == 1 && v154[6] == WORD1(v144) )
        {
          v157 = *(_DWORD *)v154 & 0xFFFFFF;
          if ( v157 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          *v154,
                                          1)
                   + 13) == HIWORD(v157) )
                v157 = (unsigned __int16)v157;
            }
            else
            {
              v157 = *v154;
            }
          }
          v158 = *((_QWORD *)gpHandleManager + 2);
          v159 = *(_DWORD *)(v158 + 2056);
          if ( v157 >= v159 + ((*(unsigned __int16 *)(v158 + 2) + 0xFFFF) << 16) )
            goto LABEL_650;
          v160 = ((v157 - v159) >> 16) + 1;
          if ( v157 < v159 )
            v160 = 0LL;
          v161 = *(_QWORD *)(v158 + 8 * v160 + 8);
          if ( (_DWORD)v160 )
            v157 += ((1 - (_DWORD)v160) << 16) - v159;
          if ( v157 >= *(_DWORD *)(v161 + 20) )
LABEL_650:
            v145 = 0LL;
          else
            v145 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v161 + 24) + 8 * ((unsigned __int64)v157 >> 8))
                             + 16LL * (unsigned __int8)v157
                             + 8);
          ++*(_DWORD *)(v145 + 8);
        }
        v162 = *(_DWORD *)v154 & 0xFFFFFF;
        if ( v162 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        *v154,
                                        1)
                 + 13) == HIWORD(v162) )
              v162 = (unsigned __int16)v162;
          }
          else
          {
            v162 = *v154;
          }
        }
        v163 = gpHandleManager;
        v164 = *((_QWORD *)gpHandleManager + 2);
        v165 = *(_DWORD *)(v164 + 2056);
        if ( v162 >= v165 + ((*(unsigned __int16 *)(v164 + 2) + 0xFFFF) << 16) )
          goto LABEL_654;
        v166 = ((v162 - v165) >> 16) + 1;
        if ( v162 < v165 )
          v166 = 0LL;
        v167 = *(_QWORD *)(v164 + 8 * v166 + 8);
        if ( (_DWORD)v166 )
          v162 += ((1 - (_DWORD)v166) << 16) - v165;
        if ( v162 >= *(_DWORD *)(v167 + 20) )
LABEL_654:
          v168 = 0LL;
        else
          v168 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v167 + 24) + 8 * ((unsigned __int64)v162 >> 8))
                            + 16LL * (unsigned __int8)v162
                            + 8);
        v169 = (unsigned __int16)*v168 | (*v168 >> 8) & 0xFF0000;
        if ( v169 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)*v168,
                                        1)
                 + 13) == HIWORD(v169) )
              v169 = (unsigned __int16)v169;
          }
          else
          {
            v169 = (unsigned __int16)*v168;
          }
        }
        v170 = *((_QWORD *)v163 + 2);
        v171 = *(_DWORD *)(v170 + 2056);
        if ( v169 < v171 + ((*(unsigned __int16 *)(v170 + 2) + 0xFFFF) << 16) )
        {
          v172 = ((v169 - v171) >> 16) + 1;
          if ( v169 < v171 )
            v172 = 0LL;
          v173 = *(_QWORD *)(v170 + 8 * v172 + 8);
          if ( (_DWORD)v172 )
            v169 += ((1 - (_DWORD)v172) << 16) - v171;
          *(_DWORD *)(*(_QWORD *)v173 + 24LL * v169 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v173 + 24) + 8 * ((unsigned __int64)v169 >> 8)) + 16LL * (unsigned __int8)v169,
            0LL);
          KeLeaveCriticalRegion();
        }
        KeLeaveCriticalRegion();
        if ( !v145 )
          goto LABEL_368;
        *(_DWORD *)(v145 + 36) |= 0x40u;
        v174 = *(_QWORD *)(v145 + 1080);
        v175 = _mm_srli_si128(*(__m128i *)(v145 + 1080), 8).m128i_u64[0];
        if ( (_DWORD)v174 != (_DWORD)v175
          && (int)v174 < (int)v175
          && HIDWORD(v174) != HIDWORD(v175)
          && SHIDWORD(v174) < SHIDWORD(v175) )
        {
          *(_DWORD *)(v145 + 1080) = 0x7FFFFFFF;
          *(_DWORD *)(v145 + 1084) = 0x7FFFFFFF;
          *(_DWORD *)(v145 + 1088) = 0x80000000;
          *(_DWORD *)(v145 + 1092) = 0x80000000;
        }
        v176 = *(HDC *)v145;
        v346 = 0;
        v177 = (unsigned __int16)*(_DWORD *)v145 | (*(_DWORD *)v145 >> 8) & 0xFF0000;
        v340 = *(HDC *)v145;
        v364 = 0LL;
        PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v364);
        if ( (unsigned __int8)KeIsAttachedProcess() )
        {
          v315 = PsGetCurrentProcess(v179, v178);
          PsGetProcessSessionIdEx(v315);
          v316 = PsGetCurrentThreadProcess();
          PsGetProcessSessionIdEx(v316);
        }
        v180 = gpHandleManager;
        v378 = 1;
        if ( v177 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)v177,
                                        1)
                 + 13) == HIWORD(v177) )
              v177 = (unsigned __int16)v177;
          }
          else
          {
            v177 = (unsigned __int16)v177;
          }
        }
        v181 = *((_QWORD *)v180 + 2);
        v182 = *(_DWORD *)(v181 + 2056);
        if ( v177 >= v182 + ((*(unsigned __int16 *)(v181 + 2) + 0xFFFF) << 16) )
          goto LABEL_365;
        v183 = ((v177 - v182) >> 16) + 1;
        if ( v177 < v182 )
          v183 = 0LL;
        v184 = *(_QWORD *)(v181 + 8 * v183 + 8);
        if ( (_DWORD)v183 )
          v177 += ((1 - (_DWORD)v183) << 16) - v182;
        v185 = 0LL;
        if ( v177 < *(_DWORD *)(v184 + 20) )
        {
          v186 = 16LL * (unsigned __int8)v177;
          v187 = 8 * ((unsigned __int64)v177 >> 8);
          v336 = v186 + *(_QWORD *)(**(_QWORD **)(v184 + 24) + v187);
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v336, 0LL);
          if ( v177 < *(_DWORD *)(v184 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v184 + 24) + v187) + v186 + 8) )
          {
            *(_DWORD *)(24LL * v177 + *(_QWORD *)v184 + 8) |= 1u;
            v185 = (unsigned __int16 *)(24LL * v177 + *(_QWORD *)v184);
          }
          else
          {
            ExReleasePushLockExclusiveEx(v336, 0LL);
            KeLeaveCriticalRegion();
          }
          v176 = v340;
        }
        v377 = v185;
        if ( !v185 )
          goto LABEL_365;
        _m_prefetchw(v185 + 4);
        v51 = (*((_BYTE *)v185 + 15) & 0x20) == 0;
        v379 = *((_DWORD *)v185 + 2);
        if ( !v51 )
        {
          HANDLELOCK::vUnlock((HANDLELOCK *)&v377);
          if ( !v378 )
          {
LABEL_366:
            if ( v346 )
              bDeleteDCInternalEx(v176, 0LL);
            goto LABEL_368;
          }
          v185 = v377;
        }
        v346 = (*((_BYTE *)v185 + 15) & 8) != 0;
        v188 = *((_BYTE *)v185 + 14);
        if ( v188 == 5 )
        {
          v317 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v145 + 680);
          v318 = 0;
        }
        else
        {
          if ( v188 != 16 )
          {
LABEL_346:
            --*(_DWORD *)(v145 + 8);
            v189 = *(_DWORD *)v185 & 0xFFFFFF;
            if ( v189 >= 0x10000 )
            {
              if ( *(_DWORD *)gpHandleManager > 0x10000u )
              {
                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                            *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                            *v185,
                                            1)
                     + 13) == HIWORD(v189) )
                  v189 = (unsigned __int16)v189;
              }
              else
              {
                v189 = *v185;
              }
            }
            v190 = gpHandleManager;
            v191 = *((_QWORD *)gpHandleManager + 2);
            v192 = *(_DWORD *)(v191 + 2056);
            if ( v189 >= v192 + ((*(unsigned __int16 *)(v191 + 2) + 0xFFFF) << 16) )
              goto LABEL_673;
            v193 = ((v189 - v192) >> 16) + 1;
            if ( v189 < v192 )
              v193 = 0LL;
            v194 = *(_QWORD *)(v191 + 8 * v193 + 8);
            if ( (_DWORD)v193 )
              v189 += ((1 - (_DWORD)v193) << 16) - v192;
            if ( v189 >= *(_DWORD *)(v194 + 20) )
LABEL_673:
              v195 = 0LL;
            else
              v195 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v194 + 24) + 8 * ((unsigned __int64)v189 >> 8))
                                + 16LL * (unsigned __int8)v189
                                + 8);
            v196 = (unsigned __int16)*v195 | (*v195 >> 8) & 0xFF0000;
            if ( v196 >= 0x10000 )
            {
              if ( *(_DWORD *)gpHandleManager > 0x10000u )
              {
                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                            *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                            (unsigned __int16)*v195,
                                            1)
                     + 13) == HIWORD(v196) )
                  v196 = (unsigned __int16)v196;
              }
              else
              {
                v196 = (unsigned __int16)*v195;
              }
            }
            v197 = *((_QWORD *)v190 + 2);
            v198 = *(_DWORD *)(v197 + 2056);
            if ( v196 < v198 + ((*(unsigned __int16 *)(v197 + 2) + 0xFFFF) << 16) )
            {
              v199 = ((v196 - v198) >> 16) + 1;
              if ( v196 < v198 )
                v199 = 0LL;
              v200 = *(_QWORD *)(v197 + 8 * v199 + 8);
              if ( (_DWORD)v199 )
                v196 += ((1 - (_DWORD)v199) << 16) - v198;
              *(_DWORD *)(*(_QWORD *)v200 + 24LL * v196 + 8) &= ~1u;
              ExReleasePushLockExclusiveEx(
                *(_QWORD *)(**(_QWORD **)(v200 + 24) + 8 * ((unsigned __int64)v196 >> 8)) + 16LL * (unsigned __int8)v196,
                0LL);
              KeLeaveCriticalRegion();
            }
LABEL_365:
            KeLeaveCriticalRegion();
            goto LABEL_366;
          }
          v317 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v145 + 136);
          v318 = 2;
        }
        TrackObjectReferenceDecrement(v318, v317);
        goto LABEL_346;
      }
      v312 = gpHandleManager;
      v313 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v154 & 0xFFFFFF);
      v314 = GdiHandleEntryDirectory::GetEntryObject(*((GdiHandleEntryDirectory **)v312 + 2), v313);
      if ( *((_WORD *)v314 + 6) )
      {
        if ( *((struct _KTHREAD **)v314 + 2) == KeGetCurrentThread() )
          goto LABEL_646;
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v374);
    if ( v375 )
    {
LABEL_646:
      v154 = v374;
      goto LABEL_292;
    }
  }
  else
  {
LABEL_677:
    KeLeaveCriticalRegion();
  }
LABEL_368:
  v143 = v331;
  if ( v389 )
    GreSelectVisRgn(*(_QWORD *)(v331 + 8), 0LL, 1LL);
  v142 = v388;
LABEL_371:
  if ( (*(_DWORD *)(v143 + 64) & 2) == 0 )
    goto LABEL_377;
  if ( !(unsigned int)GreSetDCOwnerEx(*(_QWORD *)(v143 + 8), 2147483650LL, 0LL, 0LL) )
  {
    *(_DWORD *)(v143 + 64) &= ~0x1000u;
    DestroyCacheDC((__int64 *)(gpDispInfo + 24), 0LL);
    goto LABEL_681;
  }
  CurrentThread = KeGetCurrentThread();
  v202 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v319 = PsGetCurrentProcess(v204, v203),
        ProcessSessionId = PsGetProcessSessionIdEx(v319),
        v321 = PsGetCurrentThreadProcess(),
        v51 = ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(v321),
        v142 = v388,
        v51) )
  {
    v205 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v205 )
      v202 = *v205;
  }
  *(_QWORD *)(v143 + 72) = v202;
  *(_QWORD *)(v143 + 80) = 0LL;
  --gnDCECount;
  if ( v347 )
  {
    if ( (int)IsGreSelectFontSupported() >= 0 )
    {
      StockObject = GreGetStockObject(13);
      if ( qword_1C024F9B8 )
        qword_1C024F9B8(*(_QWORD *)(v143 + 8), StockObject);
    }
  }
LABEL_377:
  if ( (*(_BYTE *)(v386[5] + 26LL) & 0x40) != 0 && (v142 & 0x40000000) == 0 )
    GreSetLayout(*(HDC *)(v143 + 8), -1, 1u);
  v206 = *(_QWORD *)(v143 + 8);
  v365 = 0LL;
  v207 = 0LL;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v365);
  if ( (unsigned __int8)KeIsAttachedProcess() )
  {
    v322 = PsGetCurrentProcess(v209, v208);
    PsGetProcessSessionIdEx(v322);
    v323 = PsGetCurrentThreadProcess();
    PsGetProcessSessionIdEx(v323);
  }
  v210 = gpHandleManager;
  v211 = (unsigned __int16)v206 | ((unsigned int)v206 >> 8) & 0xFF0000;
  v381 = 1;
  if ( v211 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v206,
                                  1)
           + 13) == ((unsigned __int16)v206 | ((unsigned int)v206 >> 8) & 0xFF0000) >> 16 )
        v211 = (unsigned __int16)v206;
    }
    else
    {
      v211 = (unsigned __int16)v206;
    }
  }
  v212 = *((_QWORD *)v210 + 2);
  v213 = *(_DWORD *)(v212 + 2056);
  if ( v211 >= v213 + ((*(unsigned __int16 *)(v212 + 2) + 0xFFFF) << 16) )
    goto LABEL_719;
  v214 = ((v211 - v213) >> 16) + 1;
  if ( v211 < v213 )
    v214 = 0LL;
  v215 = *(_QWORD *)(v212 + 8 * v214 + 8);
  if ( (_DWORD)v214 )
    v211 += ((1 - (_DWORD)v214) << 16) - v213;
  v216 = 0LL;
  if ( v211 < *(_DWORD *)(v215 + 20) )
  {
    v217 = 16LL * (unsigned __int8)v211;
    v341 = 8 * ((unsigned __int64)v211 >> 8);
    v390 = v217 + *(_QWORD *)(**(_QWORD **)(v215 + 24) + v341);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v390, 0LL);
    if ( v211 < *(_DWORD *)(v215 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v215 + 24) + v341) + v217 + 8) )
    {
      *(_DWORD *)(24LL * v211 + *(_QWORD *)v215 + 8) |= 1u;
      v216 = (unsigned __int16 *)(24LL * v211 + *(_QWORD *)v215);
    }
    else
    {
      ExReleasePushLockExclusiveEx(v390, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  v380 = v216;
  if ( v216 )
  {
    _m_prefetchw(v216 + 4);
    v382 = *((_DWORD *)v216 + 2);
    v218 = *((_BYTE *)v216 + 15);
    if ( (v218 & 0x20) == 0 )
    {
      if ( (v218 & 0x40) == 0 )
      {
LABEL_395:
        if ( *((_BYTE *)v216 + 14) == 1 && v216[6] == WORD1(v206) )
        {
          v219 = *(_DWORD *)v216 & 0xFFFFFF;
          if ( v219 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          *v216,
                                          1)
                   + 13) == HIWORD(v219) )
                v219 = (unsigned __int16)v219;
            }
            else
            {
              v219 = *v216;
            }
          }
          v220 = *((_QWORD *)gpHandleManager + 2);
          v221 = *(_DWORD *)(v220 + 2056);
          if ( v219 >= v221 + ((*(unsigned __int16 *)(v220 + 2) + 0xFFFF) << 16) )
            goto LABEL_695;
          v222 = ((v219 - v221) >> 16) + 1;
          if ( v219 < v221 )
            v222 = 0LL;
          v223 = *(_QWORD *)(v220 + 8 * v222 + 8);
          if ( (_DWORD)v222 )
            v219 += ((1 - (_DWORD)v222) << 16) - v221;
          if ( v219 >= *(_DWORD *)(v223 + 20) )
LABEL_695:
            v207 = 0LL;
          else
            v207 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v223 + 24) + 8 * ((unsigned __int64)v219 >> 8))
                             + 16LL * (unsigned __int8)v219
                             + 8);
          ++*(_DWORD *)(v207 + 8);
        }
        v224 = *(_DWORD *)v216 & 0xFFFFFF;
        if ( v224 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        *v216,
                                        1)
                 + 13) == HIWORD(v224) )
              v224 = (unsigned __int16)v224;
          }
          else
          {
            v224 = *v216;
          }
        }
        v225 = gpHandleManager;
        v226 = *((_QWORD *)gpHandleManager + 2);
        v227 = *(_DWORD *)(v226 + 2056);
        if ( v224 >= v227 + ((*(unsigned __int16 *)(v226 + 2) + 0xFFFF) << 16) )
          goto LABEL_699;
        v228 = ((v224 - v227) >> 16) + 1;
        if ( v224 < v227 )
          v228 = 0LL;
        v229 = *(_QWORD *)(v226 + 8 * v228 + 8);
        if ( (_DWORD)v228 )
          v224 += ((1 - (_DWORD)v228) << 16) - v227;
        if ( v224 >= *(_DWORD *)(v229 + 20) )
LABEL_699:
          v230 = 0LL;
        else
          v230 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v229 + 24) + 8 * ((unsigned __int64)v224 >> 8))
                            + 16LL * (unsigned __int8)v224
                            + 8);
        v231 = (unsigned __int16)*v230 | (*v230 >> 8) & 0xFF0000;
        if ( v231 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)*v230,
                                        1)
                 + 13) == HIWORD(v231) )
              v231 = (unsigned __int16)v231;
          }
          else
          {
            v231 = (unsigned __int16)*v230;
          }
        }
        v232 = *((_QWORD *)v225 + 2);
        v233 = *(_DWORD *)(v232 + 2056);
        if ( v231 < v233 + ((*(unsigned __int16 *)(v232 + 2) + 0xFFFF) << 16) )
        {
          v234 = ((v231 - v233) >> 16) + 1;
          if ( v231 < v233 )
            v234 = 0LL;
          v235 = *(_QWORD *)(v232 + 8 * v234 + 8);
          if ( (_DWORD)v234 )
            v231 += ((1 - (_DWORD)v234) << 16) - v233;
          *(_DWORD *)(*(_QWORD *)v235 + 24LL * v231 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v235 + 24) + 8 * ((unsigned __int64)v231 >> 8)) + 16LL * (unsigned __int8)v231,
            0LL);
          KeLeaveCriticalRegion();
        }
        KeLeaveCriticalRegion();
        if ( !v207 )
          goto LABEL_469;
        *(_DWORD *)(v207 + 36) |= 0x100000u;
        GrepValidateVisRgn((struct DC *)v207, *(struct REGION **)(v207 + 1120));
        v240 = *(HDC *)v207;
        v348 = 0;
        v241 = (unsigned __int16)*(_DWORD *)v207 | (*(_DWORD *)v207 >> 8) & 0xFF0000;
        v342 = *(HDC *)v207;
        v366 = 0LL;
        PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v366);
        if ( (unsigned __int8)KeIsAttachedProcess() )
        {
          v327 = PsGetCurrentProcess(v243, v242);
          PsGetProcessSessionIdEx(v327);
          v328 = PsGetCurrentThreadProcess();
          PsGetProcessSessionIdEx(v328);
        }
        v244 = gpHandleManager;
        v384 = 1;
        if ( v241 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)v241,
                                        1)
                 + 13) == HIWORD(v241) )
              v241 = (unsigned __int16)v241;
          }
          else
          {
            v241 = (unsigned __int16)v241;
          }
        }
        v245 = *((_QWORD *)v244 + 2);
        v246 = *(_DWORD *)(v245 + 2056);
        if ( v241 >= v246 + ((*(unsigned __int16 *)(v245 + 2) + 0xFFFF) << 16) )
          goto LABEL_466;
        v247 = ((v241 - v246) >> 16) + 1;
        if ( v241 < v246 )
          v247 = 0LL;
        v248 = *(_QWORD *)(v245 + 8 * v247 + 8);
        if ( (_DWORD)v247 )
          v241 += ((1 - (_DWORD)v247) << 16) - v246;
        v249 = 0LL;
        if ( v241 < *(_DWORD *)(v248 + 20) )
        {
          v250 = 16LL * (unsigned __int8)v241;
          v251 = 8 * ((unsigned __int64)v241 >> 8);
          v391 = v250 + *(_QWORD *)(**(_QWORD **)(v248 + 24) + v251);
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v391, 0LL);
          if ( v241 < *(_DWORD *)(v248 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v248 + 24) + v251) + v250 + 8) )
          {
            *(_DWORD *)(24LL * v241 + *(_QWORD *)v248 + 8) |= 1u;
            v249 = (unsigned __int16 *)(24LL * v241 + *(_QWORD *)v248);
          }
          else
          {
            ExReleasePushLockExclusiveEx(v391, 0LL);
            KeLeaveCriticalRegion();
          }
          v240 = v342;
        }
        v383 = v249;
        if ( !v249 )
          goto LABEL_466;
        _m_prefetchw(v249 + 4);
        v51 = (*((_BYTE *)v249 + 15) & 0x20) == 0;
        v385 = *((_DWORD *)v249 + 2);
        if ( !v51 )
        {
          HANDLELOCK::vUnlock((HANDLELOCK *)&v383);
          if ( !v384 )
          {
LABEL_467:
            if ( v348 )
              bDeleteDCInternalEx(v240, 0LL);
            goto LABEL_469;
          }
          v249 = v383;
        }
        v348 = (*((_BYTE *)v249 + 15) & 8) != 0;
        v252 = *((_BYTE *)v249 + 14);
        if ( v252 == 5 )
        {
          v329 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v207 + 680);
          v330 = 0;
        }
        else
        {
          if ( v252 != 16 )
          {
LABEL_447:
            --*(_DWORD *)(v207 + 8);
            v253 = *(_DWORD *)v249 & 0xFFFFFF;
            if ( v253 >= 0x10000 )
            {
              if ( *(_DWORD *)gpHandleManager > 0x10000u )
              {
                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                            *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                            *v249,
                                            1)
                     + 13) == HIWORD(v253) )
                  v253 = (unsigned __int16)v253;
              }
              else
              {
                v253 = *v249;
              }
            }
            v254 = gpHandleManager;
            v255 = *((_QWORD *)gpHandleManager + 2);
            v256 = *(_DWORD *)(v255 + 2056);
            if ( v253 >= v256 + ((*(unsigned __int16 *)(v255 + 2) + 0xFFFF) << 16) )
              goto LABEL_715;
            v257 = ((v253 - v256) >> 16) + 1;
            if ( v253 < v256 )
              v257 = 0LL;
            v258 = *(_QWORD *)(v255 + 8 * v257 + 8);
            if ( (_DWORD)v257 )
              v253 += ((1 - (_DWORD)v257) << 16) - v256;
            if ( v253 >= *(_DWORD *)(v258 + 20) )
LABEL_715:
              v259 = 0LL;
            else
              v259 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v258 + 24) + 8 * ((unsigned __int64)v253 >> 8))
                                + 16LL * (unsigned __int8)v253
                                + 8);
            v260 = (unsigned __int16)*v259 | (*v259 >> 8) & 0xFF0000;
            if ( v260 >= 0x10000 )
            {
              if ( *(_DWORD *)gpHandleManager > 0x10000u )
              {
                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                            *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                            (unsigned __int16)*v259,
                                            1)
                     + 13) == HIWORD(v260) )
                  v260 = (unsigned __int16)v260;
              }
              else
              {
                v260 = (unsigned __int16)*v259;
              }
            }
            v261 = *((_QWORD *)v254 + 2);
            v262 = *(_DWORD *)(v261 + 2056);
            if ( v260 < v262 + ((*(unsigned __int16 *)(v261 + 2) + 0xFFFF) << 16) )
            {
              v263 = ((v260 - v262) >> 16) + 1;
              if ( v260 < v262 )
                v263 = 0LL;
              v264 = *(_QWORD *)(v261 + 8 * v263 + 8);
              if ( (_DWORD)v263 )
                v260 += ((1 - (_DWORD)v263) << 16) - v262;
              *(_DWORD *)(*(_QWORD *)v264 + 24LL * v260 + 8) &= ~1u;
              ExReleasePushLockExclusiveEx(
                *(_QWORD *)(**(_QWORD **)(v264 + 24) + 8 * ((unsigned __int64)v260 >> 8)) + 16LL * (unsigned __int8)v260,
                0LL);
              KeLeaveCriticalRegion();
            }
LABEL_466:
            KeLeaveCriticalRegion();
            goto LABEL_467;
          }
          v329 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v207 + 136);
          v330 = 2;
        }
        TrackObjectReferenceDecrement(v330, v329);
        goto LABEL_447;
      }
      v324 = gpHandleManager;
      v325 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v216 & 0xFFFFFF);
      v326 = GdiHandleEntryDirectory::GetEntryObject(*((GdiHandleEntryDirectory **)v324 + 2), v325);
      if ( *((_WORD *)v326 + 6) )
      {
        if ( *((struct _KTHREAD **)v326 + 2) == KeGetCurrentThread() )
          goto LABEL_691;
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v380);
    if ( v381 )
    {
LABEL_691:
      v216 = v380;
      goto LABEL_395;
    }
  }
  else
  {
LABEL_719:
    KeLeaveCriticalRegion();
  }
LABEL_469:
  if ( qword_1C024F9C0 )
  {
    v265 = v386;
    v266 = v331;
    if ( (int)qword_1C024F9C0() >= 0 && qword_1C024F9C8 )
      qword_1C024F9C8(*(_QWORD *)(v331 + 8), *v386, 0LL, 0LL, 0);
  }
  else
  {
    v266 = v331;
    v265 = v386;
  }
  if ( v350 )
  {
    if ( (*(_BYTE *)(v350[5] + 26LL) & 8) != 0 )
    {
      if ( qword_1C024F9C0 )
      {
        if ( (int)qword_1C024F9C0() >= 0 )
        {
          v237 = v350[5];
          v236 = (*(_WORD *)(v237 + 42) & 0x2FFF) == 669;
          v239 = (*(_BYTE *)(v237 + 27) & 2) == 0;
          if ( qword_1C024F9C8 )
            qword_1C024F9C8(*(_QWORD *)(v266 + 8), *v265, *v350, v239, v236);
        }
      }
    }
  }
  if ( *(int *)(v266 + 64) < 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v237, v236, v238, v239);
    *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200u;
    *(_QWORD *)(v266 + 72) = 0LL;
    *(_QWORD *)(v266 + 80) = PsGetCurrentProcessWin32Process(v282, v281, v283, v284);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      v237,
      (unsigned int)&LockRelease,
      v238,
      (_DWORD)ghsemDCVisRgn,
      (__int64)L"ghsemDCVisRgn");
  v267 = (int)ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDCVisRgn);
    PsLeavePriorityRegion(v268);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      v267,
      (unsigned int)&LockRelease,
      v238,
      (_DWORD)ghsemGreLock,
      (__int64)L"ghsemGreLock");
  v269 = (int)ghsemGreLock;
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
    PsLeavePriorityRegion(v270);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      v269,
      (unsigned int)&LockRelease,
      v238,
      (_DWORD)ghsemDynamicModeChange,
      (__int64)L"ghsemDynamicModeChange");
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v271);
  }
  return *(_QWORD *)(v266 + 8);
}
