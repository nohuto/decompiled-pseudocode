/*
 * XREFs of RaidUnitClaimIrp @ 0x1C0005450
 * Callers:
 *     RaUnitStartIo @ 0x1C0004F30 (RaUnitStartIo.c)
 *     RaUnitStartResetIo @ 0x1C00476D8 (RaUnitStartResetIo.c)
 * Callees:
 *     RaidUnitReenablePendingTimer @ 0x1C00063F0 (RaidUnitReenablePendingTimer.c)
 *     __security_check_cookie @ 0x1C0019FC0 (__security_check_cookie.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C0041430 (RaidSrbExGetBidirectionalData.c)
 *     TranslateToExtendedSrb @ 0x1C0041A04 (TranslateToExtendedSrb.c)
 *     RaidGetSystemAddressForMdl @ 0x1C0043C9C (RaidGetSystemAddressForMdl.c)
 *     McTemplateK0dud_EtwWriteTransfer @ 0x1C0044B50 (McTemplateK0dud_EtwWriteTransfer.c)
 *     StorpDataInBufferAllocateMdlAndLockPages @ 0x1C004ABE0 (StorpDataInBufferAllocateMdlAndLockPages.c)
 */

__int64 __fastcall RaidUnitClaimIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // r13
  unsigned int v14; // r10d
  unsigned int v15; // r9d
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // ecx
  bool v20; // zf
  int v21; // eax
  __int64 v22; // r10
  char v23; // al
  char v24; // dl
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r13
  char v28; // dl
  __int64 v29; // r14
  char v30; // al
  __int64 v31; // rcx
  unsigned int v32; // r8d
  int v33; // r9d
  __int64 v34; // r11
  unsigned int v35; // eax
  __int64 v36; // r12
  __int64 v37; // rcx
  unsigned __int64 v38; // r10
  __int64 v39; // r15
  int v40; // ecx
  char *v41; // rcx
  int v42; // eax
  char v43; // al
  __int64 v44; // rdx
  unsigned __int8 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  unsigned int v48; // r10d
  __int64 v49; // rcx
  unsigned __int64 v50; // r11
  __int64 v51; // rsi
  int v52; // ecx
  __int64 v53; // rsi
  __int64 v54; // rsi
  __int64 v55; // rax
  unsigned int v56; // r15d
  __int64 v57; // rax
  ULONGLONG UnbiasedInterruptTime; // r12
  _DWORD *v59; // r14
  KSPIN_LOCK v60; // rsi
  ULONG ProcessorIndexFromNumber; // eax
  unsigned int v62; // ecx
  KSPIN_LOCK *v63; // rbx
  int v64; // r15d
  KSPIN_LOCK **v65; // rax
  __int64 v66; // rdx
  int v67; // ecx
  int v68; // r9d
  __int64 result; // rax
  char v70; // al
  unsigned __int8 v71; // cl
  __int64 v72; // rax
  unsigned int v73; // r11d
  __int64 v74; // r8
  int v75; // eax
  __int64 v76; // r13
  unsigned int v77; // r12d
  __int64 v78; // r15
  char *v79; // rax
  __int64 v80; // r15
  char *v81; // rax
  __int64 v82; // rcx
  int v83; // ecx
  __int64 v84; // rcx
  unsigned __int64 v85; // r9
  __int64 v86; // rdx
  __int64 v87; // r8
  char v88; // r9
  int v89; // ecx
  __int64 v90; // r9
  __int64 v91; // rax
  int v92; // ecx
  unsigned int v93; // esi
  unsigned int v94; // r8d
  __int64 v95; // rcx
  unsigned __int64 v96; // r10
  int SystemAddressForMdl; // r15d
  __int64 BidirectionalData; // rax
  struct _MDL *v99; // rcx
  int v100; // ecx
  KSPIN_LOCK v101; // rdx
  _DWORD *v102; // rbx
  __int64 v103; // rcx
  _QWORD *v104; // rax
  unsigned __int8 v105; // [rsp+30h] [rbp-B8h]
  char v106; // [rsp+32h] [rbp-B6h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v109; // [rsp+48h] [rbp-A0h]
  __int64 v110; // [rsp+50h] [rbp-98h]
  __int64 v111; // [rsp+58h] [rbp-90h] BYREF
  char *v112; // [rsp+60h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-80h] BYREF
  __int128 v114; // [rsp+80h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a4 + 16);
  v105 = 0;
  v110 = 0LL;
  v106 = 0;
  v7 = 0LL;
  v8 = *(_QWORD *)(a2 + 184);
  v9 = 0LL;
  *(_QWORD *)&v114 = 0LL;
  v111 = 0LL;
  v10 = *(_QWORD *)(v8 + 8);
  if ( *(_BYTE *)(v10 + 2) != 40 )
  {
    v12 = *(_QWORD *)(v10 + 48);
    v13 = *(_QWORD *)(v10 + 24);
    *(_BYTE *)(v10 + 6) = *(_BYTE *)(a1 + 97);
    *(_BYTE *)(v10 + 5) = *(_BYTE *)(a1 + 96);
    v70 = *(_BYTE *)(a1 + 98);
    v71 = *(_BYTE *)(v10 + 11);
    *(_BYTE *)(v10 + 7) = v70;
    v72 = *(_QWORD *)(a1 + 24);
    v105 = v71;
    if ( *(_BYTE *)(v72 + 410) != 1 )
      goto LABEL_11;
    v90 = *(_QWORD *)(v4 + 760);
    if ( !v90 )
    {
      *(_BYTE *)(v10 + 3) = 48;
      *(_DWORD *)(v10 + 64) = -1073741670;
      return 3221225626LL;
    }
    result = TranslateToExtendedSrb(
               v90,
               v10,
               *(_DWORD *)(v4 + 744),
               v90,
               a3,
               (*(_DWORD *)(*(_QWORD *)(v72 + 536) + 184LL) & 0x80) != 0);
    if ( (int)result < 0 )
    {
      *(_BYTE *)(v10 + 3) = 48;
      *(_DWORD *)(v10 + 64) = result;
      return result;
    }
    v91 = *(_QWORD *)(v4 + 760);
    *(_BYTE *)(v4 + 16) |= 0x40u;
    *(_QWORD *)(v4 + 752) = v10;
    *(_QWORD *)&v114 = v10;
    v10 = v91;
    v110 = v91;
    v106 = 1;
    *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL) = v91;
