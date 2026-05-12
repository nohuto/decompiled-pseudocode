/*
 * XREFs of RaidInitializePerfOptsPassive @ 0x1C0031B48
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C002FF18 (RaidAdapterStartMiniport.c)
 * Callees:
 *     RaidAdapterReleaseStartIoLock @ 0x1C000B974 (RaidAdapterReleaseStartIoLock.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C000B9A8 (RaidAdapterAcquireStartIoLock.c)
 *     memset @ 0x1C001F8C0 (memset.c)
 */

__int64 __fastcall RaidInitializePerfOptsPassive(__int64 a1)
{
  unsigned __int16 v1; // bx
  __int64 v2; // r13
  unsigned int v3; // edi
  __int64 v4; // rsi
  unsigned int v5; // ebp
  struct _SLIST_ENTRY *PoolWithTag; // r15
  void *v7; // rcx
  unsigned int v9; // r12d
  __int64 v10; // r13
  PVOID v11; // rax
  __int64 v12; // r14
  unsigned int v13; // r14d
  unsigned int *v14; // r13
  KIRQL v15; // r12
  USHORT ActiveGroupCount; // ax
  unsigned int v17; // r15d
  unsigned __int16 v18; // r14
  __int64 v19; // r12
  unsigned __int8 v20; // si
  ULONG ActiveProcessorCount; // ebp
  __int64 v22; // rdi
  int v23; // r14d
  unsigned int v24; // eax
  size_t v25; // r15
  PUSHORT v26; // rdi
  int v27; // eax
  bool v28; // zf
  int v29; // r14d
  unsigned __int16 v30; // r8
  char *v31; // rbp
  int v32; // ebx
  unsigned __int16 v33; // r9
  unsigned int v34; // r11d
  char *v35; // rdx
  unsigned int v36; // r15d
  __int64 v37; // r12
  char v38; // r13
  unsigned __int16 v39; // r10
  struct _GROUP_AFFINITY *v40; // rbp
  unsigned int v41; // ecx
  unsigned __int64 Mask; // rdx
  unsigned __int16 v43; // r9
  int v44; // r12d
  unsigned __int16 v45; // r8
  __int64 v46; // rax
  unsigned int v47; // edx
  char v48; // r8
  __int64 v49; // r14
  int v50; // ecx
  char v51; // r15
  __int64 v52; // r10
  unsigned __int16 v53; // r9
  char v54; // cl
  unsigned int v55; // r8d
  unsigned int v56; // r11d
  int v57; // r9d
  unsigned int v58; // eax
  unsigned int v59; // r8d
  __int64 v60; // r10
  __int64 v61; // rdx
  USHORT v62; // r15
  char *v63; // r13
  int v64; // ebx
  char *v65; // r14
  unsigned int v66; // edi
  ULONG v67; // eax
  unsigned int v68; // edi
  int v69; // r12d
  int v70; // r9d
  unsigned int i; // r8d
  __int64 v72; // r10
  unsigned int v73; // r14d
  unsigned int v74; // edi
  ULONG v75; // eax
  int v76; // r12d
  unsigned __int16 v77; // r8
  int v78; // r10d
  unsigned int v79; // r9d
  char *v80; // rdx
  int v81; // ebp
  __int64 v82; // rdi
  int v83; // ecx
  unsigned int v84; // edx
  signed __int32 v85[8]; // [rsp+0h] [rbp-A8h] BYREF
  unsigned int v86; // [rsp+20h] [rbp-88h]
  PUSHORT Count; // [rsp+28h] [rbp-80h]
  unsigned int v88; // [rsp+30h] [rbp-78h]
  PVOID P; // [rsp+38h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE v90[4]; // [rsp+40h] [rbp-68h] BYREF
  size_t Sizea; // [rsp+B0h] [rbp+8h]
  USHORT Sizeb; // [rsp+B0h] [rbp+8h]
  KIRQL v94; // [rsp+B8h] [rbp+10h]
  int v95; // [rsp+B8h] [rbp+10h]
  unsigned __int16 v96; // [rsp+C0h] [rbp+18h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+C8h] [rbp+20h] BYREF

  v1 = *(_WORD *)(a1 + 4804);
  v2 = 0LL;
  v3 = *(_DWORD *)(a1 + 4808);
  ProcNumber = 0;
  memset(v90, 0, 24);
  v86 = 0;
  v4 = a1;
  v96 = v1;
  v5 = 0;
  *(_WORD *)(a1 + 4804) = 0;
  if ( (int)v3 < 1 )
    v3 = -v3;
  *(_DWORD *)(a1 + 4808) = 1;
  if ( v3 > 1 )
  {
    PoolWithTag = (struct _SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 32LL * v3, 0x54436152u);
    if ( !PoolWithTag )
      goto LABEL_5;
    v9 = KeQueryHighestNodeNumber() + 1;
    v10 = v9;
    v11 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, (unsigned __int64)v9 << 6, 0x54436152u);
    *(_QWORD *)(v4 + 4816) = v11;
    if ( !v11 )
      goto LABEL_5;
    if ( v9 )
    {
      v12 = 0LL;
      do
      {
        InitializeSListHead((PSLIST_HEADER)(v12 + *(_QWORD *)(v4 + 4816)));
        v12 += 64LL;
        --v10;
      }
      while ( v10 );
    }
    v13 = 0;
    v14 = (unsigned int *)&PoolWithTag[1].Next + 1;
    do
    {
      *v14 = v13;
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*(_QWORD *)(v4 + 4816) + ((unsigned __int64)(v13 % v9) << 6)),
        PoolWithTag);
      ++v13;
      v14 += 8;
      PoolWithTag += 2;
    }
    while ( v13 < v3 );
    RaidAdapterAcquireStartIoLock(v4, v90);
    *(_DWORD *)(v4 + 4808) = v3;
    RaidAdapterReleaseStartIoLock(v4, v90);
    v2 = 0LL;
  }
  if ( (v1 & 1) == 0 )
    goto LABEL_6;
  v15 = KeAcquireSpinLockRaiseToDpc(&g_RaidDPCRedirectionInitLock);
  v94 = v15;
  if ( _InterlockedIncrement(&g_RaidPerfRedirectRefCount) == 1 )
  {
    ActiveGroupCount = KeQueryActiveGroupCount();
    v17 = ActiveGroupCount;
    g_RaidPerProcessorState = ExAllocatePoolWithTag(
                                NonPagedPoolNx,
                                (unsigned __int64)ActiveGroupCount << 13,
                                0x72446152u);
    if ( !g_RaidPerProcessorState
      || (g_RaidDPCRedirectionProcessors = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * v17, 0x72446152u)) == 0LL )
    {
      if ( _InterlockedExchangeAdd(&g_RaidPerfRedirectRefCount, 0xFFFFFFFF) == 1 )
      {
        if ( g_RaidPerProcessorState )
        {
          ExFreePoolWithTag(g_RaidPerProcessorState, 0x72446152u);
          g_RaidPerProcessorState = 0LL;
        }
        if ( g_RaidDPCRedirectionProcessors )
        {
          ExFreePoolWithTag(g_RaidDPCRedirectionProcessors, 0x72446152u);
          g_RaidDPCRedirectionProcessors = 0LL;
        }
        g_RaidPerfRedirectGroupCount = 0;
      }
      KeReleaseSpinLock(&g_RaidDPCRedirectionInitLock, v15);
      goto LABEL_5;
    }
    v18 = 0;
    if ( (_WORD)v17 )
    {
      v19 = 0LL;
      do
      {
        ProcNumber.Group = v18;
        ProcNumber.Reserved = 0;
        v20 = 0;
        ActiveProcessorCount = KeQueryActiveProcessorCountEx(v18);
        if ( ActiveProcessorCount )
        {
          do
          {
            ProcNumber.Number = v20;
            v22 = (v2 + v20) << 7;
            KeInitializeDpc(
              (PRKDPC)((char *)g_RaidPerProcessorState + v22),
              (PKDEFERRED_ROUTINE)RaidpAdapterRedirectDpcRoutine,
              (char *)g_RaidPerProcessorState + v22);
            KeSetImportanceDpc((PRKDPC)((char *)g_RaidPerProcessorState + v22), MediumHighImportance);
            KeSetTargetProcessorDpcEx((PKDPC)((char *)g_RaidPerProcessorState + v22), &ProcNumber);
            InitializeSListHead((PSLIST_HEADER)((char *)g_RaidPerProcessorState + v22 + 64));
            ++v20;
            *(_DWORD *)((char *)g_RaidPerProcessorState + v22 + 80) = 0;
          }
          while ( v20 < ActiveProcessorCount );
        }
        ++v18;
        v2 += 64LL;
        *(_DWORD *)((char *)g_RaidDPCRedirectionProcessors + v19) = ActiveProcessorCount;
        v19 += 4LL;
      }
      while ( v18 < (unsigned __int16)v17 );
      LOWORD(v2) = 0;
      v4 = a1;
      v5 = v86;
      v15 = v94;
    }
    _InterlockedOr(v85, 0);
    g_RaidPerfRedirectGroupCount = v17;
  }
  *(_WORD *)(v4 + 4804) |= 1u;
  KeReleaseSpinLock(&g_RaidDPCRedirectionInitLock, v15);
  if ( (v1 & 2) == 0 || (v1 & 0xFFFC) == 0 )
  {
LABEL_6:
    v7 = *(void **)(v4 + 4824);
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0x72446152u);
      *(_QWORD *)(v4 + 4824) = 0LL;
      *(_WORD *)(v4 + 4806) = 0;
    }
    return v5;
  }
  v88 = v1;
  v23 = v1 >> 2;
  v24 = v23 + 281;
  if ( (((_BYTE)v23 + 24) & 1) == 0 )
    v24 = v23 + 280;
  v25 = v24;
  Sizea = v24;
  Count = (PUSHORT)ExAllocatePoolWithTag(NonPagedPoolNx, v24, 0x72446152u);
  v26 = Count;
  if ( !Count )
  {
LABEL_5:
    v5 = -1073741670;
    goto LABEL_6;
  }
  v27 = v23 + 4;
  v28 = (((_BYTE)v23 + 4) & 1) == 0;
  v29 = v23 + 5;
  if ( v28 )
    v29 = v27;
  v95 = v29;
  P = ExAllocatePoolWithTag(NonPagedPoolNx, v29 * (unsigned int)*(unsigned __int16 *)(v4 + 4806), 0x72446152u);
  if ( !P )
  {
    ExFreePoolWithTag(v26, 0x72446152u);
    goto LABEL_5;
  }
  memset(P, 0, v29 * (unsigned int)*(unsigned __int16 *)(v4 + 4806));
  v30 = 0;
  if ( *(_WORD *)(v4 + 4806) )
  {
    v31 = (char *)P;
    v32 = v29;
    do
    {
      v33 = 0;
      v34 = 0;
      v35 = &v31[v30 * v32];
      v36 = v30 << 6;
      *(_WORD *)v35 = v30;
      do
      {
        v37 = *(_QWORD *)(v4 + 4824);
        v38 = *(_BYTE *)(v36 + v37);
        if ( v38 != -1 )
        {
          v39 = 0;
          if ( v33 )
          {
            while ( v35[v39 + 4] != *(_BYTE *)((v30 << 6) + v34 + v37) )
            {
              if ( ++v39 >= v33 )
                goto LABEL_50;
            }
          }
          else
          {
LABEL_50:
            v35[v33 + 4] = v38;
            ++*((_WORD *)v35 + 1);
            ++v33;
          }
        }
        ++v34;
        ++v36;
      }
      while ( v34 < 0x40 );
      v32 = v29;
      ++v30;
    }
    while ( v30 < *(_WORD *)(v4 + 4806) );
    v1 = v96;
    LOWORD(v2) = 0;
    v26 = Count;
    v5 = v86;
    v25 = Sizea;
  }
  if ( KeQueryHighestNodeNumber() != -1 )
  {
    v40 = (struct _GROUP_AFFINITY *)(v26 + 132);
    do
    {
      memset(v26, 0, v25);
      KeQueryNodeActiveAffinity(v2, v40, v26);
      LOWORD(v41) = *v26;
      if ( *v26 )
      {
        Mask = v40->Mask;
        v43 = 0;
        v44 = 0;
        v45 = 0;
        if ( v40->Mask )
        {
          do
          {
            if ( (Mask & 1) != 0 )
            {
              v46 = v43++;
              *(_DWORD *)&v26[2 * v46 + 2] = v45;
            }
            ++v45;
            Mask >>= 1;
          }
          while ( Mask );
          LOWORD(v41) = *v26;
        }
        v47 = 0;
        if ( (_WORD)v41 )
        {
          do
          {
            v48 = 0;
            v49 = *(_QWORD *)(v4 + 4824);
            v50 = v26[136] << 6;
            v51 = *(_BYTE *)((unsigned int)(v50 + *(_DWORD *)&v26[2 * v47 + 2]) + v49);
            if ( v51 == -1 )
            {
              ++v44;
            }
            else
            {
              v52 = *((unsigned int *)v26 + 65);
              v53 = 0;
              if ( !(_DWORD)v52 )
                goto LABEL_71;
              v54 = *(_BYTE *)((unsigned int)(v50 + *(_DWORD *)&v26[2 * v47 + 2]) + v49);
              do
              {
                if ( v54 == *((_BYTE *)v26 + v53 + 280) )
                  v48 = 1;
                ++v53;
              }
              while ( v53 < (unsigned int)v52 );
              if ( !v48 )
              {
LABEL_71:
                *((_BYTE *)v26 + v52 + 280) = v51;
                ++*((_DWORD *)v26 + 65);
              }
            }
            v41 = *v26;
            ++v47;
          }
          while ( v47 < v41 );
          v25 = Sizea;
        }
        v55 = *((_DWORD *)v26 + 65);
        LOWORD(v56) = 0;
        if ( v55 )
        {
          if ( v44 )
          {
            v57 = 0;
            v58 = (v55 + v44 - 1) / v55;
            v59 = 0;
            if ( (_WORD)v41 )
            {
              do
              {
                v60 = *(_QWORD *)(v4 + 4824);
                v61 = (v26[136] << 6) + *(_DWORD *)&v26[2 * v59 + 2];
                if ( *(_BYTE *)(v61 + v60) == 0xFF )
                {
                  ++v57;
                  *(_BYTE *)(v61 + v60) = *((_BYTE *)v26 + (unsigned __int16)v56 + 280);
                  if ( v57 == v58 )
                  {
                    v57 = 0;
                    v56 = ((unsigned int)(unsigned __int16)v56 + 1) % *((_DWORD *)v26 + 65);
                  }
                }
                ++v59;
              }
              while ( v59 < *v26 );
              v40 = (struct _GROUP_AFFINITY *)(v26 + 132);
            }
          }
        }
      }
      LOWORD(v2) = v2 + 1;
    }
    while ( (unsigned __int16)v2 < (unsigned int)KeQueryHighestNodeNumber() + 1 );
    v1 = v96;
    v5 = v86;
  }
  ExFreePoolWithTag(v26, 0x72446152u);
  v62 = 0;
  Sizeb = 0;
  if ( *(_WORD *)(v4 + 4806) )
  {
    v63 = (char *)P;
    v64 = v95;
    do
    {
      v65 = &v63[v62 * v64];
      if ( *((_WORD *)v65 + 1) )
      {
        v66 = *((unsigned __int16 *)v65 + 1);
        v67 = (v66 + KeQueryActiveProcessorCountEx(v62) - 1) / v66;
        if ( v67 != 1 )
        {
          LOWORD(v68) = 0;
          v69 = v62 << 6;
          v70 = 0;
          for ( i = 0; i < 0x40; ++i )
          {
            v72 = *(_QWORD *)(v4 + 4824);
            if ( *(_BYTE *)(v69 + i + v72) == 0xFF )
            {
              ++v70;
              *(_BYTE *)(v69 + i + v72) = v65[(unsigned __int16)v68 + 4];
              if ( v70 == v67 - 1 )
              {
                v70 = 0;
                v68 = ((unsigned int)(unsigned __int16)v68 + 1) % *((unsigned __int16 *)v65 + 1);
              }
            }
          }
          v64 = v95;
        }
      }
      else
      {
        LOWORD(v73) = 0;
        v74 = v88 >> 2;
        v75 = KeQueryActiveProcessorCountEx(v62);
        v76 = v62 << 6;
        v77 = 0;
        v78 = 0;
        v79 = 0;
        v80 = v63;
        LODWORD(Count) = (v74 + v75 - 1) / v74;
        v81 = (int)Count;
        do
        {
          v82 = *(_QWORD *)(v4 + 4824);
          if ( *(_BYTE *)(v76 + v79 + v82) == 0xFF )
          {
            if ( !*((_WORD *)v80 + 1) )
            {
              v83 = (unsigned __int16)v73;
              do
              {
                v84 = (v83 + 1) % (unsigned int)*(unsigned __int16 *)(v4 + 4806);
                v83 = (unsigned __int16)v84;
                LOWORD(v73) = v84;
                v80 = (char *)P + v64 * (unsigned int)(unsigned __int16)v84;
              }
              while ( !*((_WORD *)v80 + 1) );
              v81 = (int)Count;
              v63 = (char *)P;
            }
            *(_BYTE *)(v76 + v79 + v82) = v80[v77 + 4];
            if ( ++v78 == v81 )
            {
              ++v77;
              v78 = 0;
              if ( v77 == *((_WORD *)v80 + 1) )
              {
                v77 = 0;
                v73 = ((unsigned int)(unsigned __int16)v73 + 1) % *(unsigned __int16 *)(v4 + 4806);
                v80 = &v63[v64 * v73];
              }
            }
          }
          ++v79;
        }
        while ( v79 < 0x40 );
        v62 = Sizeb;
      }
      Sizeb = ++v62;
    }
    while ( v62 < *(_WORD *)(v4 + 4806) );
    v1 = v96;
    v5 = v86;
  }
  ExFreePoolWithTag(P, 0x72446152u);
  *(_WORD *)(v4 + 4804) = *(_WORD *)(v4 + 4804) & 1 | v1 & 0xFFFE | 2;
  return v5;
}
