/*
 * XREFs of VidSchInitializeAdapter @ 0x1C00AE220
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00029AC (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$01$0DAGBGJFG@@@QEAAPEA_KI@Z @ 0x1C001C534 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$01$0DAGBGJFG@@@QEAAPEA_KI@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@U_VIDSCH_INDEPENDENT_FLIP_STATE@@$00$0DJGBGJFG@@@QEAAPEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@I@Z @ 0x1C001C5AC (-AllocateElements@-$NonPagedPoolZeroedArray@U_VIDSCH_INDEPENDENT_FLIP_STATE@@$00$0DJGBGJFG@@@QEA.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@K$07$0DAGBGJFG@@@QEAAPEAKI@Z @ 0x1C001C630 (-AllocateElements@-$NonPagedPoolZeroedArray@K$07$0DAGBGJFG@@@QEAAPEAKI@Z.c)
 *     ??0_VIDSCH_GLOBAL@@QEAA@XZ @ 0x1C001C6AC (--0_VIDSCH_GLOBAL@@QEAA@XZ.c)
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x1C001CC4C (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     VidSchiInitializeNode @ 0x1C00AF36C (VidSchiInitializeNode.c)
 *     VidSchiCreateNode @ 0x1C00AF488 (VidSchiCreateNode.c)
 *     VidSchiReadGlobalConfiguration @ 0x1C00AF784 (VidSchiReadGlobalConfiguration.c)
 *     VidSchiRequestSchedulerStatus @ 0x1C00B05F4 (VidSchiRequestSchedulerStatus.c)
 *     VidSchTerminateAdapter @ 0x1C00F55F0 (VidSchTerminateAdapter.c)
 */

