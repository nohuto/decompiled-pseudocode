/*
 * XREFs of VidSchInitializeAdapter @ 0x1C0090A50
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$01$0DAGBGJFG@@@QEAAPEA_KI@Z @ 0x1C00171A0 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$01$0DAGBGJFG@@@QEAAPEA_KI@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@U_VIDSCH_INDEPENDENT_FLIP_STATE@@$00$0DJGBGJFG@@@QEAAPEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@I@Z @ 0x1C001722C (-AllocateElements@-$NonPagedPoolZeroedArray@U_VIDSCH_INDEPENDENT_FLIP_STATE@@$00$0DJGBGJFG@@@QEA.c)
 *     ??0_VIDSCH_GLOBAL@@QEAA@XZ @ 0x1C001728C (--0_VIDSCH_GLOBAL@@QEAA@XZ.c)
 *     memset @ 0x1C0018EC0 (memset.c)
 *     VidSchiInitializeNode @ 0x1C00917B8 (VidSchiInitializeNode.c)
 *     VidSchiCreateNode @ 0x1C00918FC (VidSchiCreateNode.c)
 *     VidSchiReadGlobalConfiguration @ 0x1C0091C1C (VidSchiReadGlobalConfiguration.c)
 *     VidSchiRequestSchedulerStatus @ 0x1C0092A98 (VidSchiRequestSchedulerStatus.c)
 *     VidSchTerminateAdapter @ 0x1C00D2C00 (VidSchTerminateAdapter.c)
 */

