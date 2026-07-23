/*
 * XREFs of CmpWalkOneLevel @ 0x1406E5B20
 * Callers:
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 *     CmpDoBuildVirtualStack @ 0x1408700FC (CmpDoBuildVirtualStack.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     NLS_UPCASE @ 0x1402AB420 (NLS_UPCASE.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1405DF144 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpDeleteHive @ 0x1405E0094 (CmpDeleteHive.c)
 *     CmpFreeKeyControlBlock @ 0x1405E0C60 (CmpFreeKeyControlBlock.c)
 *     CmListGetNextElement @ 0x1405E17C4 (CmListGetNextElement.c)
 *     CmpRecordParseFailure @ 0x1405E99A0 (CmpRecordParseFailure.c)
 *     CmpLockHashEntryShared @ 0x140619FD0 (CmpLockHashEntryShared.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x14065B100 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1406643E8 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmEqualTrans @ 0x14066440C (CmEqualTrans.c)
 *     CmpUnlockHashEntry @ 0x1406DBD98 (CmpUnlockHashEntry.c)
 *     CmpFindSubKeyInRoot @ 0x1406DCD6C (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1406DD740 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpDoCompareKeyName @ 0x1406DDD60 (CmpDoCompareKeyName.c)
 *     CmpGetKcbAtLayerHeight @ 0x1406DECB0 (CmpGetKcbAtLayerHeight.c)
 *     CmpCreateKeyControlBlock @ 0x1406DEDB0 (CmpCreateKeyControlBlock.c)
 *     CmpFindKcbInHashEntryByName @ 0x1406DF2A4 (CmpFindKcbInHashEntryByName.c)
 *     CmpPopulateKcbStack @ 0x1407128D0 (CmpPopulateKcbStack.c)
 *     CmpDereferenceKeyControlBlock @ 0x1407129F0 (CmpDereferenceKeyControlBlock.c)
 */

