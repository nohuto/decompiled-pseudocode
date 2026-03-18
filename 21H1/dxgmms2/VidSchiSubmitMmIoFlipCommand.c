/*
 * XREFs of VidSchiSubmitMmIoFlipCommand @ 0x1C0002A30
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C008D2B0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00D1940 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C00028DC (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     VidSchiIsHardwareCompletedDependingCommandForFlip @ 0x1C00034DC (VidSchiIsHardwareCompletedDependingCommandForFlip.c)
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C0004B40 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     VidSchiUpdateContextStatus @ 0x1C0006940 (VidSchiUpdateContextStatus.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009640 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C000A5D0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000DF80 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiRewindPacket @ 0x1C000F224 (VidSchiRewindPacket.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C000FDB0 (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0016B80 (memmove.c)
 *     memset @ 0x1C0016E40 (memset.c)
 *     VidSchiRestartQueuedFlip @ 0x1C003160C (VidSchiRestartQueuedFlip.c)
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0035B8C (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C003CF18 (VidSchiCompletePendingFlipOnPlane.c)
 *     VidSchIsVSyncEnabled @ 0x1C007B620 (VidSchIsVSyncEnabled.c)
 */

void __fastcall VidSchiSubmitMmIoFlipCommand(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // r15
  struct _VIDSCH_QUEUE_PACKET *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 v6; // r14
  _QWORD *v7; // rbx
  unsigned int v8; // ebx
  KIRQL v9; // r13
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // r9
  _QWORD *v13; // r10
  __int64 v14; // r13
  unsigned int v15; // r8d
  bool v16; // zf
  int v17; // eax
  __int64 v18; // rbx
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  char v24; // di
  __int64 v25; // rcx
  unsigned int v26; // edi
  __int64 v27; // rax
  __int64 v28; // r11
  unsigned __int16 v29; // dx
  unsigned int v30; // r8d
  int v31; // eax
  char v32; // cl
  _QWORD *v33; // r9
  int v34; // eax
  _DWORD *v35; // rdi
  int v36; // ecx
  int v37; // ecx
  int v38; // edx
  int v39; // ecx
  __int64 v40; // rax
  unsigned int v41; // eax
  int v42; // r11d
  __int64 v43; // r8
  unsigned int i; // ecx
  __int64 v45; // rdx
  unsigned int v46; // edi
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  __int64 v50; // rax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  __int64 v54; // rax
  int v55; // ecx
  unsigned int v56; // ecx
  unsigned int v57; // eax
  unsigned int v58; // ecx
  int v59; // edx
  int v60; // r10d
  unsigned int v61; // r9d
  int v62; // edx
  unsigned int v63; // edi
  unsigned int v64; // r8d
  unsigned int v65; // edi
  __int64 v66; // r15
  __int64 v67; // rdx
  __int64 *v68; // rax
  _DWORD *v69; // rcx
  __int64 v70; // r15
  int v71; // edi
  LARGE_INTEGER *v72; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  _DWORD *v74; // rcx
  unsigned int v75; // ebx
  _QWORD *v76; // rdx
  __int64 v77; // rax
  int v78; // eax
  unsigned int v79; // ecx
  int v80; // r15d
  __int64 v81; // r8
  int v82; // edx
  __int64 v83; // r9
  __int64 v84; // rdi
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // r8
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rdx
  int v91; // eax
  int v92; // edx
  __int64 v93; // r8
  char v94; // bl
  void (__fastcall *v95)(_QWORD, _QWORD); // rax
  void (__fastcall *v96)(_QWORD, _QWORD); // rax
  void (__fastcall *v97)(_QWORD, _QWORD); // rax
  _QWORD *v98; // rax
  __int64 v99; // rax
  int v100; // ecx
  int v101; // eax
  unsigned int v102; // eax
  int v103; // ecx
  int v104; // edx
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  unsigned int v109; // edx
  int v110; // r8d
  int v111; // r8d
  int v112; // edx
  int v113; // edx
  __int64 v114; // rcx
  _QWORD *v115; // rax
  unsigned int v116; // edx
  int v117; // r8d
  int v118; // edx
  unsigned int v119; // [rsp+30h] [rbp-99h]
  int v120; // [rsp+34h] [rbp-95h]
  unsigned int v121; // [rsp+34h] [rbp-95h]
  _QWORD v122[2]; // [rsp+38h] [rbp-91h] BYREF
  char v123; // [rsp+48h] [rbp-81h]
  __int64 v124; // [rsp+50h] [rbp-79h]
  __int64 v125; // [rsp+58h] [rbp-71h]
  int v126; // [rsp+60h] [rbp-69h]
  int v127; // [rsp+64h] [rbp-65h]
  int v128; // [rsp+68h] [rbp-61h]
  int v129; // [rsp+6Ch] [rbp-5Dh]
  int v130; // [rsp+70h] [rbp-59h]
  int v131; // [rsp+74h] [rbp-55h]
  PSLIST_ENTRY *v132; // [rsp+78h] [rbp-51h]
  _DWORD *v133; // [rsp+80h] [rbp-49h]
  __int64 v134; // [rsp+88h] [rbp-41h]
  _QWORD *v135; // [rsp+90h] [rbp-39h]
  __int64 v136; // [rsp+98h] [rbp-31h] BYREF
  unsigned int *v137; // [rsp+A0h] [rbp-29h]
  unsigned int v138; // [rsp+A8h] [rbp-21h]
  unsigned int v139; // [rsp+ACh] [rbp-1Dh]
  int v140; // [rsp+B0h] [rbp-19h]
  unsigned int v141; // [rsp+B4h] [rbp-15h]
  unsigned int v142; // [rsp+B8h] [rbp-11h]
  _QWORD *v143; // [rsp+C0h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C8h] [rbp-1h] BYREF
  unsigned int v145; // [rsp+130h] [rbp+67h]
  char v146; // [rsp+138h] [rbp+6Fh] BYREF
  KIRQL v147; // [rsp+140h] [rbp+77h]
  unsigned int v148; // [rsp+148h] [rbp+7Fh]

  v1 = *((_QWORD *)a1 + 11);
  v2 = a1;
  v3 = *((unsigned int *)a1 + 40);
  v148 = v3;
  v4 = (unsigned int)v3;
  v5 = *(_QWORD *)(v1 + 104);
  v6 = *(_QWORD *)(v5 + 32);
  v7 = (_QWORD *)(v6 + 8 * (v3 + 388));
  v124 = *v7;
  v135 = v7;
  if ( (*(_BYTE *)(v6 + 2940) & 1) != 0
    || *(_DWORD *)(v6 + 2916)
    || *(_BYTE *)(v5 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 200), 0, 0) )
  {
    do
      v2 = VidSchiProcessCompletedQueuePacketInternal(v2);
    while ( v2 );
    return;
  }
  if ( (*(_DWORD *)(v5 + 48) & 2) != 0 || *((int *)v2 + 98) >= 4 || *(_BYTE *)(v6 + 148) )
    VidSchIsVSyncEnabled(v6, (unsigned int)v3);
  v8 = *(_DWORD *)(*v7 + 33288LL);
  if ( v8 != -1 )
  {
    v95 = *(void (__fastcall **)(_QWORD, _QWORD))(v6 + 2960);
    if ( v95 )
      v95(*(_QWORD *)(v6 + 3024), v8);
  }
  v147 = KfRaiseIrql(2u);
  v9 = v147;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 1712), &LockHandle);
  v10 = *((_DWORD *)v2 + 16);
  v122[1] = v122;
  v122[0] = v122;
  v123 = 0;
  if ( (v10 & 0x20) != 0 )
  {
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v122);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KeLowerIrql(v9);
    do
      v2 = VidSchiProcessCompletedQueuePacketInternal(v2);
    while ( v2 );
    if ( v8 != -1 )
    {
      v96 = *(void (__fastcall **)(_QWORD, _QWORD))(v6 + 2976);
      if ( v96 )
        v96(*(_QWORD *)(v6 + 3024), v8);
    }
    if ( v123 )
      return;
