/*
 * XREFs of CmpWalkOneLevel @ 0x1405F63C0
 * Callers:
 *     CmpDoParseKey @ 0x1406F9170 (CmpDoParseKey.c)
 *     CmpDoBuildVirtualStack @ 0x14086FF9C (CmpDoBuildVirtualStack.c)
 * Callees:
 *     NLS_UPCASE @ 0x140206AF0 (NLS_UPCASE.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     CmpUnlockHashEntry @ 0x1405EC638 (CmpUnlockHashEntry.c)
 *     CmpFindSubKeyInRoot @ 0x1405ED60C (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1405EDFE0 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpDoCompareKeyName @ 0x1405EE600 (CmpDoCompareKeyName.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405EF550 (CmpGetKcbAtLayerHeight.c)
 *     CmpCreateKeyControlBlock @ 0x1405EF650 (CmpCreateKeyControlBlock.c)
 *     CmpFindKcbInHashEntryByName @ 0x1405EFB44 (CmpFindKcbInHashEntryByName.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1406662E0 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpRecordParseFailure @ 0x14068A510 (CmpRecordParseFailure.c)
 *     CmListGetNextElement @ 0x1406A3CF4 (CmListGetNextElement.c)
 *     CmpLockHashEntryShared @ 0x1406BACFC (CmpLockHashEntryShared.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1406BCD00 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpPopulateKcbStack @ 0x1406FB4F0 (CmpPopulateKcbStack.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406FB610 (CmpDereferenceKeyControlBlock.c)
 *     CmpFreeKeyControlBlock @ 0x140719B20 (CmpFreeKeyControlBlock.c)
 *     CmpDeleteHive @ 0x14071C6F4 (CmpDeleteHive.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14071D94C (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmEqualTrans @ 0x14071D970 (CmEqualTrans.c)
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
  void *v15; // r14
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
  __int64 v29; // rdx
  int SubKeyInLeafWithStatus; // esi
  ULONG_PTR v31; // r13
  __int16 v32; // r14
  ULONG_PTR v33; // rdi
  __int64 NextElement; // rax
  int v35; // ecx
  __int64 v36; // rdx
  _KPROCESS *Process; // rcx
  __int16 v38; // si
  char v39; // r8
  __int64 v40; // r13
  __int64 v41; // rdx
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r14
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // rcx
  __int64 v49; // rsi
  __int64 v50; // r13
  __int64 v51; // rax
  _WORD *v52; // r15
  const UNICODE_STRING *v53; // rcx
  unsigned __int16 v54; // r11
  int v55; // r14d
  __int16 v56; // ax
  unsigned __int16 *v57; // r9
  __int64 v58; // r10
  unsigned __int16 v59; // ax
  unsigned __int16 v60; // si
  int v61; // eax
  unsigned int v62; // eax
  int v63; // eax
  ULONG_PTR v64; // rcx
  __int16 v65; // ax
  __int16 v66; // ax
  ULONG_PTR v67; // rax
  __int64 v68; // rax
  int v69; // r15d
  __int16 v70; // r12
  __int64 v71; // rdi
  __int64 v72; // rbx
  __int64 v73; // rbx
  ULONG_PTR v74; // rcx
  __int64 v76; // [rsp+30h] [rbp-91h]
  __int64 v77; // [rsp+38h] [rbp-89h]
  __int16 v78; // [rsp+50h] [rbp-71h]
  __int16 v79; // [rsp+52h] [rbp-6Fh]
  __int16 v80; // [rsp+54h] [rbp-6Dh]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-69h]
  unsigned int v82; // [rsp+60h] [rbp-61h] BYREF
  _DWORD v83[2]; // [rsp+68h] [rbp-59h] BYREF
  __int64 v84; // [rsp+70h] [rbp-51h] BYREF
  int v85; // [rsp+78h] [rbp-49h]
  int v86; // [rsp+7Ch] [rbp-45h]
  ULONG_PTR v87; // [rsp+80h] [rbp-41h] BYREF
  int v88; // [rsp+88h] [rbp-39h] BYREF
  __int64 v89; // [rsp+90h] [rbp-31h] BYREF
  __int64 v90; // [rsp+98h] [rbp-29h]
  __int64 v91; // [rsp+A0h] [rbp-21h]
  __m128i v92; // [rsp+A8h] [rbp-19h]

  v11 = a2;
  v12 = a6;
  v13 = *(_WORD *)(a1 + 66) - 1;
  v78 = -1;
  v87 = 0LL;
  v84 = 0xFFFFFFFFLL;
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
      v15 = *(void **)(KcbAtLayerHeight + 32);
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
    CmpUnlockHashEntry(*(PVOID *)(KcbAtLayerHeight + 32), a8);
    CmpPopulateKcbStack(a4, v17);
    v18 = *(_WORD *)(v17 + 66) + 1;
  }
  v19 = a1;
  v80 = v18;
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
      v78 = v18++;
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
  v89 = 0LL;
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
    NextElement = CmListGetNextElement(*(_QWORD *)(v11 + 8) + 208LL, &v89, 32LL);
    if ( !NextElement )
      goto LABEL_43;
    while ( 1 )
    {
      v35 = *(_DWORD *)(NextElement + 68);
      if ( v35 == 2 || v35 == 11 )
        break;
      NextElement = CmListGetNextElement(a4 + 208, &v89, 32LL);
      if ( !NextElement )
        goto LABEL_43;
    }
    if ( !(unsigned __int8)CmEqualTrans(*(_QWORD *)(NextElement + 56), a9) )
    {
LABEL_43:
      v36 = *(_QWORD *)(v19 + 240);
      if ( v36 && !(unsigned __int8)CmEqualTrans(a9, v36) )
      {
        v29 = 328448LL;
        goto LABEL_30;
      }
      if ( (*(_DWORD *)(v19 + 184) & 0x20000) != 0 )
      {
        v29 = 328704LL;
        goto LABEL_30;
      }
      if ( (*(_DWORD *)(a11 + 160) & 1) == 0 )
      {
        Process = (_KPROCESS *)*((_QWORD *)&CmpRegistryProcess + 1);
        if ( !*((_QWORD *)&CmpRegistryProcess + 1) )
          Process = KeGetCurrentThread()->ApcState.Process;
        KiStackAttachProcess(Process, 0LL, a11 + 168, (_DWORD *)a4);
        *(_DWORD *)(a11 + 160) |= 1u;
      }
      if ( BugCheckParameter2 )
      {
        v38 = *(_WORD *)(BugCheckParameter2 + 66) + 1;
        v79 = v38;
      }
      else
      {
        v38 = 0;
        v79 = 0;
      }
      v39 = a10;
      if ( v38 > *(__int16 *)(v19 + 66) )
      {
LABEL_119:
        v31 = 0LL;
        SubKeyInLeafWithStatus = 0;
        v66 = v78 - 1;
        if ( !v39 )
          v66 = v78;
        v78 = v66;
        *a5 = v39 != 0;
        v67 = BugCheckParameter2;
        BugCheckParameter2 = 0LL;
        *a3 = v67;
        goto LABEL_33;
      }
LABEL_56:
      if ( v38 < 2 )
        v40 = *(_QWORD *)(v11 + 8LL * v38 + 8);
      else
        v40 = *(_QWORD *)(*(_QWORD *)(v11 + 24) + 8LL * v38 - 16);
      v41 = *(unsigned int *)(v40 + 40);
      v91 = v40;
      if ( (_DWORD)v41 == -1 )
      {
        v42 = -1;
LABEL_108:
        if ( *(_WORD *)(a1 + 66) || v39 )
          goto LABEL_110;
        SubKeyInLeafWithStatus = -1073741772;
        v68 = *(unsigned __int8 *)(a11 + 258);
        if ( (unsigned __int8)v68 < 4u )
        {
          *(_DWORD *)(a11 + 8 * v68 + 260) = -1073741772;
          *(_DWORD *)(a11 + 8LL * (unsigned __int8)(*(_BYTE *)(a11 + 258))++ + 264) = 329216;
        }
        goto LABEL_32;
      }
      v43 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)(v40 + 32) + 8LL))(
              *(_QWORD *)(v40 + 32),
              v41,
              &v84);
      v44 = *(_QWORD *)(v40 + 32);
      v45 = v43;
      v90 = v43;
      if ( (*(_DWORD *)(v44 + 160) & 0x8001) == 0 && (*(_BYTE *)(v43 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
      {
        (*(void (__fastcall **)(__int64, __int64 *))(v44 + 16))(v44, &v84);
        ExAcquirePushLockSharedEx(*(_QWORD *)(v40 + 32) + 72LL, 0LL);
        v46 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v40 + 32) + 8LL))(
                *(_QWORD *)(v40 + 32),
                *(unsigned int *)(v40 + 40),
                &v84);
        v47 = *(unsigned int *)(v40 + 40);
        v48 = *(_QWORD *)(v40 + 32);
        v45 = v46;
        v90 = v46;
        CmpUpdateKeyNodeAccessBits(v48, v46, v47);
        v49 = *(_QWORD *)(v40 + 32);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v49 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v49 + 72));
        KeAbPostRelease(v49 + 72);
      }
      v50 = *(_QWORD *)(v40 + 32);
      v83[1] = 0;
      v83[0] = -1;
      v86 = -1;
      SubKeyInLeafWithStatus = -1073741772;
      v51 = 0LL;
      v85 = 0;
      v82 = 0;
      v88 = 0;
      if ( !*(_DWORD *)(v50 + 208) )
        goto LABEL_103;
      while ( 1 )
      {
        if ( *(_DWORD *)(v45 + 4 * v51 + 20) )
        {
          v52 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v50 + 8))(
                           v50,
                           *(unsigned int *)(v45 + 4 * v51 + 28),
                           v83);
          if ( !v52 )
            goto LABEL_101;
          if ( *v52 == 26994 )
          {
            if ( (int)CmpFindSubKeyInRoot(v50, (__int64)v52, (__int64)v12, 0, &v82) < 0 )
            {
              SubKeyInLeafWithStatus = -1073741670;
              goto LABEL_100;
            }
            (*(void (__fastcall **)(__int64, _DWORD *))(v50 + 16))(v50, v83);
            if ( v82 == -1 )
              goto LABEL_95;
            v52 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v50 + 8))(v50, v82, v83);
            if ( !v52 )
            {
LABEL_101:
              SubKeyInLeafWithStatus = -1073741670;
LABEL_102:
              v11 = a2;
LABEL_103:
              v40 = v91;
              (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v91 + 32) + 16LL))(*(_QWORD *)(v91 + 32), &v84);
              if ( SubKeyInLeafWithStatus == -1073741772 )
              {
                v42 = -1;
                goto LABEL_107;
              }
              if ( SubKeyInLeafWithStatus < 0 )
              {
                v29 = 328960LL;
                goto LABEL_31;
              }
              v42 = v86;
              if ( v86 == -1 )
              {
LABEL_107:
                v39 = a10;
                goto LABEL_108;
              }
LABEL_110:
              LODWORD(v77) = a8;
              LODWORD(v76) = a7;
              v63 = CmpCreateKeyControlBlock(
                      *(_QWORD *)(v40 + 32),
                      v42,
                      v40,
                      BugCheckParameter2,
                      0,
                      (unsigned __int16 *)v12,
                      v76,
                      v77,
                      &v87);
              SubKeyInLeafWithStatus = v63;
              if ( v63 < 0 )
              {
                CmpRecordParseFailure(a11, 329472LL, (unsigned int)v63);
                v31 = BugCheckParameter2;
                goto LABEL_33;
              }
              if ( BugCheckParameter2 )
                CmpDereferenceKeyControlBlockUnsafe(BugCheckParameter2);
              v64 = v87;
              BugCheckParameter2 = v87;
              v87 = 0LL;
              ++*(_WORD *)(a4 + 2);
              if ( v79 < 2 )
                *(_QWORD *)(a4 + 8LL * v79 + 8) = v64;
              else
                *(_QWORD *)(*(_QWORD *)(a4 + 24) + 8LL * v79 - 16) = v64;
              v65 = *(_WORD *)(a1 + 66);
              if ( v79 != v65 )
              {
                CmpUnlockHashEntry(*(PVOID *)(v40 + 32), a8);
                ++v80;
                v65 = *(_WORD *)(a1 + 66);
              }
              v39 = a10;
              v38 = v79 + 1;
              v79 = v38;
              if ( v38 > v65 )
                goto LABEL_119;
              goto LABEL_56;
            }
          }
          if ( *v52 == 26732 )
          {
            v53 = (const UNICODE_STRING *)a6;
            v54 = 0;
            v55 = 0;
            v56 = _mm_cvtsi128_si32(*a6);
            v92 = *a6;
            if ( v56 )
            {
              v57 = (unsigned __int16 *)v92.m128i_i64[1];
              v58 = (unsigned __int16)(((unsigned __int16)(v56 - 1) >> 1) + 1);
              do
              {
                v59 = *v57;
                if ( *v57 >= 0x61u )
                {
                  if ( v59 <= 0x7Au )
                    v59 -= 32;
                  else
                    v59 = NLS_UPCASE(v59);
                }
                ++v57;
                v55 = v59 + 37 * v55;
                --v58;
              }
              while ( v58 );
              v53 = (const UNICODE_STRING *)a6;
              v92.m128i_i64[1] = (__int64)v57;
            }
            v60 = v54;
            v82 = -1;
            if ( v54 < v52[1] )
            {
              while ( 1 )
              {
                if ( v55 == *(_DWORD *)&v52[4 * v60 + 4] )
                {
                  v61 = CmpDoCompareKeyName(v50, v53, 0LL, *(_DWORD *)&v52[4 * v60 + 2]);
                  if ( v61 == 2 )
                  {
                    v12 = a6;
                    SubKeyInLeafWithStatus = -1073741670;
                    goto LABEL_100;
                  }
                  if ( !v61 )
                  {
                    v62 = *(_DWORD *)&v52[4 * v60 + 2];
                    v12 = a6;
                    SubKeyInLeafWithStatus = 0;
                    v82 = v62;
                    goto LABEL_93;
                  }
                }
                if ( ++v60 >= v52[1] )
                  break;
                v53 = (const UNICODE_STRING *)a6;
              }
            }
            v12 = a6;
            SubKeyInLeafWithStatus = -1073741772;
          }
          else
          {
            SubKeyInLeafWithStatus = CmpFindSubKeyInLeafWithStatus(
                                       v50,
                                       (__int64)v52,
                                       (unsigned __int16 *)v12,
                                       0LL,
                                       &v82,
                                       &v88);
            if ( (int)(SubKeyInLeafWithStatus + 0x80000000) >= 0 && SubKeyInLeafWithStatus != -1073741772 )
              goto LABEL_100;
            v62 = v82;
LABEL_93:
            if ( v62 != -1 )
            {
              v86 = v62;
              SubKeyInLeafWithStatus = 0;
LABEL_100:
              (*(void (__fastcall **)(__int64, _DWORD *))(v50 + 16))(v50, v83);
              goto LABEL_102;
            }
          }
          (*(void (__fastcall **)(__int64, _DWORD *))(v50 + 16))(v50, v83);
          v45 = v90;
        }
LABEL_95:
        v51 = (unsigned int)(v85 + 1);
        v85 = v51;
        if ( (unsigned int)v51 >= *(_DWORD *)(v50 + 208) )
          goto LABEL_102;
      }
    }
  }
LABEL_29:
  v29 = 328192LL;
LABEL_30:
  SubKeyInLeafWithStatus = -1073741772;
LABEL_31:
  CmpRecordParseFailure(a11, v29, (unsigned int)SubKeyInLeafWithStatus);
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
      v69 = *(_DWORD *)(v33 + 8) & 0x80000;
      if ( *(struct _KTHREAD **)(v33 + 56) == KeGetCurrentThread() )
        *(_QWORD *)(v33 + 56) = 0LL;
      else
        _InterlockedDecrement((volatile signed __int32 *)(v33 + 56));
      ExReleasePushLockEx(v33 + 48, 0LL);
      if ( v69 && (*(_DWORD *)(v33 + 8) & 0x80000) != 0 )
        CmpFreeKeyControlBlock(v33);
      v11 = a2;
      ++v32;
    }
    while ( v32 <= *(__int16 *)(a2 + 2) );
  }
  v70 = v80;
  if ( v80 <= v78 )
  {
    v71 = 8LL * v80 - 16;
    do
    {
      if ( v70 < 2 )
        v72 = *(_QWORD *)(v11 + v71 + 24);
      else
        v72 = *(_QWORD *)(v71 + *(_QWORD *)(v11 + 24));
      v73 = *(_QWORD *)(v72 + 32);
      v74 = *(_QWORD *)(v73 + 1640)
          + 24
          * (((101027 * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) ^ ((unsigned __int64)(101027
                                                                                          * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) >> 9)) & (unsigned int)(*(_DWORD *)(v73 + 1648) - 1));
      *(_QWORD *)(v74 + 8) = 0LL;
      ExReleasePushLockEx(v74, 0LL);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v73 + 4272), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((PVOID)v73);
      ++v70;
      v71 += 8LL;
    }
    while ( v70 <= v78 );
    v31 = BugCheckParameter2;
  }
  if ( v31 )
    CmpDereferenceKeyControlBlock(v31);
  return (unsigned int)SubKeyInLeafWithStatus;
}
