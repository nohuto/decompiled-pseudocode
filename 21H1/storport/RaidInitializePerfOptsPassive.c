/*
 * XREFs of RaidInitializePerfOptsPassive @ 0x1C0030790
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C002EAFC (RaidAdapterStartMiniport.c)
 * Callees:
 *     RaidAdapterReleaseStartIoLock @ 0x1C000C4C4 (RaidAdapterReleaseStartIoLock.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C000C4F8 (RaidAdapterAcquireStartIoLock.c)
 *     memset @ 0x1C001B4C0 (memset.c)
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
  unsigned int v23; // edi
  unsigned int v24; // eax
  size_t v25; // r14
  _WORD *v26; // rbx
  unsigned int v27; // eax
  unsigned int v28; // edi
  char *v29; // rax
  char *v30; // r13
  unsigned __int16 v31; // r8
  unsigned int v32; // ebp
  char *v33; // rdx
  unsigned __int16 v34; // r10
  unsigned int v35; // r11d
  unsigned int v36; // r14d
  __int64 v37; // r15
  char v38; // r12
  unsigned __int16 v39; // r9
  USHORT v40; // r12
  struct _GROUP_AFFINITY *v41; // r13
  unsigned int v42; // ecx
  unsigned __int64 Mask; // rdx
  unsigned __int16 v44; // r9
  int v45; // r15d
  unsigned __int16 v46; // r8
  __int64 v47; // rax
  unsigned int v48; // edx
  char v49; // r8
  __int64 v50; // rdi
  int v51; // ecx
  char v52; // r14
  __int64 v53; // r10
  unsigned __int16 v54; // r9
  char v55; // cl
  unsigned int v56; // r8d
  unsigned int v57; // r11d
  int v58; // r9d
  unsigned int v59; // eax
  unsigned int v60; // r8d
  __int64 v61; // r10
  __int64 v62; // rdx
  USHORT v63; // r14
  unsigned int v64; // ebp
  char *v65; // rdi
  unsigned int v66; // ebx
  ULONG v67; // eax
  unsigned int v68; // ebx
  int v69; // r15d
  int v70; // r9d
  unsigned int i; // r8d
  __int64 v72; // r10
  unsigned int v73; // ebx
  ULONG v74; // eax
  unsigned __int16 v75; // r8
  int v76; // r10d
  char *v77; // r12
  unsigned int v78; // r13d
  char *v79; // rdx
  int v80; // r15d
  unsigned int j; // r9d
  __int64 v82; // rdi
  int v83; // ecx
  unsigned int v84; // edx
  signed __int32 v85[8]; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v86; // [rsp+20h] [rbp-78h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+24h] [rbp-74h] BYREF
  unsigned int v88; // [rsp+28h] [rbp-70h]
  unsigned int v89; // [rsp+2Ch] [rbp-6Ch]
  PVOID P; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE v91[4]; // [rsp+38h] [rbp-60h] BYREF
  KIRQL Size; // [rsp+A8h] [rbp+10h]
  size_t Sizea; // [rsp+A8h] [rbp+10h]
  USHORT Sizeb; // [rsp+A8h] [rbp+10h]
  __int16 v96; // [rsp+B0h] [rbp+18h]
  unsigned int v97; // [rsp+B8h] [rbp+20h]

  v1 = *(_WORD *)(a1 + 4804);
  v2 = 0LL;
  v3 = *(_DWORD *)(a1 + 4808);
  ProcNumber = 0;
  v4 = a1;
  *(_QWORD *)&v91[0].OldIrql = 0LL;
  v86 = 0;
  v5 = 0;
  *(_WORD *)(a1 + 4804) = 0;
  v91[0].LockQueue = 0LL;
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
    RaidAdapterAcquireStartIoLock(v4, v91);
    *(_DWORD *)(v4 + 4808) = v3;
    RaidAdapterReleaseStartIoLock(v4, v91);
    v5 = v86;
    v2 = 0LL;
  }
  if ( (v1 & 1) == 0 )
    goto LABEL_6;
  v15 = KeAcquireSpinLockRaiseToDpc(&g_RaidDPCRedirectionInitLock);
  Size = v15;
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
      v4 = a1;
      v5 = v86;
      v15 = Size;
    }
    _InterlockedOr(v85, 0);
    g_RaidPerfRedirectGroupCount = v17;
  }
  *(_WORD *)(v4 + 4804) |= 1u;
  KeReleaseSpinLock(&g_RaidDPCRedirectionInitLock, v15);
  if ( (v1 & 2) == 0 || (v96 = v1 & 0x3FC, (v1 & 0x3FC) == 0) )
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
  v23 = (unsigned __int8)(v1 >> 2);
  v88 = v23;
  v24 = v23 + 281;
  if ( (((_BYTE)v23 + 24) & 1) == 0 )
    v24 = v23 + 280;
  v25 = v24;
  Sizea = v24;
  v26 = ExAllocatePoolWithTag(NonPagedPoolNx, v24, 0x72446152u);
  if ( !v26 )
  {
LABEL_5:
    v5 = -1073741670;
    goto LABEL_6;
  }
  v27 = v23 + 4;
  v28 = v23 + 5;
  if ( (v27 & 1) == 0 )
    v28 = v27;
  v97 = v28;
  v29 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v28 * *(unsigned __int16 *)(v4 + 4806), 0x72446152u);
  P = v29;
  v30 = v29;
  if ( !v29 )
  {
    ExFreePoolWithTag(v26, 0x72446152u);
    goto LABEL_5;
  }
  memset(v29, 0, v28 * *(unsigned __int16 *)(v4 + 4806));
  v31 = 0;
  if ( *(_WORD *)(v4 + 4806) )
  {
    v32 = v28;
    do
    {
      v33 = &v30[v31 * v32];
      v34 = 0;
      v35 = 0;
      v36 = v31 << 6;
      *(_WORD *)v33 = v31;
      do
      {
        v37 = *(_QWORD *)(v4 + 4824);
        v38 = *(_BYTE *)(v36 + v37);
        if ( v38 != -1 )
        {
          v39 = 0;
          if ( v34 )
          {
            while ( v33[v39 + 4] != *(_BYTE *)((v31 << 6) + v35 + v37) )
            {
              if ( ++v39 >= v34 )
                goto LABEL_50;
            }
          }
          else
          {
LABEL_50:
            v33[v34 + 4] = v38;
            ++*((_WORD *)v33 + 1);
            ++v34;
          }
        }
        ++v35;
        ++v36;
      }
      while ( v35 < 0x40 );
      v30 = (char *)P;
      v32 = v28;
      ++v31;
    }
    while ( v31 < *(_WORD *)(v4 + 4806) );
    v5 = v86;
    v25 = Sizea;
  }
  v40 = 0;
  if ( KeQueryHighestNodeNumber() != -1 )
  {
    v41 = (struct _GROUP_AFFINITY *)(v26 + 132);
    v5 = 0;
    do
    {
      memset(v26, 0, v25);
      KeQueryNodeActiveAffinity(v40, v41, v26);
      LOWORD(v42) = *v26;
      if ( *v26 )
      {
        Mask = v41->Mask;
        v44 = 0;
        v45 = 0;
        v46 = 0;
        if ( v41->Mask )
        {
          do
          {
            if ( (Mask & 1) != 0 )
            {
              v47 = v44++;
              *(_DWORD *)&v26[2 * v47 + 2] = v46;
            }
            ++v46;
            Mask >>= 1;
          }
          while ( Mask );
          LOWORD(v42) = *v26;
        }
        v48 = 0;
        if ( (_WORD)v42 )
        {
          do
          {
            v49 = 0;
            v50 = *(_QWORD *)(v4 + 4824);
            v51 = (unsigned __int16)v26[136] << 6;
            v52 = *(_BYTE *)((unsigned int)(v51 + *(_DWORD *)&v26[2 * v48 + 2]) + v50);
            if ( v52 == -1 )
            {
              ++v45;
            }
            else
            {
              v53 = *((unsigned int *)v26 + 65);
              v54 = 0;
              if ( !(_DWORD)v53 )
                goto LABEL_71;
              v55 = *(_BYTE *)((unsigned int)(v51 + *(_DWORD *)&v26[2 * v48 + 2]) + v50);
              do
              {
                if ( v55 == *((_BYTE *)v26 + v54 + 280) )
                  v49 = 1;
                ++v54;
              }
              while ( v54 < (unsigned int)v53 );
              if ( !v49 )
              {
LABEL_71:
                *((_BYTE *)v26 + v53 + 280) = v52;
                ++*((_DWORD *)v26 + 65);
              }
            }
            v42 = (unsigned __int16)*v26;
            ++v48;
          }
          while ( v48 < v42 );
          v25 = Sizea;
        }
        v56 = *((_DWORD *)v26 + 65);
        LOWORD(v57) = 0;
        if ( v56 )
        {
          if ( v45 )
          {
            v58 = 0;
            v59 = (v45 + v56 - 1) / v56;
            v60 = 0;
            if ( (_WORD)v42 )
            {
              do
              {
                v61 = *(_QWORD *)(v4 + 4824);
                v62 = ((unsigned __int16)v26[136] << 6) + *(_DWORD *)&v26[2 * v60 + 2];
                if ( *(_BYTE *)(v62 + v61) == 0xFF )
                {
                  ++v58;
                  *(_BYTE *)(v62 + v61) = *((_BYTE *)v26 + (unsigned __int16)v57 + 280);
                  if ( v58 == v59 )
                  {
                    v58 = 0;
                    v57 = ((unsigned int)(unsigned __int16)v57 + 1) % *((_DWORD *)v26 + 65);
                  }
                }
                ++v60;
              }
              while ( v60 < (unsigned __int16)*v26 );
              v41 = (struct _GROUP_AFFINITY *)(v26 + 132);
            }
          }
        }
      }
      ++v40;
    }
    while ( v40 < (unsigned int)KeQueryHighestNodeNumber() + 1 );
    v30 = (char *)P;
  }
  ExFreePoolWithTag(v26, 0x72446152u);
  v63 = 0;
  Sizeb = 0;
  if ( *(_WORD *)(v4 + 4806) )
  {
    v64 = v97;
    do
    {
      v65 = &v30[v63 * v64];
      if ( *((_WORD *)v65 + 1) )
      {
        v66 = *((unsigned __int16 *)v65 + 1);
        v67 = (v66 + KeQueryActiveProcessorCountEx(v63) - 1) / v66;
        if ( v67 != 1 )
        {
          LOWORD(v68) = 0;
          v69 = v63 << 6;
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
          v64 = v97;
        }
      }
      else
      {
        LOWORD(v73) = 0;
        v74 = KeQueryActiveProcessorCountEx(v63);
        v75 = 0;
        v76 = 0;
        v77 = (char *)P;
        v78 = (v88 + v74 - 1) / v88;
        v89 = v78;
        v79 = (char *)P;
        v80 = v63 << 6;
        for ( j = 0; j < 0x40; ++j )
        {
          v82 = *(_QWORD *)(v4 + 4824);
          if ( *(_BYTE *)(v80 + j + v82) == 0xFF )
          {
            if ( !*((_WORD *)v79 + 1) )
            {
              v83 = (unsigned __int16)v73;
              do
              {
                v84 = (v83 + 1) % (unsigned int)*(unsigned __int16 *)(v4 + 4806);
                v83 = (unsigned __int16)v84;
                LOWORD(v73) = v84;
                v79 = (char *)P + v97 * (unsigned __int16)v84;
              }
              while ( !*((_WORD *)v79 + 1) );
              v4 = a1;
              v77 = (char *)P;
              v64 = v97;
              v78 = v89;
            }
            ++v76;
            *(_BYTE *)(v80 + j + v82) = v79[v75 + 4];
            if ( v76 == v78 )
            {
              ++v75;
              v76 = 0;
              if ( v75 == *((_WORD *)v79 + 1) )
              {
                v73 = ((unsigned int)(unsigned __int16)v73 + 1) % *(unsigned __int16 *)(v4 + 4806);
                v79 = &v77[v64 * v73];
                v75 = 0;
              }
            }
          }
        }
        v63 = Sizeb;
        v30 = (char *)P;
      }
      Sizeb = ++v63;
    }
    while ( v63 < *(_WORD *)(v4 + 4806) );
    v5 = v86;
  }
  ExFreePoolWithTag(v30, 0x72446152u);
  *(_WORD *)(v4 + 4804) = v96 | *(_WORD *)(v4 + 4804) & 0xFC03 | 2;
  return v5;
}
