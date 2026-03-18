/*
 * XREFs of DrvSetDisplayConfigValidateParams @ 0x1C00D3AF0
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C006FA20 (xxxUserSetDisplayConfig.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C0148B94 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     UserIsWddmConnectedSession @ 0x1C0053270 (UserIsWddmConnectedSession.c)
 *     ?DrvIsTemporarySettingChangeDisabled@@YAHXZ @ 0x1C006E094 (-DrvIsTemporarySettingChangeDisabled@@YAHXZ.c)
 *     ?DrvIsPermanentSettingChangesDisabled@@YAHXZ @ 0x1C006F1A0 (-DrvIsPermanentSettingChangesDisabled@@YAHXZ.c)
 *     _stricmp @ 0x1C00CC178 (_stricmp.c)
 *     ?EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C014682C (-EnforceSDCCloneSourceIndexCoherency@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 *     ?GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C0146C08 (-GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_.c)
 */

__int64 __fastcall DrvSetDisplayConfigValidateParams(
        __int64 a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        __int64 a3,
        int a4,
        char a5)
{
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  _QWORD *v50; // rdx
  _QWORD *v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdx
  _QWORD *v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rdx
  int v60; // [rsp+40h] [rbp-1F8h]
  int TargetVirtualization; // [rsp+40h] [rbp-1F8h]
  char *v62; // [rsp+48h] [rbp-1F0h]
  unsigned __int8 v63; // [rsp+50h] [rbp-1E8h] BYREF
  unsigned __int8 v64; // [rsp+51h] [rbp-1E7h] BYREF
  char v65; // [rsp+52h] [rbp-1E6h]
  unsigned int j; // [rsp+54h] [rbp-1E4h]
  unsigned int k; // [rsp+58h] [rbp-1E0h]
  unsigned int i; // [rsp+5Ch] [rbp-1DCh]
  char v69; // [rsp+60h] [rbp-1D8h]
  char v70; // [rsp+61h] [rbp-1D7h]
  char v71; // [rsp+62h] [rbp-1D6h]
  char v72; // [rsp+63h] [rbp-1D5h]
  char v73; // [rsp+64h] [rbp-1D4h]
  char v74; // [rsp+65h] [rbp-1D3h]
  char v75; // [rsp+66h] [rbp-1D2h]
  char v76; // [rsp+67h] [rbp-1D1h]
  char v77; // [rsp+68h] [rbp-1D0h]
  char v78; // [rsp+69h] [rbp-1CFh]
  char v79; // [rsp+6Ah] [rbp-1CEh]
  char v80; // [rsp+6Bh] [rbp-1CDh]
  char v81; // [rsp+6Ch] [rbp-1CCh]
  char v82; // [rsp+6Dh] [rbp-1CBh]
  char v83; // [rsp+6Eh] [rbp-1CAh]
  char v84; // [rsp+6Fh] [rbp-1C9h]
  char v85; // [rsp+70h] [rbp-1C8h]
  char v86; // [rsp+71h] [rbp-1C7h]
  char v87; // [rsp+72h] [rbp-1C6h]
  char v88; // [rsp+73h] [rbp-1C5h]
  char v89; // [rsp+74h] [rbp-1C4h]
  char v90; // [rsp+75h] [rbp-1C3h]
  char v91; // [rsp+76h] [rbp-1C2h]
  char v92; // [rsp+77h] [rbp-1C1h]
  char v93; // [rsp+78h] [rbp-1C0h]
  char v94; // [rsp+79h] [rbp-1BFh]
  char v95; // [rsp+7Ah] [rbp-1BEh]
  char v96; // [rsp+7Bh] [rbp-1BDh]
  char v97; // [rsp+7Ch] [rbp-1BCh]
  char v98; // [rsp+7Dh] [rbp-1BBh]
  char v99; // [rsp+7Eh] [rbp-1BAh]
  char v100; // [rsp+7Fh] [rbp-1B9h]
  char v101; // [rsp+80h] [rbp-1B8h]
  char v102; // [rsp+81h] [rbp-1B7h]
  char v103; // [rsp+82h] [rbp-1B6h]
  char v104; // [rsp+83h] [rbp-1B5h]
  char v105; // [rsp+84h] [rbp-1B4h]
  char v106; // [rsp+85h] [rbp-1B3h]
  char v107; // [rsp+86h] [rbp-1B2h]
  char v108; // [rsp+87h] [rbp-1B1h]
  char v109; // [rsp+88h] [rbp-1B0h]
  char v110; // [rsp+89h] [rbp-1AFh]
  char v111; // [rsp+8Ah] [rbp-1AEh]
  char v112; // [rsp+8Bh] [rbp-1ADh]
  char v113; // [rsp+8Ch] [rbp-1ACh]
  char v114; // [rsp+8Dh] [rbp-1ABh]
  char v115; // [rsp+8Eh] [rbp-1AAh]
  BOOL v116; // [rsp+90h] [rbp-1A8h]
  int v117; // [rsp+94h] [rbp-1A4h]
  int v118; // [rsp+98h] [rbp-1A0h]
  _QWORD *v119; // [rsp+A0h] [rbp-198h]
  _QWORD *v120; // [rsp+A8h] [rbp-190h]
  _QWORD *v121; // [rsp+B0h] [rbp-188h]
  _QWORD *v122; // [rsp+B8h] [rbp-180h]
  __int64 v123; // [rsp+C0h] [rbp-178h]
  __int64 v124; // [rsp+C8h] [rbp-170h]
  char *Str1; // [rsp+D0h] [rbp-168h]
  __int64 v126; // [rsp+D8h] [rbp-160h]
  __int64 v127; // [rsp+E0h] [rbp-158h]
  __int64 v128; // [rsp+E8h] [rbp-150h]
  __int64 v129; // [rsp+F0h] [rbp-148h]
  __int64 v130; // [rsp+F8h] [rbp-140h]
  __int64 v131; // [rsp+100h] [rbp-138h]
  __int64 v132; // [rsp+108h] [rbp-130h]
  __int64 v133; // [rsp+110h] [rbp-128h]
  __int64 v134; // [rsp+118h] [rbp-120h]
  __int64 v135; // [rsp+120h] [rbp-118h]
  __int64 v136; // [rsp+128h] [rbp-110h]
  __int64 v137; // [rsp+130h] [rbp-108h]
  __int64 v138; // [rsp+138h] [rbp-100h]
  __int64 v139; // [rsp+140h] [rbp-F8h]
  __int64 v140; // [rsp+148h] [rbp-F0h]
  __int64 v141; // [rsp+150h] [rbp-E8h]
  __int64 v142; // [rsp+158h] [rbp-E0h]
  __int64 v143; // [rsp+160h] [rbp-D8h]
  __int64 v144; // [rsp+168h] [rbp-D0h]
  __int64 v145; // [rsp+170h] [rbp-C8h]
  __int64 v146; // [rsp+178h] [rbp-C0h]
  __int64 v147; // [rsp+180h] [rbp-B8h]
  __int64 v148; // [rsp+188h] [rbp-B0h]
  __int64 v149; // [rsp+190h] [rbp-A8h]
  __int64 v150; // [rsp+198h] [rbp-A0h]
  __int64 v151; // [rsp+1A0h] [rbp-98h]
  __int64 v152; // [rsp+1A8h] [rbp-90h]
  __int64 v153; // [rsp+1B0h] [rbp-88h]
  __int64 v154; // [rsp+1B8h] [rbp-80h]
  __int64 v155; // [rsp+1C0h] [rbp-78h]
  __int64 v156; // [rsp+1C8h] [rbp-70h]
  __int64 v157; // [rsp+1D0h] [rbp-68h]
  __int64 v158; // [rsp+1D8h] [rbp-60h]
  __int64 v159; // [rsp+1E0h] [rbp-58h]
  __int64 v160; // [rsp+1E8h] [rbp-50h]
  __int64 v161; // [rsp+1F0h] [rbp-48h]
  __int64 v162; // [rsp+1F8h] [rbp-40h]
  __int64 v163; // [rsp+200h] [rbp-38h]
  __int64 v164; // [rsp+208h] [rbp-30h]
  _QWORD *v165; // [rsp+210h] [rbp-28h]
  __int64 v166; // [rsp+218h] [rbp-20h]
  __int64 v167; // [rsp+220h] [rbp-18h]
  unsigned int v168; // [rsp+240h] [rbp+8h]
  unsigned int v170; // [rsp+250h] [rbp+18h]

  v170 = a3;
  v168 = a1;
  Str1 = 0LL;
  if ( a5 )
  {
    if ( (a3 & 0x80) != 0 && DrvIsTemporarySettingChangeDisabled() )
    {
      v5 = WdLogNewEntry5_WdError(a1, a2, a3);
      v154 = v5;
      *(_QWORD *)(v5 + 24) = -1073741790LL;
      v115 = WdLogEvent5_WdError(v154, v5);
      return 3221225506LL;
    }
    if ( (v170 & 0x200) != 0 && DrvIsPermanentSettingChangesDisabled() )
    {
      v7 = WdLogNewEntry5_WdError(a1, a2, a3);
      v155 = v7;
      *(_QWORD *)(v7 + 24) = -1073741790LL;
      v69 = WdLogEvent5_WdError(v155, v7);
      return 3221225506LL;
    }
  }
  if ( (v170 & 0x10000) != 0 && ((v170 & 0x1F) != 0 || (v170 & 0x200) != 0) )
  {
    v8 = WdLogNewEntry5_WdError(a1, a2, a3);
    v156 = v8;
    *(_QWORD *)(v8 + 24) = -1073741637LL;
    v70 = WdLogEvent5_WdError(v156, v8);
    return 3221225659LL;
  }
  if ( (v170 & 0xC0000000) != 0 )
  {
    if ( (v170 & 0x80) != 0 )
    {
      if ( v170 == 1073741952 || v170 == -2147483520 )
      {
        CurrentProcess = PsGetCurrentProcess(a1, a2);
        Str1 = (char *)PsGetProcessImageFileName(CurrentProcess);
        if ( gbBypassPresenterViewProcessCheck || Str1 && !stricmp(Str1, "explorer.exe") )
        {
          if ( v168 || a2 )
          {
            v16 = WdLogNewEntry5_WdError(v13, v12, v14);
            v157 = v16;
            *(_QWORD *)(v16 + 24) = -1073741811LL;
            v74 = WdLogEvent5_WdError(v157, v16);
            return 3221225485LL;
          }
          else
          {
            v158 = WdLogNewEntry5_WdTrace(v13, v12);
            *(_QWORD *)(v158 + 24) = v170;
            v75 = WdLogEvent5_WdTrace(v158);
            return 0LL;
          }
        }
        else
        {
          v126 = WdLogNewEntry5_WdError(v13, v12, v14);
          *(_QWORD *)(v126 + 24) = v170;
          v15 = v126;
          *(_QWORD *)(v126 + 32) = -1073741581LL;
          v73 = WdLogEvent5_WdError(v126, v15);
          return 3221225715LL;
        }
      }
      else
      {
        v124 = WdLogNewEntry5_WdError(a1, a2, a3);
        *(_QWORD *)(v124 + 24) = v170;
        v10 = v124;
        *(_QWORD *)(v124 + 32) = -1073741581LL;
        v72 = WdLogEvent5_WdError(v124, v10);
        return 3221225715LL;
      }
    }
    else
    {
      v123 = WdLogNewEntry5_WdError(a1, a2, a3);
      *(_QWORD *)(v123 + 24) = v170;
      v9 = v123;
      *(_QWORD *)(v123 + 32) = -1073741581LL;
      v71 = WdLogEvent5_WdError(v123, v9);
      return 3221225715LL;
    }
  }
  else if ( (a4 & 1) != 0 )
  {
    if ( (a4 & 0xFFFFFEBF) == 1 && v170 == 128 && !v168 )
    {
      return 0LL;
    }
    else
    {
      v127 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v127 + 24) = v170;
      *(_QWORD *)(v127 + 32) = -1073741581LL;
      v76 = WdLogEvent5_WdAssertion(v127);
      return 3221225715LL;
    }
  }
  else
  {
    if ( (a4 & 0x10) != 0 && (a4 & 8) == 0 )
    {
      v128 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v128 + 24) = v170;
      *(_QWORD *)(v128 + 32) = -1073741581LL;
      v77 = WdLogEvent5_WdAssertion(v128);
      return 3221225715LL;
    }
    if ( (a4 & 8) != 0 && v168 != 1 )
    {
      v120 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1, a2);
      v120[3] = v168;
      v120[4] = v170;
      v120[5] = -1073741581LL;
      v78 = WdLogEvent5_WdAssertion(v120);
      return 3221225715LL;
    }
    if ( (a4 & 8) != 0 && (v170 & 0x20) == 0 )
    {
      v129 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v129 + 24) = v170;
      *(_QWORD *)(v129 + 32) = -1073741581LL;
      v79 = WdLogEvent5_WdAssertion(v129);
      return 3221225715LL;
    }
    if ( !(unsigned int)UserIsWddmConnectedSession() && (v170 & 0x88F) != 0x88F )
    {
      v130 = WdLogNewEntry5_WdError(v18, v17, v19);
      *(_QWORD *)(v130 + 24) = v170;
      v20 = v130;
      *(_QWORD *)(v130 + 32) = -1073741790LL;
      v80 = WdLogEvent5_WdError(v130, v20);
      return 3221225506LL;
    }
    if ( (v170 & 0xFFFE4000) != 0 )
    {
      v131 = WdLogNewEntry5_WdError(v18, v17, v19);
      *(_QWORD *)(v131 + 24) = v170;
      v21 = v131;
      *(_QWORD *)(v131 + 32) = -1073741581LL;
      v81 = WdLogEvent5_WdError(v131, v21);
      return 3221225715LL;
    }
    if ( (v170 & 0xC0) == 0 || (v170 & 0xC0) == 0xC0 )
    {
      v132 = WdLogNewEntry5_WdError(v18, v17, v19);
      *(_QWORD *)(v132 + 24) = v170;
      v22 = v132;
      *(_QWORD *)(v132 + 32) = -1073741581LL;
      v82 = WdLogEvent5_WdError(v132, v22);
      return 3221225715LL;
    }
    if ( (v170 & 0x180) == 0x100 )
    {
      v133 = WdLogNewEntry5_WdError(v18, v17, v19);
      *(_QWORD *)(v133 + 24) = v170;
      v23 = v133;
      *(_QWORD *)(v133 + 32) = -1073741581LL;
      v83 = WdLogEvent5_WdError(v133, v23);
      return 3221225715LL;
    }
    if ( (v170 & 0x1000) != 0 && (v170 & 0xA0) != 0xA0 )
    {
      v134 = WdLogNewEntry5_WdError(v18, v17, v19);
      *(_QWORD *)(v134 + 24) = v170;
      v24 = v134;
      *(_QWORD *)(v134 + 32) = -1073741581LL;
      v84 = WdLogEvent5_WdError(v134, v24);
      return 3221225715LL;
    }
    if ( (v170 & 0x2000) != 0 && (v170 & 0x10) == 0 )
    {
      v135 = WdLogNewEntry5_WdError(v18, v17, v19);
      *(_QWORD *)(v135 + 24) = v170;
      v25 = v135;
      *(_QWORD *)(v135 + 32) = -1073741581LL;
      v85 = WdLogEvent5_WdError(v135, v25);
      return 3221225715LL;
    }
    if ( (v170 & 0x1F) != 0 )
    {
      if ( (v170 & 0x400) != 0 )
      {
        v136 = WdLogNewEntry5_WdError(v18, v17, v19);
        *(_QWORD *)(v136 + 24) = v170;
        v26 = v136;
        *(_QWORD *)(v136 + 32) = -1073741581LL;
        v86 = WdLogEvent5_WdError(v136, v26);
        return 3221225715LL;
      }
      if ( (v170 & 0x20) != 0 )
      {
        v137 = WdLogNewEntry5_WdError(v18, v17, v19);
        *(_QWORD *)(v137 + 24) = v170;
        v27 = v137;
        *(_QWORD *)(v137 + 32) = -1073741581LL;
        v87 = WdLogEvent5_WdError(v137, v27);
        return 3221225715LL;
      }
      if ( (v170 & 0x200) != 0 )
      {
        v138 = WdLogNewEntry5_WdError(v18, v17, v19);
        *(_QWORD *)(v138 + 24) = v170;
        v28 = v138;
        *(_QWORD *)(v138 + 32) = -1073741581LL;
        v88 = WdLogEvent5_WdError(v138, v28);
        return 3221225715LL;
      }
      if ( (v170 & 0x10) != 0 )
      {
        if ( (v170 & 0x800) != 0 )
        {
          v139 = WdLogNewEntry5_WdError(v18, v17, v19);
          *(_QWORD *)(v139 + 24) = v170;
          v29 = v139;
          *(_QWORD *)(v139 + 32) = -1073741581LL;
          v89 = WdLogEvent5_WdError(v139, v29);
          return 3221225715LL;
        }
        if ( !a2 )
        {
          v140 = WdLogNewEntry5_WdError(v18, v17, v19);
          *(_QWORD *)(v140 + 24) = v170;
          v30 = v140;
          *(_QWORD *)(v140 + 32) = -1073741584LL;
          v90 = WdLogEvent5_WdError(v140, v30);
          return 3221225712LL;
        }
        if ( !v168 )
        {
          v141 = WdLogNewEntry5_WdError(v18, v17, v19);
          *(_QWORD *)(v141 + 24) = v170;
          v31 = v141;
          *(_QWORD *)(v141 + 32) = -1073741585LL;
          v91 = WdLogEvent5_WdError(v141, v31);
          return 3221225711LL;
        }
        for ( i = 0; i < v168; ++i )
        {
          v165 = (_QWORD *)((char *)a2 + 200 * i);
          if ( (*v165 & 0x7FF30FFFFFFFFFFFLL) != 0 )
          {
            v32 = WdLogNewEntry5_WdError(0x7FF30FFFFFFFFFFFLL, v17, v19);
            v159 = v32;
            *(_QWORD *)(v32 + 24) = i;
            v92 = WdLogEvent5_WdError(v159, v32);
            return 3221225714LL;
          }
        }
      }
      else
      {
        if ( a2 )
        {
          v142 = WdLogNewEntry5_WdError(v18, v17, v19);
          *(_QWORD *)(v142 + 24) = v170;
          v33 = v142;
          *(_QWORD *)(v142 + 32) = -1073741584LL;
          v93 = WdLogEvent5_WdError(v142, v33);
          return 3221225712LL;
        }
        if ( v168 )
        {
          v143 = WdLogNewEntry5_WdError(v18, v17, v19);
          *(_QWORD *)(v143 + 24) = v170;
          v34 = v143;
          *(_QWORD *)(v143 + 32) = -1073741585LL;
          v94 = WdLogEvent5_WdError(v143, v34);
          return 3221225711LL;
        }
      }
    }
    else
    {
      if ( (v170 & 0x20) == 0 )
      {
        v144 = WdLogNewEntry5_WdError(v18, v17, v19);
        *(_QWORD *)(v144 + 24) = v170;
        v35 = v144;
        *(_QWORD *)(v144 + 32) = -1073741581LL;
        v95 = WdLogEvent5_WdError(v144, v35);
        return 3221225715LL;
      }
      if ( (v170 & 0x800) != 0 )
      {
        v145 = WdLogNewEntry5_WdError(v18, v17, v19);
        *(_QWORD *)(v145 + 24) = v170;
        v36 = v145;
        *(_QWORD *)(v145 + 32) = -1073741581LL;
        v96 = WdLogEvent5_WdError(v145, v36);
        return 3221225715LL;
      }
      if ( (v170 & 0x10000) == 0 )
      {
        if ( !a2 )
        {
          v146 = WdLogNewEntry5_WdError(v18, v17, v19);
          *(_QWORD *)(v146 + 24) = v170;
          v37 = v146;
          *(_QWORD *)(v146 + 32) = -1073741584LL;
          v97 = WdLogEvent5_WdError(v146, v37);
          return 3221225712LL;
        }
        if ( !v168 )
        {
          v147 = WdLogNewEntry5_WdError(v18, v17, v19);
          *(_QWORD *)(v147 + 24) = v170;
          v38 = v147;
          *(_QWORD *)(v147 + 32) = -1073741585LL;
          v98 = WdLogEvent5_WdError(v147, v38);
          return 3221225711LL;
        }
      }
      if ( v168 )
      {
        v60 = EnforceSDCCloneSourceIndexCoherency(v168, a2);
        if ( v60 < 0 )
        {
          v42 = WdLogNewEntry5_WdError(v40, v39, v41);
          v160 = v42;
          *(_QWORD *)(v42 + 24) = v60;
          v99 = WdLogEvent5_WdError(v160, v42);
          return (unsigned int)v60;
        }
        v65 = 0;
        for ( j = 0; j < v168; ++j )
        {
          v62 = (char *)a2 + 200 * j;
          v64 = 0;
          v63 = 0;
          if ( (*(_QWORD *)v62 & 0x7FD30E6FFF7CF070LL) != 0 )
          {
            v161 = WdLogNewEntry5_WdError(0x7FD30E6FFF7CF070LL, v39, v41);
            v43 = *(_QWORD *)v62;
            *(_QWORD *)(v161 + 24) = *(_QWORD *)v62;
            v100 = WdLogEvent5_WdError(v161, v43);
            return 3221225485LL;
          }
          v44 = 0xFFFFFE7FFF7DF470uLL;
          if ( (*((_QWORD *)v62 + 1) & 0xFFFFFE7FFF7DF470uLL) != 0
            || (v44 = (unsigned __int64)a2 + 200 * j, (*(_QWORD *)v62 & *((_QWORD *)v62 + 1)) != *((_QWORD *)v62 + 1)) )
          {
            v148 = WdLogNewEntry5_WdError(v44, v39, v41);
            *(_QWORD *)(v148 + 24) = *(_QWORD *)v62;
            v45 = *((_QWORD *)v62 + 1);
            *(_QWORD *)(v148 + 32) = v45;
            v101 = WdLogEvent5_WdError(v148, v45);
            return 3221225485LL;
          }
          v40 = 0x8000000000000000uLL;
          if ( *(__int64 *)v62 < 0 )
          {
            if ( (*(_QWORD *)v62 & 0x8004700000000000uLL) != 0x8004700000000000uLL )
            {
              v162 = WdLogNewEntry5_WdError(0x8004700000000000uLL, v39, v41);
              v46 = *(_QWORD *)v62;
              *(_QWORD *)(v162 + 24) = *(_QWORD *)v62;
              v102 = WdLogEvent5_WdError(v162, v46);
              return 3221225485LL;
            }
            TargetVirtualization = GetTargetVirtualization(
                                     *(struct _LUID *)(v62 + 16),
                                     *((_DWORD *)v62 + 7),
                                     &v64,
                                     &v63,
                                     0LL,
                                     0LL,
                                     0LL);
            if ( TargetVirtualization < 0 )
            {
              v48 = WdLogNewEntry5_WdError(v47, v39, v41);
              v163 = v48;
              *(_QWORD *)(v48 + 24) = TargetVirtualization;
              v103 = WdLogEvent5_WdError(v163, v48);
              return 3221225712LL;
            }
            v40 = 0x8000000000000LL;
            if ( (*(_QWORD *)v62 & 0x8000000000000LL) != 0 )
            {
              v116 = v64 == 0;
              v118 = v63 ? 0 : 2;
              v39 = v118 | (unsigned int)v116;
              v40 = v39;
              if ( (unsigned __int8)v62[101] != (_DWORD)v39 )
              {
                v166 = WdLogNewEntry5_WdError(v39, v39, v41);
                v104 = WdLogEvent5_WdError(v166, v49);
                return 3221225485LL;
              }
            }
            if ( (*(_QWORD *)v62 & 0x800LL) != 0 )
            {
              if ( !*((_DWORD *)v62 + 29) && !*((_DWORD *)v62 + 30) )
                v65 = 1;
            }
            else
            {
              v65 = 1;
            }
            for ( k = 0; k < j; ++k )
            {
              v40 = 0x8000000000000000uLL;
              if ( *(__int64 *)v62 < 0 )
              {
                v40 = (__int64)a2;
                v39 = *((unsigned int *)v62 + 39);
                if ( *((_DWORD *)a2 + 50 * k + 39) == (_DWORD)v39 )
                  break;
              }
            }
            if ( k < j )
            {
              v39 = 0x8000000000000LL;
              v40 = *(_QWORD *)v62 & 0x8000000000000LL;
              if ( (*((_QWORD *)a2 + 25 * k) & 0x8000000000000LL) != v40
                || (v40 = (unsigned __int8)v62[101], *((unsigned __int8 *)a2 + 200 * k + 101) != (_DWORD)v40) )
              {
                v121 = (_QWORD *)WdLogNewEntry5_WdError(v40, 0x8000000000000LL, v41);
                v121[3] = k;
                v121[4] = j;
                v50 = v121;
                v121[5] = -1073741582LL;
                v114 = WdLogEvent5_WdError(v121, v50);
                return 3221225714LL;
              }
              if ( v63 )
              {
                v40 = (__int64)a2;
                v39 = *((unsigned int *)v62 + 4);
                if ( *((_DWORD *)a2 + 50 * k + 4) != (_DWORD)v39
                  || (v40 = (__int64)a2, v39 = *((unsigned int *)v62 + 5), *((_DWORD *)a2 + 50 * k + 5) != (_DWORD)v39) )
                {
                  v122 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39, v41);
                  v122[3] = k;
                  v122[4] = j;
                  v51 = v122;
                  v122[5] = -1073741582LL;
                  v105 = WdLogEvent5_WdError(v122, v51);
                  return 3221225714LL;
                }
              }
            }
            if ( (*(_QWORD *)v62 & 0x100LL) != 0 )
            {
              v40 = 0x18000000000LL;
              if ( (*(_QWORD *)v62 & 0x18000000000LL) != 0 )
              {
                v52 = WdLogNewEntry5_WdError(0x18000000000LL, v39, v41);
                v164 = v52;
                *(_QWORD *)(v52 + 24) = j;
                v106 = WdLogEvent5_WdError(v164, v52);
                return 3221225714LL;
              }
            }
            if ( (*(_QWORD *)v62 & 0x87LL) != 0 )
            {
              if ( (*(_QWORD *)v62 & 4LL) != 0 )
              {
                v117 = *((_DWORD *)v62 + 19);
                if ( v117 <= 0 || v117 > 3 )
                {
                  v149 = WdLogNewEntry5_WdError(v40, v39, v41);
                  *(_QWORD *)(v149 + 24) = *((int *)v62 + 19);
                  v53 = v149;
                  *(_QWORD *)(v149 + 32) = -1073741582LL;
                  v107 = WdLogEvent5_WdError(v149, v53);
                  return 3221225714LL;
                }
              }
              if ( (*(_QWORD *)v62 & 2LL) != 0 && (!*((_DWORD *)v62 + 12) || !*((_DWORD *)v62 + 13)) )
              {
                v119 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39, v41);
                v119[3] = *((unsigned int *)v62 + 12);
                v119[4] = *((unsigned int *)v62 + 13);
                v119[5] = j;
                v54 = v119;
                v119[6] = -1073741582LL;
                v108 = WdLogEvent5_WdError(v119, v54);
                return 3221225714LL;
              }
            }
            if ( (*(_QWORD *)v62 & 0x800000LL) != 0 )
            {
              v40 = 0x1000000000LL;
              if ( (*(_QWORD *)v62 & 0x1000000000LL) == 0 )
              {
                if ( v64 && v63 )
                {
                  v150 = WdLogNewEntry5_WdError(0x1000000000LL, v39, v41);
                  *(_QWORD *)(v150 + 24) = j;
                  v55 = v150;
                  *(_QWORD *)(v150 + 32) = -1073741584LL;
                  v109 = WdLogEvent5_WdError(v150, v55);
                  return 3221225712LL;
                }
                if ( (*(_QWORD *)v62 & 0x100LL) == 0 )
                {
                  v151 = WdLogNewEntry5_WdError(0x1000000000LL, v39, v41);
                  *(_QWORD *)(v151 + 24) = j;
                  v56 = v151;
                  *(_QWORD *)(v151 + 32) = -1073741584LL;
                  v110 = WdLogEvent5_WdError(v151, v56);
                  return 3221225712LL;
                }
                v40 = *((unsigned int *)v62 + 38);
                if ( *((_DWORD *)v62 + 36) >= (int)v40
                  || (v40 = *((unsigned int *)v62 + 37), *((_DWORD *)v62 + 35) >= (int)v40) )
                {
                  v152 = WdLogNewEntry5_WdError(v40, v39, v41);
                  *(_QWORD *)(v152 + 24) = j;
                  v57 = v152;
                  *(_QWORD *)(v152 + 32) = -1073741582LL;
                  v111 = WdLogEvent5_WdError(v152, v57);
                  return 3221225714LL;
                }
                if ( *((int *)v62 + 36) < 0
                  || *((int *)v62 + 35) < 0
                  || (v40 = *((unsigned int *)v62 + 23), *((_DWORD *)v62 + 38) > (unsigned int)v40)
                  || (v40 = *((unsigned int *)v62 + 22), *((_DWORD *)v62 + 37) > (unsigned int)v40) )
                {
                  v153 = WdLogNewEntry5_WdError(v40, v39, v41);
                  *(_QWORD *)(v153 + 24) = j;
                  v58 = v153;
                  *(_QWORD *)(v153 + 32) = -1073741582LL;
                  v112 = WdLogEvent5_WdError(v153, v58);
                  return 3221225714LL;
                }
              }
            }
          }
        }
        if ( !v65 )
        {
          v167 = WdLogNewEntry5_WdError(v40, v39, v41);
          v113 = WdLogEvent5_WdError(v167, v59);
          return 3221225485LL;
        }
      }
    }
    return 0LL;
  }
}