_VIDSCH_GLOBAL *__fastcall VidSchInitializeAdapter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // r14
  _VIDSCH_GLOBAL *Pool2; // rax
  _VIDSCH_GLOBAL *v9; // rdi
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // edx
  unsigned int v14; // r8d
  __int64 v15; // r9
  __int64 v16; // r10
  int v17; // ecx
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rbx
  int v20; // ecx
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // eax
  char *v29; // rbx
  __int64 v30; // r15
  char *v31; // rbx
  __int64 v32; // r15
  __int64 Timer; // rax
  NTSTATUS v34; // eax
  __int64 v35; // rcx
  unsigned int v36; // edx
  unsigned int v37; // ebx
  _DWORD *v38; // rax
  __int64 v39; // r15
  _QWORD *v40; // rax
  _QWORD *v41; // rbx
  unsigned int i; // edx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rbx
  __int64 v46; // r14
  __int64 v47; // r13
  __int64 v48; // rbx
  __int64 v49; // r14
  unsigned __int64 v50; // rbx
  __int64 v51; // rax
  bool v52; // cf
  __int64 v53; // rax
  _QWORD *v54; // rax
  unsigned int v55; // r13d
  _QWORD *v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rbx
  __int64 v59; // rax
  unsigned int v60; // edx
  __int64 v61; // rdx
  unsigned int j; // edx
  __int64 v63; // rax
  _QWORD *v64; // rcx
  unsigned int v65; // eax
  unsigned int v66; // r15d
  __int64 v67; // rbx
  unsigned int v68; // eax
  __int64 Node; // rax
  __int64 *v70; // rcx
  _QWORD *v71; // rcx
  unsigned int v72; // r8d
  _QWORD *v73; // rax
  unsigned int v74; // r15d
  __int64 v75; // rax
  __int64 *v76; // rcx
  _QWORD *v77; // rcx
  unsigned int v78; // r8d
  _QWORD *v79; // rax
  int v80; // eax
  int v81; // eax
  NTSTATUS v82; // eax
  int v84; // [rsp+50h] [rbp-B0h] BYREF
  void *ThreadHandle; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v86; // [rsp+60h] [rbp-A0h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  __int64 v88; // [rsp+A0h] [rbp-60h] BYREF
  int v89; // [rsp+A8h] [rbp-58h]
  const wchar_t *v90; // [rsp+B0h] [rbp-50h]
  unsigned int *v91; // [rsp+B8h] [rbp-48h]
  int v92; // [rsp+C0h] [rbp-40h]
  int *v93; // [rsp+C8h] [rbp-38h]
  int v94; // [rsp+D0h] [rbp-30h]
  __int64 v95; // [rsp+D8h] [rbp-28h]
  int v96; // [rsp+E0h] [rbp-20h]
  __int128 v97; // [rsp+E8h] [rbp-18h]
  __int128 v98; // [rsp+F8h] [rbp-8h]
  __int64 v99; // [rsp+108h] [rbp+8h]
  unsigned int v100; // [rsp+150h] [rbp+50h] BYREF
  unsigned int v101; // [rsp+168h] [rbp+68h]

  if ( a1 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    v86 = v7;
    Pool2 = (_VIDSCH_GLOBAL *)ExAllocatePool2(64LL, 6624LL, 811690326LL);
    if ( !Pool2 )
    {
      WdLogSingleEntry0(3LL);
      return 0LL;
    }
    v9 = _VIDSCH_GLOBAL::_VIDSCH_GLOBAL(Pool2);
    *(_DWORD *)v9 = 811690326;
    *((_DWORD *)v9 + 1) = *(_DWORD *)(v7 + 240);
    *((_QWORD *)v9 + 1) = a1;
    *((_QWORD *)v9 + 2) = v7;
    *((_QWORD *)v9 + 3) = a2;
    *((_DWORD *)v9 + 8) = *(_DWORD *)(v7 + 2124);
    *((_DWORD *)v9 + 9) = 7;
    *((_QWORD *)v9 + 823) = a3;
    KeQueryPerformanceCounter((PLARGE_INTEGER)v9 + 328);
    v10 = *(_DWORD *)(v7 + 1544);
    *((_DWORD *)v9 + 10) = v10;
    if ( !v10 )
    {
      *((_DWORD *)v9 + 10) = 1;
      *((_BYTE *)v9 + 50) = 1;
    }
    if ( *(_BYTE *)(v7 + 2631) )
      *((_BYTE *)v9 + 51) = 1;
    *((_BYTE *)v9 + 45) = (*(_DWORD *)(v7 + 2152) & 2) != 0;
    *((_BYTE *)v9 + 44) = *(_BYTE *)(v7 + 2626);
    *((_BYTE *)v9 + 46) = (*(_DWORD *)(v7 + 2152) & 0x10) != 0;
    *((_BYTE *)v9 + 47) = (*(_DWORD *)(v7 + 2148) & 0x10) != 0;
    *((_BYTE *)v9 + 48) = (*(_DWORD *)(v7 + 2152) & 0x20) == 0;
    *((_BYTE *)v9 + 49) = (*(_DWORD *)(v7 + 2152) & 0x40) != 0;
    v11 = 14;
    *((_BYTE *)v9 + 53) = (**(_DWORD **)(v7 + 2696) & 0x40) != 0;
    if ( ((*(_DWORD *)(v7 + 2152) >> 7) & 0xF) != 0 && ((*(_DWORD *)(v7 + 2152) >> 7) & 0xFu) < 0xE )
      v11 = (*(_DWORD *)(v7 + 2152) >> 7) & 0xF;
    *((_DWORD *)v9 + 57) = v11;
    *((_DWORD *)v9 + 38) = *(_DWORD *)(v7 + 2632);
    *((_BYTE *)v9 + 156) = *(_BYTE *)(v7 + 2738) != 0;
    *((_DWORD *)v9 + 40) = *(_DWORD *)(v7 + 2660);
    if ( (**(_DWORD **)(v7 + 2696) & 0x100000) != 0 )
    {
      v12 = *(_DWORD *)(v7 + 2668);
      *((_DWORD *)v9 + 15) = v12;
      if ( !v12 )
      {
        *((_DWORD *)v9 + 15) = 1;
        v12 = 1;
      }
      *((_DWORD *)v9 + 16) = *(_DWORD *)(v7 + 2672);
      *((_BYTE *)v9 + 59) = v12 > 1;
    }
    else
    {
      *((_DWORD *)v9 + 15) = 1;
    }
    v13 = 0;
    *((_BYTE *)v9 + 6608) = *(_BYTE *)(v7 + 2760) != 0;
    *((_BYTE *)v9 + 2212) = (*(_DWORD *)(v7 + 2664) & 0x10) != 0;
    *((_QWORD *)v9 + 301) = MEMORY[0xFFFFF78000000320];
    v14 = *(_DWORD *)(v7 + 288);
    *(_QWORD *)((char *)v9 + 76) = v14;
    if ( v14 )
    {
      v15 = 0LL;
      v16 = v14;
      do
      {
        v17 = *(unsigned __int16 *)(v15 + *(_QWORD *)(v7 + 2680));
        v15 += 344LL;
        v13 += v17;
        *((_DWORD *)v9 + 20) = v13;
        --v16;
      }
      while ( v16 );
    }
    v18 = v13 + v14;
    *((_DWORD *)v9 + 21) = v18;
    v19 = (v18 + 63) >> 6;
    if ( (unsigned int)v18 <= 8 )
    {
      *((_QWORD *)v9 + 79) = (char *)v9 + 640;
      if ( (_DWORD)v18 )
        memset((char *)v9 + 640, 0, 8 * v18);
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v18 < 8 )
      {
LABEL_124:
        WdLogSingleEntry1(1LL, v7);
        goto LABEL_125;
      }
      *((_QWORD *)v9 + 79) = ExAllocatePool2(64LL, 8 * v18, 811690326LL);
    }
    *((_DWORD *)v9 + 176) = v18;
    if ( !*((_QWORD *)v9 + 79)
      || !NonPagedPoolZeroedArray<unsigned long,8,811690326>::AllocateElements(
            (__int64 *)v9 + 321,
            *((_DWORD *)v9 + 21))
      || !NonPagedPoolZeroedArray<unsigned __int64,2,811690326>::AllocateElements((__int64 *)v9 + 57, v19)
      || !NonPagedPoolZeroedArray<unsigned __int64,2,811690326>::AllocateElements((__int64 *)v9 + 63, v19)
      || !NonPagedPoolZeroedArray<unsigned __int64,2,811690326>::AllocateElements((__int64 *)v9 + 69, v19)
      || !NonPagedPoolZeroedArray<unsigned __int64,2,811690326>::AllocateElements((__int64 *)v9 + 75, v19) )
    {
      goto LABEL_124;
    }
    RtlInitializeBitMapEx((char *)v9 + 440, *((_QWORD *)v9 + 57), *((unsigned int *)v9 + 21));
    RtlInitializeBitMapEx((char *)v9 + 488, *((_QWORD *)v9 + 63), *((unsigned int *)v9 + 21));
    RtlInitializeBitMapEx((char *)v9 + 536, *((_QWORD *)v9 + 69), *((unsigned int *)v9 + 21));
    RtlInitializeBitMapEx((char *)v9 + 584, *((_QWORD *)v9 + 75), *((unsigned int *)v9 + 21));
    v20 = 31;
    v21 = *((unsigned int *)v9 + 19);
    if ( *(_DWORD *)(v7 + 2144) < 0x1Fu )
      v20 = *(_DWORD *)(v7 + 2144);
    *((_DWORD *)v9 + 654) = v20;
    v22 = 8 * v21;
    *((_DWORD *)v9 + 634) ^= (*((_DWORD *)v9 + 634) ^ *(_DWORD *)(v7 + 2148)) & 8;
    v23 = ExAllocatePool2(64LL, v22, 811690326LL);
    v24 = 0LL;
    *((_QWORD *)v9 + 33) = v23;
    if ( !v23 )
      goto LABEL_124;
    v25 = ExAllocatePool2(64LL, 8LL * *((unsigned int *)v9 + 19), 811690326LL);
    *((_QWORD *)v9 + 34) = v25;
    if ( !v25 )
      goto LABEL_124;
    v26 = ExAllocatePool2(64LL, 8LL * *((unsigned int *)v9 + 19), 811690326LL);
    *((_QWORD *)v9 + 35) = v26;
    if ( !v26 )
      goto LABEL_124;
    v27 = ExAllocatePool2(64LL, v22, 811690326LL);
    *((_QWORD *)v9 + 36) = v27;
    if ( !v27 )
      goto LABEL_124;
    *((_DWORD *)v9 + 78) = 0;
    VidSchiReadGlobalConfiguration(v9);
    v28 = 3;
    if ( (*((_BYTE *)v9 + 2536) & 0x18) != 0x18 )
      v28 = 1;
    *((_DWORD *)v9 + 635) = v28;
    *((_DWORD *)v9 + 636) = 5;
    if ( !*((_DWORD *)v9 + 637) && (*(_DWORD *)(v7 + 2148) & 0x40) == 0 )
      *((_DWORD *)v9 + 637) = 1;
    if ( !*((_DWORD *)v9 + 638) )
      *((_DWORD *)v9 + 638) = (*(_DWORD *)(*((_QWORD *)v9 + 2) + 2692LL) >= 2400) + 1;
    if ( !*((_DWORD *)v9 + 639) )
      *((_DWORD *)v9 + 639) = 1;
    ExInitializeResourceLite((PERESOURCE)((char *)v9 + 984));
    ExInitializeResourceLite((PERESOURCE)((char *)v9 + 1088));
    ExInitializeResourceLite((PERESOURCE)((char *)v9 + 320));
    KeInitializeSpinLock((PKSPIN_LOCK)v9 + 216);
    KeInitializeSpinLock((PKSPIN_LOCK)v9 + 219);
    KeInitializeSpinLock((PKSPIN_LOCK)v9 + 217);
    KeInitializeSpinLock((PKSPIN_LOCK)v9 + 218);
    v29 = (char *)v9 + 1192;
    v30 = 4LL;
    do
    {
      *(_OWORD *)v29 = 0LL;
      *((_OWORD *)v29 + 1) = 0LL;
      *((_OWORD *)v29 + 2) = 0LL;
      *((_QWORD *)v29 + 6) = 0LL;
      KeInitializeEvent((PRKEVENT)v29, SynchronizationEvent, 0);
      v29 += 56;
      --v30;
    }
    while ( v30 );
    v31 = (char *)v9 + 1416;
    v32 = 4LL;
    do
    {
      *(_OWORD *)v31 = 0LL;
      *((_OWORD *)v31 + 1) = 0LL;
      *((_OWORD *)v31 + 2) = 0LL;
      *((_QWORD *)v31 + 6) = 0LL;
      KeInitializeEvent((PRKEVENT)v31, SynchronizationEvent, 0);
      v31 += 56;
      --v32;
    }
    while ( v32 );
    Timer = ExAllocateTimer(VidSchiWorkerThreadTimerCallback, v9, 4LL);
    *((_QWORD *)v9 + 23) = Timer;
    if ( !Timer )
    {
LABEL_53:
      WdLogSingleEntry0(3LL);
LABEL_127:
      VidSchTerminateAdapter(v9);
      return 0LL;
    }
    *((_QWORD *)v9 + 38) = (char *)v9 + 296;
    *((_QWORD *)v9 + 37) = (char *)v9 + 296;
    InitializeSListHead((PSLIST_HEADER)v9 + 111);
    *((_QWORD *)v9 + 225) = (char *)v9 + 1792;
    *((_QWORD *)v9 + 224) = (char *)v9 + 1792;
    *((_QWORD *)v9 + 206) = (char *)v9 + 1640;
    *((_QWORD *)v9 + 205) = (char *)v9 + 1640;
    *((_QWORD *)v9 + 208) = (char *)v9 + 1656;
    *((_QWORD *)v9 + 207) = (char *)v9 + 1656;
    *((_QWORD *)v9 + 210) = (char *)v9 + 1672;
    *((_QWORD *)v9 + 209) = (char *)v9 + 1672;
    *((_QWORD *)v9 + 212) = (char *)v9 + 1688;
    *((_QWORD *)v9 + 211) = (char *)v9 + 1688;
    *((_QWORD *)v9 + 396) = (char *)v9 + 3160;
    *((_QWORD *)v9 + 395) = (char *)v9 + 3160;
    KeInitializeSpinLock((PKSPIN_LOCK)v9 + 397);
    KeInitializeSpinLock((PKSPIN_LOCK)v9 + 398);
    *((_QWORD *)v9 + 214) = (char *)v9 + 1704;
    *((_QWORD *)v9 + 213) = (char *)v9 + 1704;
    *((_QWORD *)v9 + 104) = (char *)v9 + 824;
    *((_QWORD *)v9 + 103) = (char *)v9 + 824;
    *((_QWORD *)v9 + 106) = (char *)v9 + 840;
    *((_QWORD *)v9 + 105) = (char *)v9 + 840;
    *((_QWORD *)v9 + 108) = (char *)v9 + 856;
    *((_QWORD *)v9 + 107) = (char *)v9 + 856;
    KeInitializeSpinLock((PKSPIN_LOCK)v9 + 308);
    ExInitializeResourceLite((PERESOURCE)((char *)v9 + 2880));
    KeInitializeEvent((PRKEVENT)((char *)v9 + 2984), SynchronizationEvent, 0);
    *((_QWORD *)v9 + 282) = v9;
    *((_QWORD *)v9 + 281) = VidSchiControlVSyncThread;
    *((_QWORD *)v9 + 279) = 0LL;
    *((_QWORD *)v9 + 305) = VidSchiDeferredVisibilityThread;
    *((_QWORD *)v9 + 306) = v7;
    *((_QWORD *)v9 + 441) = (char *)v9 + 3520;
    *((_QWORD *)v9 + 440) = (char *)v9 + 3520;
    *((_QWORD *)v9 + 443) = (char *)v9 + 3536;
    *((_QWORD *)v9 + 442) = (char *)v9 + 3536;
    *((_QWORD *)v9 + 303) = 0LL;
    v34 = ExInitializeLookasideListEx(
            (PLOOKASIDE_LIST_EX)((char *)v9 + 880),
            0LL,
            0LL,
            (POOL_TYPE)512,
            0,
            *((_DWORD *)v9 + 38) * ((*((_DWORD *)v9 + 19) << 6) + ((8 * *((_DWORD *)v9 + 19) + 231) & 0xFFFFFFF8))
          + 656
          + 8 * *((_DWORD *)v9 + 19),
            0x38616956u,
            0);
    if ( v34 >= 0 )
    {
      v36 = *((_DWORD *)v9 + 10);
      v37 = 0;
      v101 = 0;
      *((_BYTE *)v9 + 976) = 1;
      for ( *((_BYTE *)v9 + 6610) = 1; v37 < v36; v101 = v37 )
      {
        v38 = (_DWORD *)ExAllocatePool2(64LL, 82752LL, 962685270LL);
        v39 = v37;
        *((_QWORD *)v9 + v37 + 400) = v38;
        if ( !v38 )
          goto LABEL_53;
        *v38 = 962685270;
        *(_DWORD *)(*((_QWORD *)v9 + v37 + 400) + 44232LL) = -1;
        *(_BYTE *)(*((_QWORD *)v9 + v37 + 400) + 78580LL) = 1;
        *(_DWORD *)(*((_QWORD *)v9 + v37 + 400) + 82724LL) = 1;
        if ( *((_BYTE *)v9 + 6610) )
        {
          v40 = (_QWORD *)operator new(4200LL, 0x39616956u, 64LL);
          v41 = v40;
          if ( v40 )
          {
            v40[11] = 0LL;
            *v40 = &LinearFitT<256>::`vftable';
            v40[12] = 0LL;
            v40[4] = 0x3FF0000000000000LL;
            LinearFitT<256>::Reset((__int64)v40);
            v41[11] = 1LL;
            *v41 = &LinearFitT<256>::`vftable';
          }
          else
          {
            v41 = 0LL;
          }
          *(_QWORD *)(*((_QWORD *)v9 + v39 + 400) + 44152LL) = v41;
          if ( !*(_QWORD *)(*((_QWORD *)v9 + v39 + 400) + 44152LL) )
            goto LABEL_86;
        }
        for ( i = 0; i < *((_DWORD *)v9 + 38); *(_DWORD *)(280 * v43 + *((_QWORD *)v9 + v39 + 400) + 180) = -1 )
          v43 = i++;
        v44 = ExAllocatePool2(64LL, 12LL, 962685270LL);
        *((_QWORD *)v9 + v39 + 807) = v44;
        if ( !v44 )
          goto LABEL_53;
        InitializeSListHead((PSLIST_HEADER)(*((_QWORD *)v9 + v39 + 400) + 44592LL));
        v45 = 0LL;
        v46 = 64LL;
        do
        {
          *(_DWORD *)(*((_QWORD *)v9 + v39 + 400) + v45 + 44608) = 929130838;
          ExpInterlockedPushEntrySList(
            (PSLIST_HEADER)(*((_QWORD *)v9 + v39 + 400) + 44592LL),
            (PSLIST_ENTRY)(v24 + *((_QWORD *)v9 + v39 + 400) + 44624LL));
          v24 += 528LL;
          v45 += 528LL;
          --v46;
        }
        while ( v46 );
        *(_QWORD *)(*((_QWORD *)v9 + v39 + 400) + 78592LL) = 0LL;
        *(_WORD *)(*((_QWORD *)v9 + v39 + 400) + 82720LL) = 0;
        InitializeSListHead((PSLIST_HEADER)(*((_QWORD *)v9 + v39 + 400) + 78608LL));
        v47 = 0LL;
        v48 = 0LL;
        v49 = 64LL;
        do
        {
          *(_DWORD *)(*((_QWORD *)v9 + v39 + 400) + v48 + 78624) = 1650551126;
          ExpInterlockedPushEntrySList(
            (PSLIST_HEADER)(*((_QWORD *)v9 + v39 + 400) + 78608LL),
            (PSLIST_ENTRY)(v47 + *((_QWORD *)v9 + v39 + 400) + 78640LL));
          v47 += 64LL;
          v48 += 64LL;
          --v49;
        }
        while ( v49 );
        v7 = v86;
        *(_DWORD *)(*((_QWORD *)v9 + v39 + 400) + 120LL) = *((_DWORD *)v9 + 56);
        v50 = *(unsigned int *)(*((_QWORD *)v9 + v39 + 400) + 120LL);
        v51 = 112 * v50;
        if ( !is_mul_ok(v50, 0x70uLL) )
          v51 = -1LL;
        v52 = __CFADD__(v51, 8LL);
        v53 = v51 + 8;
        if ( v52 )
          v53 = -1LL;
        v54 = (_QWORD *)operator new[](v53, 0x61616956u, 64LL);
        v55 = 0;
        if ( v54 )
        {
          *v54 = v50;
          v56 = v54 + 1;
        }
        else
        {
          v56 = 0LL;
        }
        *(_QWORD *)(*((_QWORD *)v9 + v39 + 400) + 128LL) = v56;
        v57 = *((_QWORD *)v9 + v39 + 400);
        if ( !*(_QWORD *)(v57 + 128) )
        {
          WdLogSingleEntry1(1LL, v39);
          goto LABEL_125;
        }
        if ( *(_DWORD *)(v57 + 120) )
        {
          while ( 1 )
          {
            v58 = *(_QWORD *)(v57 + 128) + 112LL * v55;
            v59 = ExAllocatePool2(64LL, 8LL * *((unsigned int *)v9 + 38), 962685270LL);
            *(_QWORD *)(v58 + 72) = v59;
            if ( !v59 )
              break;
            v57 = *((_QWORD *)v9 + v39 + 400);
            if ( ++v55 >= *(_DWORD *)(v57 + 120) )
              goto LABEL_81;
          }
LABEL_86:
          WdLogSingleEntry0(1LL);
          goto LABEL_125;
        }
LABEL_81:
        v24 = 0LL;
        v36 = *((_DWORD *)v9 + 10);
        v37 = v101 + 1;
      }
      v60 = *((_DWORD *)v9 + 38) * v36;
      if ( !v60 )
        v60 = 1;
      if ( !NonPagedPoolZeroedArray<_VIDSCH_INDEPENDENT_FLIP_STATE,1,962685270>::AllocateElements(
              (__int64 *)v9 + 416,
              v60) )
      {
        _InterlockedAdd(&dword_1C006E880, 1u);
        WdLogSingleEntry1(6LL, 867LL);
        v61 = 262145LL;
LABEL_126:
        DxgkLogInternalTriageEvent(v35, v61);
        goto LABEL_127;
      }
      for ( j = 0; j < *((_DWORD *)v9 + 874); v64[17] = v64 + 17 )
      {
        v63 = j++;
        v64 = (_QWORD *)(*((_QWORD *)v9 + 416) + 160 * v63);
        v64[16] = v64 + 15;
        v64[15] = v64 + 15;
        v64[18] = v64 + 17;
      }
      v65 = *((_DWORD *)v9 + 19);
      *((_QWORD *)v9 + 438) = 0LL;
      v66 = 0;
      *((_DWORD *)v9 + 878) = -1;
      v67 = 0LL;
      if ( v65 )
      {
        while ( 1 )
        {
          v68 = *(unsigned __int16 *)(344LL * v66 + *(_QWORD *)(v7 + 2680));
          v101 = v68;
          *((_BYTE *)v9 + v66 + 88) = v67;
          if ( v68 )
            break;
LABEL_104:
          v65 = *((_DWORD *)v9 + 19);
          ++v66;
          LODWORD(v24) = 0;
          if ( v66 >= v65 )
            goto LABEL_105;
        }
        while ( 1 )
        {
          Node = VidSchiCreateNode(v9, v66, (unsigned int)v24, (unsigned int)v67);
          v70 = (__int64 *)*((_QWORD *)v9 + 79);
          if ( (unsigned int)v67 < *((_DWORD *)v9 + 176) )
            v70 += v67;
          *v70 = Node;
          v71 = (_QWORD *)*((_QWORD *)v9 + 79);
          v72 = *((_DWORD *)v9 + 176);
          v73 = &v71[(unsigned int)v67];
          if ( (unsigned int)v67 >= v72 )
            v73 = (_QWORD *)*((_QWORD *)v9 + 79);
          if ( !*v73 )
            break;
          if ( (unsigned int)v67 < v72 )
            v71 += (unsigned int)v67;
          if ( (int)VidSchiInitializeNode(*v71, (unsigned int)v67) < 0 )
            goto LABEL_127;
          v67 = (unsigned int)(v67 + 1);
          LODWORD(v24) = v24 + 1;
          if ( (unsigned int)v24 >= v101 )
            goto LABEL_104;
        }
      }
      else
      {
LABEL_105:
        v74 = 0;
        if ( !v65 )
        {
LABEL_115:
          v84 = 1;
          v100 = 0;
          v90 = L"PageFaultDebugMode";
          v88 = 0LL;
          v91 = &v100;
          v89 = 288;
          v93 = &v84;
          v92 = 67108868;
          v99 = 0LL;
          v94 = 4;
          v95 = 0LL;
          v96 = 0;
          v97 = 0LL;
          v98 = 0LL;
          v80 = RtlQueryRegistryValuesEx(
                  0LL,
                  L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers",
                  &v88,
                  0LL,
                  0LL);
          if ( v80 < 0 )
          {
            v100 = 1;
            WdLogSingleEntry1(3LL, v80);
          }
          v81 = v100;
          if ( v100 > 1 )
          {
            WdLogSingleEntry1(3LL, v100);
            v81 = 1;
            v100 = 1;
          }
          g_PageFaultDebugMode = v81;
          *(_QWORD *)&ObjectAttributes.Length = 48LL;
          *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
          ThreadHandle = 0LL;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.ObjectName = 0LL;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v82 = PsCreateSystemThread(
                  &ThreadHandle,
                  0x1FFFFFu,
                  &ObjectAttributes,
                  0LL,
                  0LL,
                  (PKSTART_ROUTINE)VidSchiWorkerThread,
                  v9);
          if ( v82 >= 0 )
          {
            VidSchiRequestSchedulerStatus(v9, 1LL, 1LL);
            ObfReferenceObject(*((PVOID *)v9 + 21));
            ZwClose(ThreadHandle);
            return v9;
          }
          WdLogSingleEntry2(1LL, v7, v82);
          goto LABEL_125;
        }
        while ( 1 )
        {
          v75 = VidSchiCreateNode(v9, v74, 0x7FFFLL, (unsigned int)v67);
          v76 = (__int64 *)*((_QWORD *)v9 + 79);
          if ( (unsigned int)v67 < *((_DWORD *)v9 + 176) )
            v76 += v67;
          *v76 = v75;
          v77 = (_QWORD *)*((_QWORD *)v9 + 79);
          v78 = *((_DWORD *)v9 + 176);
          v79 = &v77[(unsigned int)v67];
          if ( (unsigned int)v67 >= v78 )
            v79 = (_QWORD *)*((_QWORD *)v9 + 79);
          if ( !*v79 )
            break;
          if ( (unsigned int)v67 < v78 )
            v77 += (unsigned int)v67;
          if ( (int)VidSchiInitializeNode(*v77, (unsigned int)v67) < 0 )
            goto LABEL_127;
          v67 = (unsigned int)(v67 + 1);
          if ( ++v74 >= *((_DWORD *)v9 + 19) )
            goto LABEL_115;
        }
      }
      WdLogSingleEntry2(1LL, v7, v67);
    }
    else
    {
      WdLogSingleEntry2(1LL, v9, v34);
    }
LABEL_125:
    v61 = 0x40000LL;
    goto LABEL_126;
  }
  WdLogSingleEntry0(1LL);
  DxgkLogInternalTriageEvent(v6, 0x40000LL);
  return 0LL;
}