__int64 __fastcall CmpWalkOneLevel(
        __int64 a1,
        __int64 a2,
        ULONG_PTR *a3,
        __int64 a4,
        bool *a5,
        __m128i *a6,
        int a7,
        ULONG_PTR a8,
        __int64 a9,
        char a10,
        __int64 a11)
{
  __int64 v11; // r15
  __m128i *v12; // r12
  __int16 v13; // di
  __int64 KcbAtLayerHeight; // rsi
  _QWORD *v15; // r14
  ULONG_PTR KcbInHashEntryByName; // rax
  ULONG_PTR v17; // r13
  __int16 v18; // r14
  __int64 v19; // r13
  __int64 v20; // rsi
  ULONG_PTR v21; // rsi
  ULONG_PTR v22; // rdi
  signed __int32 v23; // eax
  signed __int32 v24; // ett
  __int16 v25; // cx
  __int16 i; // di
  __int64 v27; // rsi
  __int64 v28; // rdx
  int v29; // edx
  int SubKeyInLeafWithStatus; // esi
  ULONG_PTR v31; // r13
  __int16 v32; // r14
  ULONG_PTR v33; // rdi
  char *NextElement; // rax
  __int64 v35; // r9
  int v36; // ecx
  __int64 v37; // rdx
  _KPROCESS *Process; // rcx
  __int16 v39; // si
  char v40; // r8
  __int64 v41; // r13
  __int64 v42; // rdx
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r14
  __int64 v47; // rax
  unsigned int v48; // r8d
  ULONG_PTR v49; // rcx
  __int64 v50; // rsi
  __int64 v51; // r13
  __int64 v52; // rax
  _WORD *v53; // r15
  const UNICODE_STRING *v54; // rcx
  unsigned __int16 v55; // r11
  int v56; // r14d
  __int16 v57; // ax
  unsigned __int16 *v58; // r9
  __int64 v59; // r10
  unsigned __int16 v60; // ax
  unsigned __int16 v61; // si
  int v62; // eax
  unsigned int v63; // eax
  int v64; // eax
  ULONG_PTR v65; // rcx
  __int16 v66; // ax
  __int16 v67; // ax
  ULONG_PTR v68; // rax
  __int64 v69; // rax
  int v70; // r15d
  __int16 v71; // r12
  __int64 v72; // rdi
  __int64 v73; // rbx
  __int64 v74; // rbx
  ULONG_PTR v75; // rcx
  __int64 v77; // [rsp+30h] [rbp-91h]
  __int64 v78; // [rsp+38h] [rbp-89h]
  __int16 v79; // [rsp+50h] [rbp-71h]
  __int16 v80; // [rsp+52h] [rbp-6Fh]
  __int16 v81; // [rsp+54h] [rbp-6Dh]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-69h]
  unsigned int v83; // [rsp+60h] [rbp-61h] BYREF
  _DWORD v84[2]; // [rsp+68h] [rbp-59h] BYREF
  __int64 v85; // [rsp+70h] [rbp-51h] BYREF
  int v86; // [rsp+78h] [rbp-49h]
  int v87; // [rsp+7Ch] [rbp-45h]
  ULONG_PTR v88; // [rsp+80h] [rbp-41h] BYREF
  int v89; // [rsp+88h] [rbp-39h] BYREF
  _QWORD *v90; // [rsp+90h] [rbp-31h] BYREF
  __int64 v91; // [rsp+98h] [rbp-29h]
  __int64 v92; // [rsp+A0h] [rbp-21h]
  __m128i v93; // [rsp+A8h] [rbp-19h]

  v11 = a2;
  v12 = a6;
  v13 = *(_WORD *)(a1 + 66) - 1;
  v79 = -1;
  v88 = 0LL;
  v85 = 0xFFFFFFFFLL;
  BugCheckParameter2 = 0LL;
  if ( v13 < 0 )
  {
LABEL_4:
    v18 = 0;
    *(_WORD *)(a4 + 2) = -1;
  }
  else
  {
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v11, v13);
      CmpLockHashEntryShared(*(_QWORD *)(KcbAtLayerHeight + 32), (unsigned int)a8);
      v15 = *(_QWORD **)(KcbAtLayerHeight + 32);
      KcbInHashEntryByName = CmpFindKcbInHashEntryByName((__int64)v15, a8, KcbAtLayerHeight, (__int64)a6);
      BugCheckParameter2 = KcbInHashEntryByName;
      v17 = KcbInHashEntryByName;
      if ( KcbInHashEntryByName )
        break;
      CmpUnlockHashEntry(v15, a8);
      if ( --v13 < 0 )
        goto LABEL_4;
    }
    CmpReferenceKeyControlBlockLockNotHeld(KcbInHashEntryByName);
    CmpUnlockHashEntry(*(_QWORD **)(KcbAtLayerHeight + 32), a8);
    CmpPopulateKcbStack(a4, v17);
    v18 = *(_WORD *)(v17 + 66) + 1;
  }
  v19 = a1;
  v81 = v18;
  if ( v18 <= *(__int16 *)(a1 + 66) )
  {
    do
    {
      if ( v18 < 2 )
        v20 = *(_QWORD *)(a2 + 8LL * v18 + 8);
      else
        v20 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * v18 - 16);
      v21 = *(_QWORD *)(v20 + 32);
      v22 = *(_QWORD *)(v21 + 1640)
          + 24
          * (((101027 * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) ^ ((unsigned __int64)(101027
                                                                                          * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) >> 9)) & (unsigned int)(*(_DWORD *)(v21 + 1648) - 1));
      ExAcquirePushLockExclusiveEx(v22, 0LL);
      *(_QWORD *)(v22 + 8) = KeGetCurrentThread();
      _m_prefetchw((const void *)(v21 + 4272));
      v23 = *(_DWORD *)(v21 + 4272);
      if ( !v23 )
LABEL_146:
        KeBugCheckEx(0x51u, 0x17uLL, v21, 0xCuLL, (unsigned int)a8);
      while ( 1 )
      {
        v24 = v23;
        v23 = _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 4272), v23 + 1, v23);
        if ( v24 == v23 )
          break;
        if ( !v23 )
          goto LABEL_146;
      }
      v79 = v18++;
    }
    while ( v18 <= *(__int16 *)(a1 + 66) );
    v11 = a2;
    v19 = a1;
  }
  v25 = *(_WORD *)(v11 + 2);
  for ( i = 0; i <= v25; ++i )
  {
    if ( i < 2 )
      v27 = *(_QWORD *)(v11 + 8LL * i + 8);
    else
      v27 = *(_QWORD *)(*(_QWORD *)(v11 + 24) + 8LL * i - 16);
    ExAcquirePushLockSharedEx(v27 + 48, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v27 + 56));
    v25 = *(_WORD *)(v11 + 2);
  }
  v90 = 0LL;
  if ( v25 >= 0 )
  {
    while ( 1 )
    {
      if ( v25 < 2 )
        v28 = *(_QWORD *)(v11 + 8LL * v25 + 8);
      else
        v28 = *(_QWORD *)(*(_QWORD *)(v11 + 24) + 8LL * v25 - 16);
      if ( *(_WORD *)(v28 + 66) && *(_BYTE *)(v28 + 65) == 1 )
        goto LABEL_29;
      if ( *(_DWORD *)(v28 + 40) != -1 )
        break;
      if ( --v25 < 0 )
        goto LABEL_29;
    }
    if ( !a9 )
      goto LABEL_43;
    NextElement = CmListGetNextElement((_QWORD **)(*(_QWORD *)(v11 + 8) + 208LL), &v90, 32);
    if ( !NextElement )
      goto LABEL_43;
    while ( 1 )
    {
      v36 = *((_DWORD *)NextElement + 17);
      if ( v36 == 2 || v36 == 11 )
        break;
      NextElement = CmListGetNextElement((_QWORD **)(v35 + 208), &v90, 32);
      if ( !NextElement )
        goto LABEL_43;
    }
    if ( !CmEqualTrans(*((_QWORD *)NextElement + 7), a9) )
    {
LABEL_43:
      v37 = *(_QWORD *)(v19 + 240);
      if ( v37 && !CmEqualTrans(a9, v37) )
      {
        v29 = 328448;
        goto LABEL_30;
      }
      if ( (*(_DWORD *)(v19 + 184) & 0x20000) != 0 )
      {
        v29 = 328704;
        goto LABEL_30;
      }
      if ( (*(_DWORD *)(a11 + 160) & 1) == 0 )
      {
        Process = (_KPROCESS *)*((_QWORD *)&CmpRegistryProcess + 1);
        if ( !*((_QWORD *)&CmpRegistryProcess + 1) )
          Process = KeGetCurrentThread()->ApcState.Process;
        KiStackAttachProcess(Process, 0, a11 + 168);
        *(_DWORD *)(a11 + 160) |= 1u;
      }
      if ( BugCheckParameter2 )
      {
        v39 = *(_WORD *)(BugCheckParameter2 + 66) + 1;
        v80 = v39;
      }
      else
      {
        v39 = 0;
        v80 = 0;
      }
      v40 = a10;
      if ( v39 > *(__int16 *)(v19 + 66) )
      {
LABEL_119:
        v31 = 0LL;
        SubKeyInLeafWithStatus = 0;
        v67 = v79 - 1;
        if ( !v40 )
          v67 = v79;
        v79 = v67;
        *a5 = v40 != 0;
        v68 = BugCheckParameter2;
        BugCheckParameter2 = 0LL;
        *a3 = v68;
        goto LABEL_33;
      }
LABEL_56:
      if ( v39 < 2 )
        v41 = *(_QWORD *)(v11 + 8LL * v39 + 8);
      else
        v41 = *(_QWORD *)(*(_QWORD *)(v11 + 24) + 8LL * v39 - 16);
      v42 = *(unsigned int *)(v41 + 40);
      v92 = v41;
      if ( (_DWORD)v42 == -1 )
      {
        v43 = -1;
LABEL_108:
        if ( *(_WORD *)(a1 + 66) || v40 )
          goto LABEL_110;
        SubKeyInLeafWithStatus = -1073741772;
        v69 = *(unsigned __int8 *)(a11 + 258);
        if ( (unsigned __int8)v69 < 4u )
        {
          *(_DWORD *)(a11 + 8 * v69 + 260) = -1073741772;
          *(_DWORD *)(a11 + 8LL * (unsigned __int8)(*(_BYTE *)(a11 + 258))++ + 264) = 329216;
        }
        goto LABEL_32;
      }
      v44 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)(v41 + 32) + 8LL))(
              *(_QWORD *)(v41 + 32),
              v42,
              &v85);
      v45 = *(_QWORD *)(v41 + 32);
      v46 = v44;
      v91 = v44;
      if ( (*(_DWORD *)(v45 + 160) & 0x8001) == 0 && (*(_BYTE *)(v44 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
      {
        (*(void (__fastcall **)(__int64, __int64 *))(v45 + 16))(v45, &v85);
        ExAcquirePushLockSharedEx(*(_QWORD *)(v41 + 32) + 72LL, 0LL);
        v47 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v41 + 32) + 8LL))(
                *(_QWORD *)(v41 + 32),
                *(unsigned int *)(v41 + 40),
                &v85);
        v48 = *(_DWORD *)(v41 + 40);
        v49 = *(_QWORD *)(v41 + 32);
        v46 = v47;
        v91 = v47;
        CmpUpdateKeyNodeAccessBits(v49, v47, v48);
        v50 = *(_QWORD *)(v41 + 32);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v50 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v50 + 72));
        KeAbPostRelease(v50 + 72);
      }
      v51 = *(_QWORD *)(v41 + 32);
      v84[1] = 0;
      v84[0] = -1;
      v87 = -1;
      SubKeyInLeafWithStatus = -1073741772;
      v52 = 0LL;
      v86 = 0;
      v83 = 0;
      v89 = 0;
      if ( !*(_DWORD *)(v51 + 208) )
        goto LABEL_103;
      while ( 1 )
      {
        if ( *(_DWORD *)(v46 + 4 * v52 + 20) )
        {
          v53 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v51 + 8))(
                           v51,
                           *(unsigned int *)(v46 + 4 * v52 + 28),
                           v84);
          if ( !v53 )
            goto LABEL_101;
          if ( *v53 == 26994 )
          {
            if ( (int)CmpFindSubKeyInRoot(v51, (__int64)v53, (__int64)v12, 0, &v83) < 0 )
            {
              SubKeyInLeafWithStatus = -1073741670;
              goto LABEL_100;
            }
            (*(void (__fastcall **)(__int64, _DWORD *))(v51 + 16))(v51, v84);
            if ( v83 == -1 )
              goto LABEL_95;
            v53 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v51 + 8))(v51, v83, v84);
            if ( !v53 )
            {
LABEL_101:
              SubKeyInLeafWithStatus = -1073741670;
LABEL_102:
              v11 = a2;
LABEL_103:
              v41 = v92;
              (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v92 + 32) + 16LL))(*(_QWORD *)(v92 + 32), &v85);
              if ( SubKeyInLeafWithStatus == -1073741772 )
              {
                v43 = -1;
                goto LABEL_107;
              }
              if ( SubKeyInLeafWithStatus < 0 )
              {
                v29 = 328960;
                goto LABEL_31;
              }
              v43 = v87;
              if ( v87 == -1 )
              {
LABEL_107:
                v40 = a10;
                goto LABEL_108;
              }
