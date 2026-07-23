/*
 * XREFs of PfSnPrefetchSections @ 0x140675014
 * Callers:
 *     PfSnAsyncPrefetchStep @ 0x140674F94 (PfSnAsyncPrefetchStep.c)
 * Callees:
 *     ExInitializePushLock @ 0x140266E80 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x140267780 (ExWaitForRundownProtectionRelease.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     KeQueryPriorityThread @ 0x14028B7A0 (KeQueryPriorityThread.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1406752C0 (PfSnPrefetchSectionsCleanup.c)
 *     PfSnLogGetReadListsStop @ 0x1406753B0 (PfSnLogGetReadListsStop.c)
 *     PfSnLogGetReadListsStart @ 0x140675428 (PfSnLogGetReadListsStart.c)
 *     MmPrefetchPagesEx @ 0x140685FC4 (MmPrefetchPagesEx.c)
 */

__int64 __fastcall PfSnPrefetchSections(__int64 *a1, WORK_QUEUE_TYPE a2, int a3, __int64 a4, __int64 a5)
{
  int v5; // r15d
  __int64 *v6; // r13
  __int64 v7; // r14
  WORK_QUEUE_TYPE v8; // r12d
  __int64 v9; // rdi
  unsigned int v10; // esi
  __int64 v11; // rbx
  unsigned int v12; // ebx
  unsigned int *v13; // rsi
  int v14; // r14d
  unsigned int *v15; // rsi
  WORK_QUEUE_TYPE v16; // r12d
  __int64 v17; // r13
  int v18; // ebx
  __int64 v19; // r8
  __int64 v21; // rax
  char v22; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v23; // [rsp+40h] [rbp-C8h] BYREF
  int v24; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v25; // [rsp+4Ch] [rbp-BCh] BYREF
  int v26; // [rsp+50h] [rbp-B8h]
  WORK_QUEUE_TYPE QueueType; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v28; // [rsp+60h] [rbp-A8h]
  int v29; // [rsp+68h] [rbp-A0h] BYREF
  WORK_QUEUE_TYPE v30; // [rsp+70h] [rbp-98h]
  int v31; // [rsp+78h] [rbp-90h] BYREF
  WORK_QUEUE_TYPE v32; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v33; // [rsp+88h] [rbp-80h] BYREF
  __int64 v34; // [rsp+90h] [rbp-78h]
  KSPIN_LOCK SpinLock[2]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v36; // [rsp+A8h] [rbp-60h]
  __int128 v37; // [rsp+B8h] [rbp-50h]
  __int64 *v38; // [rsp+C8h] [rbp-40h]
  void *v39; // [rsp+D0h] [rbp-38h]
  __int64 v40; // [rsp+D8h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v42; // [rsp+F8h] [rbp-10h]
  int v43; // [rsp+100h] [rbp-8h]
  int v44; // [rsp+104h] [rbp-4h]
  __int64 v45; // [rsp+108h] [rbp+0h]
  __int64 v46; // [rsp+110h] [rbp+8h]
  __int64 v47; // [rsp+118h] [rbp+10h]
  __int64 v48; // [rsp+120h] [rbp+18h]
  int *v49; // [rsp+128h] [rbp+20h]
  __int64 v50; // [rsp+130h] [rbp+28h]
  WORK_QUEUE_TYPE *p_QueueType; // [rsp+138h] [rbp+30h]
  __int64 v52; // [rsp+140h] [rbp+38h]
  char *v53; // [rsp+148h] [rbp+40h]
  __int64 v54; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+158h] [rbp+50h] BYREF
  __int64 v56; // [rsp+168h] [rbp+60h]
  int v57; // [rsp+170h] [rbp+68h]
  int v58; // [rsp+174h] [rbp+6Ch]
  __int64 v59; // [rsp+178h] [rbp+70h]
  __int64 v60; // [rsp+180h] [rbp+78h]
  __int64 v61; // [rsp+188h] [rbp+80h]
  __int64 v62; // [rsp+190h] [rbp+88h]
  int *v63; // [rsp+198h] [rbp+90h]
  __int64 v64; // [rsp+1A0h] [rbp+98h]
  WORK_QUEUE_TYPE *v65; // [rsp+1A8h] [rbp+A0h]
  __int64 v66; // [rsp+1B0h] [rbp+A8h]
  __int16 *v67; // [rsp+1B8h] [rbp+B0h]
  __int64 v68; // [rsp+1C0h] [rbp+B8h]
  __int64 *v69; // [rsp+1C8h] [rbp+C0h]
  __int64 v70; // [rsp+1D0h] [rbp+C8h]
  unsigned int *v71; // [rsp+1D8h] [rbp+D0h]
  __int64 v72; // [rsp+1E0h] [rbp+D8h]

  v5 = 0;
  v38 = a1;
  v30 = a2;
  v6 = a1;
  v28 = 0;
  v7 = -1LL;
  v26 = a3;
  v8 = a2;
  v34 = a5;
  v9 = *a1;
  v10 = 0;
  v22 = 0;
  v11 = v9;
  QueueType = a2;
  v29 = a3;
  *(_OWORD *)SpinLock = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  if ( v9 && RegHandle && EtwEventEnabled(RegHandle, &PfSnEvt_PrefetchSections_Start) )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( *(_WORD *)(v9 + 16 + 2 * v21) );
    LOWORD(v24) = v21;
    UserData.Ptr = (ULONGLONG)&v24;
    v43 = 2 * (unsigned __int16)v21;
    v42 = v9 + 16;
    v45 = v9 + 76;
    v47 = v9 + 80;
    v49 = &v29;
    p_QueueType = &QueueType;
    v53 = &v22;
    *(_QWORD *)&UserData.Size = 2LL;
    v44 = 0;
    v46 = 4LL;
    v48 = 4LL;
    v50 = 4LL;
    v52 = 4LL;
    v54 = 1LL;
    EtwWrite(RegHandle, &PfSnEvt_PrefetchSections_Start, 0LL, 7u, &UserData);
    v11 = *v6;
  }
  if ( v26 >= 1 << *(_DWORD *)(v11 + 124) )
    goto LABEL_33;
  if ( v8 == CriticalWorkQueue )
    goto LABEL_8;
  if ( v8 != DelayedWorkQueue )
  {
LABEL_33:
    v18 = -1073741811;
    goto LABEL_24;
  }
  v5 = 1;