LABEL_130:
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v122);
    return;
  }
  v11 = *((_QWORD *)v2 + 50);
  v12 = v124;
  v13 = (_QWORD *)(v5 + 8 * (v4 + 47));
  v143 = v13;
  v125 = v11;
  if ( v11 - *v13 > (unsigned __int64)(unsigned int)(64 - *(_DWORD *)(v124 + 2340)) )
  {
    VidSchiRewindPacket(v2, 1LL, 1LL, 1LL);
    VidSchiUpdateContextStatus(v1, 3LL, 3022LL);
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v122);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KeLowerIrql(v9);
    if ( v8 != -1 )
    {
      v97 = *(void (__fastcall **)(_QWORD, _QWORD))(v6 + 2976);
      if ( v97 )
        v97(*(_QWORD *)(v6 + 3024), v8);
    }
    if ( v123 )
      return;
    goto LABEL_130;
  }
  v146 = 0;
  if ( *(_DWORD *)(v124 + 4) == 3 || !*((_DWORD *)v2 + 99) && (*((_DWORD *)v2 + 68) & 0x10000000) != 0 )
  {
    v120 = 1;
    v134 = 1LL;
  }
  else
  {
    v120 = 0;
    v134 = 0LL;
  }
  v14 = *(_QWORD *)(v124 + 24);
  if ( (*((_DWORD *)v2 + 18) & 0x800000) != 0 )
  {
    v15 = ((unsigned __int16)*((_DWORD *)v2 + 210) | (unsigned __int16)(*((_DWORD *)v2 + 210) >> 10)) & 0x3FF;
  }
  else
  {
    LODWORD(v11) = v125;
    v15 = (1 << *(_DWORD *)(v6 + 144)) - 1;
  }
  v16 = !_BitScanForward((unsigned int *)&v17, v15);
  v18 = 0xFFFFFFFFLL;
  v126 = v17;
  if ( !v16 )
    v18 = (unsigned __int8)v17;
  if ( v15 )
  {
    v19 = *(_QWORD *)(v6 + 8 * v4 + 3104);
    while ( 1 )
    {
      v20 = (unsigned int)(char)v18;
      v21 = *(int *)(216 * v20 + v19 + 172);
      if ( (int)v21 > -1 )
      {
        v90 = *(unsigned int *)(152 * v21 + *(_QWORD *)(v6 + 3232) + 112);
        if ( (_DWORD)v90 == 2 )
          break;
      }
      v18 = 0xFFFFFFFFLL;
      v15 &= ~(1 << v20);
      v16 = !_BitScanForward((unsigned int *)&v22, v15);
      v127 = v22;
      if ( !v16 )
        v18 = (unsigned __int8)v22;
      if ( !v15 )
      {
        LODWORD(v11) = *((_DWORD *)v2 + 100);
        v12 = v124;
        goto LABEL_24;
      }
    }
    v98 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v90);
    v98[5] = (char)v18;
    v98[3] = 281LL;
    v98[4] = 0x100000LL;
    v98[6] = v4;
    v98[7] = v6;
    WdLogEvent5_WdCriticalError(v98);
    __debugbreak();
    goto LABEL_138;
  }
