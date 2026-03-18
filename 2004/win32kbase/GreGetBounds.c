/*
 * XREFs of GreGetBounds @ 0x1C00882C0
 * Callers:
 *     CreateCacheDC @ 0x1C00141E0 (CreateCacheDC.c)
 *     GetMonitorDC @ 0x1C0093FA0 (GetMonitorDC.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C008A000 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C008A360 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C008B040 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C008B200 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C008B290 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C008D624 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     bDeleteDCInternalEx @ 0x1C0093960 (bDeleteDCInternalEx.c)
 */

__int64 __fastcall GreGetBounds(unsigned int a1, _DWORD *a2, char a3)
{
  unsigned __int16 *v4; // rdi
  __int64 v5; // rsi
  _DWORD *v7; // r15
  GdiHandleManager *v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // rbx
  unsigned int v11; // ebp
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // r12
  int v16; // ebp
  char v17; // al
  unsigned int v18; // ebx
  __int64 v19; // rdx
  unsigned int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // r9
  unsigned int v23; // ebx
  GdiHandleManager *v24; // rdi
  __int64 v25; // rdx
  unsigned int v26; // r8d
  __int64 v27; // rcx
  __int64 v28; // r9
  _DWORD *v29; // rdx
  unsigned int v30; // ebx
  __int64 v31; // rdx
  unsigned int v32; // r8d
  __int64 v33; // rcx
  __int64 v34; // r10
  __m128i *v35; // rax
  __m128i v36; // xmm0
  unsigned __int128 v37; // kr00_16
  __int64 v38; // rcx
  __int32 v39; // r8d
  int v40; // r9d
  int v41; // ecx
  int v42; // edx
  unsigned int v43; // r15d
  HDC v44; // r14
  int v45; // eax
  unsigned int v46; // edx
  _DWORD *v47; // rbx
  char v48; // al
  unsigned int v49; // ebx
  GdiHandleManager *v50; // rdi
  __int64 v51; // rdx
  unsigned int v52; // r8d
  __int64 v53; // rcx
  __int64 v54; // r9
  _DWORD *v55; // rdx
  unsigned int v56; // ebx
  __int64 v57; // rdx
  unsigned int v58; // r8d
  __int64 v59; // rcx
  __int64 v60; // r10
  unsigned __int64 v62; // xmm0_8
  int v63; // eax
  int v64; // eax
  unsigned int v65; // eax
  GdiHandleManager *v66; // rbx
  unsigned int v67; // eax
  __int64 v68; // r9
  unsigned __int64 v69; // rdx
  unsigned int v70; // r8d
  __int64 v71; // rcx
  __int64 v72; // r10
  __int64 v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __m128i v76; // [rsp+30h] [rbp-68h] BYREF
  __int64 v77; // [rsp+48h] [rbp-50h] BYREF
  int v78; // [rsp+50h] [rbp-48h]
  __int64 v80; // [rsp+B8h] [rbp+20h] BYREF

  v4 = 0LL;
  v80 = 0LL;
  v5 = 0LL;
  v7 = a2;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v80);
  IsThreadCrossSessionAttached();
  v8 = gpHandleManager;
  v76.m128i_i32[2] = 1;
  v9 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000);
  v10 = *((_QWORD *)v8 + 2);
  v11 = v9;
  v12 = *(_DWORD *)(v10 + 2056);
  if ( v9 >= v12 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16) )
    goto LABEL_129;
  v13 = ((v9 - v12) >> 16) + 1;
  if ( v9 < v12 )
    v13 = 0LL;
  v14 = *(_QWORD *)(v10 + 8 * v13 + 8);
  if ( (_DWORD)v13 )
    v11 = ((1 - (_DWORD)v13) << 16) - v12 + v9;
  if ( v11 < *(_DWORD *)(v14 + 20) )
  {
    v15 = *(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * ((unsigned __int64)v11 >> 8)) + 16LL * (unsigned __int8)v11;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v15, 0LL);
    if ( GdiHandleEntryTable::GetEntryObject((GdiHandleEntryTable *)v14, v11) )
    {
      *(_DWORD *)(*(_QWORD *)v14 + 24LL * v11 + 8) |= 1u;
      v4 = (unsigned __int16 *)(24LL * v11 + *(_QWORD *)v14);
    }
    else
    {
      ExReleasePushLockExclusiveEx(v15, 0LL);
      KeLeaveCriticalRegion();
    }
    v7 = a2;
  }
  v16 = 0;
  v76.m128i_i64[0] = (__int64)v4;
  if ( !v4 )
  {
LABEL_129:
    KeLeaveCriticalRegion();
    v16 = 0;
    goto LABEL_47;
  }
  _m_prefetchw(v4 + 4);
  v76.m128i_i32[3] = *((_DWORD *)v4 + 2);
  v17 = *((_BYTE *)v4 + 15);
  if ( (v17 & 0x20) != 0 )
    goto LABEL_116;
  if ( (v17 & 0x40) == 0 )
    goto LABEL_13;
  v66 = gpHandleManager;
  v67 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v4 & 0xFFFFFF);
  v68 = *((_QWORD *)v66 + 2);
  v69 = v67;
  v70 = *(_DWORD *)(v68 + 2056);
  if ( v67 >= v70 + ((*(unsigned __int16 *)(v68 + 2) + 0xFFFF) << 16) )
    goto LABEL_113;
  v71 = ((v67 - v70) >> 16) + 1;
  if ( v67 < v70 )
    v71 = 0LL;
  v72 = *(_QWORD *)(v68 + 8 * v71 + 8);
  if ( (_DWORD)v71 )
    v69 = ((1 - (_DWORD)v71) << 16) - v70 + v67;
  if ( (unsigned int)v69 >= *(_DWORD *)(v72 + 20) )
