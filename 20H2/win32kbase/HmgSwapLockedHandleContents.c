/*
 * XREFs of HmgSwapLockedHandleContents @ 0x1C001B6E0
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C001AC00 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ?ShareCount@HANDLELOCK@@QEAAKXZ @ 0x1C0037510 (-ShareCount@HANDLELOCK@@QEAAKXZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C00445F0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0044950 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0045800 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgSwapLockedHandleContents(
        unsigned int a1,
        unsigned __int16 a2,
        unsigned int a3,
        unsigned __int16 a4,
        char a5)
{
  unsigned int v5; // esi
  unsigned int v9; // r12d
  unsigned int v10; // r15d
  int v11; // ebx
  GdiHandleManager *v12; // r14
  unsigned int v13; // eax
  __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  int v16; // r13d
  unsigned int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // eax
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rbx
  unsigned int v25; // eax
  unsigned int v26; // r8d
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r9
  GdiHandleManager *v30; // rbx
  unsigned int v31; // eax
  __int64 v32; // r9
  unsigned int v33; // edx
  unsigned int v34; // r8d
  __int64 v35; // rcx
  __int64 v36; // r10
  __int64 v37; // rdx
  __int64 v38; // rcx
  GdiHandleManager *v39; // r13
  unsigned int v40; // eax
  __int64 v41; // r14
  unsigned __int64 v42; // rdx
  int v43; // r12d
  unsigned int v44; // edi
  __int64 v45; // rcx
  __int64 v46; // r8
  __int128 *v47; // rbx
  unsigned int v48; // eax
  unsigned __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int128 *v52; // r9
  __int64 v53; // rax
  __int128 v54; // xmm3
  __int64 v55; // xmm2_8
  __int64 v56; // rcx
  __int16 v57; // r8
  __int16 v58; // dx
  __int64 v60; // [rsp+30h] [rbp-30h] BYREF
  int v61; // [rsp+38h] [rbp-28h]
  __int64 v62; // [rsp+48h] [rbp-18h] BYREF
  int v63; // [rsp+50h] [rbp-10h]
  __int64 v64; // [rsp+90h] [rbp+30h]

  v5 = 0;
  v62 = 0LL;
  v63 = 0;
  v9 = (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v62, v9, 0, 0, 0);
  if ( v63 )
  {
    v60 = 0LL;
    v61 = 0;
    v10 = (unsigned __int16)a3 | (a3 >> 8) & 0xFF0000;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v60, v10, 0, 0, 0);
    v11 = v61;
    if ( v61 )
    {
      if ( HANDLELOCK::ShareCount((HANDLELOCK *)&v62) == a2
        && *(_BYTE *)(v62 + 14) == a5
        && HANDLELOCK::ShareCount((HANDLELOCK *)&v60) == a4
        && *(_BYTE *)(v60 + 14) == a5 )
      {
        v12 = gpHandleManager;
        v13 = GdiHandleManager::DecodeIndex(gpHandleManager, v9);
        v14 = *((_QWORD *)v12 + 2);
        v5 = 1;
        v15 = v13;
        v16 = *(unsigned __int16 *)(v14 + 2);
        v17 = *(_DWORD *)(v14 + 2056);
        if ( v13 >= v17 + ((v16 + 0xFFFF) << 16) )
          goto LABEL_60;
        if ( v13 >= v17 )
          v18 = ((v13 - v17) >> 16) + 1;
        else
          v18 = 0LL;
        v19 = *(_QWORD *)(v14 + 8 * v18 + 8);
        if ( (_DWORD)v18 )
          v15 = ((1 - (_DWORD)v18) << 16) - v17 + v13;
        if ( (unsigned int)v15 >= *(_DWORD *)(v19 + 20) )
LABEL_60:
          v64 = 0LL;
        else
          v64 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * (v15 >> 8)) + 16LL * (unsigned __int8)v15 + 8);
        v20 = GdiHandleManager::DecodeIndex(v12, v10);
        v21 = v20;
        if ( v20 >= v17 + ((v16 + 0xFFFF) << 16) )
          goto LABEL_62;
        if ( v20 >= v17 )
          v22 = ((v20 - v17) >> 16) + 1;
        else
          v22 = 0LL;
        v23 = *(_QWORD *)(v14 + 8 * v22 + 8);
        if ( (_DWORD)v22 )
          v21 = ((1 - (_DWORD)v22) << 16) - v17 + v20;
        if ( (unsigned int)v21 >= *(_DWORD *)(v23 + 20) )
LABEL_62:
          v24 = 0LL;
        else
          v24 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v23 + 24) + 8 * (v21 >> 8)) + 16LL * (unsigned __int8)v21 + 8);
        v25 = GdiHandleManager::DecodeIndex(v12, v9);
        v26 = *(_DWORD *)(v14 + 2056);
        v27 = v25;
        if ( v25 < v26 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16) )
        {
          if ( v25 >= v26 )
            v28 = ((v25 - v26) >> 16) + 1;
          else
            v28 = 0LL;
          v29 = *(_QWORD *)(v14 + 8 * v28 + 8);
          if ( (_DWORD)v28 )
            v27 = ((1 - (_DWORD)v28) << 16) - v26 + v25;
          if ( (unsigned int)v27 < *(_DWORD *)(v29 + 20) )
            *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v29 + 24) + 8 * (v27 >> 8)) + 16LL * (unsigned __int8)v27 + 8) = v24;
        }
        v30 = gpHandleManager;
        v31 = GdiHandleManager::DecodeIndex(gpHandleManager, v10);
        v32 = *((_QWORD *)v30 + 2);
        v33 = v31;
        v34 = *(_DWORD *)(v32 + 2056);
        if ( v31 < v34 + ((*(unsigned __int16 *)(v32 + 2) + 0xFFFF) << 16) )
        {
          if ( v31 >= v34 )
            v35 = ((v31 - v34) >> 16) + 1;
          else
            v35 = 0LL;
          v36 = *(_QWORD *)(v32 + 8 * v35 + 8);
          if ( (_DWORD)v35 )
            v33 = ((1 - (_DWORD)v35) << 16) - v34 + v31;
          if ( v33 < *(_DWORD *)(v36 + 20) )
            *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v36 + 24) + 8 * ((unsigned __int64)v33 >> 8))
                      + 16LL * (unsigned __int8)v33
                      + 8) = v64;
        }
        v37 = v60;
        v38 = *(_QWORD *)(v62 + 16);
        *(_QWORD *)(v62 + 16) = *(_QWORD *)(v60 + 16);
        *(_QWORD *)(v37 + 16) = v38;
        v39 = gpHandleManager;
        v40 = GdiHandleManager::DecodeIndex(gpHandleManager, v9);
        v41 = *((_QWORD *)v39 + 2);
        v42 = v40;
        v43 = *(unsigned __int16 *)(v41 + 2);
        v44 = *(_DWORD *)(v41 + 2056);
        if ( v40 >= v44 + ((v43 + 0xFFFF) << 16) )
          goto LABEL_66;
        if ( v40 >= v44 )
          v45 = ((v40 - v44) >> 16) + 1;
        else
          v45 = 0LL;
        v46 = *(_QWORD *)(v41 + 8 * v45 + 8);
        if ( (_DWORD)v45 )
          v42 = ((1 - (_DWORD)v45) << 16) - v44 + v40;
        if ( (unsigned int)v42 >= *(_DWORD *)(v46 + 20) )
LABEL_66:
          v47 = 0LL;
        else
          v47 = *(__int128 **)(*(_QWORD *)(**(_QWORD **)(v46 + 24) + 8 * (v42 >> 8)) + 16LL * (unsigned __int8)v42 + 8);
        v48 = GdiHandleManager::DecodeIndex(v39, v10);
        v49 = v48;
        if ( v48 >= v44 + ((v43 + 0xFFFF) << 16) )
          goto LABEL_68;
        if ( v48 >= v44 )
          v50 = ((v48 - v44) >> 16) + 1;
        else
          v50 = 0LL;
        v51 = *(_QWORD *)(v41 + 8 * v50 + 8);
        if ( (_DWORD)v50 )
          v49 = ((1 - (_DWORD)v50) << 16) - v44 + v48;
        if ( (unsigned int)v49 >= *(_DWORD *)(v51 + 20) )
LABEL_68:
          v52 = 0LL;
        else
          v52 = *(__int128 **)(*(_QWORD *)(**(_QWORD **)(v51 + 24) + 8 * (v49 >> 8)) + 16LL * (unsigned __int8)v49 + 8);
        v53 = v62;
        v54 = *v47;
        v55 = *((_QWORD *)v47 + 2);
        *v47 = *v52;
        *((_QWORD *)v47 + 2) = *((_QWORD *)v52 + 2);
        *v52 = v54;
        *((_QWORD *)v52 + 2) = v55;
        if ( *(_BYTE *)(v53 + 14) == 5 && *(_BYTE *)(v60 + 14) == 5 )
        {
          v56 = *((_QWORD *)v47 + 85);
          *((_QWORD *)v47 + 85) = *((_QWORD *)v52 + 85);
          *((_QWORD *)v52 + 85) = v56;
        }
        v57 = *((_WORD *)v52 + 7);
        v58 = *((_WORD *)v47 + 7);
        *((_WORD *)v47 + 7) = v58 & 0x4000 | v57 & 0x8000;
        *((_WORD *)v52 + 7) = v57 & 0x4000 | v58 & 0x8000;
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v60);
      v11 = v61;
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v62);
    if ( v11 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v60);
    if ( v63 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v62);
  }
  return v5;
}