LABEL_11:
    v20 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(v4 + 160) = a2;
    *(_QWORD *)(v4 + 168) = v10;
    *(_QWORD *)(v4 + 224) = a1;
    *(_QWORD *)(v4 + 104) = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(v4 + 136) = v9;
    if ( !v20 )
      IoGetActivityIdIrp(a2, v4 + 728);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4804LL) & 1) != 0 )
    {
      if ( *(_BYTE *)(v10 + 2) == 40 )
        v21 = *(_DWORD *)(v110 + 96);
      else
        v21 = *(_DWORD *)(v10 + 56);
      *(_DWORD *)(v4 + 18) = v21;
    }
    else
    {
      *(_BYTE *)(v4 + 20) = -1;
      *(_WORD *)(v4 + 18) = -1;
    }
    v22 = a4;
    v23 = *(_BYTE *)(v4 + 16) & 0xE3 | 4;
    *(_DWORD *)(v4 + 24) = 0;
    *(_BYTE *)(v4 + 16) = v23;
    *(_QWORD *)(v4 + 176) = v12;
    *(_QWORD *)(v4 + 184) = v13;
    *(_QWORD *)(v4 + 192) = v7;
    v24 = *(_BYTE *)(v10 + 2);
    if ( v24 == 40 )
    {
      v25 = v110;
      *(_QWORD *)(v110 + 96) = v4;
      *(_DWORD *)(v25 + 32) = *(_DWORD *)a4;
      v24 = *(_BYTE *)(v10 + 2);
    }
    else
    {
      *(_QWORD *)(v10 + 48) = v4;
      *(_BYTE *)(v10 + 8) = *(_BYTE *)a4;
    }
    v26 = *(_QWORD *)(a4 + 8);
    if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 24) + 452LL) + 7) & 0xFFFFFFF8) != 0 )
    {
      if ( v24 == 40 )
        *(_QWORD *)(v10 + 104) = v26;
      else
        *(_QWORD *)(v10 + 56) = v26;
    }
    v27 = *(_QWORD *)(a1 + 24);
    v28 = 0;
    if ( !*(_QWORD *)(a2 + 8) )
      goto LABEL_46;
    v29 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
    v30 = *(_BYTE *)(v29 + 2);
    if ( v30 != 40 )
    {
      v31 = *(_QWORD *)(v29 + 48);
      v32 = *(unsigned __int8 *)(v29 + 2);
      v33 = *(_DWORD *)(v29 + 12);
      v34 = *(_QWORD *)(v29 + 24);
      v109 = v31;
      if ( !v30 )
        v28 = *(_BYTE *)(v29 + 72);
      goto LABEL_33;
    }
    v31 = *(_QWORD *)(v29 + 96);
    v32 = *(_DWORD *)(v29 + 20);
    v33 = *(_DWORD *)(v29 + 24);
    v34 = *(_QWORD *)(v29 + 64);
    v109 = v31;
    if ( v32 )
      goto LABEL_33;
    v35 = *(_DWORD *)(v29 + 56);
    v36 = 0LL;
    if ( !v35 )
      goto LABEL_33;
    while ( 1 )
    {
      v37 = *(unsigned int *)(v29 + 4 * v36 + 120);
      if ( (unsigned int)v37 < 0x80 )
        goto LABEL_163;
      v38 = *(unsigned int *)(v29 + 16);
      if ( (unsigned int)v37 > (unsigned int)v38 )
        goto LABEL_163;
      v39 = (unsigned int)v37;
      v40 = *(_DWORD *)(v29 + v37);
      if ( v40 == 64 )
      {
        if ( v39 + 40 <= v38 )
        {
          if ( !*(_BYTE *)(v29 + v39 + 10) )
            goto LABEL_32;
LABEL_29:
          v41 = (char *)(v39 + v29 + 24);
          goto LABEL_30;
        }
        goto LABEL_163;
      }
      v92 = v40 - 65;
      if ( v92 )
        break;
      if ( v39 + 56 <= v38 )
      {
        if ( !*(_BYTE *)(v29 + v39 + 10) )
          goto LABEL_32;
        goto LABEL_29;
      }
LABEL_163:
      v36 = (unsigned int)(v36 + 1);
      if ( (unsigned int)v36 >= v35 )
        goto LABEL_32;
    }
    if ( v92 != 1 || v39 + 40 > v38 )
      goto LABEL_163;
    v41 = (char *)(v39 + v29 + 32);
    if ( !*(_DWORD *)(v29 + v39 + 12) )
      v41 = 0LL;