LABEL_24:
  v23 = (unsigned int)(v11 - *(_DWORD *)v13);
  v24 = v23 + *(_DWORD *)(v14 + 32);
  v125 = v23;
  v25 = *(_QWORD *)(v6 + 624);
  v26 = v24 & 0x3F;
  v27 = *(unsigned int *)(v1 + 88);
  v28 = v14 + 1344LL * v26;
  v119 = v26;
  v133 = (_DWORD *)v28;
  v18 = v28 + 88;
  if ( (unsigned int)v27 < *(_DWORD *)(v6 + 696) )
    v25 += 8 * v27;
  v29 = *(_WORD *)(*(_QWORD *)v25 + 6LL);
  v145 = v29;
  if ( *(_DWORD *)(v28 + 1140) == 8 )
  {
LABEL_138:
    *(_QWORD *)(v18 + 8LL * *(unsigned int *)(v18 + 1092)) = v1;
    *(_QWORD *)(v18 + 8LL * *(unsigned int *)(v18 + 1092) + 520) = *(_QWORD *)(v1 + 152);
    v99 = *(_QWORD *)(v1 + 104);
    ++*(_DWORD *)(v18 + 1092);
    *(_QWORD *)(v18 + 1040) = v99;
    ++*(_DWORD *)(v1 + 792);
    *(_DWORD *)(v18 + 1084) |= 1 << v29;
    v42 = 0;
    goto LABEL_59;
  }
  ++*(_DWORD *)(v6 + 796);
  ++*(_DWORD *)(v5 + 1576);
  ++*(_DWORD *)(v1 + 792);
  ++*(_DWORD *)(v12 + 2340);
  if ( (*((_DWORD *)v2 + 68) & 0x800000) != 0 )
    v30 = ((unsigned __int16)*((_DWORD *)v2 + 210) | (unsigned __int16)(*((_DWORD *)v2 + 210) >> 10)) & 0x3FF;
  else
    v30 = (1 << *(_DWORD *)(v6 + 144)) - 1;
  v16 = !_BitScanForward((unsigned int *)&v31, v30);
  v128 = v31;
  v32 = -1;
  if ( !v16 )
    v32 = v31;
  if ( v30 )
  {
    v33 = v135;
    do
    {
      ++*(_DWORD *)(216LL * v32 + *v33 + 180);
      v34 = 1 << v32;
      v32 = -1;
      v30 &= ~v34;
      v16 = !_BitScanForward((unsigned int *)&v34, v30);
      v129 = v34;
      if ( !v16 )
        v32 = v34;
    }
    while ( v30 );
  }
  v35 = *(_DWORD **)(v28 + 1264);
  memset((void *)v18, 0, 0x540uLL);
  *(_QWORD *)(v18 + 1176) = v35;
  memset(v35 + 4, 0, v35[1] * ((v35[2] << 6) + ((8 * v35[2] + 199) & 0xFFFFFFF8)));
  *(_QWORD *)v18 = v1;
  *(_QWORD *)(v18 + 1040) = *(_QWORD *)(v1 + 104);
  *(_DWORD *)(v18 + 1048) = *((_DWORD *)v2 + 28);
  *(_DWORD *)(v18 + 1056) = *((_DWORD *)v2 + 96);
  *(_QWORD *)(v18 + 520) = *(_QWORD *)(v1 + 152);
  *(_BYTE *)(v18 + 1076) = (*((_DWORD *)v2 + 68) & 0x10) != 0;
  v36 = *(_DWORD *)(v18 + 1136) ^ (*(_DWORD *)(v18 + 1136) ^ (*((_DWORD *)v2 + 18) >> 19)) & 0x10;
  *(_DWORD *)(v18 + 1136) = v36;
  v37 = ((unsigned __int16)v36 ^ (*((_DWORD *)v2 + 68) >> 20)) & 0x400 ^ v36;
  *(_DWORD *)(v18 + 1136) = v37;
  v38 = v37 ^ ((unsigned __int16)v37 ^ (*((_DWORD *)v2 + 68) >> 20)) & 0x800;
  v16 = (_DWORD)v125 == 0;
  *(_DWORD *)(v18 + 1136) = v38;
  if ( v16 )
  {
    ++*(_QWORD *)(v14 + 64);
    v38 = *(_DWORD *)(v18 + 1136);
    *(_QWORD *)(v18 + 1064) = *(_QWORD *)(v14 + 64);
  }
  v39 = *((_DWORD *)v2 + 156);
  *(_DWORD *)(v18 + 1184) = v39;
  if ( (v38 & 0x400) != 0 )
  {
    v100 = v39 - 1;
    if ( v100 )
    {
      if ( v100 == 1 )
      {
        *(_OWORD *)(v18 + 1188) = *(_OWORD *)((char *)v2 + 628);
        *(_OWORD *)(v18 + 1204) = *(_OWORD *)((char *)v2 + 644);
        *(_OWORD *)(v18 + 1220) = *(_OWORD *)((char *)v2 + 660);
        *(_OWORD *)(v18 + 1236) = *(_OWORD *)((char *)v2 + 676);
        *(_QWORD *)(v18 + 1252) = *(_QWORD *)((char *)v2 + 692);
      }
    }
    else
    {
      *(_OWORD *)(v18 + 1188) = *(_OWORD *)((char *)v2 + 628);
      *(_QWORD *)(v18 + 1204) = *(_QWORD *)((char *)v2 + 644);
      *(_DWORD *)(v18 + 1212) = *((_DWORD *)v2 + 163);
    }
  }
  if ( (v38 & 0x800) != 0 )
  {
    *(_OWORD *)(v18 + 1260) = *(_OWORD *)((char *)v2 + 700);
    *(_OWORD *)(v18 + 1276) = *(_OWORD *)((char *)v2 + 716);
  }
  v40 = *((_QWORD *)v2 + 102);
  if ( v40 )
  {
    *(_QWORD *)(v18 + 1304) = v40;
    *(_QWORD *)(v18 + 1312) = *((_QWORD *)v2 + 103);
    *(_QWORD *)(v18 + 1320) = *((_QWORD *)v2 + 104);
    *(_QWORD *)(v18 + 1328) = *((_QWORD *)v2 + 130);
    *(_DWORD *)(v18 + 1336) ^= (*(_DWORD *)(v18 + 1336) ^ (*((_DWORD *)v2 + 69) >> 5)) & 1;
    *(_DWORD *)(v18 + 1336) ^= ((unsigned __int8)*(_DWORD *)(v18 + 1336) ^ (unsigned __int8)(*((_DWORD *)v2 + 69) >> 3)) & 2;
  }
  memmove(*(void **)(v18 + 1176), (char *)v2 + 840, *((unsigned int *)v2 + 213));
  v41 = *(_DWORD *)(v6 + 144);
  v42 = 0;
  v43 = *(_QWORD *)(v18 + 1176);
  for ( i = 0; i < v41; ++i )
  {
    v45 = *(_QWORD *)(i * ((8 * *(_DWORD *)(v43 + 8) + 199) & 0xFFFFFFF8) + v43 + 200);
    if ( v45 )
      _InterlockedIncrement((volatile signed __int32 *)(v45 + 12));
    v41 = *(_DWORD *)(v6 + 144);
  }
  v46 = 0;
  if ( v41 )
  {
    do
    {
      v132 = (PSLIST_ENTRY *)((char *)v2 + v46 * ((8 * *((_DWORD *)v2 + 212) + 199) & 0xFFFFFFF8) + 1040);
      if ( *v132 )
      {
        CRefCountedBuffer::RefCountedBufferRelease(*v132);
        v42 = 0;
        *v132 = 0LL;
      }
      ++v46;
    }
    while ( v46 < *(_DWORD *)(v6 + 144) );
  }
  *(_DWORD *)(v18 + 1080) = *((_DWORD *)v2 + 102);
  *(_DWORD *)(v18 + 1084) = 1 << v145;
  v47 = *(_DWORD *)(v18 + 1136) ^ (*(_DWORD *)(v18 + 1136) ^ (*((_DWORD *)v2 + 68) >> 19)) & 1;
  *(_DWORD *)(v18 + 1136) = v47;
  v48 = ((unsigned __int8)v47 ^ (unsigned __int8)(*((_DWORD *)v2 + 68) >> 19)) & 2 ^ v47;
  *(_DWORD *)(v18 + 1136) = v48;
  v49 = ((unsigned __int8)v48 ^ (unsigned __int8)(*((_DWORD *)v2 + 68) >> 19)) & 4 ^ v48;
  *(_DWORD *)(v18 + 1136) = v49;
  *(_DWORD *)(v18 + 1136) = v49 ^ ((unsigned __int8)v49 ^ (unsigned __int8)(*((_DWORD *)v2 + 68) >> 19)) & 8;
  *(_QWORD *)(v18 + 1160) = *((_QWORD *)v2 + 37);
  v50 = *((_QWORD *)v2 + 38);
  *(_QWORD *)(v18 + 1168) = v50;
  if ( v50 )
    _InterlockedIncrement((volatile signed __int32 *)(v50 + 12));
  v51 = *((_DWORD *)v2 + 68);
  *(_DWORD *)(v18 + 1092) = 1;
  if ( (v51 & 0x400) != 0 )
  {
    *(_DWORD *)(v18 + 1088) = *((_DWORD *)v2 + 103);
    v52 = *((_DWORD *)v2 + 103);
  }
  else
  {
    *(_DWORD *)(v18 + 1088) = 1;
    v52 = 1;
  }
  *(_DWORD *)(v18 + 1096) = v52;
  if ( *(_BYTE *)(v18 + 1076) || v120 )
  {
    *(_DWORD *)(v18 + 1072) = 0;
    v103 = *(_DWORD *)(v18 + 1136) ^ (*(_DWORD *)(v18 + 1136) ^ (*((_DWORD *)v2 + 68) >> 21)) & 0x80;
    *(_DWORD *)(v18 + 1136) = v103;
    v102 = v103 ^ ((unsigned __int16)v103 ^ (*((_DWORD *)v2 + 68) >> 20)) & 0x100;
    goto LABEL_147;
  }
  v53 = *((_DWORD *)v2 + 99);
  if ( !v53 )
  {
    v101 = *(_DWORD *)(v18 + 1136) | 0x80;
    *(_DWORD *)(v18 + 1072) = 0;
    v102 = v101 & 0xFFFFFEFF;
LABEL_147:
    *(_DWORD *)(v18 + 1136) = v102;
    goto LABEL_59;
  }
  *(_DWORD *)(v18 + 1072) = v53;