LABEL_113:
    v73 = 0LL;
  else
    v73 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v72 + 24) + 8 * (v69 >> 8)) + 16LL * (unsigned __int8)v69 + 8);
  if ( !*(_WORD *)(v73 + 12) || *(struct _KTHREAD **)(v73 + 16) != KeGetCurrentThread() )
  {
LABEL_116:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v76);
    if ( !v76.m128i_i32[2] )
      goto LABEL_47;
  }
  v4 = (unsigned __int16 *)v76.m128i_i64[0];
LABEL_13:
  if ( *((_BYTE *)v4 + 14) == 1 && v4[6] == HIWORD(a1) )
  {
    v18 = *(_DWORD *)v4 & 0xFFFFFF;
    if ( v18 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *v4,
                                    1)
             + 13) == HIWORD(v18) )
          v18 = (unsigned __int16)v18;
      }
      else
      {
        v18 = *v4;
      }
    }
    v19 = *((_QWORD *)gpHandleManager + 2);
    v20 = *(_DWORD *)(v19 + 2056);
    if ( v18 >= v20 + ((*(unsigned __int16 *)(v19 + 2) + 0xFFFF) << 16) )
      goto LABEL_121;
    v21 = ((v18 - v20) >> 16) + 1;
    if ( v18 < v20 )
      v21 = 0LL;
    v22 = *(_QWORD *)(v19 + 8 * v21 + 8);
    if ( (_DWORD)v21 )
      v18 += ((1 - (_DWORD)v21) << 16) - v20;
    if ( v18 >= *(_DWORD *)(v22 + 20) )
LABEL_121:
      v5 = 0LL;
    else
      v5 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v22 + 24) + 8 * ((unsigned __int64)v18 >> 8))
                     + 16LL * (unsigned __int8)v18
                     + 8);
    ++*(_DWORD *)(v5 + 8);
  }
  v23 = *(_DWORD *)v4 & 0xFFFFFF;
  if ( v23 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  *v4,
                                  1)
           + 13) == HIWORD(v23) )
        v23 = (unsigned __int16)v23;
    }
    else
    {
      v23 = *v4;
    }
  }
  v24 = gpHandleManager;
  v25 = *((_QWORD *)gpHandleManager + 2);
  v26 = *(_DWORD *)(v25 + 2056);
  if ( v23 >= v26 + ((*(unsigned __int16 *)(v25 + 2) + 0xFFFF) << 16) )
    goto LABEL_125;
  v27 = ((v23 - v26) >> 16) + 1;
  if ( v23 < v26 )
    v27 = 0LL;
  v28 = *(_QWORD *)(v25 + 8 * v27 + 8);
  if ( (_DWORD)v27 )
    v23 += ((1 - (_DWORD)v27) << 16) - v26;
  if ( v23 >= *(_DWORD *)(v28 + 20) )
