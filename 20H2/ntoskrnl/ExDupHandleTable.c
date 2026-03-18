/*
 * XREFs of ExDupHandleTable @ 0x1406F5040
 * Callers:
 *     ObInitProcess @ 0x1406301EC (ObInitProcess.c)
 * Callees:
 *     ExLockHandleTableEntry @ 0x14021E890 (ExLockHandleTableEntry.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     memset @ 0x140411300 (memset.c)
 *     ExUnlockHandleTableEntry @ 0x1405D3CD0 (ExUnlockHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x140611EF0 (ExpLookupHandleTableEntry.c)
 *     ExpFreeHandleTable @ 0x140631954 (ExpFreeHandleTable.c)
 *     ExCreateHandleTable @ 0x1406F4004 (ExCreateHandleTable.c)
 *     ExpDuplicateSingleHandle @ 0x1406F5460 (ExpDuplicateSingleHandle.c)
 *     ExpAllocateHandleTable @ 0x1406F55C8 (ExpAllocateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1406F56D4 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpUpdateDebugInfo @ 0x14094F634 (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ExDupHandleTable(__int64 a1, unsigned int *a2, unsigned int a3, _BYTE *a4, __int64 *a5)
{
  unsigned __int64 v5; // rax
  unsigned int **v6; // rbx
  unsigned int *v8; // r10
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  unsigned __int64 v11; // r9
  int v12; // edx
  _DWORD *v13; // rcx
  unsigned int *v14; // rax
  unsigned int *v15; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  int v17; // r13d
  unsigned __int64 v18; // rdi
  _QWORD *v19; // r12
  __int64 v20; // rax
  __int64 v21; // r9
  unsigned int v22; // r10d
  __int64 v23; // r11
  unsigned int *v24; // r15
  _DWORD *v25; // r14
  unsigned int v26; // esi
  __int64 v27; // rax
  _QWORD *v28; // rcx
  _QWORD *v29; // rax
  __int64 v31; // r15
  volatile signed __int64 *v32; // r13
  int v33; // eax
  char HandleTableEntrySlow; // al
  unsigned int v35; // edx
  _QWORD *v36; // r8
  unsigned __int64 v37; // rax
  __int64 HandleTable; // rax
  unsigned int v39; // [rsp+40h] [rbp-88h]
  __int64 v40; // [rsp+48h] [rbp-80h]
  unsigned __int64 v41; // [rsp+50h] [rbp-78h]
  __int64 v42; // [rsp+58h] [rbp-70h]
  __int64 v43; // [rsp+60h] [rbp-68h]
  __int64 v44; // [rsp+68h] [rbp-60h]
  __int64 v45; // [rsp+70h] [rbp-58h]
  __int64 v46; // [rsp+D0h] [rbp+8h]
  int v48; // [rsp+E0h] [rbp+18h]

  v46 = a1;
  v5 = *a2;
  v6 = (unsigned int **)a5;
  v41 = v5;
  v8 = a2;
  v9 = (unsigned int)v5;
  *a5 = 0LL;
  if ( a3 )
  {
    if ( (*a4 & 3) == 0 )
    {
      v35 = 1;
      if ( a3 <= 1 )
      {
LABEL_55:
        v37 = *(_QWORD *)&a4[8 * a3 - 8];
        if ( v37 < v9 )
        {
          v9 = v37 + 4;
          goto LABEL_13;
        }
      }
      else
      {
        v36 = a4 + 8;
        while ( (*v36 & 3) == 0 && *v36 > *(_QWORD *)&a4[8 * v35 - 8] )
        {
          ++v35;
          ++v36;
          if ( v35 >= a3 )
            goto LABEL_55;
        }
      }
    }
    return 3221225485LL;
  }
  if ( !(_DWORD)v5 )
    goto LABEL_14;
  do
  {
    v10 = ExpLookupHandleTableEntry(v8, v9 - 1024);
    v12 = 255;
    v13 = (_DWORD *)(v10 + 4080);
    while ( (*v13 & 0x40000) == 0 )
    {
      if ( (*(v13 - 4) & 0x40000) != 0 )
      {
        --v12;
        break;
      }
      if ( (*(v13 - 8) & 0x40000) != 0 )
      {
        v12 -= 2;
        break;
      }
      if ( (*(v13 - 12) & 0x40000) != 0 )
      {
        v12 -= 3;
        break;
      }
      if ( (*(v13 - 16) & 0x40000) != 0 )
      {
        v12 -= 4;
        break;
      }
      v13 -= 20;
      v12 -= 5;
      if ( !v12 )
        break;
    }
    if ( v12 )
      break;
    v9 = v11;
  }
  while ( v11 );
LABEL_13:
  a1 = v46;
  v41 = v9;
LABEL_14:
  if ( !v9 )
  {
    HandleTable = ExCreateHandleTable(a1, 1LL);
    *a5 = HandleTable;
    if ( HandleTable )
      return 0LL;
    return 3221225626LL;
  }
  v14 = (unsigned int *)ExpAllocateHandleTable(a1, 0LL);
  *a5 = (__int64)v14;
  v15 = v14;
  if ( !v14 )
    return 3221225626LL;
  if ( *v14 < v9 )
  {
    while ( 1 )
    {
      HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow(v15, 0LL);
      v15 = (unsigned int *)*a5;
      if ( !HandleTableEntrySlow )
        break;
      if ( *v15 >= v9 )
        goto LABEL_17;
    }
    ExpFreeHandleTable(v15);
    *a5 = 0LL;
    return 3221225626LL;
  }
LABEL_17:
  *((_BYTE *)v15 + 44) |= 8u;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v45 = (__int64)CurrentThread;
  v42 = *a5;
  v17 = 0;
  v39 = 0;
  v18 = 0LL;
  v48 = 0;
  v19 = (_QWORD *)(*a5 + 72);
  do
  {
    v44 = ExpLookupHandleTableEntry(a2, v18);
    v20 = ExpLookupHandleTableEntry(*v6, v18);
    v24 = *v6;
    v25 = (_DWORD *)(v21 + 16);
    v40 = v20;
    v26 = 1;
    v43 = v20 - v21;
    while ( v17 >= 0 )
    {
      if ( a3 && *(_QWORD *)&a4[8 * v22] != v18 + 4 * v26 )
        goto LABEL_24;
      if ( (*v25 & 0x40000) == 0 )
        goto LABEL_22;
      v31 = 16LL * v26;
      v32 = (volatile signed __int64 *)(v31 + v21);
      if ( !ExLockHandleTableEntry(v23, (signed __int64 *)(v31 + v21)) )
      {
        v17 = v48;
LABEL_22:
        if ( a3 )
        {
          v17 = -1073741811;
          v48 = -1073741811;
        }
LABEL_24:
        v27 = 16LL * v26;
        *v19 = v27 + v40;
        *(_QWORD *)(v42 + 80) = v27 + v40;
        v19 = (_QWORD *)(v27 + v40 + 8);
        *(_QWORD *)((char *)v25 + v43) = 0LL;
        goto LABEL_25;
      }
      if ( (*v25 & 0x40000) == 0 )
      {
        ExUnlockHandleTableEntry((__int64)a2, v32);
        if ( a3 )
        {
          v17 = -1073741811;
          v48 = -1073741811;
        }
        else
        {
          v17 = v48;
        }
        goto LABEL_24;
      }
      v33 = ExpDuplicateSingleHandle(
              v46,
              (unsigned int)v18 + 4 * v26,
              (_DWORD)a2,
              (_DWORD)v32,
              *a5,
              v31 + v40,
              a4 != 0LL);
      v48 = v33;
      v17 = v33;
      if ( v33 < 0 )
        goto LABEL_24;
      if ( v33 == 263 )
      {
        v17 = 0;
        v48 = 0;
        goto LABEL_24;
      }
      v24 = (unsigned int *)*a5;
      ++*(_DWORD *)(*a5 + 88);
      if ( a3 && v39 < a3 - 1 )
        ++v39;
      if ( !*((_QWORD *)v24 + 12) )
      {
        v6 = (unsigned int **)a5;
        goto LABEL_26;
      }
      ExpUpdateDebugInfo(v24, KeGetCurrentThread(), v18 + 4 * v26, 1LL);
LABEL_25:
      v6 = (unsigned int **)a5;
      v24 = (unsigned int *)*a5;
LABEL_26:
      v21 = v44;
      ++v26;
      v22 = v39;
      v25 += 4;
      v23 = (__int64)a2;
      if ( v26 >= 0x100 )
        goto LABEL_27;
    }
    memset((void *)(16LL * v26 + v40), 0, 4096 - 16LL * v26);
LABEL_27:
    v18 += 1024LL;
  }
  while ( v18 < v41 );
  *v19 = 0LL;
  if ( v17 < 0 )
  {
    *((_BYTE *)v24 + 44) |= 4u;
    *((_QWORD *)v24 + 4) = v24 + 6;
    *((_QWORD *)v24 + 3) = v24 + 6;
  }
  else
  {
    v24[23] = v24[22];
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&HandleTableListLock, 0LL);
    v28 = (_QWORD *)qword_140D2EB48;
    v29 = *v6 + 6;
    if ( *(__int64 **)qword_140D2EB48 != &HandleTableListHead )
      __fastfail(3u);
    *v29 = &HandleTableListHead;
    v29[1] = v28;
    *v28 = v29;
    qword_140D2EB48 = (__int64)v29;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&HandleTableListLock);
    KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
    v17 = 0;
  }
  KeLeaveCriticalRegionThread(v45);
  return (unsigned int)v17;
}