LABEL_59:
  v54 = v124;
  v55 = *((_DWORD *)v2 + 104);
  *(_DWORD *)(v18 + 1140) = v55;
  if ( (*(_DWORD *)(v54 + 70584) & 1) != 0 )
  {
    v104 = *(_DWORD *)(v18 + 1136);
    if ( (v104 & 0x80u) != 0 )
    {
      if ( !v55 )
        v55 = -1;
      *(_DWORD *)(v18 + 1140) = v55;
    }
    if ( (v104 & 0x180) == 0x80 )
      *(_DWORD *)(v18 + 1136) = v104 | 0x200;
  }
  if ( (*((_DWORD *)v2 + 68) & 0x800) != 0 )
    *(_BYTE *)(v18 + 1077) = 1;
  v137 = *(unsigned int **)(v18 + 1176);
  v136 = v6;
  v56 = *v137;
  v57 = *v137 & 0x3FF;
  v16 = *(_BYTE *)(v6 + 148) == 0;
  v138 = v57;
  if ( v16 )
    v58 = 0;
  else
    v58 = (v56 >> 10) & 0x3FF;
  v16 = !_BitScanForward((unsigned int *)&v59, v57);
  v139 = v58;
  v60 = 0;
  v130 = v59;
  v140 = 0;
  if ( v16 )
    LOBYTE(v59) = -1;
  v61 = (char)v59;
  v16 = !_BitScanForward((unsigned int *)&v59, v58);
  v141 = v61;
  v131 = v62;
  if ( v16 )
    LOBYTE(v59) = -1;
  v63 = v145;
  v64 = (char)v59;
  v142 = (char)v59;
  while ( v57 || v58 )
  {
    if ( v61 >= v64 )
      goto LABEL_98;
    v78 = *(_DWORD *)(v18 + 1080);
    v79 = 0;
    v121 = 0;
    v80 = 1;
    LODWORD(v132) = v78;
    while ( (v78 & v80) == 0 )
    {
LABEL_156:
      ++v79;
      v80 *= 2;
      v121 = v79;
      if ( v79 > v63 )
        goto LABEL_98;
    }
    v81 = *(_QWORD *)(v18 + 1176);
    v82 = *(_DWORD *)(v81 + 4);
    v83 = v82 * ((8 * *(_DWORD *)(v81 + 8) + 199) & 0xFFFFFFF8);
    v84 = *(_QWORD *)(v81 + ((unsigned __int64)(unsigned int)(v60 + v42 * v82) << 6) + v83 + 48);
    if ( ((*(_DWORD *)(v84 + 32) >> 2) & 0x3F) != v145 )
    {
      v78 = (int)v132;
      ++v42;
      v79 = v121;
      v63 = v145;
      goto LABEL_156;
    }
    v85 = *(_QWORD *)(v84 + 96);
    v86 = v81 + ((unsigned __int64)(unsigned int)(v60 + v42 * v82) << 6);
    v87 = v86;
    v88 = *(_QWORD *)(v85 + 24);
    if ( v88 )
    {
      *(_QWORD *)(v86 + v83 + 64) = ++*(_QWORD *)(v88 + 16);
      v105 = *(_QWORD *)(*(_QWORD *)(v84 + 96) + 24LL);
      *(_QWORD *)(v86 + v83 + 72) = ++*(_QWORD *)(v105 + 24);
      v106 = *(_QWORD *)(v84 + 96);
      v63 = v145;
      v107 = *(_QWORD *)(v106 + 24);
      v108 = 2LL * *(unsigned int *)(v107 + 32);
      *(_OWORD *)(v107 + 8 * v108 + 40) = 0LL;
      *(_DWORD *)(v107 + 32) = ((unsigned __int8)*(_DWORD *)(v107 + 32) + 1) & 7;
      *(_DWORD *)(v107 + 8 * v108 + 40) = 0;
      *(_QWORD *)(v107 + 8 * v108 + 48) = *(_QWORD *)(v87 + v83 + 72);
    }
    else
    {
      v89 = *(_QWORD *)(v85 + 16);
      v63 = v145;
      if ( v89 )
        _InterlockedIncrement((volatile signed __int32 *)(v89 + 8));
    }
LABEL_98:
    VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(&v136);
    v64 = v142;
    v58 = v139;
    v57 = v138;
    v61 = v141;
    v60 = v140;
  }
  if ( *(_DWORD *)(v18 + 1088) > *(_DWORD *)(v18 + 1092) )
  {
    *(_DWORD *)(v18 + 1052) = 8;
  }
  else
  {
    if ( !(_DWORD)v125 )
    {
      v65 = v119;
      v66 = v124;
      while ( 1 )
      {
        *(_DWORD *)(v14 + 32) = ((_BYTE)v65 + 1) & 0x3F;
        ++*v143;
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 800));
        _InterlockedIncrement((volatile signed __int32 *)(v66 + 2344));
        if ( *(_DWORD *)(v18 + 1052) == 7 )
          *(_QWORD *)(v18 + 1064) = ++*(_QWORD *)(v14 + 64);
        if ( (unsigned int)VidSchiIsHardwareCompletedDependingCommandForFlip(v18) && *(_BYTE *)(v66 + 66436) )
          break;
        v68 = v135;
        v69 = v133;
        *(_DWORD *)(v18 + 1052) = 1;
        v70 = *v68;
        if ( (v69[306] & 0x10) != 0 )
          v71 = ((unsigned __int16)**((_DWORD **)v69 + 158) | (unsigned __int16)(**((_DWORD **)v69 + 158) >> 10)) & 0x3FF;
        else
          v71 = (1 << *(_DWORD *)(v6 + 144)) - 1;
        v72 = (LARGE_INTEGER *)(*(_QWORD *)(v70 + 120) + 72LL * *(unsigned int *)(v70 + 128));
        memset(v72, 0, 0x48uLL);
        *(_DWORD *)(v70 + 128) = (*(_DWORD *)(v70 + 128) + 1) & (*(_DWORD *)(v70 + 112) - 1);
        v72->LowPart = 0;
        v72[2].LowPart = v71;
        BYTE4(v72[2].QuadPart) = *(_BYTE *)(v14 + 56);
        v72[3].LowPart = v119;
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v74 = v133;
        v72[1] = PerformanceCounter;
        LOBYTE(v72[4].LowPart) = (v74[306] & 0x20) != 0;
        v72[4].HighPart = v74[285];
        v72[3].HighPart = v74[286];
        v72[5].HighPart = *(_DWORD *)(v70 + 2356);
        PerformanceCounter.LowPart = *(_DWORD *)(v70 + 2352);
        v66 = v124;
        v72[5].LowPart = PerformanceCounter.LowPart;
        v72[6].LowPart = *(_DWORD *)(v14 + 32);
        v72[6].HighPart = *(_DWORD *)(v14 + 36);
        v72[7].LowPart = *(_DWORD *)(v14 + 40);
        v72[7].HighPart = *(_DWORD *)(v14 + 44);
        v72[8].LowPart = *(_DWORD *)(v14 + 48);
        v72[8].HighPart = *(_DWORD *)(v14 + 52);
LABEL_80:
        v119 = *(_DWORD *)(v14 + 32);
        v65 = v119;
        v133 = (_DWORD *)(v14 + 1344LL * v119);
        v18 = (__int64)(v133 + 22);
        if ( v133[285] != 7 )
        {
          v75 = v148;
          goto LABEL_82;
        }
      }
      v16 = v134 == 0;
      *(_DWORD *)(v18 + 1052) = 2;
      v91 = *(_DWORD *)(v14 + 40);
      if ( v16 )
      {
        if ( v65 == v91 || *(_BYTE *)(v18 + 1076) )
        {
          *(_QWORD *)(v18 + 1104) = MEMORY[0xFFFFF78000000320];
          if ( *(_BYTE *)(v6 + 148) )
            goto LABEL_182;
          goto LABEL_106;
        }
        v18 = ((_BYTE)v65 - 1) & 0x3F;
        v114 = *(unsigned int *)(1344 * v18 + v14 + 1224);
        if ( (v114 & 0x20) == 0 )
          goto LABEL_118;
        v115 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v114, v67);
        v115[3] = 281LL;
        v115[4] = 0x100000LL;
        v115[5] = v18;
        v115[6] = v14;
        v115[7] = v6;
        WdLogEvent5_WdCriticalError(v115);
        __debugbreak();