LABEL_30:
    if ( v41 )
      v28 = *v41;
LABEL_32:
    v31 = v109;
LABEL_33:
    if ( (v33 & 0xC0) == 0 || !v34 && !*(_QWORD *)(v31 + 104) )
    {
LABEL_119:
      v22 = a4;
      goto LABEL_46;
    }
    if ( v32 > 0x17 || (v42 = 8389124, !_bittest(&v42, v32)) )
    {
      v43 = *(_BYTE *)(v27 + 401);
      if ( v43 != 3 && ((unsigned __int8)(v43 - 1) > 1u || !v32 && ((v28 - 8) & 0x5D) == 0) )
      {
        if ( !*(_BYTE *)(v27 + 4514) )
          goto LABEL_119;
        if ( *(_BYTE *)(v29 + 2) == 40 )
        {
          v44 = 0LL;
          if ( (*(_BYTE *)(v29 + 24) & 0xC0) == 0xC0 )
          {
            v93 = *(_DWORD *)(v29 + 56);
            v94 = 0;
            if ( v93 )
            {
              while ( 1 )
              {
                v95 = *(unsigned int *)(v29 + 4LL * v94 + 120);
                if ( (unsigned int)v95 >= 0x80 )
                {
                  v96 = *(unsigned int *)(v29 + 16);
                  if ( (unsigned int)v95 <= (unsigned int)v96 && *(_DWORD *)(v29 + v95) == 1 && v95 + 24 <= v96 )
                    break;
                }
                if ( ++v94 >= v93 )
                  goto LABEL_44;
              }
              v44 = v29 + v95;
            }
          }
LABEL_44:
          v22 = a4;
          *(_QWORD *)(v29 + 64) = 0LL;
          if ( v44 )
            *(_QWORD *)(v44 + 16) = 0LL;
LABEL_46:
          if ( v105 > *(_BYTE *)(a1 + 1732) )
            v45 = v105;
          else
            v45 = *(_BYTE *)(a1 + 1732);
          v46 = *(_QWORD *)(v4 + 168);
          v47 = *(_QWORD *)(v22 + 24);
          if ( *(_BYTE *)(v46 + 2) == 40 )
          {
            if ( !*(_DWORD *)(v46 + 20) )
            {
              v48 = 0;
              if ( *(_DWORD *)(v46 + 56) )
              {
                while ( 1 )
                {
                  v49 = *(unsigned int *)(v46 + 4LL * v48 + 120);
                  if ( (unsigned int)v49 < 0x80 )
                    goto LABEL_57;
                  v50 = *(unsigned int *)(v46 + 16);
                  if ( (unsigned int)v49 > (unsigned int)v50 )
                    goto LABEL_57;
                  v51 = (unsigned int)v49;
                  v52 = *(_DWORD *)(v46 + v49);
                  if ( v52 != 64 )
                    break;
                  if ( v51 + 40 <= v50 )
                    goto LABEL_55;
LABEL_57:
                  if ( ++v48 >= *(_DWORD *)(v46 + 56) )
                    goto LABEL_58;
                }
                v100 = v52 - 65;
                if ( v100 )
                {
                  if ( v100 != 1 || v51 + 40 > v50 )
                    goto LABEL_57;
                  *(_QWORD *)(v4 + 200) = *(_QWORD *)(v46 + v51 + 24);
                  *(_BYTE *)(v4 + 208) = *(_BYTE *)(v46 + v51 + 9);
                  *(_QWORD *)(v46 + v51 + 24) = v47;
                }
                else
                {
                  if ( v51 + 56 > v50 )
                    goto LABEL_57;
LABEL_55:
                  *(_QWORD *)(v4 + 200) = *(_QWORD *)(v46 + v51 + 16);
                  *(_BYTE *)(v4 + 208) = *(_BYTE *)(v46 + v51 + 9);
                  *(_QWORD *)(v46 + v51 + 16) = v47;
                }
                *(_BYTE *)(v46 + v51 + 9) = v45;
                *(_BYTE *)(v4 + 16) |= 0x20u;
                goto LABEL_57;
              }
            }
          }
          else
          {
            *(_QWORD *)(v4 + 200) = *(_QWORD *)(v46 + 32);
            *(_BYTE *)(v4 + 208) = *(_BYTE *)(v46 + 11);
            *(_QWORD *)(v46 + 32) = v47;
            *(_BYTE *)(v46 + 11) = v45;
            *(_BYTE *)(v4 + 16) |= 0x20u;
          }
LABEL_58:
          v53 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
          if ( *(_BYTE *)(v53 + 2) == 40 )
            v54 = *(_QWORD *)(v53 + 96);
          else
            v54 = *(_QWORD *)(v53 + 48);
          v55 = *(_QWORD *)(v54 + 168);
          if ( *(_BYTE *)(v55 + 2) == 40 )
            v56 = *(_DWORD *)(v55 + 40);
          else
            v56 = *(_DWORD *)(v55 + 20);
          if ( v56 <= 2 && !*(_BYTE *)(a1 + 3216) )
            v56 = 3;
          v57 = *(_QWORD *)(a1 + 24);
          if ( v57 && *(_QWORD *)(v57 + 5048) || (**(_DWORD **)(a1 + 504) & 1) != 0 )
            UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
          else
            UnbiasedInterruptTime = 0LL;
          *(_BYTE *)(v54 + 16) |= 2u;
          v59 = *(_DWORD **)(a1 + 504);
          ProcNumber = 0;
          memset(&LockHandle, 0, sizeof(LockHandle));
          v60 = v54 + 48;
          KeGetCurrentProcessorNumberEx(&ProcNumber);
          ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
          if ( v59[2] == 64 )
            v62 = ProcessorIndexFromNumber & 0x3F;
          else
            v62 = ProcessorIndexFromNumber % v59[2];
          v63 = (KSPIN_LOCK *)&v59[16 * v62 + 16];
          if ( v56 - 1 > 0xFFFFFFFC )
            v56 = 10;
          *(_DWORD *)(v60 + 36) = v62;
          v64 = 2 * v56;
          *(_QWORD *)(v60 + 40) = UnbiasedInterruptTime;
          *(_DWORD *)(v60 + 32) = v64;
          KeAcquireInStackQueuedSpinLockAtDpcLevel(v63 + 5, &LockHandle);
          v65 = (KSPIN_LOCK **)v63[1];
          if ( *v65 == v63 )
          {
            *(_QWORD *)v60 = v63;
            *(_QWORD *)(v60 + 8) = v65;
            *v65 = (KSPIN_LOCK *)v60;
            v63[1] = v60;
            if ( *((_DWORD *)v63 + 12) >= 0xFFFFFFFE )
              *((_DWORD *)v63 + 12) = v64;
            if ( (*v59 & 1) == 0 )
            {
              *(_DWORD *)(v60 + 48) &= ~1u;
LABEL_76:
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              if ( StorEtwLoggingEnabled )
              {
                v114 = 0LL;
                IoGetActivityIdIrp(a2, &v114);
                if ( byte_1C0068842 < 0 )
                  McTemplateK0dud_EtwWriteTransfer(v67, v66, (unsigned int)&v114, v68, 3);
              }
              if ( *(char *)(a1 + 449) < 0 || *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5088LL) )
              {
                if ( (*(_DWORD *)(a1 + 456) & 4) != 0 )
                  v75 = 1;
                else
                  v75 = (unsigned __int8)_interlockedbittestandset((volatile signed __int32 *)(a1 + 456), 2u);
                if ( !*(_BYTE *)(a1 + 3244) )
                {
                  if ( !v75 )
                    RaidUnitReenablePendingTimer(a1, 0LL);
                  return 0LL;
                }
              }
              else if ( !*(_BYTE *)(a1 + 3244) )
              {
                return 0LL;
              }
              LOBYTE(v66) = 1;
              RaidUnitReenablePendingTimer(a1, v66);
              *(_BYTE *)(a1 + 3244) = 0;
              return 0LL;
            }
            v101 = v63[3];
            v102 = v63 + 2;
            if ( (_DWORD *)v101 != v102 )
            {
              while ( *(_QWORD *)(v60 + 40) + (unsigned __int64)(unsigned int)(5000000 * *(_DWORD *)(v60 + 32)) < *(_QWORD *)(v101 + 24) + (unsigned __int64)(unsigned int)(5000000 * *(_DWORD *)(v101 + 16)) )
              {
                v101 = *(_QWORD *)(v101 + 8);
                if ( (_DWORD *)v101 == v102 )
                  goto LABEL_197;
              }
              *(_QWORD *)(v60 + 16) = *(_QWORD *)v101;
              *(_QWORD *)(*(_QWORD *)v101 + 8LL) = v60 + 16;
              *(_QWORD *)v101 = v60 + 16;
              *(_QWORD *)(v60 + 24) = v101;
              goto LABEL_199;
            }
LABEL_197:
            v103 = *(_QWORD *)v102;
            v104 = (_QWORD *)(v60 + 16);
            if ( *(_DWORD **)(*(_QWORD *)v102 + 8LL) == v102 )
            {
              *v104 = v103;
              *(_QWORD *)(v60 + 24) = v102;
              *(_QWORD *)(v103 + 8) = v104;
              *(_QWORD *)v102 = v104;
LABEL_199:
              *(_DWORD *)(v60 + 48) |= 1u;
              goto LABEL_76;
            }
          }
          __fastfail(3u);
        }
        *(_QWORD *)(v29 + 24) = 0LL;
LABEL_116:
        v22 = a4;
        goto LABEL_46;
      }
    }
    v76 = *(_QWORD *)(v31 + 104);
    v77 = 16;
    v78 = *(_QWORD *)(v31 + 184);
    if ( !*(_BYTE *)(a2 + 64) )
      v77 = 32;
    if ( (*(_BYTE *)(v76 + 10) & 5) != 0 )
      v79 = *(char **)(v76 + 24);
    else
      v79 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v76, 0, MmCached, 0LL, 0, v77 | 0x40000000);
    if ( v79 )
    {
      v80 = v78 ? v78 - *(unsigned int *)(v76 + 44) - *(_QWORD *)(v76 + 32) : 0LL;
      v81 = &v79[v80];
      v20 = *(_BYTE *)(v29 + 2) == 40;
      v112 = v81;
      if ( v20 )
        *(_QWORD *)(v29 + 64) = v81;
      else
        *(_QWORD *)(v29 + 24) = v81;
      v82 = *(_QWORD *)(v109 + 136);
      if ( !v82 )
        goto LABEL_116;
      SystemAddressForMdl = RaidGetSystemAddressForMdl(v82, *(_QWORD *)(v109 + 192), v77, &v112);
      if ( SystemAddressForMdl >= 0 )
      {
        BidirectionalData = RaidSrbExGetBidirectionalData(v29);
        *(_QWORD *)(BidirectionalData + 16) = v112;
      }
      if ( SystemAddressForMdl != -1073741670 )
        goto LABEL_116;
    }
    if ( *(_BYTE *)(v10 + 2) == 40 )
    {
      if ( !v106 )
      {
        *(_DWORD *)(v110 + 44) = -1073741670;
        goto LABEL_183;
      }
    }
    else if ( !v106 )
    {
      *(_QWORD *)(v10 + 48) = *(_QWORD *)(v4 + 176);
LABEL_182:
      *(_DWORD *)(v10 + 64) = -1073741670;
LABEL_183:
      v99 = *(struct _MDL **)(v4 + 136);
      if ( v99 )
      {
        MmUnlockPages(v99);
        IoFreeMdl(*(PMDL *)(v4 + 136));
        *(_QWORD *)(v4 + 136) = 0LL;
      }
      return 3221225626LL;
    }
    v10 = v114;
    *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL) = v114;
    goto LABEL_182;
  }
  v11 = v10 + *(unsigned int *)(v10 + 52);
  v110 = *(_QWORD *)(v8 + 8);
  *(_WORD *)v11 = 1;
  *(_DWORD *)(v11 + 4) = 4;
  *(_BYTE *)(v11 + 8) = *(_BYTE *)(a1 + 96);
  *(_BYTE *)(v11 + 9) = *(_BYTE *)(a1 + 97);
  *(_BYTE *)(v11 + 10) = *(_BYTE *)(a1 + 98);
  v12 = *(_QWORD *)(v10 + 80);
  v13 = *(_QWORD *)(v10 + 64);
  if ( *(_BYTE *)(v10 + 2) != 40 )
    goto LABEL_11;
  if ( *(_DWORD *)(v10 + 20) )
    goto LABEL_10;
  v14 = *(_DWORD *)(v10 + 56);
  v15 = 0;
  if ( !v14 )
    goto LABEL_10;
  while ( 1 )
  {
    v16 = *(unsigned int *)(v10 + 4LL * v15 + 120);
    if ( (unsigned int)v16 < 0x80 )
      goto LABEL_130;
    v17 = *(unsigned int *)(v10 + 16);
    if ( (unsigned int)v16 > (unsigned int)v17 )
      goto LABEL_130;
    v18 = (unsigned int)v16;
    v19 = *(_DWORD *)(v16 + v10);
    if ( v19 == 64 )
    {
      if ( v18 + 40 <= v17 )
      {
        v105 = *(_BYTE *)(v18 + v10 + 9);
        goto LABEL_10;
      }
      goto LABEL_130;
    }
    v83 = v19 - 65;
    if ( v83 )
      break;
    if ( v18 + 56 <= v17 )
      goto LABEL_128;
LABEL_130:
    if ( ++v15 >= v14 )
      goto LABEL_10;
  }
  if ( v83 != 1 || v18 + 40 > v17 )
    goto LABEL_130;
