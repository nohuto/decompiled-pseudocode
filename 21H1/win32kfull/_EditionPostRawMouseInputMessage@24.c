/*
 * XREFs of _EditionPostRawMouseInputMessage@24 @ 0xACE78
 * Callers:
 *     ?xxxMoveEventAbsolute@@YG?AW4_CommitMousePosAndMoveResult@@JJKPAXPAU_MOUSE_INPUT_DATA@@_K2HHHPAU_MousePacketPerf@@@Z @ 0xF0598 (-xxxMoveEventAbsolute@@YG-AW4_CommitMousePosAndMoveResult@@JJKPAXPAU_MOUSE_INPUT_DATA@@_K2HHHPAU.c)
 * Callees:
 *     _PostInputMessage@60 @ 0x467D0 (_PostInputMessage@60.c)
 *     _RawInputRequestedForMouse@0 @ 0xACEA0 (_RawInputRequestedForMouse@0.c)
 *     _AllocateHidData@20 @ 0x14415B (_AllocateHidData@20.c)
 *     _FreeHidData@4 @ 0x144291 (_FreeHidData@4.c)
 *     ?DeliverRawInput@Mouse@InputTraceLogging@@SGX_K_N@Z @ 0x1469E1 (-DeliverRawInput@Mouse@InputTraceLogging@@SGX_K_N@Z.c)
 */

