/*
 * XREFs of CmpWalkOneLevel @ 0x140621740
 * Callers:
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 * Callees:
 *     NLS_UPCASE @ 0x14025C2B0 (NLS_UPCASE.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1406182F0 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpFindSubKeyInRoot @ 0x14061B12C (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x14061BA70 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpDoCompareKeyName @ 0x14061BFD0 (CmpDoCompareKeyName.c)
 *     CmpGetKcbAtLayerHeight @ 0x14061CD58 (CmpGetKcbAtLayerHeight.c)
 *     CmpCreateKeyControlBlock @ 0x14061CE30 (CmpCreateKeyControlBlock.c)
 *     CmpFindKcbInHashEntryByName @ 0x14061D324 (CmpFindKcbInHashEntryByName.c)
 *     CmpRecordParseFailure @ 0x140622100 (CmpRecordParseFailure.c)
 *     CmpDereferenceKeyControlBlock @ 0x140624030 (CmpDereferenceKeyControlBlock.c)
 *     CmpPopulateKcbStack @ 0x1406247C0 (CmpPopulateKcbStack.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x140658190 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmListGetNextElement @ 0x140658FC0 (CmListGetNextElement.c)
 *     CmpFreeKeyControlBlock @ 0x140659940 (CmpFreeKeyControlBlock.c)
 *     CmpDeleteHive @ 0x14065B4F8 (CmpDeleteHive.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14068E788 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmEqualTrans @ 0x14068E7AC (CmEqualTrans.c)
 *     CmpUnlockHashEntry @ 0x140695CA8 (CmpUnlockHashEntry.c)
 *     CmpLockHashEntryShared @ 0x1406E5070 (CmpLockHashEntryShared.c)
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
  __int64 v11; // r12
  ULONG_PTR v14; // r14
  __int16 v15; // di
  __int16 v16; // si
  __int64 v17; // r14
  ULONG_PTR v18; // r14
  ULONG_PTR v19; // rdi
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  __int16 v22; // cx
  __int16 i; // di
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rdx
  _KPROCESS *Process; // rcx
  __int16 v28; // si
  __int64 v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r15
  __int64 v34; // rsi
  int v35; // r14d
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rax
  __int16 v39; // r12
  __int16 v40; // di
  ULONG_PTR v41; // rsi
  bool v42; // r15
  __int16 v43; // r15
  __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // rdi
  ULONG_PTR v47; // rcx
  _WORD *v49; // r15
  int v50; // r12d
  __int16 v51; // ax
  unsigned __int16 *v52; // r9
  __int64 v53; // r10
  unsigned __int16 v54; // ax
  unsigned __int16 v55; // si
  unsigned int v56; // eax
  ULONG_PTR v57; // rsi
  int v58; // eax
  __int16 v59; // ax
  __int16 v60; // ax
  int v61; // eax
  __int64 NextElement; // rax
  int v63; // ecx
  __int64 KcbAtLayerHeight; // rsi
  void *v65; // r14
  ULONG_PTR KcbInHashEntryByName; // rax
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // rax
  unsigned int v70; // r8d
  ULONG_PTR v71; // rcx
  __int64 v72; // rsi
  __int64 v73; // [rsp+30h] [rbp-89h]
  __int64 v74; // [rsp+38h] [rbp-81h]
  __int16 v75; // [rsp+50h] [rbp-69h]
  int SubKeyInLeafWithStatus; // [rsp+54h] [rbp-65h]
  __int16 v77; // [rsp+58h] [rbp-61h]
  __int16 v78; // [rsp+5Ah] [rbp-5Fh]
  unsigned int v79; // [rsp+5Ch] [rbp-5Dh] BYREF
  ULONG_PTR v80; // [rsp+60h] [rbp-59h]
  _DWORD v81[2]; // [rsp+68h] [rbp-51h] BYREF
  __int64 v82; // [rsp+70h] [rbp-49h] BYREF
  __int64 v83; // [rsp+78h] [rbp-41h]
  int v84; // [rsp+80h] [rbp-39h]
  int v85; // [rsp+84h] [rbp-35h]
  __int64 v86; // [rsp+88h] [rbp-31h]
  int v87; // [rsp+90h] [rbp-29h] BYREF
  __int64 v88; // [rsp+98h] [rbp-21h]
  ULONG_PTR v89; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v90; // [rsp+A8h] [rbp-11h] BYREF
  __m128i v91; // [rsp+B0h] [rbp-9h]

  v11 = a1;
  v82 = 0LL;
  v14 = 0LL;
  v15 = *(_WORD *)(a1 + 66) - 1;
  v89 = 0LL;
  LODWORD(v82) = -1;
  v75 = -1;
  v80 = 0LL;
  if ( v15 >= 0 )
  {
    do
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a2, v15);
      CmpLockHashEntryShared(*(_QWORD *)(KcbAtLayerHeight + 32), (unsigned int)a8);
      v65 = *(void **)(KcbAtLayerHeight + 32);
      KcbInHashEntryByName = CmpFindKcbInHashEntryByName((__int64)v65, a8, KcbAtLayerHeight, (__int64)a6);
      v80 = KcbInHashEntryByName;
      if ( KcbInHashEntryByName )
      {
        v14 = KcbInHashEntryByName;
        CmpReferenceKeyControlBlockLockNotHeld(KcbInHashEntryByName);
        CmpUnlockHashEntry(*(PVOID *)(KcbAtLayerHeight + 32));
        CmpPopulateKcbStack(a4, v14);
        v16 = *(_WORD *)(v14 + 66) + 1;
        goto LABEL_3;
      }
      CmpUnlockHashEntry(v65);
      --v15;
    }
    while ( v15 >= 0 );
    v14 = v80;
  }
  v16 = 0;
  *(_WORD *)(a4 + 2) = -1;
LABEL_3:
  v78 = v16;
  if ( v16 <= *(__int16 *)(v11 + 66) )
  {
    do
    {
      if ( v16 >= 2 )
        v17 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * v16 - 16);
      else
        v17 = *(_QWORD *)(a2 + 8LL * v16 + 8);
      v18 = *(_QWORD *)(v17 + 32);
      v19 = *(_QWORD *)(v18 + 1640)
          + 24
          * (((101027 * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) ^ ((unsigned __int64)(101027
                                                                                          * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) >> 9)) & (unsigned int)(*(_DWORD *)(v18 + 1648) - 1));
      ExAcquirePushLockExclusiveEx(v19, 0LL);
      *(_QWORD *)(v19 + 8) = KeGetCurrentThread();
      _m_prefetchw((const void *)(v18 + 4272));
      v20 = *(_DWORD *)(v18 + 4272);
      if ( !v20 )
LABEL_136:
        KeBugCheckEx(0x51u, 0x17uLL, v18, 0xCuLL, (unsigned int)a8);
      while ( 1 )
      {
        v21 = v20;
        v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 4272), v20 + 1, v20);
        if ( v21 == v20 )
          break;
        if ( !v20 )
          goto LABEL_136;
      }
      v75 = v16++;
    }
    while ( v16 <= *(__int16 *)(v11 + 66) );
    v14 = v80;
  }
  v22 = *(_WORD *)(a2 + 2);
  for ( i = 0; i <= v22; ++i )
  {
    if ( i >= 2 )
      v24 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * i - 16);
    else
      v24 = *(_QWORD *)(a2 + 8LL * i + 8);
    ExAcquirePushLockSharedEx(v24 + 48, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v24 + 56));
    v22 = *(_WORD *)(a2 + 2);
  }
  v90 = 0LL;
  if ( v22 < 0 )
    goto LABEL_121;
  while ( 1 )
  {
    if ( v22 >= 2 )
      v25 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * v22 - 16);
    else
      v25 = *(_QWORD *)(a2 + 8LL * v22 + 8);
    if ( *(_WORD *)(v25 + 66) && *(_BYTE *)(v25 + 65) == 1 )
      goto LABEL_121;
    if ( *(_DWORD *)(v25 + 40) != -1 )
      break;
    if ( --v22 < 0 )
      goto LABEL_121;
  }
  if ( a9 )
  {
    NextElement = CmListGetNextElement(*(_QWORD *)(a2 + 8) + 208LL, &v90, 32LL);
    if ( NextElement )
    {
      do
      {
        v63 = *(_DWORD *)(NextElement + 68);
        if ( v63 == 2 || v63 == 11 )
          break;
        NextElement = CmListGetNextElement(a4 + 208, &v90, 32LL);
      }
      while ( NextElement );
      if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(NextElement + 56), a9) )
      {
LABEL_121:
        v67 = 328192LL;
LABEL_122:
        v35 = -1073741772;
        SubKeyInLeafWithStatus = -1073741772;
        v68 = 3221225524LL;
        goto LABEL_123;
      }
    }
  }
  v26 = *(_QWORD *)(v11 + 240);
  if ( v26 && !(unsigned __int8)CmEqualTrans(a9, v26) )
  {
    v67 = 328448LL;
    goto LABEL_122;
  }
  if ( (*(_DWORD *)(v11 + 184) & 0x20000) != 0 )
  {
    v67 = 328704LL;
    goto LABEL_122;
  }
  if ( (*(_DWORD *)(a11 + 160) & 1) == 0 )
  {
    Process = (_KPROCESS *)*((_QWORD *)&CmpRegistryProcess + 1);
    if ( !*((_QWORD *)&CmpRegistryProcess + 1) )
      Process = KeGetCurrentThread()->ApcState.Process;
    KiStackAttachProcess(Process, 0LL, a11 + 168, (_DWORD *)a4);
    *(_DWORD *)(a11 + 160) |= 1u;
  }
  if ( v14 )
    v28 = *(_WORD *)(v14 + 66) + 1;
  else
    v28 = 0;
  v77 = v28;
  if ( v28 > *(__int16 *)(v11 + 66) )
  {
LABEL_98:
    v80 = 0LL;
    SubKeyInLeafWithStatus = 0;
    v60 = v75 - 1;
    if ( !a10 )
      v60 = v75;
    v39 = v60;
    *a5 = a10 != 0;
    *a3 = v14;
    v35 = 0;
    goto LABEL_46;
  }
  while ( 2 )
  {
    if ( v28 >= 2 )
      v29 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * v28 - 16);
    else
      v29 = *(_QWORD *)(a2 + 8LL * v28 + 8);
    v30 = *(unsigned int *)(v29 + 40);
    v83 = v29;
    if ( (_DWORD)v30 == -1 )
    {
      v37 = -1;
      goto LABEL_41;
    }
    v31 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)(v29 + 32) + 8LL))(
            *(_QWORD *)(v29 + 32),
            v30,
            &v82);
    v32 = *(_QWORD *)(v29 + 32);
    v33 = v31;
    v88 = v31;
    if ( (*(_DWORD *)(v32 + 160) & 0x8001) == 0 && (*(_BYTE *)(v31 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
    {
      (*(void (__fastcall **)(__int64, __int64 *))(v32 + 16))(v32, &v82);
      ExAcquirePushLockSharedEx(*(_QWORD *)(v29 + 32) + 72LL, 0LL);
      v69 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v29 + 32) + 8LL))(
              *(_QWORD *)(v29 + 32),
              *(unsigned int *)(v29 + 40),
              &v82);
      v70 = *(_DWORD *)(v29 + 40);
      v71 = *(_QWORD *)(v29 + 32);
      v33 = v69;
      v88 = v69;
      CmpUpdateKeyNodeAccessBits(v71, v69, v70);
      v72 = *(_QWORD *)(v29 + 32);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v72 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v72 + 72));
      KeAbPostRelease(v72 + 72);
    }
    v34 = *(_QWORD *)(v29 + 32);
    v81[1] = 0;
    v86 = v34;
    v85 = -1;
    v35 = -1073741772;
    v36 = 0LL;
    v84 = 0;
    SubKeyInLeafWithStatus = -1073741772;
    v81[0] = -1;
    v79 = 0;
    v87 = 0;
    if ( !*(_DWORD *)(v34 + 208) )
      goto LABEL_38;
    while ( !*(_DWORD *)(v33 + 4 * v36 + 20) )
    {
LABEL_36:
      v36 = (unsigned int)(v84 + 1);
      v84 = v36;
      if ( (unsigned int)v36 >= *(_DWORD *)(v34 + 208) )
        goto LABEL_37;
    }
    v49 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v34 + 8))(
                     v34,
                     *(unsigned int *)(v33 + 4 * v36 + 28),
                     v81);
    if ( !v49 )
      goto LABEL_145;
    if ( *v49 == 26994 )
    {
      if ( (int)CmpFindSubKeyInRoot(v34, (__int64)v49, (int)a6, &v79) < 0 )
      {
        v35 = -1073741670;
        goto LABEL_85;
      }
      (*(void (__fastcall **)(__int64, _DWORD *))(v34 + 16))(v34, v81);
      if ( v79 == -1 )
        goto LABEL_80;
      v49 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v34 + 8))(v34, v79, v81);
      if ( !v49 )
      {
LABEL_145:
        v35 = -1073741670;
        SubKeyInLeafWithStatus = -1073741670;
        goto LABEL_37;
      }
    }
    if ( *v49 != 26732 )
    {
      SubKeyInLeafWithStatus = CmpFindSubKeyInLeafWithStatus(v34, (__int64)v49, (unsigned __int16 *)a6, &v79, &v87);
      v35 = SubKeyInLeafWithStatus;
      if ( (int)(SubKeyInLeafWithStatus + 0x80000000) >= 0 && SubKeyInLeafWithStatus != -1073741772 )
        goto LABEL_86;
      v56 = v79;
LABEL_83:
      if ( v56 != -1 )
      {
        v85 = v56;
        v35 = 0;
        goto LABEL_85;
      }
      goto LABEL_79;
    }
    v50 = 0;
    v51 = _mm_cvtsi128_si32(*a6);
    v91 = *a6;
    if ( v51 )
    {
      v52 = (unsigned __int16 *)v91.m128i_i64[1];
      v53 = (unsigned __int16)(((unsigned __int16)(v51 - 1) >> 1) + 1);
      do
      {
        v54 = *v52;
        if ( *v52 >= 0x61u )
        {
          if ( v54 > 0x7Au )
            v54 = NLS_UPCASE(v54);
          else
            v54 -= 32;
        }
        ++v52;
        v50 = v54 + 37 * v50;
        --v53;
      }
      while ( v53 );
      v91.m128i_i64[1] = (__int64)v52;
    }
    v55 = 0;
    v79 = -1;
    if ( !v49[1] )
    {
LABEL_78:
      v34 = v86;
      v35 = -1073741772;
      SubKeyInLeafWithStatus = -1073741772;
LABEL_79:
      (*(void (__fastcall **)(__int64, _DWORD *))(v34 + 16))(v34, v81);
LABEL_80:
      v33 = v88;
      goto LABEL_36;
    }
    while ( 1 )
    {
      if ( v50 != *(_DWORD *)&v49[4 * v55 + 4] )
        goto LABEL_77;
      v61 = CmpDoCompareKeyName(v86, (const UNICODE_STRING *)a6, *(_DWORD *)&v49[4 * v55 + 2]);
      if ( v61 == 2 )
        break;
      if ( !v61 )
      {
        v56 = *(_DWORD *)&v49[4 * v55 + 2];
        v34 = v86;
        v35 = 0;
        SubKeyInLeafWithStatus = 0;
        v79 = v56;
        goto LABEL_83;
      }
LABEL_77:
      if ( ++v55 >= v49[1] )
        goto LABEL_78;
    }
    v34 = v86;
    v35 = -1073741670;
LABEL_85:
    SubKeyInLeafWithStatus = v35;
LABEL_86:
    (*(void (__fastcall **)(__int64, _DWORD *))(v34 + 16))(v34, v81);
LABEL_37:
    v11 = a1;
LABEL_38:
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v83 + 32) + 16LL))(*(_QWORD *)(v83 + 32), &v82);
    if ( v35 == -1073741772 )
    {
      v37 = -1;
      goto LABEL_40;
    }
    if ( v35 < 0 )
    {
      CmpRecordParseFailure(a11, 328960LL, (unsigned int)v35);
      goto LABEL_45;
    }
    v37 = v85;
    if ( v85 != -1 )
    {
      v29 = v83;
      goto LABEL_90;
    }
LABEL_40:
    v29 = v83;
LABEL_41:
    if ( *(_WORD *)(v11 + 66) || a10 )
    {
LABEL_90:
      v57 = v80;
      LODWORD(v74) = a8;
      LODWORD(v73) = a7;
      v58 = CmpCreateKeyControlBlock(*(_QWORD *)(v29 + 32), v37, v29, v80, 0, (unsigned __int16 *)a6, v73, v74, &v89);
      SubKeyInLeafWithStatus = v58;
      v35 = v58;
      if ( v58 >= 0 )
      {
        if ( v57 )
          CmpDereferenceKeyControlBlockUnsafe(v57);
        v14 = v89;
        v89 = 0LL;
        v80 = v14;
        ++*(_WORD *)(a4 + 2);
        if ( v77 >= 2 )
          *(_QWORD *)(*(_QWORD *)(a4 + 24) + 8LL * v77 - 16) = v14;
        else
          *(_QWORD *)(a4 + 8LL * v77 + 8) = v14;
        v59 = *(_WORD *)(v11 + 66);
        if ( v77 != v59 )
        {
          CmpUnlockHashEntry(*(PVOID *)(v83 + 32));
          ++v78;
          v59 = *(_WORD *)(v11 + 66);
        }
        v28 = v77 + 1;
        v77 = v28;
        if ( v28 > v59 )
          goto LABEL_98;
        continue;
      }
      v68 = (unsigned int)v58;
      v67 = 329472LL;
LABEL_123:
      CmpRecordParseFailure(a11, v67, v68);
      goto LABEL_45;
    }
    break;
  }
  v35 = -1073741772;
  SubKeyInLeafWithStatus = -1073741772;
  v38 = *(unsigned __int8 *)(a11 + 258);
  if ( (unsigned __int8)v38 < 4u )
  {
    *(_DWORD *)(a11 + 8 * v38 + 260) = -1073741772;
    *(_DWORD *)(a11 + 8LL * (unsigned __int8)(*(_BYTE *)(a11 + 258))++ + 264) = 329216;
  }
LABEL_45:
  v39 = v75;
LABEL_46:
  v40 = 0;
  if ( *(__int16 *)(a2 + 2) >= 0 )
  {
    do
    {
      if ( v40 >= 2 )
        v41 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * v40 - 16);
      else
        v41 = *(_QWORD *)(a2 + 8LL * v40 + 8);
      v42 = (*(_DWORD *)(v41 + 8) & 0x80000) != 0;
      if ( *(struct _KTHREAD **)(v41 + 56) == KeGetCurrentThread() )
        *(_QWORD *)(v41 + 56) = 0LL;
      else
        _InterlockedDecrement((volatile signed __int32 *)(v41 + 56));
      ExReleasePushLockEx(v41 + 48, 0LL);
      if ( v42 && (*(_DWORD *)(v41 + 8) & 0x80000) != 0 )
        CmpFreeKeyControlBlock(v41);
      ++v40;
    }
    while ( v40 <= *(__int16 *)(a2 + 2) );
    v35 = SubKeyInLeafWithStatus;
  }
  v43 = v78;
  if ( v78 <= v39 )
  {
    v44 = 8LL * v78 - 16;
    do
    {
      if ( v43 >= 2 )
        v45 = *(_QWORD *)(v44 + *(_QWORD *)(a2 + 24));
      else
        v45 = *(_QWORD *)(v44 + a2 + 24);
      v46 = *(_QWORD *)(v45 + 32);
      v47 = *(_QWORD *)(v46 + 1640)
          + 24
          * (((101027 * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) ^ ((unsigned __int64)(101027
                                                                                          * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) >> 9)) & (unsigned int)(*(_DWORD *)(v46 + 1648) - 1));
      *(_QWORD *)(v47 + 8) = 0LL;
      ExReleasePushLockEx(v47, 0LL);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v46 + 4272), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((PVOID)v46);
      ++v43;
      v44 += 8LL;
    }
    while ( v43 <= v39 );
    v35 = SubKeyInLeafWithStatus;
  }
  if ( v80 )
    CmpDereferenceKeyControlBlock(v80);
  return (unsigned int)v35;
}
