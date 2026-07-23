/*
 * XREFs of PiDqQueryApplyObjectEvent @ 0x140763684
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x1407632E0 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1402528A0 (RtlLookupElementGenericTableAvl.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 *     PiDqQueryAddObjectToResultSet @ 0x14061C390 (PiDqQueryAddObjectToResultSet.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x140623674 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDqQueryFreeActiveData @ 0x140623798 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x140624C28 (PiDqQueryActionQueueEntryCreate.c)
 *     PiDqQueryAppendActionEntry @ 0x140624CB4 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryEvaluateFilter @ 0x1406288EC (PiDqQueryEvaluateFilter.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14068FB00 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiDqSameUserHive @ 0x1408A4D28 (PiDqSameUserHive.c)
 */

char __fastcall PiDqQueryApplyObjectEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  int AddObjectToResultSet; // r13d
  char v8; // si
  char v9; // r10
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // eax
  unsigned int v13; // r12d
  unsigned int v14; // r15d
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rax
  unsigned int v18; // r15d
  __int64 v19; // rcx
  unsigned int v20; // r12d
  __int64 v21; // rdi
  __int64 v22; // r8
  __int64 v23; // rdx
  bool v24; // zf
  struct _KTHREAD *CurrentThread; // rax
  bool v26; // r12
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  char v30; // cl
  bool v31; // di
  int v32; // esi
  struct _KTHREAD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  const wchar_t *v38; // rcx
  const wchar_t *v39; // rdx
  __int64 v40; // rcx
  const wchar_t *v41; // rcx
  const wchar_t *v42; // rdx
  unsigned int v43; // r13d
  unsigned int v44; // r12d
  __int64 v45; // r15
  __int64 v46; // rdi
  __int64 v47; // r8
  int v48; // ecx
  __int64 v49; // rcx
  int v50; // eax
  struct _KTHREAD *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  struct _KTHREAD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned int v59; // r15d
  __int64 v60; // rsi
  const wchar_t *i; // rdi
  __int64 v62; // rax
  const wchar_t *v63; // rsi
  __int64 v64; // rax
  int v65; // ecx
  const wchar_t *v66; // rdi
  __int64 v67; // rdx
  struct _KTHREAD *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 *v73; // [rsp+38h] [rbp-18h] BYREF
  __int64 Buffer; // [rsp+40h] [rbp-10h] BYREF
  char v75; // [rsp+98h] [rbp+48h]
  __int64 v76; // [rsp+A0h] [rbp+50h] BYREF
  char v77; // [rsp+A8h] [rbp+58h] BYREF

  v4 = *(_DWORD *)(a2 + 4);
  LODWORD(v76) = 0;
  v73 = 0LL;
  AddObjectToResultSet = 0;
  v75 = 0;
  LOBYTE(a4) = 0;
  v77 = 0;
  v8 = 0;
  v9 = 0;
  if ( (v4 & 3) != 0 || (v4 & 8) == 0 && !*(_DWORD *)(a2 + 76) )
    goto LABEL_25;
  if ( (v4 & 4) != 0 )
  {
    LODWORD(v76) = PiDqSameUserHive(a1 + 32, a2 + 24, &v77, a4);
    if ( (int)v76 < 0 )
      goto LABEL_139;
    v9 = v77;
    LOBYTE(a4) = 0;
  }
  v10 = *(_QWORD *)(a1 + 24);
  v11 = *(_DWORD *)(v10 + 40) & 4;
  if ( (*(_DWORD *)(v10 + 40) & 2) != 0 )
  {
    if ( !v11 )
    {
LABEL_52:
      LOBYTE(AddObjectToResultSet) = 1;
      v75 = 1;
      goto LABEL_13;
    }
    v59 = 0;
    if ( !*(_DWORD *)(a2 + 76) )
      goto LABEL_36;
    while ( 1 )
    {
      v60 = 32LL * v59;
      if ( *(_DWORD *)(v60 + a2 + 100) != 1 || v9 )
      {
        if ( !*(_QWORD *)(v60 + a2 + 104) )
          goto LABEL_52;
        for ( i = *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 56LL); *i; i += v62 + 1 )
        {
          if ( !wcsicmp(*(const wchar_t **)(v60 + a2 + 104), i) )
            goto LABEL_52;
          v62 = -1LL;
          do
            ++v62;
          while ( i[v62] );
        }
      }
      if ( ++v59 >= *(_DWORD *)(a2 + 76) )
        break;
      v9 = v77;
    }
  }
  else
  {
    v12 = *(_DWORD *)(v10 + 64);
    if ( !v11 )
    {
      v13 = 0;
      if ( v12 )
      {
        do
        {
          v14 = 0;
          v15 = *(_QWORD *)(v10 + 72) + 32LL * v13;
          if ( *(_DWORD *)(a2 + 76) )
          {
            while ( 1 )
            {
              v16 = 32LL * v14;
              if ( *(_DWORD *)(v15 + 16) == *(_DWORD *)(v16 + a2 + 96) )
              {
                v37 = *(_QWORD *)v15 - *(_QWORD *)(v16 + a2 + 80);
                if ( *(_QWORD *)v15 == *(_QWORD *)(v16 + a2 + 80) )
                  v37 = *(_QWORD *)(v15 + 8) - *(_QWORD *)(v16 + a2 + 88);
                if ( !v37 && *(_DWORD *)(v15 + 20) == *(_DWORD *)(v16 + a2 + 100) )
                {
                  v38 = *(const wchar_t **)(v15 + 24);
                  v39 = *(const wchar_t **)(v16 + a2 + 104);
                  if ( (v38 == v39 || v38 && v39 && !wcsicmp(v38, v39)) && (*(_DWORD *)(v16 + a2 + 100) != 1 || v77) )
                    break;
                }
              }
              if ( ++v14 >= *(_DWORD *)(a2 + 76) )
                goto LABEL_11;
            }
            LOBYTE(AddObjectToResultSet) = 1;
            v75 = 1;
          }
          else
          {
LABEL_11:
            LOBYTE(AddObjectToResultSet) = v75;
          }
          v10 = *(_QWORD *)(a1 + 24);
          ++v13;
        }
        while ( v13 < *(_DWORD *)(v10 + 64) );
        goto LABEL_13;
      }
LABEL_36:
      LOBYTE(AddObjectToResultSet) = 0;
      goto LABEL_13;
    }
    v43 = 0;
    if ( !v12 )
      goto LABEL_36;
    while ( 1 )
    {
      v44 = 0;
      v45 = *(_QWORD *)(v10 + 72) + 32LL * v43;
      if ( *(_DWORD *)(a2 + 76) )
        break;
LABEL_57:
      v10 = *(_QWORD *)(a1 + 24);
      if ( ++v43 >= *(_DWORD *)(v10 + 64) )
        goto LABEL_74;
      v9 = v77;
    }
    while ( 1 )
    {
      v46 = 32LL * v44;
      if ( *(_DWORD *)(v45 + 16) == *(_DWORD *)(v46 + a2 + 96) )
      {
        v49 = *(_QWORD *)v45 - *(_QWORD *)(v46 + a2 + 80);
        if ( *(_QWORD *)v45 == *(_QWORD *)(v46 + a2 + 80) )
          v49 = *(_QWORD *)(v45 + 8) - *(_QWORD *)(v46 + a2 + 88);
        if ( !v49 )
        {
          v50 = *(_DWORD *)(v46 + a2 + 100);
          if ( *(_DWORD *)(v45 + 20) == v50 && (v50 != 1 || v9) )
          {
            if ( !*(_QWORD *)(v46 + a2 + 104) )
              goto LABEL_52;
            v63 = *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 56LL);
            if ( *v63 )
            {
              while ( wcsicmp(*(const wchar_t **)(v46 + a2 + 104), v63) )
              {
                v64 = -1LL;
                do
                  ++v64;
                while ( v63[v64] );
                v63 += v64 + 1;
                if ( !*v63 )
                {
                  LOBYTE(a4) = v75;
                  goto LABEL_112;
                }
              }
              LOBYTE(a4) = 1;
              v75 = 1;
            }
LABEL_112:
            if ( (_BYTE)a4 )
              break;
          }
        }
      }
      v9 = v77;
      if ( ++v44 >= *(_DWORD *)(a2 + 76) )
        goto LABEL_57;
    }
