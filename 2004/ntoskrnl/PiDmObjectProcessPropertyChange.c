/*
 * XREFs of PiDmObjectProcessPropertyChange @ 0x140736424
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x140735FE0 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     memcmp @ 0x1403CF3E0 (memcmp.c)
 *     PiDmGetObject @ 0x1405DA3BC (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1405DA740 (PiDmObjectRelease.c)
 *     PiDmGetCacheKeys @ 0x1405DA8EC (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x1405DA93C (PiDmGetCachedKeyIndex.c)
 *     PiDmCacheDataDecode @ 0x1405DAD7C (PiDmCacheDataDecode.c)
 *     PnpGetObjectProperty @ 0x1405DB38C (PnpGetObjectProperty.c)
 *     PiDmCacheDataFree @ 0x140736854 (PiDmCacheDataFree.c)
 *     PiDmCacheDataEncode @ 0x1407368A0 (PiDmCacheDataEncode.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x140736A00 (PiDmGetReferencedObjectFromProperty.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

void __fastcall PiDmObjectProcessPropertyChange(
        unsigned int a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6)
{
  _BYTE *v6; // r15
  int Object; // ebx
  GUID *PoolWithTag; // r12
  DEVPROPKEY **v11; // rsi
  unsigned int CachedKeyIndex; // eax
  __int64 v13; // r14
  unsigned int v14; // edx
  __int64 v15; // rdi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v17; // r14
  int *v18; // r14
  int v19; // eax
  unsigned int v20; // ebx
  bool v21; // zf
  unsigned int v22; // r8d
  __int64 *v23; // rdx
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 *v26; // rdi
  struct _KTHREAD *v27; // rax
  __int64 v28; // rdi
  ULONG_PTR v29; // rsi
  int v30; // eax
  int v31; // eax
  _BYTE v32[12]; // [rsp+68h] [rbp-19h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+74h] [rbp-Dh] BYREF
  unsigned int v34; // [rsp+78h] [rbp-9h] BYREF
  void *Buf2; // [rsp+80h] [rbp-1h] BYREF
  ULONG_PTR v36; // [rsp+88h] [rbp+7h] BYREF
  DEVPROPKEY **v37; // [rsp+90h] [rbp+Fh] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+E8h] [rbp+67h] BYREF
  char v40; // [rsp+F0h] [rbp+6Fh]

  BugCheckParameter2 = a3;
  v6 = a6;
  v37 = 0LL;
  v34 = 0;
  *(_DWORD *)&v32[8] = 0;
  Object = 0;
  *a6 = 0;
  PoolWithTag = 0LL;
  NumberOfBytes_4 = 0;
  v40 = 0;
  Buf2 = 0LL;
  *(_QWORD *)v32 = 0LL;
  v36 = 0LL;
  if ( a4 )
    return;
  PiDmGetCacheKeys(a1, &v37, &v34);
  if ( !v34 )
    return;
  v11 = v37;
  CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v37, v34, a5);
  v13 = CachedKeyIndex;
  if ( CachedKeyIndex >= v14 )
    return;
  if ( !a3 )
  {
    Object = PiDmGetObject(a1, a2, (__int64 *)&BugCheckParameter2);
    if ( Object < 0 )
      return;
    v40 = 1;
  }
  v15 = 3 * v13;
  if ( LODWORD(v11[3 * v13 + 2]) == 1 )
  {
    Object = PnpGetObjectProperty(
               0x5A706E50u,
               0x10uLL,
               a2,
               a1,
               0LL,
               0LL,
               a5,
               (__int64)v32,
               &Buf2,
               &NumberOfBytes_4,
               0x10000);
    if ( Object == -1073741275 )
    {
      Object = 0;
      *(_DWORD *)v32 = 0;
      NumberOfBytes_4 = 0;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v17 = BugCheckParameter2;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  v18 = (int *)(v17 + 8 * v15 + 112);
  if ( !*v18 )
  {
    if ( !LODWORD(v11[v15 + 2]) )
      goto LABEL_23;
    goto LABEL_34;
  }
  if ( *v18 == 1 || Object < 0 || !LODWORD(v11[v15 + 2]) )
    goto LABEL_34;
  v19 = PiDmCacheDataDecode(v18, &v32[4], 0LL, 0, (unsigned int *)&v32[8]);
  Object = v19;
  if ( v19 == -1073741275 )
  {
    *(_DWORD *)&v32[4] = 0;
    Object = 0;
    v21 = *(_DWORD *)v32 == 0;
  }
  else
  {
    if ( (int)(v19 + 0x80000000) >= 0 && v19 != -1073741789 )
      goto LABEL_34;
    v20 = *(_DWORD *)&v32[8];
    if ( *(_DWORD *)&v32[8] )
    {
      PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)&v32[8], 0x5A706E50u);
      if ( !PoolWithTag )
      {
        Object = -1073741670;
        goto LABEL_34;
      }
    }
    Object = PiDmCacheDataDecode(v18, &v32[4], PoolWithTag, v20, (unsigned int *)&v32[8]);
    if ( Object < 0 || *(_QWORD *)&v32[4] != __PAIR64__(NumberOfBytes_4, *(unsigned int *)v32) )
      goto LABEL_34;
    if ( !*(_DWORD *)&v32[8] )
    {
LABEL_22:
      *v6 = 1;
      goto LABEL_23;
    }
    v21 = memcmp(PoolWithTag, Buf2, *(unsigned int *)&v32[8]) == 0;
  }
  if ( v21 )
    goto LABEL_22;
LABEL_34:
  PiDmCacheDataFree(v18);
  if ( Object >= 0 && LODWORD(v11[v15 + 2]) == 1 && !HIDWORD(v11[v15 + 1]) )
    Object = PiDmCacheDataEncode(*(unsigned int *)v32, Buf2, NumberOfBytes_4, LODWORD(v11[v15 + 1]), 0, v18);
LABEL_23:
  ExReleasePushLockEx(BugCheckParameter2, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( !LODWORD(v11[v15 + 2]) || *v6 )
    goto LABEL_25;
  v22 = 0;
  v23 = PiDmAggregatedBooleanDefs;
  while ( 1 )
  {
    v24 = v23[1];
    if ( *(_DWORD *)(v24 + 16) == *(_DWORD *)(a5 + 16) )
    {
      v25 = *(_QWORD *)v24 - *(_QWORD *)a5;
      if ( *(_QWORD *)v24 == *(_QWORD *)a5 )
        v25 = *(_QWORD *)(v24 + 8) - *(_QWORD *)(a5 + 8);
      if ( !v25 && a1 == *(_DWORD *)v23 )
        break;
    }
    ++v22;
    v23 += 7;
    if ( v22 >= 3 )
      goto LABEL_25;
  }
  v26 = &PiDmAggregatedBooleanDefs[7 * v22];
  if ( !v26
    || (int)PiDmGetReferencedObjectFromProperty(
              a1,
              a2,
              BugCheckParameter2,
              v24,
              v26[2],
              *((_DWORD *)v26 + 6),
              (__int64)&v36) < 0 )
  {
    goto LABEL_25;
  }
  v27 = KeGetCurrentThread();
  v28 = v26[6];
  v29 = v36;
  --v27->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v36, 0LL);
  if ( Object < 0 || (v30 = *(_DWORD *)(v29 + v28), v30 == 0x80000000) )
  {
    *(_DWORD *)(v29 + v28) = 0x80000000;
    goto LABEL_59;
  }
  if ( *(_DWORD *)&v32[4] != 17 )
    goto LABEL_56;
  if ( LOBYTE(PoolWithTag->Data1) == 0xFF && (*(_DWORD *)v32 != 17 || !*(_BYTE *)Buf2) )
  {
    v31 = v30 - 1;
LABEL_58:
    *(_DWORD *)(v29 + v28) = v31;
    goto LABEL_59;
  }
  if ( !LOBYTE(PoolWithTag->Data1) )
  {
LABEL_56:
    if ( *(_DWORD *)v32 != 17 || *(_BYTE *)Buf2 != 0xFF )
      goto LABEL_59;
    v31 = v30 + 1;
    goto LABEL_58;
  }
LABEL_59:
  ExReleasePushLockEx(v36, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_25:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x5A706E50u);
  if ( Buf2 )
    ExFreePoolWithTag(Buf2, 0x5A706E50u);
  if ( v36 )
    PiDmObjectRelease((unsigned int *)v36);
  if ( v40 )
    PiDmObjectRelease((unsigned int *)BugCheckParameter2);
}