LABEL_110:
              LODWORD(v78) = a8;
              LODWORD(v77) = a7;
              v64 = CmpCreateKeyControlBlock(
                      *(_QWORD *)(v41 + 32),
                      v43,
                      v41,
                      BugCheckParameter2,
                      0,
                      (unsigned __int16 *)v12,
                      v77,
                      v78,
                      &v88);
              SubKeyInLeafWithStatus = v64;
              if ( v64 < 0 )
              {
                CmpRecordParseFailure(a11, 329472, v64);
                v31 = BugCheckParameter2;
                goto LABEL_33;
              }
              if ( BugCheckParameter2 )
                CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)BugCheckParameter2);
              v65 = v88;
              BugCheckParameter2 = v88;
              v88 = 0LL;
              ++*(_WORD *)(a4 + 2);
              if ( v80 < 2 )
                *(_QWORD *)(a4 + 8LL * v80 + 8) = v65;
              else
                *(_QWORD *)(*(_QWORD *)(a4 + 24) + 8LL * v80 - 16) = v65;
              v66 = *(_WORD *)(a1 + 66);
              if ( v80 != v66 )
              {
                CmpUnlockHashEntry(*(_QWORD **)(v41 + 32), a8);
                ++v81;
                v66 = *(_WORD *)(a1 + 66);
              }
              v40 = a10;
              v39 = v80 + 1;
              v80 = v39;
              if ( v39 > v66 )
                goto LABEL_119;
              goto LABEL_56;
            }
          }
          if ( *v53 == 26732 )
          {
            v54 = (const UNICODE_STRING *)a6;
            v55 = 0;
            v56 = 0;
            v57 = _mm_cvtsi128_si32(*a6);
            v93 = *a6;
            if ( v57 )
            {
              v58 = (unsigned __int16 *)v93.m128i_i64[1];
              v59 = (unsigned __int16)(((unsigned __int16)(v57 - 1) >> 1) + 1);
              do
              {
                v60 = *v58;
                if ( *v58 >= 0x61u )
                {
                  if ( v60 <= 0x7Au )
                    v60 -= 32;
                  else
                    v60 = NLS_UPCASE(v60);
                }
                ++v58;
                v56 = v60 + 37 * v56;
                --v59;
              }
              while ( v59 );
              v54 = (const UNICODE_STRING *)a6;
              v93.m128i_i64[1] = (__int64)v58;
            }
            v61 = v55;
            v83 = -1;
            if ( v55 < v53[1] )
            {
              while ( 1 )
              {
                if ( v56 == *(_DWORD *)&v53[4 * v61 + 4] )
                {
                  v62 = CmpDoCompareKeyName(v51, v54, 0LL, *(_DWORD *)&v53[4 * v61 + 2]);
                  if ( v62 == 2 )
                  {
                    v12 = a6;
                    SubKeyInLeafWithStatus = -1073741670;
                    goto LABEL_100;
                  }
                  if ( !v62 )
                  {
                    v63 = *(_DWORD *)&v53[4 * v61 + 2];
                    v12 = a6;
                    SubKeyInLeafWithStatus = 0;
                    v83 = v63;
                    goto LABEL_93;
                  }
                }
                if ( ++v61 >= v53[1] )
                  break;
                v54 = (const UNICODE_STRING *)a6;
              }
            }
            v12 = a6;
            SubKeyInLeafWithStatus = -1073741772;
          }
          else
          {
            SubKeyInLeafWithStatus = CmpFindSubKeyInLeafWithStatus(
                                       v51,
                                       (__int64)v53,
                                       (unsigned __int16 *)v12,
                                       0LL,
                                       &v83,
                                       &v89);
            if ( (int)(SubKeyInLeafWithStatus + 0x80000000) >= 0 && SubKeyInLeafWithStatus != -1073741772 )
              goto LABEL_100;
            v63 = v83;
LABEL_93:
            if ( v63 != -1 )
            {
              v87 = v63;
              SubKeyInLeafWithStatus = 0;
LABEL_100:
              (*(void (__fastcall **)(__int64, _DWORD *))(v51 + 16))(v51, v84);
              goto LABEL_102;
            }
          }
          (*(void (__fastcall **)(__int64, _DWORD *))(v51 + 16))(v51, v84);
          v46 = v91;
        }