LABEL_182:
        v116 = *(_DWORD *)(v14 + 48);
        v117 = ((unsigned __int8)*(_DWORD *)(v14 + 44) - 1) & 0x3F;
        if ( v116 != v117 )
        {
          while ( *(_DWORD *)(1344LL * v116 + v14 + 1140) != 14 )
          {
            v116 = ((_BYTE)v116 - 1) & 0x3F;
            if ( v116 == v117 )
              goto LABEL_185;
          }
LABEL_118:
          v94 = 1;
LABEL_113:
          if ( *(_DWORD *)(1344LL * *(unsigned int *)(v14 + 36) + v14 + 1140) != 1 )
            *(_DWORD *)(v14 + 36) = *(_DWORD *)(v14 + 32);
          if ( v94 )
            VidSchiUpdateFlipQueueHistory(0LL, v6, v148, v14, v65);
          goto LABEL_80;
        }
LABEL_185:
        if ( (*(_DWORD *)(v18 + 1136) & 0x10) != 0 )
          v118 = ((unsigned __int16)**(_DWORD **)(v18 + 1176) | (unsigned __int16)(**(_DWORD **)(v18 + 1176) >> 10)) & 0x3FF;
        else
          v118 = (1 << *(_DWORD *)(v6 + 144)) - 1;
        if ( (v118 & *(_DWORD *)(v66 + 2356)) != 0 )
          goto LABEL_118;
        if ( *(_DWORD *)(v6 + 152) <= 1u || *(_DWORD *)(v66 + 4) == 3 || (*(_DWORD *)(v18 + 1136) & 0x180) != 0x80 )
        {
LABEL_106:
          if ( (*(_DWORD *)(v18 + 1136) & 0x10) != 0 )
            v92 = ((unsigned __int16)**(_DWORD **)(v18 + 1176) | (unsigned __int16)(**(_DWORD **)(v18 + 1176) >> 10)) & 0x3FF;
          else
            v92 = (1 << *(_DWORD *)(v6 + 144)) - 1;
          if ( (v92 & *(_DWORD *)(v66 + 2352)) != 0 )
            goto LABEL_118;
        }
        if ( *(_BYTE *)(v18 + 1076) )
          VidSchiRestartQueuedFlip((unsigned int)v122, v5, v148, v14, v65);
        if ( *(_DWORD *)(v14 + 80) )
        {
          *(_DWORD *)(v18 + 1052) = 3;
          goto LABEL_118;
        }
