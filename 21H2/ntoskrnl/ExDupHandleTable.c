/*
 * XREFs of ExDupHandleTable @ 0x1406A6520
 * Callers:
 *     ObInitProcess @ 0x1406A6448 (ObInitProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExLockHandleTableEntry @ 0x1402F344C (ExLockHandleTableEntry.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExCreateHandleTable @ 0x1406A6378 (ExCreateHandleTable.c)
 *     ExpDuplicateSingleHandle @ 0x1406A6990 (ExpDuplicateSingleHandle.c)
 *     ExpAllocateHandleTable @ 0x1406A6AF8 (ExpAllocateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1406A6C04 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpFreeHandleTable @ 0x1406AC130 (ExpFreeHandleTable.c)
 *     ExpLookupHandleTableEntry @ 0x140733340 (ExpLookupHandleTableEntry.c)
 *     ExpUpdateDebugInfo @ 0x1409F92FC (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ExDupHandleTable(__int64 a1, volatile __int64 *a2, unsigned int a3, _BYTE *a4, __int64 *a5)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdi
  __int64 *v7; // rsi
  _BYTE *v8; // r13
  volatile __int64 *v10; // r10
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  unsigned __int64 v13; // r9
  int v14; // edx
  _DWORD *v15; // rcx
  unsigned int *v16; // rax
  _BYTE *v17; // rcx
  int v18; // r12d
  __int64 *v19; // r15
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // r9d
  __int64 v23; // r10
  __int64 v24; // r11
  _DWORD *v25; // r14
  unsigned int v26; // esi
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rcx
  _QWORD *v31; // rcx
  _QWORD *v32; // rax
  char v33; // al
  __int64 v35; // r13
  int v36; // eax
  __int64 v37; // rcx
  char HandleTableEntrySlow; // al
  unsigned int v39; // edx
  _QWORD *v40; // r8
  unsigned __int64 v41; // rax
  __int64 HandleTable; // rax
  signed __int32 v43[8]; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v44; // [rsp+40h] [rbp-88h]
  unsigned __int64 v45; // [rsp+48h] [rbp-80h]
  volatile signed __int64 *v46; // [rsp+50h] [rbp-78h]
  __int64 v47; // [rsp+58h] [rbp-70h]
  __int64 v48; // [rsp+60h] [rbp-68h]
  __int64 v49; // [rsp+68h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-58h]
  __int64 v51; // [rsp+D0h] [rbp+8h]
  unsigned int v53; // [rsp+E0h] [rbp+18h]

  v51 = a1;
  v5 = *(unsigned int *)a2;
  v6 = 0LL;
  v7 = a5;
  v8 = a4;
  v45 = v5;
  v10 = a2;
  v11 = (unsigned int)v5;
  *a5 = 0LL;
  if ( a3 )
  {
    if ( (*a4 & 3) == 0 )
    {
      v39 = 1;
      if ( a3 <= 1 )
      {
LABEL_54:
        v41 = *(_QWORD *)&a4[8 * a3 - 8];
        if ( v41 < v11 )
        {
          v11 = v41 + 4;
LABEL_13:
          a1 = v51;
          v45 = v11;
          goto LABEL_14;
        }
      }
      else
      {
        v40 = a4 + 8;
        while ( (*v40 & 3) == 0 && *v40 > *(_QWORD *)&a4[8 * v39 - 8] )
        {
          ++v39;
          ++v40;
          if ( v39 >= a3 )
            goto LABEL_54;
        }
      }
    }
    return 3221225485LL;
  }
  if ( (_DWORD)v5 )
  {
    while ( 2 )
    {
      v12 = ExpLookupHandleTableEntry(v10, v11 - 1024);
      v14 = 255;
      v15 = (_DWORD *)(v12 + 4080);
      while ( 1 )
      {
        if ( (*v15 & 0x40000) != 0 )
          goto LABEL_13;
        if ( (*(v15 - 4) & 0x40000) != 0 )
          break;
        if ( (*(v15 - 8) & 0x40000) != 0 )
        {
          v14 -= 2;
          goto LABEL_12;
        }
        if ( (*(v15 - 12) & 0x40000) != 0 )
        {
          v14 -= 3;
          goto LABEL_12;
        }
        if ( (*(v15 - 16) & 0x40000) != 0 )
        {
          v14 -= 4;
          goto LABEL_12;
        }
        v15 -= 20;
        v14 -= 5;
        if ( !v14 )
          goto LABEL_12;
      }
      --v14;
LABEL_12:
      if ( !v14 )
      {
        v11 = v13;
        if ( v13 )
          continue;
      }
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( !v11 )
  {
    HandleTable = ExCreateHandleTable(a1, 1LL);
    *a5 = HandleTable;
    if ( HandleTable )
      return 0LL;
    return 3221225626LL;
  }
  v16 = (unsigned int *)ExpAllocateHandleTable(a1, 0LL);
  *a5 = (__int64)v16;
  v17 = v16;
  if ( !v16 )
    return 3221225626LL;
  if ( *v16 < v11 )
  {
    while ( 1 )
    {
      HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow(v17, 0LL);
      v17 = (_BYTE *)*a5;
      if ( !HandleTableEntrySlow )
        break;
      if ( *(unsigned int *)v17 >= v11 )
        goto LABEL_17;
    }
    ExpFreeHandleTable(v17);
    *a5 = 0LL;
    return 3221225626LL;
  }
LABEL_17:
  v17[44] |= 8u;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v47 = *a5;
  v18 = 0;
  v53 = 0;
  v19 = (__int64 *)(v47 + 72);
  do
  {
    v20 = ExpLookupHandleTableEntry(a2, v6);
    v21 = *v7;
    v49 = v20;
    v44 = ExpLookupHandleTableEntry(v21, v6);
    v25 = (_DWORD *)(v23 + 16);
    v26 = 1;
    v48 = v44 - v23;
    while ( v18 >= 0 )
    {
      if ( a3 && *(_QWORD *)&v8[8 * v22] != v6 + 4 * v26 )
        goto LABEL_23;
      if ( (*v25 & 0x40000) != 0
        && (v35 = 16LL * v26,
            v46 = (volatile signed __int64 *)(v23 + v35),
            ExLockHandleTableEntry(v24, (_QWORD *)(v23 + v35))) )
      {
        if ( (*v25 & 0x40000) == 0 )
        {
          _InterlockedExchangeAdd64(v46, 1uLL);
          _InterlockedOr(v43, 0);
          if ( *((_QWORD *)a2 + 6) )
            ExfUnblockPushLock(a2 + 6, 0LL);
          if ( !a3 )
            goto LABEL_23;
LABEL_66:
          v18 = -1073741811;
          goto LABEL_23;
        }
        v36 = ExpDuplicateSingleHandle(
                v51,
                (unsigned int)v6 + 4 * v26,
                (_DWORD)a2,
                (_DWORD)v46,
                *a5,
                v35 + v44,
                a4 != 0LL);
        v18 = v36;
        if ( v36 >= 0 )
        {
          if ( v36 != 263 )
          {
            v37 = *a5;
            ++*(_DWORD *)(*a5 + 88);
            if ( a3 && v53 < a3 - 1 )
              ++v53;
            if ( *(_QWORD *)(v37 + 96) )
              ExpUpdateDebugInfo(v37, KeGetCurrentThread(), v6 + 4 * v26, 1LL);
            goto LABEL_24;
          }
          v18 = 0;
        }
      }
      else if ( a3 )
      {
        goto LABEL_66;
      }
LABEL_23:
      v27 = 16LL * v26 + v44;
      v28 = v47;
      *v19 = v27;
      *(_QWORD *)(v28 + 80) = v27;
      v19 = (__int64 *)(v27 + 8);
      *(_QWORD *)((char *)v25 + v48) = 0LL;
LABEL_24:
      v22 = v53;
      ++v26;
      v8 = a4;
      v25 += 4;
      v23 = v49;
      v24 = (__int64)a2;
      if ( v26 >= 0x100 )
        goto LABEL_25;
    }
    memset((void *)(16LL * v26 + v44), 0, 4096 - 16LL * v26);
LABEL_25:
    v6 += 1024LL;
    v7 = a5;
  }
  while ( v6 < v45 );
  v29 = (__int64)CurrentThread;
  v30 = *a5;
  *v19 = 0LL;
  if ( v18 < 0 )
  {
    *(_BYTE *)(v30 + 44) |= 4u;
    *(_QWORD *)(v30 + 32) = v30 + 24;
    *(_QWORD *)(v30 + 24) = v30 + 24;
  }
  else
  {
    *(_DWORD *)(v30 + 92) = *(_DWORD *)(v30 + 88);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&HandleTableListLock, 0LL);
    v31 = (_QWORD *)qword_140D3CEB0;
    v32 = (_QWORD *)(*a5 + 24);
    if ( *(__int64 **)qword_140D3CEB0 != &HandleTableListHead )
      __fastfail(3u);
    *v32 = &HandleTableListHead;
    v32[1] = v31;
    *v31 = v32;
    qword_140D3CEB0 = (__int64)v32;
    v33 = _InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v33 & 2) != 0 && (v33 & 4) == 0 )
      ExfTryToWakePushLock(&HandleTableListLock);
    KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
    v18 = 0;
  }
  KiLeaveCriticalRegionUnsafe(v29);
  return (unsigned int)v18;
}