LABEL_95:
        v52 = (unsigned int)(v86 + 1);
        v86 = v52;
        if ( (unsigned int)v52 >= *(_DWORD *)(v51 + 208) )
          goto LABEL_102;
      }
    }
  }
LABEL_29:
  v29 = 328192;
LABEL_30:
  SubKeyInLeafWithStatus = -1073741772;
LABEL_31:
  CmpRecordParseFailure(a11, v29, SubKeyInLeafWithStatus);
LABEL_32:
  v31 = BugCheckParameter2;
LABEL_33:
  v32 = 0;
  if ( *(__int16 *)(v11 + 2) >= 0 )
  {
    do
    {
      if ( v32 < 2 )
        v33 = *(_QWORD *)(v11 + 8LL * v32 + 8);
      else
        v33 = *(_QWORD *)(*(_QWORD *)(v11 + 24) + 8LL * v32 - 16);
      v70 = *(_DWORD *)(v33 + 8) & 0x80000;
      if ( *(struct _KTHREAD **)(v33 + 56) == KeGetCurrentThread() )
        *(_QWORD *)(v33 + 56) = 0LL;
      else
        _InterlockedDecrement((volatile signed __int32 *)(v33 + 56));
      ExReleasePushLockEx(v33 + 48, 0LL);
      if ( v70 && (*(_DWORD *)(v33 + 8) & 0x80000) != 0 )
        CmpFreeKeyControlBlock(v33);
      v11 = a2;
      ++v32;
    }
    while ( v32 <= *(__int16 *)(a2 + 2) );
  }
  v71 = v81;
  if ( v81 <= v79 )
  {
    v72 = 8LL * v81 - 16;
    do
    {
      if ( v71 < 2 )
        v73 = *(_QWORD *)(v11 + v72 + 24);
      else
        v73 = *(_QWORD *)(v72 + *(_QWORD *)(v11 + 24));
      v74 = *(_QWORD *)(v73 + 32);
      v75 = *(_QWORD *)(v74 + 1640)
          + 24
          * (((101027 * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) ^ ((unsigned __int64)(101027
                                                                                          * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) >> 9)) & (unsigned int)(*(_DWORD *)(v74 + 1648) - 1));
      *(_QWORD *)(v75 + 8) = 0LL;
      ExReleasePushLockEx(v75, 0LL);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v74 + 4272), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((_QWORD *)v74);
      ++v71;
      v72 += 8LL;
    }
    while ( v71 <= v79 );
    v31 = BugCheckParameter2;
  }
  if ( v31 )
    CmpDereferenceKeyControlBlock(v31);
  return (unsigned int)SubKeyInLeafWithStatus;
}