LABEL_112:
        v93 = v148;
        *(_DWORD *)(v18 + 1052) = 4;
        v94 = 0;
        VidSchiUpdateFlipQueueHistory(0LL, v6, v93, v14, v65);
        VidSchiExecuteMmIoFlip(v122, v6, v148, v14, v65, &v146);
        goto LABEL_113;
      }
      if ( v65 != v91 )
        goto LABEL_118;
      if ( !*(_BYTE *)(v6 + 148) )
        goto LABEL_112;
      v109 = *(_DWORD *)(v14 + 48);
      v110 = ((unsigned __int8)*(_DWORD *)(v14 + 44) - 1) & 0x3F;
      if ( v109 == v110 )
      {
LABEL_167:
        v111 = *(_DWORD *)(v18 + 1136);
        if ( (v111 & 0x10) != 0 )
          v112 = ((unsigned __int16)**(_DWORD **)(v18 + 1176) | (unsigned __int16)(**(_DWORD **)(v18 + 1176) >> 10)) & 0x3FF;
        else
          v112 = (1 << *(_DWORD *)(v6 + 144)) - 1;
        if ( (v112 & *(_DWORD *)(v66 + 2356)) == 0 )
        {
          if ( *(_DWORD *)(v6 + 152) > 1u && *(_DWORD *)(v66 + 4) != 3 && (v111 & 0x180) == 0x80 )
            goto LABEL_112;
          v113 = (*(_DWORD *)(v18 + 1136) & 0x10) != 0
               ? ((unsigned __int16)**(_DWORD **)(v18 + 1176) | (unsigned __int16)(**(_DWORD **)(v18 + 1176) >> 10)) & 0x3FF
               : (1 << *(_DWORD *)(v6 + 144)) - 1;
          if ( (v113 & *(_DWORD *)(v66 + 2352)) == 0 )
            goto LABEL_112;
        }
      }
      else
      {
        while ( *(_DWORD *)(1344LL * v109 + v14 + 1140) != 14 )
        {
          v109 = ((_BYTE)v109 - 1) & 0x3F;
          if ( v109 == v110 )
            goto LABEL_167;
        }
      }
      *(_QWORD *)(v18 + 1104) = MEMORY[0xFFFFF78000000320];
      goto LABEL_118;
    }
    *(_DWORD *)(v18 + 1052) = 7;
  }
  v75 = v148;
  VidSchiUpdateFlipQueueHistory(0LL, v6, v148, v14, v119);
LABEL_82:
  *((_DWORD *)v2 + 16) |= 2u;
  if ( v146 )
    VidSchiCompletePendingFlipOnPlane((unsigned int)v122, v6, v75, v14, 9);
  while ( 1 )
  {
    v76 = (_QWORD *)v122[0];
    if ( *(_QWORD **)(v122[0] + 8LL) != v122
      || (v77 = *(_QWORD *)v122[0], *(_QWORD *)(*(_QWORD *)v122[0] + 8LL) != v122[0]) )
    {
      __fastfail(3u);
    }
    v122[0] = *(_QWORD *)v122[0];
    *(_QWORD *)(v77 + 8) = v122;
    if ( v76 == v122 )
      break;
    *v76 = 0LL;
    v76[1] = 0LL;
    HwQueueStagingList::ProcessHwQueue((HwQueueStagingList *)v122, (struct VIDSCH_HW_QUEUE *)(v76 - 22));
  }
  v123 = 1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  do
    v2 = VidSchiProcessCompletedQueuePacketInternal(v2);
  while ( v2 );
  KeLowerIrql(v147);
  if ( !v123 )
    goto LABEL_130;
}