_VIDSCH_GLOBAL *__fastcall VidSchInitializeAdapter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  _VIDSCH_GLOBAL *PoolWithTag; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _VIDSCH_GLOBAL *v10; // rbx
  _VIDSCH_GLOBAL *v11; // rbx
  int v12; // eax
  int v13; // eax
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r10
  int v18; // ecx
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // r14
  void *v21; // rcx
  PVOID v22; // rax
  size_t v23; // r15
  void *v24; // rax
  unsigned int v25; // r15d
  PVOID v26; // rax
  void *v27; // rax
  int v28; // ecx
  __int64 v29; // r14
  SIZE_T v30; // r14
  PVOID v31; // rax
  SIZE_T v32; // rsi
  PVOID v33; // rax
  SIZE_T v34; // rsi
  PVOID v35; // rax
  PVOID v36; // rax
  int v37; // eax
  char *v38; // rsi
  __int64 v39; // r14
  char *v40; // rsi
  __int64 v41; // r14
  __int64 Timer; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  NTSTATUS v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rsi
  unsigned int v50; // edx
  unsigned int v51; // r14d
  PVOID v52; // rax
  unsigned int v53; // edx
  __int64 v54; // rax
  _DWORD *v55; // rax
  __int64 v56; // r15
  __int64 v57; // r12
  __int64 v58; // r13
  union _SLIST_HEADER *v59; // rcx
  __int64 v60; // r12
  __int64 v61; // r15
  __int64 v62; // r13
  union _SLIST_HEADER *v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // rax
  void *v67; // rcx
  unsigned int v68; // edx
  __int64 v69; // rcx
  unsigned int i; // edx
  __int64 v71; // rax
  _QWORD *v72; // rcx
  unsigned int v73; // esi
  unsigned int v74; // eax
  unsigned int v75; // r14d
  unsigned int v76; // r12d
  unsigned int v77; // eax
  _QWORD *v78; // r13
  __int64 v79; // r8
  _QWORD *v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // r15
  _QWORD *v83; // rax
  unsigned int v84; // r15d
  _QWORD *v85; // r12
  __int64 v86; // r14
  _QWORD *v87; // rax
  int v88; // eax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rsi
  int v92; // eax
  NTSTATUS v93; // eax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // rsi
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  int v106; // [rsp+40h] [rbp-89h] BYREF
  void *ThreadHandle; // [rsp+48h] [rbp-81h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-79h] BYREF
  __int64 v109; // [rsp+80h] [rbp-49h] BYREF
  int v110; // [rsp+88h] [rbp-41h]
  const wchar_t *v111; // [rsp+90h] [rbp-39h]
  unsigned int *v112; // [rsp+98h] [rbp-31h]
  int v113; // [rsp+A0h] [rbp-29h]
  int *v114; // [rsp+A8h] [rbp-21h]
  int v115; // [rsp+B0h] [rbp-19h]
  __int64 v116; // [rsp+B8h] [rbp-11h]
  int v117; // [rsp+C0h] [rbp-9h]
  __int128 v118; // [rsp+C8h] [rbp-1h]
  __int128 v119; // [rsp+D8h] [rbp+Fh]
  __int64 v120; // [rsp+E8h] [rbp+1Fh]
  unsigned int v121; // [rsp+130h] [rbp+67h] BYREF
  unsigned int v122; // [rsp+148h] [rbp+7Fh]

  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    PoolWithTag = (_VIDSCH_GLOBAL *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x1970uLL, 0x30616956u);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x1970uLL);
      v11 = _VIDSCH_GLOBAL::_VIDSCH_GLOBAL(v10);
      *(_DWORD *)v11 = 811690326;
      *((_DWORD *)v11 + 1) = *(_DWORD *)(v6 + 232);
      *((_QWORD *)v11 + 1) = a1;
      *((_QWORD *)v11 + 2) = v6;
      *((_QWORD *)v11 + 3) = a2;
      *((_DWORD *)v11 + 8) = *(_DWORD *)(v6 + 2028);
      *((_DWORD *)v11 + 9) = 7;
      *((_QWORD *)v11 + 810) = a3;
      v12 = *(_DWORD *)(v6 + 1448);
      *((_DWORD *)v11 + 10) = v12;
      if ( !v12 )
      {
        *((_DWORD *)v11 + 10) = 1;
        *((_BYTE *)v11 + 50) = 1;
      }
      if ( *(_BYTE *)(v6 + 2535) )
        *((_BYTE *)v11 + 51) = 1;
      *((_BYTE *)v11 + 45) = (*(_DWORD *)(v6 + 2056) & 2) != 0;
      *((_BYTE *)v11 + 44) = *(_BYTE *)(v6 + 2530);
      *((_BYTE *)v11 + 46) = (*(_DWORD *)(v6 + 2056) & 0x10) != 0;
      *((_BYTE *)v11 + 47) = (*(_DWORD *)(v6 + 2052) & 0x10) != 0;
      *((_BYTE *)v11 + 48) = (*(_DWORD *)(v6 + 2056) & 0x20) == 0;
      *((_BYTE *)v11 + 49) = (*(_DWORD *)(v6 + 2056) & 0x40) != 0;
      v13 = 14;
      *((_BYTE *)v11 + 53) = (**(_DWORD **)(v6 + 2600) & 0x40) != 0;
      if ( ((*(_DWORD *)(v6 + 2056) >> 7) & 0xF) != 0 && ((*(_DWORD *)(v6 + 2056) >> 7) & 0xFu) < 0xE )
        v13 = (*(_DWORD *)(v6 + 2056) >> 7) & 0xF;
      *((_DWORD *)v11 + 55) = v13;
      v14 = 0LL;
      *((_DWORD *)v11 + 36) = *(_DWORD *)(v6 + 2536);
      *((_BYTE *)v11 + 148) = *(_BYTE *)(v6 + 2642) != 0;
      *((_DWORD *)v11 + 38) = *(_DWORD *)(v6 + 2564);
      *((_BYTE *)v11 + 6504) = *(_BYTE *)(v6 + 2664) != 0;
      *((_BYTE *)v11 + 2132) = (*(_DWORD *)(v6 + 2568) & 0x10) != 0;
      v15 = *(unsigned int *)(v6 + 280);
      *(_QWORD *)((char *)v11 + 68) = (unsigned int)v15;
      if ( (_DWORD)v15 )
      {
        v16 = 0LL;
        v17 = (unsigned int)v15;
        do
        {
          v18 = *(unsigned __int16 *)(*(_QWORD *)(v6 + 2584) + v16);
          v16 += 360LL;
          v14 = (unsigned int)(v18 + v14);
          *((_DWORD *)v11 + 18) = v14;
          --v17;
        }
        while ( v17 );
      }
      v19 = (unsigned int)(v14 + v15);
      *((_DWORD *)v11 + 19) = v19;
      v20 = (v19 + 63) >> 6;
      v21 = (void *)v19;
      if ( (unsigned int)v19 > 8 )
      {
        v14 = 0xFFFFFFFFFFFFFFFFuLL % v19;
        if ( 0xFFFFFFFFFFFFFFFFuLL / v19 < 8 )
          goto LABEL_107;
        v23 = 8 * v19;
        v22 = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v19, 0x30616956u);
      }
      else
      {
        v22 = (char *)v11 + 632;
        v23 = 8LL * (unsigned int)v19;
      }
      *((_QWORD *)v11 + 78) = v22;
      v21 = (void *)*((_QWORD *)v11 + 78);
      *((_DWORD *)v11 + 174) = v19;
      v24 = v21;
      if ( v21 && (_DWORD)v19 )
      {
        memset(v21, 0, v23);
        v24 = (void *)*((_QWORD *)v11 + 78);
      }
      if ( !v24 )
        goto LABEL_107;
      v25 = *((_DWORD *)v11 + 19);
      if ( v25 > 8 )
      {
        v14 = 0xFFFFFFFFFFFFFFFFuLL % v25;
        if ( 0xFFFFFFFFFFFFFFFFuLL / v25 < 4 )
          goto LABEL_107;
        v26 = ExAllocatePoolWithTag((POOL_TYPE)512, 4LL * v25, 0x30616956u);
      }
      else
      {
        v26 = (char *)v11 + 2488;
      }
      *((_QWORD *)v11 + 310) = v26;
      v21 = (void *)*((_QWORD *)v11 + 310);
      *((_DWORD *)v11 + 630) = v25;
      v27 = v21;
      if ( v21 && v25 )
      {
        memset(v21, 0, 4LL * v25);
        v27 = (void *)*((_QWORD *)v11 + 310);
      }
      if ( v27
        && NonPagedPoolZeroedArray<unsigned __int64,2,811690326>::AllocateElements((_DWORD *)v11 + 112, v20)
        && NonPagedPoolZeroedArray<unsigned __int64,2,811690326>::AllocateElements((_DWORD *)v11 + 124, v20)
        && NonPagedPoolZeroedArray<unsigned __int64,2,811690326>::AllocateElements((_DWORD *)v11 + 136, v20)
        && NonPagedPoolZeroedArray<unsigned __int64,2,811690326>::AllocateElements((_DWORD *)v11 + 148, v20) )
      {
        RtlInitializeBitMapEx((char *)v11 + 432, *((_QWORD *)v11 + 56), *((unsigned int *)v11 + 19));
        RtlInitializeBitMapEx((char *)v11 + 480, *((_QWORD *)v11 + 62), *((unsigned int *)v11 + 19));
        RtlInitializeBitMapEx((char *)v11 + 528, *((_QWORD *)v11 + 68), *((unsigned int *)v11 + 19));
        RtlInitializeBitMapEx((char *)v11 + 576, *((_QWORD *)v11 + 74), *((unsigned int *)v11 + 19));
        v28 = 31;
        v29 = *((unsigned int *)v11 + 17);
        if ( *(_DWORD *)(v6 + 2048) < 0x1Fu )
          v28 = *(_DWORD *)(v6 + 2048);
        *((_DWORD *)v11 + 632) = v28;
        v30 = 8 * v29;
        *((_DWORD *)v11 + 612) ^= (*(_DWORD *)(v6 + 2052) ^ *((_DWORD *)v11 + 612)) & 8;
        v31 = ExAllocatePoolWithTag((POOL_TYPE)512, v30, 0x30616956u);
        *((_QWORD *)v11 + 32) = v31;
        if ( v31 )
        {
          memset(v31, 0, v30);
          v32 = 8LL * *((unsigned int *)v11 + 17);
          v33 = ExAllocatePoolWithTag((POOL_TYPE)512, v32, 0x30616956u);
          *((_QWORD *)v11 + 33) = v33;
          if ( v33 )
          {
            memset(v33, 0, v32);
            v34 = 8LL * *((unsigned int *)v11 + 17);
            v35 = ExAllocatePoolWithTag((POOL_TYPE)512, v34, 0x30616956u);
            *((_QWORD *)v11 + 34) = v35;
            if ( v35 )
            {
              memset(v35, 0, v34);
              v36 = ExAllocatePoolWithTag((POOL_TYPE)512, v30, 0x30616956u);
              *((_QWORD *)v11 + 35) = v36;
              if ( v36 )
              {
                memset(v36, 0, v30);
                *((_DWORD *)v11 + 76) = 0;
                VidSchiReadGlobalConfiguration(v11);
                v37 = 3;
                if ( (*((_BYTE *)v11 + 2448) & 0x18) != 0x18 )
                  v37 = 1;
                *((_DWORD *)v11 + 613) = v37;
                *((_DWORD *)v11 + 614) = 5;
                if ( !*((_DWORD *)v11 + 615) && (*(_DWORD *)(v6 + 2052) & 0x40) == 0 )
                  *((_DWORD *)v11 + 615) = 1;
                if ( !*((_DWORD *)v11 + 616) )
                  *((_DWORD *)v11 + 616) = (*(_DWORD *)(*((_QWORD *)v11 + 2) + 2596LL) >= 2400) + 1;
                if ( !*((_DWORD *)v11 + 617) )
                  *((_DWORD *)v11 + 617) = 1;
                ExInitializeResourceLite((PERESOURCE)((char *)v11 + 968));
                ExInitializeResourceLite((PERESOURCE)((char *)v11 + 1072));
                ExInitializeResourceLite((PERESOURCE)v11 + 3);
                KeInitializeSpinLock((PKSPIN_LOCK)v11 + 214);
                KeInitializeSpinLock((PKSPIN_LOCK)v11 + 217);
                KeInitializeSpinLock((PKSPIN_LOCK)v11 + 215);
                KeInitializeSpinLock((PKSPIN_LOCK)v11 + 216);
                v38 = (char *)v11 + 1176;
                v39 = 4LL;
                do
                {
                  *(_OWORD *)v38 = 0LL;
                  *((_OWORD *)v38 + 1) = 0LL;
                  *((_OWORD *)v38 + 2) = 0LL;
                  *((_QWORD *)v38 + 6) = 0LL;
                  KeInitializeEvent((PRKEVENT)v38, SynchronizationEvent, 0);
                  v38 += 56;
                  --v39;
                }
                while ( v39 );
                v40 = (char *)v11 + 1400;
                v41 = 4LL;
                do
                {
                  *(_OWORD *)v40 = 0LL;
                  *((_OWORD *)v40 + 1) = 0LL;
                  *((_OWORD *)v40 + 2) = 0LL;
                  *((_QWORD *)v40 + 6) = 0LL;
                  KeInitializeEvent((PRKEVENT)v40, SynchronizationEvent, 0);
                  v40 += 56;
                  --v41;
                }
                while ( v41 );
                Timer = ExAllocateTimer(VidSchiWorkerThreadTimerCallback, v11, 4LL);
                *((_QWORD *)v11 + 22) = Timer;
                if ( !Timer )
                {
LABEL_101:
                  v101 = WdLogNewEntry5_WdWarning(v44, v43);
                  WdLogEvent5_WdWarning(v101);
LABEL_110:
                  VidSchTerminateAdapter(v11);
                  return 0LL;
                }
                *((_QWORD *)v11 + 37) = (char *)v11 + 288;
                *((_QWORD *)v11 + 36) = (char *)v11 + 288;
                InitializeSListHead((PSLIST_HEADER)v11 + 110);
                *((_QWORD *)v11 + 223) = (char *)v11 + 1776;
                *((_QWORD *)v11 + 222) = (char *)v11 + 1776;
                *((_QWORD *)v11 + 204) = (char *)v11 + 1624;
                *((_QWORD *)v11 + 203) = (char *)v11 + 1624;
                *((_QWORD *)v11 + 206) = (char *)v11 + 1640;
                *((_QWORD *)v11 + 205) = (char *)v11 + 1640;
                *((_QWORD *)v11 + 208) = (char *)v11 + 1656;
                *((_QWORD *)v11 + 207) = (char *)v11 + 1656;
                *((_QWORD *)v11 + 210) = (char *)v11 + 1672;
                *((_QWORD *)v11 + 209) = (char *)v11 + 1672;
                *((_QWORD *)v11 + 384) = (char *)v11 + 3064;
                *((_QWORD *)v11 + 383) = (char *)v11 + 3064;
                KeInitializeSpinLock((PKSPIN_LOCK)v11 + 385);
                KeInitializeSpinLock((PKSPIN_LOCK)v11 + 386);
                *((_QWORD *)v11 + 212) = (char *)v11 + 1688;
                *((_QWORD *)v11 + 211) = (char *)v11 + 1688;
                *((_QWORD *)v11 + 103) = (char *)v11 + 816;
                *((_QWORD *)v11 + 102) = (char *)v11 + 816;
                *((_QWORD *)v11 + 105) = (char *)v11 + 832;
                *((_QWORD *)v11 + 104) = (char *)v11 + 832;
                *((_QWORD *)v11 + 107) = (char *)v11 + 848;
                *((_QWORD *)v11 + 106) = (char *)v11 + 848;
                KeInitializeSpinLock((PKSPIN_LOCK)v11 + 297);
                ExInitializeResourceLite((PERESOURCE)((char *)v11 + 2784));
                KeInitializeEvent((PRKEVENT)((char *)v11 + 2888), SynchronizationEvent, 0);
                *((_QWORD *)v11 + 272) = v11;
                *((_QWORD *)v11 + 271) = VidSchiControlVSyncThread;
                *((_QWORD *)v11 + 269) = 0LL;
                *((_QWORD *)v11 + 294) = VidSchiDeferredVisibilityThread;
                *((_QWORD *)v11 + 295) = v6;
                *((_QWORD *)v11 + 428) = (char *)v11 + 3416;
                *((_QWORD *)v11 + 427) = (char *)v11 + 3416;
                *((_QWORD *)v11 + 430) = (char *)v11 + 3432;
                *((_QWORD *)v11 + 429) = (char *)v11 + 3432;
                *((_QWORD *)v11 + 292) = 0LL;
                v45 = ExInitializeLookasideListEx(
                        (PLOOKASIDE_LIST_EX)v11 + 9,
                        0LL,
                        0LL,
                        (POOL_TYPE)512,
                        0,
                        *((_DWORD *)v11 + 36)
                      * ((*((_DWORD *)v11 + 17) << 6) + ((8 * *((_DWORD *)v11 + 17) + 199) & 0xFFFFFFF8))
                      + 632
                      + 8 * *((_DWORD *)v11 + 17),
                        0x38616956u,
                        0);
                v49 = v45;
                if ( v45 < 0 )
                {
                  v102 = WdLogNewEntry5_WdAssertion(v47, v46, v48);
                  *(_QWORD *)(v102 + 24) = v11;
                  *(_QWORD *)(v102 + 32) = v49;
LABEL_109:
                  WdLogEvent5_WdAssertion(v102);
                  goto LABEL_110;
                }
                v50 = *((_DWORD *)v11 + 10);
                v51 = 0;
                *((_BYTE *)v11 + 960) = 1;
                if ( v50 )
                {
                  do
                  {
                    v52 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x113C0uLL, 0x39616956u);
                    *((_QWORD *)v11 + v51 + 388) = v52;
                    if ( !v52 )
                      goto LABEL_101;
                    memset(v52, 0, 0x113C0uLL);
                    v53 = 0;
                    **((_DWORD **)v11 + v51 + 388) = 962685270;
                    *(_DWORD *)(*((_QWORD *)v11 + v51 + 388) + 33288LL) = -1;
                    for ( *(_BYTE *)(*((_QWORD *)v11 + v51 + 388) + 66436LL) = 1;
                          v53 < *((_DWORD *)v11 + 36);
                          *(_DWORD *)(216 * v54 + *((_QWORD *)v11 + v51 + 388) + 172) = -1 )
                    {
                      v54 = v53++;
                    }
                    v55 = ExAllocatePoolWithTag((POOL_TYPE)512, 0xCuLL, 0x39616956u);
                    *((_QWORD *)v11 + v51 + 794) = v55;
                    if ( !v55 )
                      goto LABEL_101;
                    *(_QWORD *)v55 = 0LL;
                    v55[2] = 0;
                    InitializeSListHead((PSLIST_HEADER)(*((_QWORD *)v11 + v51 + 388) + 33648LL));
                    v56 = 0LL;
                    v57 = 0LL;
                    v58 = 64LL;
                    do
                    {
                      *(_DWORD *)(*((_QWORD *)v11 + v51 + 388) + v56 + 33664) = 929130838;
                      v59 = (union _SLIST_HEADER *)*((_QWORD *)v11 + v51 + 388);
                      ExpInterlockedPushEntrySList(v59 + 2103, (PSLIST_ENTRY)&v59[v57 + 2105]);
                      v57 += 32LL;
                      v56 += 512LL;
                      --v58;
                    }
                    while ( v58 );
                    v60 = 0LL;
                    *(_QWORD *)(*((_QWORD *)v11 + v51 + 388) + 66448LL) = 0LL;
                    *(_WORD *)(*((_QWORD *)v11 + v51 + 388) + 70576LL) = 0;
                    InitializeSListHead((PSLIST_HEADER)(*((_QWORD *)v11 + v51 + 388) + 66464LL));
                    v61 = 0LL;
                    v62 = 64LL;
                    do
                    {
                      *(_DWORD *)(*((_QWORD *)v11 + v51 + 388) + v61 + 66480) = 1650551126;
                      v63 = (union _SLIST_HEADER *)*((_QWORD *)v11 + v51 + 388);
                      ExpInterlockedPushEntrySList(v63 + 4154, (PSLIST_ENTRY)&v63[v60 + 4156]);
                      v60 += 4LL;
                      v61 += 64LL;
                      --v62;
                    }
                    while ( v62 );
                    *(_DWORD *)(*((_QWORD *)v11 + v51 + 388) + 112LL) = *((_DWORD *)v11 + 54);
                    *(_QWORD *)(*((_QWORD *)v11 + v51 + 388) + 120LL) = ExAllocatePoolWithTag(
                                                                          (POOL_TYPE)512,
                                                                          72LL
                                                                        * *(unsigned int *)(*((_QWORD *)v11 + v51 + 388)
                                                                                          + 112LL),
                                                                          0x39616956u);
                    v66 = *((_QWORD *)v11 + v51 + 388);
                    v67 = *(void **)(v66 + 120);
                    if ( !v67 )
                    {
                      v102 = WdLogNewEntry5_WdAssertion(0LL, v64, v65);
                      *(_QWORD *)(v102 + 24) = v51;
                      goto LABEL_109;
                    }
                    memset(v67, 0, 72LL * *(unsigned int *)(v66 + 112));
                    v50 = *((_DWORD *)v11 + 10);
                  }
                  while ( ++v51 < v50 );
                }
                v68 = *((_DWORD *)v11 + 36) * v50;
                if ( !v68 )
                  v68 = 1;
                if ( !NonPagedPoolZeroedArray<_VIDSCH_INDEPENDENT_FLIP_STATE,1,962685270>::AllocateElements(
                        (_DWORD *)v11 + 808,
                        v68) )
                {
                  _InterlockedAdd(&dword_1C00507D0, 1u);
                  v103 = WdLogNewEntry5_WdLowResource(v69);
                  *(_QWORD *)(v103 + 24) = 829LL;
                  WdLogEvent5_WdLowResource(v103);
                  goto LABEL_110;
                }
                for ( i = 0; i < *((_DWORD *)v11 + 848); v72[17] = v72 + 17 )
                {
                  v71 = i++;
                  v72 = (_QWORD *)(*((_QWORD *)v11 + 404) + 152 * v71);
                  v72[16] = v72 + 15;
                  v72[15] = v72 + 15;
                  v72[18] = v72 + 17;
                }
                *((_DWORD *)v11 + 852) = -1;
                v73 = 0;
                v74 = *((_DWORD *)v11 + 17);
                v75 = 0;
                *((_QWORD *)v11 + 425) = 0LL;
                if ( v74 )
                {
                  while ( 1 )
                  {
                    v76 = 0;
                    v77 = *(unsigned __int16 *)(360LL * v75 + *(_QWORD *)(v6 + 2584));
                    v122 = v77;
                    *((_BYTE *)v11 + v75 + 80) = v73;
                    if ( v77 )
                      break;
LABEL_75:
                    v74 = *((_DWORD *)v11 + 17);
                    if ( ++v75 >= v74 )
                      goto LABEL_76;
                  }
                  while ( 1 )
                  {
                    v78 = (_QWORD *)*((_QWORD *)v11 + 78);
                    if ( v73 < *((_DWORD *)v11 + 174) )
                      v78 += v73;
                    *v78 = VidSchiCreateNode(v11, v75, v76, v73);
                    v80 = (_QWORD *)*((_QWORD *)v11 + 78);
                    v81 = *((unsigned int *)v11 + 174);
                    v82 = v73;
                    v83 = &v80[v82];
                    if ( v73 >= (unsigned int)v81 )
                      v83 = (_QWORD *)*((_QWORD *)v11 + 78);
                    if ( !*v83 )
                      break;
                    if ( v73 < (unsigned int)v81 )
                      v80 = (_QWORD *)((char *)v80 + v82 * 8);
                    if ( (int)VidSchiInitializeNode(*v80) < 0 )
                      goto LABEL_110;
                    ++v73;
                    if ( ++v76 >= v122 )
                      goto LABEL_75;
                  }
                }
                else
                {
LABEL_76:
                  v84 = 0;
                  if ( !v74 )
                  {
LABEL_86:
                    v106 = 1;
                    v121 = 0;
                    v111 = L"PageFaultDebugMode";
                    v109 = 0LL;
                    v112 = &v121;
                    v110 = 288;
                    v114 = &v106;
                    v113 = 67108868;
                    v120 = 0LL;
                    v115 = 4;
                    v116 = 0LL;
                    v117 = 0;
                    v118 = 0LL;
                    v119 = 0LL;
                    v88 = RtlQueryRegistryValuesEx(
                            0LL,
                            L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers",
                            &v109,
                            0LL,
                            0LL);
                    v91 = v88;
                    if ( v88 < 0 )
                    {
                      v121 = 1;
                      v104 = WdLogNewEntry5_WdWarning(v90, v89);
                      *(_QWORD *)(v104 + 24) = v91;
                      WdLogEvent5_WdWarning(v104);
                    }
                    v92 = v121;
                    if ( v121 > 1 )
                    {
                      v105 = WdLogNewEntry5_WdWarning(v90, v89);
                      *(_QWORD *)(v105 + 24) = v121;
                      WdLogEvent5_WdWarning(v105);
                      v92 = 1;
                      v121 = 1;
                    }
                    g_PageFaultDebugMode = v92;
                    *(_QWORD *)&ObjectAttributes.Length = 48LL;
                    *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
                    ThreadHandle = 0LL;
                    ObjectAttributes.RootDirectory = 0LL;
                    ObjectAttributes.ObjectName = 0LL;
                    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                    v93 = PsCreateSystemThread(
                            &ThreadHandle,
                            0x1FFFFFu,
                            &ObjectAttributes,
                            0LL,
                            0LL,
                            (PKSTART_ROUTINE)VidSchiWorkerThread,
                            v11);
                    v97 = v93;
                    if ( v93 >= 0 )
                    {
                      VidSchiRequestSchedulerStatus(v11, 1LL, 1LL);
                      ObfReferenceObject(*((PVOID *)v11 + 20));
                      ZwClose(ThreadHandle);
                      return v11;
                    }
                    v102 = WdLogNewEntry5_WdAssertion(v95, v94, v96);
                    *(_QWORD *)(v102 + 32) = v97;
                    goto LABEL_108;
                  }
                  while ( 1 )
                  {
                    v85 = (_QWORD *)*((_QWORD *)v11 + 78);
                    if ( v73 < *((_DWORD *)v11 + 174) )
                      v85 += v73;
                    *v85 = VidSchiCreateNode(v11, v84, 0x7FFFLL, v73);
                    v80 = (_QWORD *)*((_QWORD *)v11 + 78);
                    v81 = *((unsigned int *)v11 + 174);
                    v86 = v73;
                    v87 = &v80[v86];
                    if ( v73 >= (unsigned int)v81 )
                      v87 = (_QWORD *)*((_QWORD *)v11 + 78);
                    if ( !*v87 )
                      break;
                    if ( v73 < (unsigned int)v81 )
                      v80 = (_QWORD *)((char *)v80 + v86 * 8);
                    if ( (int)VidSchiInitializeNode(*v80) < 0 )
                      goto LABEL_110;
                    ++v73;
                    if ( ++v84 >= *((_DWORD *)v11 + 17) )
                      goto LABEL_86;
                  }
                }
                v102 = WdLogNewEntry5_WdAssertion(v80, v81, v79);
                *(_QWORD *)(v102 + 32) = v73;
LABEL_108:
                *(_QWORD *)(v102 + 24) = v6;
                goto LABEL_109;
              }
            }
          }
        }
      }
LABEL_107:
      v102 = WdLogNewEntry5_WdAssertion(v21, v14, v15);
      goto LABEL_108;
    }
    v100 = WdLogNewEntry5_WdWarning(v9, v8);
    WdLogEvent5_WdWarning(v100);
  }
  else
  {
    v99 = WdLogNewEntry5_WdAssertion(0LL, a2, a3);
    WdLogEvent5_WdAssertion(v99);
  }
  return 0LL;
}