LABEL_8:
  v12 = *(_DWORD *)(v9 + 88);
  v39 = (void *)v6[8];
  memset(v39, 0, 8LL * v12);
  v13 = (unsigned int *)v6[11];
  memset(v13, 0, 0x600uLL);
  ExInitializePushLock(SpinLock);
  *(_QWORD *)&v36 = v34;
  SpinLock[1] = (KSPIN_LOCK)v6;
  LODWORD(v37) = v12;
  QueueType = KeQueryPriorityThread(KeGetCurrentThread()) + 32;
  if ( v12 > 0x20 )
    v12 = 32;
  PfSnLogGetReadListsStart(v9, v12);
  if ( v12 )
  {
    v14 = v26;
    v15 = v13 + 11;
    v16 = QueueType;
    v17 = v12;
    do
    {
      *(v15 - 1) = v14;
      *(_QWORD *)(v15 - 3) = SpinLock;
      *v15 = v5 | *v15 & 0xFFFFFFFE;
      *(_QWORD *)(v15 - 11) = 0LL;
      *(_QWORD *)(v15 - 7) = PfSnPopulateReadList;
      *(_QWORD *)(v15 - 5) = v15 - 11;
      ExAcquireRundownProtection((PEX_RUNDOWN_REF)SpinLock);
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v15 - 11), v16);
      v15 += 12;
      --v17;
    }
    while ( v17 );
    v8 = v30;
    v7 = -1LL;
    v6 = v38;
  }
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)SpinLock);
  PfSnLogGetReadListsStop(v9);
  v10 = DWORD2(v36);
  v18 = DWORD2(v37);
  if ( (SDWORD2(v37) & 0x80000000) == 0 )
  {
    v28 = DWORD1(v37);
    if ( !DWORD2(v36) )
    {
      v18 = 0;
      goto LABEL_24;
    }
    if ( DWORD1(v37) )
    {
      v18 = MmPrefetchPagesEx(DWORD2(v36), v39, v6 + 13);
      if ( v18 >= 0 && !v6[13] )
        v18 = -2147483622;
    }
    else
    {
      v18 = -1073741823;
    }
  }
  if ( v10 )
  {
    v19 = v10;
    if ( v10 > 0x20 )
      v19 = 32LL;
    PfSnPrefetchSectionsCleanup(v6, v10, v19, v34);
  }
LABEL_24:
  v31 = v26;
  v40 = v28;
  v33 = v10;
  LOBYTE(v23) = 0;
  v32 = v8;
  if ( v9 && RegHandle && EtwEventEnabled(RegHandle, &PfSnEvt_PrefetchSections_Stop) )
  {
    do
      ++v7;
    while ( *(_WORD *)(v9 + 16 + 2 * v7) );
    v56 = v9 + 16;
    v55.Ptr = (ULONGLONG)&v25;
    v25 = v7;
    v57 = 2 * (unsigned __int16)v7;
    *(_QWORD *)&v55.Size = 2LL;
    v59 = v9 + 76;
    v61 = v9 + 80;
    v63 = &v31;
    v65 = &v32;
    v67 = &v23;
    v69 = &v40;
    v71 = &v33;
    v58 = 0;
    v60 = 4LL;
    v62 = 4LL;
    v64 = 4LL;
    v66 = 4LL;
    v68 = 1LL;
    v70 = 8LL;
    v72 = 4LL;
    EtwWrite(RegHandle, &PfSnEvt_PrefetchSections_Stop, 0LL, 9u, &v55);
  }
  return (unsigned int)v18;
}