int __stdcall EditionPostRawMouseInputMessage(int a1, unsigned __int64 a2, unsigned int a3, _DWORD *a4, int *a5)
{
  int v5; // ebx
  int v7; // esi
  _DWORD *v8; // esi
  _DWORD *v9; // esi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  _DWORD *v13; // edi
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int HidData; // eax
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  int v21; // esi
  int v22; // eax
  int v23; // edx
  int v24; // edx
  int v25; // edx
  int v26; // edx
  int v27; // ecx
  int v28; // ecx
  int v29; // edx
  int v30; // esi
  int i; // ecx
  int v32; // ecx
  int v33; // esi
  int v34; // esi
  int j; // ecx
  int v36; // ecx
  _DWORD *v37; // esi
  int v38; // esi
  int k; // ecx
  int v40; // esi
  int m; // ecx
  int v42; // esi
  int n; // ecx
  int v44; // esi
  int ii; // ecx
  int v46; // esi
  int jj; // ecx
  int v48; // esi
  int kk; // ecx
  int v50; // esi
  int mm; // ecx
  unsigned int *v52; // eax
  int v53; // eax
  int v54; // eax
  int *nn; // edi
  int v56; // ecx
  int v57; // eax
  int v58; // esi
  int v59; // ecx
  int v60; // eax
  int v61; // eax
  int v62; // edx
  int v63; // ecx
  int v64; // ecx
  int v65; // ecx
  int v66; // edx
  int v67; // ecx
  int v68; // eax
  int v69; // eax
  int v70; // esi
  int i1; // ecx
  int v72; // ecx
  int v73; // esi
  int v74; // esi
  int i2; // ecx
  int v76; // esi
  int i3; // ecx
  int v78; // esi
  int i4; // ecx
  int v80; // esi
  int i5; // ecx
  int v82; // esi
  int i6; // ecx
  int v84; // esi
  int i7; // ecx
  int v86; // esi
  int i8; // ecx
  int v88; // esi
  int i9; // ecx
  int v90; // esi
  int v91; // ecx
  int v92; // edx
  int v93; // ecx
  int v94; // eax
  unsigned int *v95; // eax
  bool v96; // [esp+0h] [ebp-50h]
  char v97; // [esp+Fh] [ebp-41h]
  int v98; // [esp+10h] [ebp-40h]
  int v99; // [esp+10h] [ebp-40h]
  int v100; // [esp+10h] [ebp-40h]
  int *v101; // [esp+10h] [ebp-40h]
  _DWORD *v102; // [esp+14h] [ebp-3Ch]
  int v103; // [esp+14h] [ebp-3Ch]
  int v104; // [esp+14h] [ebp-3Ch]
  int v105; // [esp+14h] [ebp-3Ch]
  int v106; // [esp+18h] [ebp-38h]
  int v107; // [esp+1Ch] [ebp-34h]
  int v108; // [esp+1Ch] [ebp-34h]
  int v109; // [esp+20h] [ebp-30h]
  int v110; // [esp+20h] [ebp-30h]
  int v111; // [esp+20h] [ebp-30h]
  int v112; // [esp+24h] [ebp-2Ch]
  int v113; // [esp+24h] [ebp-2Ch]
  int v114; // [esp+28h] [ebp-28h]
  int v115; // [esp+28h] [ebp-28h]
  int v116; // [esp+2Ch] [ebp-24h]
  int v117; // [esp+2Ch] [ebp-24h]
  int v118; // [esp+30h] [ebp-20h]
  int v119; // [esp+30h] [ebp-20h]
  int v120; // [esp+30h] [ebp-20h]
  int v121; // [esp+34h] [ebp-1Ch]
  int v122; // [esp+34h] [ebp-1Ch]
  int v123; // [esp+34h] [ebp-1Ch]
  unsigned int *v124; // [esp+38h] [ebp-18h]
  int v125; // [esp+38h] [ebp-18h]
  int v126; // [esp+3Ch] [ebp-14h]
  int v127; // [esp+40h] [ebp-10h]
  int v128; // [esp+40h] [ebp-10h]
  int v129; // [esp+44h] [ebp-Ch]
  unsigned int *v130; // [esp+44h] [ebp-Ch]
  int v131; // [esp+48h] [ebp-8h] BYREF
  int v132; // [esp+4Ch] [ebp-4h]

  v5 = 0;
  if ( !RawInputRequestedForMouse() )
    return v5;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 88) == 2 )
      v7 = *(_DWORD *)(a1 + 80);
    else
      v7 = 0;
    v8 = (_DWORD *)(*(_DWORD *)(v7 + 8) + 236);
  }
  else
  {
    if ( _gptiForeground && (unsigned __int8)IsSpatialDelegationEnabledForThread(_gptiForeground) )
      return v5;
    v8 = (_DWORD *)_gpqForeground;
  }
  v9 = (_DWORD *)*v8;
  if ( *a4 == 2 )
    v106 = a4[1];
  else
    v106 = 0;
  v98 = 0;
  v10 = 0;
  v97 = 1;
  if ( v9 )
  {
    v11 = v9[14];
    if ( v11 )
      v12 = *(_DWORD *)(v11 + 8);
    else
      v12 = v9[12];
    v10 = *(_DWORD *)(*(_DWORD *)(v12 + 232) + 472);
  }
  v13 = v9;
  if ( v10 && (*(_BYTE *)(v10 + 52) & 1) != 0 )
  {
    InputTraceLogging::Mouse::DeliverRawInput(a2, v96);
    v14 = v9[14];
    if ( v14 )
      v15 = *(_DWORD *)(v14 + 8);
    else
      v15 = v9[12];
    v102 = v9;
    v16 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v15 + 232) + 472) + 32);
    v121 = v16;
    if ( v16 )
    {
      v98 = *(_DWORD *)(v16 + 8);
      v102 = *(_DWORD **)(v98 + 236);
    }
    HidData = AllocateHidData(v106, 0, 24, 0, v16);
    v124 = (unsigned int *)HidData;
    if ( !HidData )
      return v5;
    qmemcpy((void *)(HidData + 32), a5, 0x18u);
    v13 = v102;
    v18 = v102[16];
    if ( v18 )
      v19 = *(_DWORD *)(v18 + 8);
    else
      v19 = 0;
    if ( v19 )
      v103 = *(_DWORD *)(v19 + 232);
    else
      v103 = 0;
    v20 = v13[13];
    v127 = v20;
    if ( v20 )
      v109 = *(_DWORD *)(v20 + 232);
    else
      v109 = 0;
    v21 = v13[12];
    if ( v21 )
      v107 = *(_DWORD *)(v21 + 232);
    else
      v107 = 0;
    v22 = v98;
    if ( v98 )
      v99 = *(_DWORD *)(v98 + 232);
    else
      v99 = 0;
    if ( v103 )
      v23 = v103 + 168;
    else
      v23 = gObjDummyLock;
    v118 = v23;
    if ( v107 )
      v24 = v107 + 168;
    else
      v24 = gObjDummyLock;
    v116 = v24;
    if ( v109 )
      v25 = v109 + 168;
    else
      v25 = gObjDummyLock;
    v114 = v25;
    if ( v99 )
      v26 = v99 + 168;
    else
      v26 = gObjDummyLock;
    v112 = v26;
    if ( v19 )
      v27 = v19 + 216;
    else
      v27 = gObjDummyLock;
    v100 = v27;
    if ( v21 )
      v104 = v21 + 216;
    else
      v104 = gObjDummyLock;
    if ( v127 )
      v28 = v127 + 216;
    else
      v28 = gObjDummyLock;
    v108 = v28;
    if ( v22 )
      v110 = v22 + 216;
    else
      v110 = gObjDummyLock;
    v29 = gObjDummyLock;
    if ( v121 )
      v29 = v121 + 28;
    v30 = gpsiLock;
    for ( i = 3; i; --i )
      v30 += 4;
    v32 = 3;
    v33 = v29;
    while ( v32 )
    {
      v33 += 4;
      --v32;
    }
    v34 = v110;
    for ( j = 3; j; --j )
      v34 += 4;
    v36 = 3;
    v37 = v13;
    while ( v36 )
    {
      ++v37;
      --v36;
    }
    v38 = v108;
    for ( k = 3; k; --k )
      v38 += 4;
    v40 = v104;
    for ( m = 3; m; --m )
      v40 += 4;
    v42 = v100;
    for ( n = 3; n; --n )
      v42 += 4;
    v44 = v112;
    for ( ii = 3; ii; --ii )
      v44 += 4;
    v46 = v114;
    for ( jj = 3; jj; --jj )
      v46 += 4;
    v48 = v116;
    for ( kk = 3; kk; --kk )
      v48 += 4;
    v50 = v118;
    for ( mm = 3; mm; --mm )
      v50 += 4;
    if ( PostInputMessage((int)v13, v121, (struct tagQMSG *)0xFF, 0, *v124, a3, 0, 0, a5[5], 0, 0, 0, 0, 0, 0) )
    {
      v52 = 0;
      v97 = 0;
    }
    else
    {
      v52 = v124;
    }
    if ( v52 )
      FreeHidData(v52);
  }
  if ( _gHidCounters[1] )
  {
    v126 = 0;
    v101 = (int *)RawInputManagerObject::gHidRequestTable[4];
    v131 = 0;
    v132 = 0;
    if ( v13 )
    {
      v53 = v13[14];
      if ( v53 )
        v54 = *(_DWORD *)(v53 + 8);
      else
        v54 = v13[12];
      v126 = *(_DWORD *)(v54 + 232);
      v131 = v13[79];
      v132 = v13[80];
    }
    for ( nn = v101; nn != &RawInputManagerObject::gHidRequestTable[4]; v101 = nn )
    {
      if ( (nn[13] & 4) != 0 )
      {
        v56 = nn[8];
        v128 = v56;
        if ( v56 )
        {
          v57 = *(_DWORD *)(v56 + 20);
          if ( *(char *)(v57 + 12) >= 0 && *(char *)(v57 + 11) >= 0 )
          {
            v58 = *(_DWORD *)(v56 + 8);
            v59 = *(_DWORD *)(v58 + 236);
            v105 = v59;
            v60 = *(_DWORD *)(v59 + 64);
            if ( v60 )
              v61 = *(_DWORD *)(v60 + 8);
            else
              v61 = 0;
            if ( v61 )
              v62 = *(_DWORD *)(v61 + 232);
            else
              v62 = 0;
            v63 = *(_DWORD *)(v59 + 52);
            v129 = v63;
            if ( v63 )
              v125 = *(_DWORD *)(v63 + 232);
            else
              v125 = 0;
            v64 = *(_DWORD *)(v105 + 48);
            v119 = v64;
            if ( v64 )
              v65 = *(_DWORD *)(v64 + 232);
            else
              v65 = 0;
            if ( v58 )
            {
              v122 = *(_DWORD *)(v58 + 232);
              nn = v101;
            }
            else
            {
              v122 = 0;
            }
            if ( v62 )
              v66 = v62 + 168;
            else
              v66 = gObjDummyLock;
            if ( v65 )
              v111 = v65 + 168;
            else
              v111 = gObjDummyLock;
            if ( v125 )
              v113 = v125 + 168;
            else
              v113 = gObjDummyLock;
            if ( v122 )
              v67 = v122 + 168;
            else
              v67 = gObjDummyLock;
            v115 = v67;
            if ( v61 )
              v117 = v61 + 216;
            else
              v117 = gObjDummyLock;
            if ( v119 )
              v120 = v119 + 216;
            else
              v120 = gObjDummyLock;
            if ( v129 )
              v68 = v129 + 216;
            else
              v68 = gObjDummyLock;
            v123 = v68;
            v69 = gObjDummyLock;
            if ( v58 )
              v69 = v58 + 216;
            v70 = gpsiLock;
            for ( i1 = 3; i1; --i1 )
              v70 += 4;
            v72 = 3;
            v73 = v128 + 28;
            while ( v72 )
            {
              v73 += 4;
              --v72;
            }
            v74 = v69;
            for ( i2 = 3; i2; --i2 )
              v74 += 4;
            v76 = v105;
            for ( i3 = 3; i3; --i3 )
              v76 += 4;
            v78 = v123;
            for ( i4 = 3; i4; --i4 )
              v78 += 4;
            v80 = v120;
            for ( i5 = 3; i5; --i5 )
              v80 += 4;
            v82 = v117;
            for ( i6 = 3; i6; --i6 )
              v82 += 4;
            v84 = v115;
            for ( i7 = 3; i7; --i7 )
              v84 += 4;
            v86 = v113;
            for ( i8 = 3; i8; --i8 )
              v86 += 4;
            v88 = v111;
            for ( i9 = 3; i9; --i9 )
              v88 += 4;
            v90 = v66;
            v91 = 3;
            v92 = nn[8];
            while ( v91 )
            {
              v90 += 4;
              --v91;
            }
            if ( *(_DWORD *)(v92 + 12) == _grpdeskRitInput )
            {
              if ( (unsigned __int8)CheckAccess(*(_DWORD *)(*(_DWORD *)(v92 + 8) + 232) + 496, &v131)
                || (v93 = *(_DWORD *)(nn[8] + 8), *(int *)(*(_DWORD *)(v93 + 232) + 8) < 0) )
              {
                if ( *(_DWORD *)(*(_DWORD *)(nn[8] + 8) + 232) != v126 && ((nn[13] & 8) == 0 || v97) )
                {
                  v94 = AllocateHidData(v106, 0, 24, 1, nn[8]);
                  v130 = (unsigned int *)v94;
                  if ( !v94 )
                    return v5;
                  qmemcpy((void *)(v94 + 32), a5, 0x18u);
                  InputTraceLogging::Mouse::DeliverRawInput(a2, v96);
                  v95 = PostInputMessage(
                          *(_DWORD *)(*(_DWORD *)(v128 + 8) + 236),
                          v128,
                          (struct tagQMSG *)0xFF,
                          (struct tagWND *)1,
                          *v130,
                          a3,
                          0,
                          0,
                          a5[5],
                          0,
                          0,
                          0,
                          0,
                          0,
                          0) == 0
                      ? v130
                      : 0;
                  if ( v95 )
                    FreeHidData(v95);
                  nn = v101;
                }
              }
              else
              {
                EtwTraceUIPIInputError(v93, 0, v105, v131, v132, 5);
              }
            }
          }
        }
      }
      nn = (int *)*nn;
    }
  }
  return 1;
}
