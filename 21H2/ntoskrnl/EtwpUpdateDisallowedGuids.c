/*
 * XREFs of EtwpUpdateDisallowedGuids @ 0x14094180C
 * Callers:
 *     EtwpUpdateDisallowList @ 0x1409345B0 (EtwpUpdateDisallowList.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F92F0 (KeReleaseMutex.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     memcmp @ 0x1403D2B50 (memcmp.c)
 *     qsort @ 0x1403D2C30 (qsort.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     EtwpDisallowedGuidAddition @ 0x140933DD4 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1409340BC (EtwpDisallowedGuidRemoval.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpUpdateDisallowedGuids(
        __int64 a1,
        unsigned __int16 a2,
        const void *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  size_t v7; // r13
  unsigned int v8; // ebx
  char *PoolWithTag; // rax
  char *v12; // r14
  unsigned int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r15
  char *v17; // rdi
  char *v18; // r12
  char *v19; // rsi
  char *v20; // r13
  int v21; // eax
  PVOID *v22; // rax
  PVOID *v23; // rcx
  _QWORD *v24; // r15
  _OWORD *v25; // rax
  PVOID *v26; // rax
  void *v27; // rcx
  PVOID *v28; // rax
  PVOID *v29; // rcx
  _QWORD *v30; // rdi
  _OWORD *v31; // rax
  PVOID *v32; // rax
  volatile signed __int64 *v33; // rdi
  void *v34; // r15
  PVOID *v35; // rax
  _QWORD *v36; // rsi
  void *v37; // rdi
  _DWORD *v38; // rcx
  void **v39; // rax
  PVOID *v40; // rax
  _QWORD *v41; // rsi
  _QWORD *v42; // rax
  _QWORD *v43; // rdi
  _QWORD *v44; // rcx
  PVOID *v45; // rax
  _QWORD *v46; // rdi
  __int64 v47; // rax
  _QWORD *v48; // rcx
  _QWORD *v49; // rdx
  PVOID *v50; // rax
  _QWORD *v51; // rsi
  _DWORD **v52; // rdi
  _DWORD *v53; // rcx
  void **v54; // rax
  PVOID P; // [rsp+30h] [rbp-20h] BYREF
  PVOID *p_P; // [rsp+38h] [rbp-18h]
  PVOID v57; // [rsp+40h] [rbp-10h] BYREF
  PVOID *v58; // [rsp+48h] [rbp-8h]
  struct _KMUTANT *Mutex; // [rsp+A8h] [rbp+58h]

  v7 = a2;
  v8 = 0;
  if ( a2 > 0x200u )
    return 3221225485LL;
  p_P = &P;
  P = &P;
  v58 = &v57;
  v57 = &v57;
  if ( a2 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 16LL * a2, 0x64777445u);
    v12 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_53:
      v8 = -1073741670;
LABEL_54:
      v40 = (PVOID *)P;
      v41 = P;
      while ( v40 != &P )
      {
        v42 = (_QWORD *)*v41;
        v43 = v41;
        v41 = v42;
        if ( (_QWORD *)v42[1] != v43 )
          goto LABEL_69;
        v44 = (_QWORD *)v43[1];
        if ( (_QWORD *)*v44 != v43 )
          goto LABEL_69;
        *v44 = v42;
        v42[1] = v44;
        ExFreePoolWithTag((PVOID)v43[2], 0);
        ExFreePoolWithTag(v43, 0);
        v40 = (PVOID *)P;
      }
      v45 = (PVOID *)v57;
      v46 = v57;
      while ( v45 != &v57 )
      {
        v47 = *v46;
        v48 = v46;
        v46 = (_QWORD *)v47;
        if ( *(_QWORD **)(v47 + 8) != v48 )
          goto LABEL_69;
        v49 = (_QWORD *)v48[1];
        if ( (_QWORD *)*v49 != v48 )
          goto LABEL_69;
        *v49 = v47;
        *(_QWORD *)(v47 + 8) = v49;
        ExFreePoolWithTag(v48, 0);
        v45 = (PVOID *)v57;
      }
      return v8;
    }
    memmove(PoolWithTag, a3, 16 * v7);
    qsort(v12, v7, 0x10uLL, (int (__cdecl *)(const void *, const void *))EtwpCompareGuid);
    v13 = 0;
    if ( (_DWORD)v7 != 1 )
    {
      while ( 1 )
      {
        v14 = 16LL * v13;
        v15 = *(_QWORD *)&v12[v14] - *(_QWORD *)&v12[v14 + 16];
        if ( !v15 )
          v15 = *(_QWORD *)&v12[v14 + 8] - *(_QWORD *)&v12[v14 + 24];
        if ( !v15 )
          break;
        if ( ++v13 >= (int)v7 - 1 )
          goto LABEL_13;
      }
      ExFreePoolWithTag(v12, 0);
      v8 = -1073741811;
      goto LABEL_54;
    }
  }
  else
  {
    v12 = 0LL;
  }
LABEL_13:
  v16 = a1;
  Mutex = (struct _KMUTANT *)(a1 + 648);
  KeWaitForSingleObject((PVOID)(a1 + 648), Executive, 0, 0, 0LL);
  if ( *(_WORD *)(a1 + 1048) )
  {
    v17 = *(char **)(a1 + 1056);
    v18 = &v17[16 * *(unsigned __int16 *)(a1 + 1048)];
  }
  else
  {
    v17 = 0LL;
    v18 = 0LL;
  }
  if ( (_WORD)v7 )
  {
    v19 = v12;
    v20 = &v12[16 * v7];
  }
  else
  {
    v19 = 0LL;
    v20 = 0LL;
  }
  if ( v17 < v18 )
  {
    while ( v19 < v20 )
    {
      v21 = memcmp(v17, v19, 0x10uLL);
      if ( v21 )
      {
        if ( v21 >= 0 )
        {
          v24 = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74777445u);
          if ( !v24 )
            goto LABEL_52;
          v25 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74777445u);
          if ( !v25 )
          {
            v27 = v24;
LABEL_51:
            ExFreePoolWithTag(v27, 0);
            goto LABEL_52;
          }
          *v25 = *(_OWORD *)v19;
          v24[2] = v25;
          v26 = p_P;
          if ( *p_P != &P )
            goto LABEL_69;
          v24[1] = p_P;
          *v24 = &P;
          v19 += 16;
          *v26 = v24;
          p_P = (PVOID *)v24;
        }
        else
        {
          v22 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74777445u);
          if ( !v22 )
            goto LABEL_52;
          v22[2] = v17;
          v23 = v58;
          if ( *v58 != &v57 )
LABEL_69:
            __fastfail(3u);
          v22[1] = v58;
          *v22 = &v57;
          v17 += 16;
          *v23 = v22;
          v58 = v22;
        }
      }
      else
      {
        v17 += 16;
        v19 += 16;
      }
      if ( v17 >= v18 )
      {
LABEL_37:
        v16 = a1;
        goto LABEL_38;
      }
    }
    while ( 1 )
    {
      v28 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74777445u);
      if ( !v28 )
        goto LABEL_52;
      v28[2] = v17;
      v29 = v58;
      if ( *v58 != &v57 )
        goto LABEL_69;
      v28[1] = v58;
      *v28 = &v57;
      v17 += 16;
      *v29 = v28;
      v58 = v28;
      if ( v17 >= v18 )
        goto LABEL_37;
    }
  }
LABEL_38:
  if ( v19 < v20 )
  {
    while ( 1 )
    {
      v30 = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74777445u);
      if ( !v30 )
        break;
      v31 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74777445u);
      if ( !v31 )
      {
        v27 = v30;
        goto LABEL_51;
      }
      *v31 = *(_OWORD *)v19;
      v30[2] = v31;
      v32 = p_P;
      if ( *p_P != &P )
        goto LABEL_69;
      v30[1] = p_P;
      *v30 = &P;
      v19 += 16;
      *v32 = v30;
      p_P = (PVOID *)v30;
      if ( v19 >= v20 )
        goto LABEL_43;
    }
LABEL_52:
    KeReleaseMutex(Mutex, 0);
    goto LABEL_53;
  }
LABEL_43:
  v33 = (volatile signed __int64 *)(v16 + 704);
  ExAcquirePushLockExclusiveEx(v16 + 704, 0LL);
  *(_WORD *)(v16 + 1048) = a2;
  v34 = *(void **)(v16 + 1056);
  *(_QWORD *)(a1 + 1056) = v12;
  if ( (_InterlockedExchangeAdd64(v33, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v33);
  KeAbPostRelease((ULONG_PTR)v33);
  KeReleaseMutex(Mutex, 0);
  v35 = (PVOID *)P;
  v36 = P;
  while ( v35 != &P )
  {
    v37 = v36;
    v36 = (_QWORD *)*v36;
    EtwpDisallowedGuidAddition(*((_DWORD **)v37 + 2), a7);
    v38 = *(_DWORD **)v37;
    if ( *(void **)(*(_QWORD *)v37 + 8LL) != v37 )
      goto LABEL_69;
    v39 = (void **)*((_QWORD *)v37 + 1);
    if ( *v39 != v37 )
      goto LABEL_69;
    *v39 = v38;
    *((_QWORD *)v38 + 1) = v39;
    ExFreePoolWithTag(*((PVOID *)v37 + 2), 0);
    ExFreePoolWithTag(v37, 0);
    v35 = (PVOID *)P;
  }
  v50 = (PVOID *)v57;
  v51 = v57;
  while ( v50 != &v57 )
  {
    v52 = (_DWORD **)v51;
    v51 = (_QWORD *)*v51;
    EtwpDisallowedGuidRemoval(v52[2], a7);
    v53 = *v52;
    if ( *((_DWORD ***)*v52 + 1) != v52 )
      goto LABEL_69;
    v54 = (void **)v52[1];
    if ( *v54 != v52 )
      goto LABEL_69;
    *v54 = v53;
    *((_QWORD *)v53 + 1) = v54;
    ExFreePoolWithTag(v52, 0);
    v50 = (PVOID *)v57;
  }
  if ( v34 )
    ExFreePoolWithTag(v34, 0);
  return v8;
}