LABEL_128:
  v105 = *(_BYTE *)(v18 + v10 + 9);
LABEL_10:
  if ( (*(_BYTE *)(v10 + 24) & 0xC0) != 0xC0 )
    goto LABEL_11;
  v73 = *(_DWORD *)(v10 + 56);
  v74 = 0LL;
  if ( !v73 )
    goto LABEL_11;
  while ( 1 )
  {
    v84 = *(unsigned int *)(v10 + 4 * v74 + 120);
    if ( (unsigned int)v84 >= 0x80 )
    {
      v85 = *(unsigned int *)(v10 + 16);
      if ( (unsigned int)v84 <= (unsigned int)v85 )
      {
        v86 = v84 + v10;
        if ( *(_DWORD *)(v84 + v10) == 1 && v84 + 24 <= v85 )
          break;
      }
    }
    v74 = (unsigned int)(v74 + 1);
    if ( (unsigned int)v74 >= v73 )
      goto LABEL_11;
  }
  if ( !v86 )
    goto LABEL_11;
  v87 = *(_QWORD *)(v86 + 16);
  if ( !v87 )
    goto LABEL_11;
  v88 = 0;
  v89 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL);
  if ( v89 == 315412 || v89 == 315464 )
    v88 = 1;
  v7 = *(_QWORD *)(v86 + 16);
  if ( v88 )
    v85 = *(unsigned __int8 *)(a2 + 64);
  else
    LOBYTE(v85) = 0;
  result = StorpDataInBufferAllocateMdlAndLockPages(&v111, *(unsigned int *)(v86 + 8), v87, v85);
  if ( (int)result >= 0 )
  {
    v9 = v111;
    goto LABEL_11;
  }
  return result;
}