LABEL_74:
    LOBYTE(AddObjectToResultSet) = v75;
  }
LABEL_13:
  v17 = *(_QWORD *)(a1 + 24);
  if ( !*(_DWORD *)(v17 + 20) && (LODWORD(v17) = *(_DWORD *)(a2 + 4), (v17 & 8) != 0) )
  {
    v8 = 1;
  }
  else
  {
    v18 = 0;
    v8 = 0;
    do
    {
      if ( v18 >= *(_DWORD *)(a2 + 76) )
        break;
      v19 = *(_QWORD *)(a1 + 24);
      v20 = 0;
      v21 = 32LL * v18;
      if ( *(_DWORD *)(v19 + 80) )
      {
        while ( 1 )
        {
          v22 = *(_QWORD *)(v19 + 88);
          v23 = 56LL * v20;
          LODWORD(v17) = *(_DWORD *)(v21 + a2 + 96);
          if ( *(_DWORD *)(v23 + v22 + 24) == (_DWORD)v17 )
          {
            v40 = *(_QWORD *)(v23 + v22 + 8) - *(_QWORD *)(v21 + a2 + 80);
            if ( !v40 )
              v40 = *(_QWORD *)(v23 + v22 + 16) - *(_QWORD *)(v21 + a2 + 88);
            if ( !v40 )
            {
              LODWORD(v17) = *(_DWORD *)(v21 + a2 + 100);
              if ( *(_DWORD *)(v23 + v22 + 28) == (_DWORD)v17 )
              {
                v41 = *(const wchar_t **)(v23 + v22 + 32);
                v42 = *(const wchar_t **)(v21 + a2 + 104);
                if ( v41 == v42 || v41 && v42 && (LODWORD(v17) = wcsicmp(v41, v42), !(_DWORD)v17) )
                {
                  if ( *(_DWORD *)(v21 + a2 + 100) != 1 || v77 )
                    break;
                }
              }
            }
          }
          v19 = *(_QWORD *)(a1 + 24);
          if ( ++v20 >= *(_DWORD *)(v19 + 80) )
            goto LABEL_20;
        }
        v8 = 1;
      }
LABEL_20:
      ++v18;
    }
    while ( !v8 );
  }
  v24 = (_BYTE)AddObjectToResultSet == 0;
  AddObjectToResultSet = v76;
  if ( v24 && !v8 )
  {
LABEL_23:
    if ( AddObjectToResultSet >= 0 )
      return v17;
    goto LABEL_139;
  }
