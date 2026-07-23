/*
 * XREFs of PiDmObjectProcessPropertyChange @ 0x14074A614
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x14074A1D0 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     memcmp @ 0x1403D2B50 (memcmp.c)
 *     PiDmGetObject @ 0x14062B87C (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x14062BC00 (PiDmObjectRelease.c)
 *     PiDmGetCacheKeys @ 0x14062BDAC (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x14062BDFC (PiDmGetCachedKeyIndex.c)
 *     PiDmCacheDataDecode @ 0x14062C23C (PiDmCacheDataDecode.c)
 *     PnpGetObjectProperty @ 0x14062C84C (PnpGetObjectProperty.c)
 *     PiDmCacheDataFree @ 0x14074AA44 (PiDmCacheDataFree.c)
 *     PiDmCacheDataEncode @ 0x14074AA90 (PiDmCacheDataEncode.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x14074ABF0 (PiDmGetReferencedObjectFromProperty.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // r8d
  __int64 *v26; // rdx
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 *v29; // rdi
  struct _KTHREAD *v30; // rax
  __int64 v31; // rdi
  ULONG_PTR v32; // rsi
  int v33; // eax
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  _BYTE v38[12]; // [rsp+68h] [rbp-19h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+74h] [rbp-Dh] BYREF
  unsigned int v40; // [rsp+78h] [rbp-9h] BYREF
  void *Buf2; // [rsp+80h] [rbp-1h] BYREF
  ULONG_PTR v42; // [rsp+88h] [rbp+7h] BYREF
  DEVPROPKEY **v43; // [rsp+90h] [rbp+Fh] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+E8h] [rbp+67h] BYREF
  char v46; // [rsp+F0h] [rbp+6Fh]

  BugCheckParameter2 = a3;
  v6 = a6;
  v43 = 0LL;
  v40 = 0;
  *(_DWORD *)&v38[8] = 0;
  Object = 0;
  *a6 = 0;
  PoolWithTag = 0LL;
  NumberOfBytes_4 = 0;
  v46 = 0;
  Buf2 = 0LL;
  *(_QWORD *)v38 = 0LL;
  v42 = 0LL;
  if ( a4 )
    return;
  PiDmGetCacheKeys(a1, &v43, &v40);
  if ( !v40 )
    return;
  v11 = v43;
  CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v43, v40, a5);
  v13 = CachedKeyIndex;
  if ( CachedKeyIndex >= v14 )
    return;
  if ( !a3 )
  {
    Object = PiDmGetObject(a1, a2, (__int64 *)&BugCheckParameter2);
    if ( Object < 0 )
      return;
    v46 = 1;
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
               (__int64)v38,
               &Buf2,
               &NumberOfBytes_4,
               0x10000);
    if ( Object == -1073741275 )
    {
      Object = 0;
      *(_DWORD *)v38 = 0;
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
  v19 = PiDmCacheDataDecode(v18, &v38[4], 0LL, 0, (unsigned int *)&v38[8]);
  Object = v19;
  if ( v19 == -1073741275 )
  {
    *(_DWORD *)&v38[4] = 0;
    Object = 0;
    v21 = *(_DWORD *)v38 == 0;
  }
  else
  {
    if ( (int)(v19 + 0x80000000) >= 0 && v19 != -1073741789 )
      goto LABEL_34;
    v20 = *(_DWORD *)&v38[8];
    if ( *(_DWORD *)&v38[8] )
    {
      PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)&v38[8], 0x5A706E50u);
      if ( !PoolWithTag )
      {
        Object = -1073741670;
        goto LABEL_34;
      }
    }
    Object = PiDmCacheDataDecode(v18, &v38[4], PoolWithTag, v20, (unsigned int *)&v38[8]);
    if ( Object < 0 || *(_QWORD *)&v38[4] != __PAIR64__(NumberOfBytes_4, *(unsigned int *)v38) )
      goto LABEL_34;
    if ( !*(_DWORD *)&v38[8] )
    {
LABEL_22:
      *v6 = 1;
      goto LABEL_23;
    }
    v21 = memcmp(PoolWithTag, Buf2, *(unsigned int *)&v38[8]) == 0;
  }
  if ( v21 )
    goto LABEL_22;
LABEL_34:
  PiDmCacheDataFree(v18);
  if ( Object >= 0 && LODWORD(v11[v15 + 2]) == 1 && !HIDWORD(v11[v15 + 1]) )
    Object = PiDmCacheDataEncode(*(unsigned int *)v38, Buf2, NumberOfBytes_4, LODWORD(v11[v15 + 1]), 0, v18);
LABEL_23:
  ExReleasePushLockEx(BugCheckParameter2, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v22, v23, v24);
  if ( !LODWORD(v11[v15 + 2]) || *v6 )
    goto LABEL_25;
  v25 = 0;
  v26 = PiDmAggregatedBooleanDefs;
  while ( 1 )
  {
    v27 = v26[1];
    if ( *(_DWORD *)(v27 + 16) == *(_DWORD *)(a5 + 16) )
    {
      v28 = *(_QWORD *)v27 - *(_QWORD *)a5;
      if ( *(_QWORD *)v27 == *(_QWORD *)a5 )
        v28 = *(_QWORD *)(v27 + 8) - *(_QWORD *)(a5 + 8);
      if ( !v28 && a1 == *(_DWORD *)v26 )
        break;
    }
    ++v25;
    v26 += 7;
    if ( v25 >= 3 )
      goto LABEL_25;
  }
  v29 = &PiDmAggregatedBooleanDefs[7 * v25];
  if ( !v29
    || (int)PiDmGetReferencedObjectFromProperty(
              a1,
              a2,
              BugCheckParameter2,
              v27,
              v29[2],
              *((_DWORD *)v29 + 6),
              (__int64)&v42) < 0 )
  {
    goto LABEL_25;
  }
  v30 = KeGetCurrentThread();
  v31 = v29[6];
  v32 = v42;
  --v30->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v42, 0LL);
  if ( Object < 0 || (v33 = *(_DWORD *)(v32 + v31), v33 == 0x80000000) )
  {
    *(_DWORD *)(v32 + v31) = 0x80000000;
    goto LABEL_59;
  }
  if ( *(_DWORD *)&v38[4] != 17 )
    goto LABEL_56;
  if ( LOBYTE(PoolWithTag->Data1) == 0xFF && (*(_DWORD *)v38 != 17 || !*(_BYTE *)Buf2) )
  {
    v34 = v33 - 1;
LABEL_58:
    *(_DWORD *)(v32 + v31) = v34;
    goto LABEL_59;
  }
  if ( !LOBYTE(PoolWithTag->Data1) )
  {
LABEL_56:
    if ( *(_DWORD *)v38 != 17 || *(_BYTE *)Buf2 != 0xFF )
      goto LABEL_59;
    v34 = v33 + 1;
    goto LABEL_58;
  }
LABEL_59:
  ExReleasePushLockEx(v42, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v35, v36, v37);
LABEL_25:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x5A706E50u);
  if ( Buf2 )
    ExFreePoolWithTag(Buf2, 0x5A706E50u);
  if ( v42 )
    PiDmObjectRelease((unsigned int *)v42);
  if ( v46 )
    PiDmObjectRelease((unsigned int *)BugCheckParameter2);
}
