/*
 * XREFs of ExDupHandleTable @ 0x140671090
 * Callers:
 *     ObInitProcess @ 0x14066F6F0 (ObInitProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExLockHandleTableEntry @ 0x140264150 (ExLockHandleTableEntry.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ExUnlockHandleTableEntry @ 0x1405CC440 (ExUnlockHandleTableEntry.c)
 *     ExpFreeHandleTable @ 0x1405D6204 (ExpFreeHandleTable.c)
 *     ExpLookupHandleTableEntry @ 0x14062B830 (ExpLookupHandleTableEntry.c)
 *     ExpDuplicateSingleHandle @ 0x1406714B0 (ExpDuplicateSingleHandle.c)
 *     ExpAllocateHandleTable @ 0x140671618 (ExpAllocateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140671724 (ExpAllocateHandleTableEntrySlow.c)
 *     ExCreateHandleTable @ 0x14069F7F8 (ExCreateHandleTable.c)
 *     ExpUpdateDebugInfo @ 0x1409484D4 (ExpUpdateDebugInfo.c)
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
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // r10d
  __int64 v25; // r11
  unsigned int *v26; // r15
  _DWORD *v27; // r14
  unsigned int v28; // esi
  __int64 v29; // rax
  _QWORD *v30; // rcx
  _QWORD *v31; // rax
  __int64 v33; // r15
  volatile signed __int64 *v34; // r13
  int v35; // eax
  char HandleTableEntrySlow; // al
  unsigned int v37; // edx
  _QWORD *v38; // r8
  unsigned __int64 v39; // rax
  __int64 HandleTable; // rax
  unsigned int v41; // [rsp+40h] [rbp-88h]
  __int64 v42; // [rsp+48h] [rbp-80h]
  unsigned __int64 v43; // [rsp+50h] [rbp-78h]
  __int64 v44; // [rsp+58h] [rbp-70h]
  __int64 v45; // [rsp+60h] [rbp-68h]
  __int64 v46; // [rsp+68h] [rbp-60h]
  __int64 v47; // [rsp+70h] [rbp-58h]
  __int64 v48; // [rsp+D0h] [rbp+8h]
  int v50; // [rsp+E0h] [rbp+18h]

  v48 = a1;
  v5 = *a2;
  v6 = (unsigned int **)a5;
  v43 = v5;
  v8 = a2;
  v9 = (unsigned int)v5;
  *a5 = 0LL;
  if ( a3 )
  {
    if ( (*a4 & 3) == 0 )
    {
      v37 = 1;
      if ( a3 <= 1 )
      {
LABEL_55:
        v39 = *(_QWORD *)&a4[8 * a3 - 8];
        if ( v39 < v9 )
        {
          v9 = v39 + 4;
          goto LABEL_13;
        }
      }
      else
      {
        v38 = a4 + 8;
        while ( (*v38 & 3) == 0 && *v38 > *(_QWORD *)&a4[8 * v37 - 8] )
        {
          ++v37;
          ++v38;
          if ( v37 >= a3 )
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
    while ( (*v13 & 0x40000LL) == 0 )
    {
      if ( (*(v13 - 4) & 0x40000LL) != 0 )
      {
        --v12;
        break;
      }
      if ( (*(v13 - 8) & 0x40000LL) != 0 )
      {
        v12 -= 2;
        break;
      }
      if ( (*(v13 - 12) & 0x40000LL) != 0 )
      {
        v12 -= 3;
        break;
      }
      if ( (*(v13 - 16) & 0x40000LL) != 0 )
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
  a1 = v48;
  v43 = v9;
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
  v47 = (__int64)CurrentThread;
  v44 = *a5;
  v17 = 0;
  v41 = 0;
  v18 = 0LL;
  v50 = 0;
  v19 = (_QWORD *)(*a5 + 72);
  do
  {
    v46 = ExpLookupHandleTableEntry(a2, v18);
    v20 = ExpLookupHandleTableEntry(*v6, v18);
    v26 = *v6;
    v27 = (_DWORD *)(v23 + 16);
    v42 = v20;
    v28 = 1;
    v45 = v20 - v23;
    while ( v17 >= 0 )
    {
      if ( a3 && *(_QWORD *)&a4[8 * v24] != v18 + 4 * v28 )
        goto LABEL_24;
      if ( (*v27 & 0x40000) == 0 )
        goto LABEL_22;
      v33 = 16LL * v28;
      v34 = (volatile signed __int64 *)(v33 + v23);
      if ( !ExLockHandleTableEntry(v25, (signed __int64 *)(v33 + v23)) )
      {
        v17 = v50;
LABEL_22:
        if ( a3 )
        {
          v17 = -1073741811;
          v50 = -1073741811;
        }
LABEL_24:
        v29 = 16LL * v28;
        *v19 = v29 + v42;
        *(_QWORD *)(v44 + 80) = v29 + v42;
        v19 = (_QWORD *)(v29 + v42 + 8);
        *(_QWORD *)((char *)v27 + v45) = 0LL;
        goto LABEL_25;
      }
      if ( (*v27 & 0x40000) == 0 )
      {
        ExUnlockHandleTableEntry((__int64)a2, v34);
        if ( a3 )
        {
          v17 = -1073741811;
          v50 = -1073741811;
        }
        else
        {
          v17 = v50;
        }
        goto LABEL_24;
      }
      v35 = ExpDuplicateSingleHandle(
              v48,
              (unsigned int)v18 + 4 * v28,
              (_DWORD)a2,
              (_DWORD)v34,
              *a5,
              v33 + v42,
              a4 != 0LL);
      v50 = v35;
      v17 = v35;
      if ( v35 < 0 )
        goto LABEL_24;
      if ( v35 == 263 )
      {
        v17 = 0;
        v50 = 0;
        goto LABEL_24;
      }
      v26 = (unsigned int *)*a5;
      ++*(_DWORD *)(*a5 + 88);
      if ( a3 && v41 < a3 - 1 )
        ++v41;
      if ( !*((_QWORD *)v26 + 12) )
      {
        v6 = (unsigned int **)a5;
        goto LABEL_26;
      }
      ExpUpdateDebugInfo(v26, KeGetCurrentThread(), v18 + 4 * v28, 1LL);
LABEL_25:
      v6 = (unsigned int **)a5;
      v26 = (unsigned int *)*a5;
LABEL_26:
      v23 = v46;
      ++v28;
      v24 = v41;
      v27 += 4;
      v25 = (__int64)a2;
      if ( v28 >= 0x100 )
        goto LABEL_27;
    }
    memset((void *)(16LL * v28 + v42), 0, 4096 - 16LL * v28);
LABEL_27:
    v18 += 1024LL;
  }
  while ( v18 < v43 );
  *v19 = 0LL;
  if ( v17 < 0 )
  {
    *((_BYTE *)v26 + 44) |= 4u;
    *((_QWORD *)v26 + 4) = v26 + 6;
    *((_QWORD *)v26 + 3) = v26 + 6;
  }
  else
  {
    v26[23] = v26[22];
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&HandleTableListLock, 0LL);
    v30 = (_QWORD *)qword_140D2DB80;
    v31 = *v6 + 6;
    if ( *(__int64 **)qword_140D2DB80 != &HandleTableListHead )
      __fastfail(3u);
    *v31 = &HandleTableListHead;
    v31[1] = v30;
    *v30 = v31;
    qword_140D2DB80 = (__int64)v31;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&HandleTableListLock);
    KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
    v17 = 0;
  }
  KeLeaveCriticalRegionThread(v47, v21, v22, v23);
  return (unsigned int)v17;
}