LABEL_25:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
  Buffer = *(_QWORD *)(a2 + 8);
  v26 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 72), &Buffer) != 0LL;
  ExReleasePushLockEx(a1 + 64, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v27, v28, v29);
  LODWORD(v17) = *(_DWORD *)(a2 + 4);
  if ( (v17 & 2) != 0 )
  {
    if ( !v26 )
    {
      v31 = 0;
      v32 = 0;
      goto LABEL_32;
    }
LABEL_87:
    v51 = KeGetCurrentThread();
    v32 = 3;
    v31 = 1;
    --v51->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
    PiDqQueryDeleteObjectFromResultSet(a1, *(void **)(a2 + 8));
    ExReleasePushLockEx(a1 + 64, 0LL);
    LOBYTE(v17) = (unsigned __int8)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v52, v53, v54);
    goto LABEL_32;
  }
  if ( (v17 & 1) == 0 && !v8 )
  {
    v30 = v26;
    goto LABEL_29;
  }
  v47 = *(_QWORD *)(a1 + 24);
  v48 = *(_DWORD *)(v47 + 20);
  if ( !v48 )
  {
    v30 = 1;
LABEL_61:
    LOBYTE(v17) = v30;
    LOBYTE(v76) = v30;
LABEL_62:
    if ( !(_BYTE)v17 )
      goto LABEL_30;
    goto LABEL_63;
  }
  v65 = v48 - 1;
  if ( !v65 )
  {
    v30 = wcsicmp(*(const wchar_t **)(v47 + 24), *(const wchar_t **)(*(_QWORD *)(a2 + 8) + 16LL)) == 0;
    goto LABEL_61;
  }
  if ( v65 != 1 )
    goto LABEL_30;
  v66 = *(const wchar_t **)(v47 + 32);
  v30 = 0;
  LOBYTE(v76) = 0;
  if ( !*v66 )
    goto LABEL_30;
  LOBYTE(v17) = 0;
  while ( !(_BYTE)v17 )
  {
    v30 = wcsicmp(v66, *(const wchar_t **)(*(_QWORD *)(a2 + 8) + 16LL)) == 0;
    v67 = -1LL;
    LOBYTE(v17) = v30;
    LOBYTE(v76) = v30;
    do
      ++v67;
    while ( v66[v67] );
    v66 += v67 + 1;
    if ( !*v66 )
      goto LABEL_62;
  }