LABEL_125:
    v29 = 0LL;
  else
    v29 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v28 + 24) + 8 * ((unsigned __int64)v23 >> 8))
                     + 16LL * (unsigned __int8)v23
                     + 8);
  v30 = (unsigned __int16)*v29 | (*v29 >> 8) & 0xFF0000;
  if ( v30 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)*v29,
                                  1)
           + 13) == HIWORD(v30) )
        v30 = (unsigned __int16)v30;
    }
    else
    {
      v30 = (unsigned __int16)*v29;
    }
    v16 = 0;
  }
  v31 = *((_QWORD *)v24 + 2);
  v32 = *(_DWORD *)(v31 + 2056);
  if ( v30 < v32 + ((*(unsigned __int16 *)(v31 + 2) + 0xFFFF) << 16) )
  {
    v33 = ((v30 - v32) >> 16) + 1;
    if ( v30 < v32 )
      v33 = 0LL;
    v34 = *(_QWORD *)(v31 + 8 * v33 + 8);
    if ( (_DWORD)v33 )
      v30 += ((1 - (_DWORD)v33) << 16) - v32;
    *(_DWORD *)(*(_QWORD *)v34 + 24LL * v30 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v34 + 24) + 8 * ((unsigned __int64)v30 >> 8)) + 16LL * (unsigned __int8)v30,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
LABEL_47:
  if ( !v5 )
  {
LABEL_92:
    v43 = 0;
    goto LABEL_64;
  }
  if ( (a3 & 1) != 0 )
  {
    v63 = 32;
    if ( (a3 & 4) != 0 )
      v63 = 64;
    *(_DWORD *)(v5 + 36) |= v63;
  }
  else if ( (a3 & 2) != 0 )
  {
    v64 = *(_DWORD *)(v5 + 36);
    if ( (a3 & 4) != 0 )
      v65 = v64 & 0xFFFFFFBF;
    else
      v65 = v64 & 0xFFFFFFDF;
    *(_DWORD *)(v5 + 36) = v65;
  }
  if ( (a3 & 4) == 0 )
  {
    v36 = *(__m128i *)(v5 + 1064);
    goto LABEL_53;
  }
  v35 = *(__m128i **)(v5 + 1168);
  if ( !v35
    || (a3 & 3) != 0
    || (v76 = v35[6],
        v62 = _mm_srli_si128(v76, 8).m128i_u64[0],
        v37 = __PAIR128__(v62, v76.m128i_u64[0]),
        v76.m128i_i32[0] == (_DWORD)v62)
    || v76.m128i_i32[1] == HIDWORD(v62) )
  {
    v36 = *(__m128i *)(v5 + 1080);
LABEL_53:
    v76 = v36;
    v37 = (unsigned __int128)v36;
  }
  if ( (_DWORD)v37 == DWORD2(v37)
    || (int)v37 >= SDWORD2(v37)
    || DWORD1(v37) == HIDWORD(v37)
    || SDWORD1(v37) >= SHIDWORD(v37) )
  {
    goto LABEL_92;
  }
  if ( v7 )
  {
    v38 = 1016LL;
    if ( (*(_DWORD *)(v5 + 40) & 1) != 0 )
      v38 = 1024LL;
    v39 = v76.m128i_i32[3];
    v40 = *(_DWORD *)(v38 + v5);
    v41 = *(_DWORD *)(v38 + v5 + 4);
    v42 = v41 + v76.m128i_i32[1];
    *v7 = v40 + v37;
    v7[1] = v42;
    v7[2] = DWORD2(v37) + v40;
    v7[3] = v41 + v39;
  }
  v43 = 1;
  if ( (a3 & 4) != 0 )
  {
    *(_DWORD *)(v5 + 1080) = 0x7FFFFFFF;
    *(_DWORD *)(v5 + 1084) = 0x7FFFFFFF;
    *(_DWORD *)(v5 + 1088) = 0x80000000;
    *(_DWORD *)(v5 + 1092) = 0x80000000;
  }
  else
  {
    *(_DWORD *)(v5 + 1064) = 0x7FFFFFFF;
    *(_DWORD *)(v5 + 1068) = 0x7FFFFFFF;
    *(_DWORD *)(v5 + 1072) = 0x80000000;
    *(_DWORD *)(v5 + 1076) = 0x80000000;
  }
LABEL_64:
  if ( !v5 )
    return v43;
  v44 = *(HDC *)v5;
  v45 = (unsigned __int16)*(_QWORD *)v5;
  v46 = ((unsigned int)*(_QWORD *)v5 >> 8) & 0xFF0000;
  v77 = 0LL;
  v78 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v77, v45 | v46, 0, 0, 1);
  if ( !v78 )
    return v43;
  v47 = (_DWORD *)v77;
  if ( (*(_BYTE *)(v77 + 15) & 8) != 0 )
    v16 = 1;
  v48 = *(_BYTE *)(v77 + 14);
  if ( v48 == 5 )
  {
    v74 = *(_QWORD *)(v5 + 680);
    v75 = 0LL;
LABEL_133:
    TrackObjectReferenceDecrement(v75, v74);
    goto LABEL_70;
  }
  if ( v48 == 16 )
  {
    v74 = *(_QWORD *)(v5 + 136);
    v75 = 2LL;
    goto LABEL_133;
  }
LABEL_70:
  --*(_DWORD *)(v5 + 8);
  v49 = *v47 & 0xFFFFFF;
  if ( v49 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v49,
                                  1)
           + 13) == HIWORD(v49) )
        v49 = (unsigned __int16)v49;
    }
    else
    {
      v49 = (unsigned __int16)v49;
    }
  }
  v50 = gpHandleManager;
  v51 = *((_QWORD *)gpHandleManager + 2);
  v52 = *(_DWORD *)(v51 + 2056);
  if ( v49 >= v52 + ((*(unsigned __int16 *)(v51 + 2) + 0xFFFF) << 16) )
    goto LABEL_137;
  v53 = ((v49 - v52) >> 16) + 1;
  if ( v49 < v52 )
    v53 = 0LL;
  v54 = *(_QWORD *)(v51 + 8 * v53 + 8);
  if ( (_DWORD)v53 )
    v49 += ((1 - (_DWORD)v53) << 16) - v52;
  if ( v49 >= *(_DWORD *)(v54 + 20) )
LABEL_137:
    v55 = 0LL;
  else
    v55 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v54 + 24) + 8 * ((unsigned __int64)v49 >> 8))
                     + 16LL * (unsigned __int8)v49
                     + 8);
  v56 = (unsigned __int16)*v55 | (*v55 >> 8) & 0xFF0000;
  if ( v56 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)*v55,
                                  1)
           + 13) == HIWORD(v56) )
        v56 = (unsigned __int16)v56;
    }
    else
    {
      v56 = (unsigned __int16)*v55;
    }
  }
  v57 = *((_QWORD *)v50 + 2);
  v58 = *(_DWORD *)(v57 + 2056);
  if ( v56 < v58 + ((*(unsigned __int16 *)(v57 + 2) + 0xFFFF) << 16) )
  {
    v59 = ((v56 - v58) >> 16) + 1;
    if ( v56 < v58 )
      v59 = 0LL;
    v60 = *(_QWORD *)(v57 + 8 * v59 + 8);
    if ( (_DWORD)v59 )
      v56 += ((1 - (_DWORD)v59) << 16) - v58;
    *(_DWORD *)(*(_QWORD *)v60 + 24LL * v56 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v60 + 24) + 8 * ((unsigned __int64)v56 >> 8)) + 16LL * (unsigned __int8)v56,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  if ( v16 )
    bDeleteDCInternalEx(v44);
  return v43;
}