LABEL_63:
  v17 = *(_QWORD *)(a1 + 24);
  if ( !*(_DWORD *)(v17 + 20) )
  {
    LODWORD(v17) = PiPnpRtlApplyMandatoryFilters(
                     *(__int64 *)&PiPnpRtlCtx,
                     *(const wchar_t **)(*(_QWORD *)(a2 + 8) + 16LL),
                     *(_DWORD *)(*(_QWORD *)(a2 + 8) + 28LL),
                     0LL,
                     (struct _SECURITY_SUBJECT_CONTEXT *)(a1 + 32),
                     &v76);
    AddObjectToResultSet = v17;
    if ( (_DWORD)v17 == -1073741772 || (_DWORD)v17 == -1073741275 )
    {
      v30 = 0;
      AddObjectToResultSet = 0;
      LOBYTE(v76) = 0;
    }
    else
    {
      v30 = v76;
    }
    if ( AddObjectToResultSet < 0 )
      goto LABEL_139;
  }
  if ( !v30 )
    goto LABEL_30;
  v17 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v17 + 88) )
  {
    LODWORD(v17) = PiDqQueryEvaluateFilter(a1, *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL), (bool *)&v76);
    AddObjectToResultSet = v17;
    if ( (_DWORD)v17 == -1073741772 )
    {
      v30 = 0;
      AddObjectToResultSet = 0;
    }
    else
    {
      v30 = v76;
    }
    if ( AddObjectToResultSet < 0 )
      goto LABEL_139;
  }
LABEL_29:
  if ( v30 )
  {
    if ( v26 )
    {
      v32 = 2;
      v31 = v75 != 0;
    }
    else
    {
      v55 = KeGetCurrentThread();
      v32 = 1;
      --v55->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
      AddObjectToResultSet = PiDqQueryAddObjectToResultSet(a1, *(_QWORD *)(a2 + 8));
      ExReleasePushLockEx(a1 + 64, 0LL);
      LOBYTE(v17) = (unsigned __int8)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v56, v57, v58);
      v31 = 1;
    }
    goto LABEL_32;
  }
LABEL_30:
  if ( v26 )
    goto LABEL_87;
  v31 = 0;
  v32 = 0;
LABEL_32:
  if ( AddObjectToResultSet >= 0 )
  {
    if ( !v31 )
      goto LABEL_23;
    AddObjectToResultSet = PiDqQueryActionQueueEntryCreate(
                             v32,
                             *(_QWORD *)(a2 + 8),
                             (volatile signed __int32 *)a2,
                             &v73);
    if ( AddObjectToResultSet >= 0 )
    {
      v33 = KeGetCurrentThread();
      --v33->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
      PiDqQueryAppendActionEntry(a1, v73);
      ExReleasePushLockEx(a1 + 64, 0LL);
      LOBYTE(v17) = (unsigned __int8)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v34, v35, v36);
      goto LABEL_23;
    }
  }
LABEL_139:
  v68 = KeGetCurrentThread();
  --v68->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
  *(_DWORD *)(a1 + 216) |= 1u;
  PiDqQueryFreeActiveData(a1);
  ExReleasePushLockEx(a1 + 64, 0LL);
  LOBYTE(v17) = (unsigned __int8)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v69, v70, v71);
  return v17;
}
