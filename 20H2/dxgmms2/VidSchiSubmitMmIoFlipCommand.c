/*
 * XREFs of VidSchiSubmitMmIoFlipCommand @ 0x1C0001AA0
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C008D3D0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00D1320 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C00018DC (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?FillVmState@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXAEAUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C0001A24 (-FillVmState@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXAEAUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     VidSchiIsHardwareCompletedDependingCommandForFlip @ 0x1C0002540 (VidSchiIsHardwareCompletedDependingCommandForFlip.c)
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C00040E0 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     VidSchiUpdateContextStatus @ 0x1C0005EE0 (VidSchiUpdateContextStatus.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008E70 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0009E00 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000D8D0 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C000F47C (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     VidSchiRewindPacket @ 0x1C0013A30 (VidSchiRewindPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0018300 (memmove.c)
 *     memset @ 0x1C00185C0 (memset.c)
 *     VidSchiRestartQueuedFlip @ 0x1C00312DC (VidSchiRestartQueuedFlip.c)
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C003586C (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C003CBD8 (VidSchiCompletePendingFlipOnPlane.c)
 *     VidSchIsVSyncEnabled @ 0x1C00644B0 (VidSchIsVSyncEnabled.c)
 */

void __fastcall VidSchiSubmitMmIoFlipCommand(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // r13
  struct _VIDSCH_QUEUE_PACKET *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 v6; // r14
  _QWORD *v7; // rbx
  unsigned int v8; // ebx
  KIRQL v9; // r15
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // r9
  _QWORD *v13; // r10
  __int64 v14; // r15
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
  __int64 v36; // rax
  int *v37; // r13
  int v38; // ecx
  int v39; // ecx
  int v40; // edx
  int v41; // ecx
  unsigned int v42; // eax
  int v43; // r11d
  __int64 v44; // r8
  unsigned int i; // ecx
  __int64 v46; // rdx
  unsigned int v47; // edi
  int v48; // ecx
  int v49; // ecx
  int v50; // ecx
  __int64 v51; // rax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  __int64 v55; // rax
  int v56; // ecx
  unsigned int v57; // ecx
  unsigned int v58; // eax
  unsigned int v59; // ecx
  int v60; // edx
  int v61; // r10d
  unsigned int v62; // r9d
  int v63; // edx
  unsigned int v64; // edi
  unsigned int v65; // r8d
  unsigned int v66; // edi
  __int64 v67; // r13
  __int64 v68; // rdx
  __int64 *v69; // rax
  _DWORD *v70; // rcx
  __int64 v71; // r13
  int v72; // edi
  LARGE_INTEGER *v73; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  _DWORD *v75; // rcx
  unsigned int v76; // ebx
  _QWORD *v77; // rdx
  __int64 v78; // rax
  int v79; // eax
  unsigned int v80; // ecx
  int v81; // r13d
  __int64 v82; // r8
  int v83; // edx
  __int64 v84; // r9
  __int64 v85; // rdi
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // r9
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rdx
  int v92; // eax
  int v93; // edx
  __int64 v94; // r8
  char v95; // bl
  void (__fastcall *v96)(_QWORD, _QWORD); // rax
  void (__fastcall *v97)(_QWORD, _QWORD); // rax
  void (__fastcall *v98)(_QWORD, _QWORD); // rax
  _QWORD *v99; // rax
  __int64 v100; // rax
  int v101; // ecx
  int v102; // eax
  unsigned int v103; // eax
  int v104; // ecx
  int v105; // edx
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  unsigned int v110; // edx
  int v111; // r8d
  int v112; // r8d
  int v113; // edx
  int v114; // edx
  __int64 v115; // rcx
  _QWORD *v116; // rax
  unsigned int v117; // edx
  int v118; // r8d
  int v119; // edx
  unsigned int v120; // [rsp+30h] [rbp-99h]
  int v121; // [rsp+34h] [rbp-95h]
  unsigned int v122; // [rsp+34h] [rbp-95h]
  _QWORD v123[2]; // [rsp+38h] [rbp-91h] BYREF
  char v124; // [rsp+48h] [rbp-81h]
  __int64 v125; // [rsp+50h] [rbp-79h]
  __int64 v126; // [rsp+58h] [rbp-71h]
  int v127; // [rsp+60h] [rbp-69h]
  int v128; // [rsp+64h] [rbp-65h]
  int v129; // [rsp+68h] [rbp-61h]
  int v130; // [rsp+6Ch] [rbp-5Dh]
  int v131; // [rsp+70h] [rbp-59h]
  int v132; // [rsp+74h] [rbp-55h]
  PSLIST_ENTRY *v133; // [rsp+78h] [rbp-51h]
  _DWORD *v134; // [rsp+80h] [rbp-49h]
  __int64 v135; // [rsp+88h] [rbp-41h]
  _QWORD *v136; // [rsp+90h] [rbp-39h]
  __int64 v137; // [rsp+98h] [rbp-31h] BYREF
  unsigned int *v138; // [rsp+A0h] [rbp-29h]
  unsigned int v139; // [rsp+A8h] [rbp-21h]
  unsigned int v140; // [rsp+ACh] [rbp-1Dh]
  int v141; // [rsp+B0h] [rbp-19h]
  unsigned int v142; // [rsp+B4h] [rbp-15h]
  unsigned int v143; // [rsp+B8h] [rbp-11h]
  _QWORD *v144; // [rsp+C0h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C8h] [rbp-1h] BYREF
  unsigned int v146; // [rsp+130h] [rbp+67h]
  char v147; // [rsp+138h] [rbp+6Fh] BYREF
  KIRQL v148; // [rsp+140h] [rbp+77h]
  unsigned int v149; // [rsp+148h] [rbp+7Fh]

  v1 = *((_QWORD *)a1 + 11);
  v2 = a1;
  v3 = *((unsigned int *)a1 + 40);
  v149 = v3;
  v4 = (unsigned int)v3;
  v5 = *(_QWORD *)(v1 + 104);
  v6 = *(_QWORD *)(v5 + 32);
  v7 = (_QWORD *)(v6 + 8 * (v3 + 388));
  v125 = *v7;
  v136 = v7;
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
    v96 = *(void (__fastcall **)(_QWORD, _QWORD))(v6 + 2960);
    if ( v96 )
      v96(*(_QWORD *)(v6 + 3024), v8);
  }
  v148 = KfRaiseIrql(2u);
  v9 = v148;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 1712), &LockHandle);
  v10 = *((_DWORD *)v2 + 16);
  v123[1] = v123;
  v123[0] = v123;
  v124 = 0;
  if ( (v10 & 0x20) != 0 )
  {
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v123);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KeLowerIrql(v9);
    do
      v2 = VidSchiProcessCompletedQueuePacketInternal(v2);
    while ( v2 );
    if ( v8 != -1 )
    {
      v97 = *(void (__fastcall **)(_QWORD, _QWORD))(v6 + 2976);
      if ( v97 )
        v97(*(_QWORD *)(v6 + 3024), v8);
    }
    if ( v124 )
      return;
LABEL_128:
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v123);
    return;
  }
  v11 = *((_QWORD *)v2 + 50);
  v12 = v125;
  v13 = (_QWORD *)(v5 + 8 * (v4 + 47));
  v144 = v13;
  v126 = v11;
  if ( v11 - *v13 > (unsigned __int64)(unsigned int)(64 - *(_DWORD *)(v125 + 2340)) )
  {
    VidSchiRewindPacket(v2, 1LL, 1LL, 1LL);
    VidSchiUpdateContextStatus(v1, 3LL, 3025LL);
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v123);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KeLowerIrql(v9);
    if ( v8 != -1 )
    {
      v98 = *(void (__fastcall **)(_QWORD, _QWORD))(v6 + 2976);
      if ( v98 )
        v98(*(_QWORD *)(v6 + 3024), v8);
    }
    if ( v124 )
      return;
    goto LABEL_128;
  }
  v147 = 0;
  if ( *(_DWORD *)(v125 + 4) == 3 || !*((_DWORD *)v2 + 99) && (*((_DWORD *)v2 + 68) & 0x10000000) != 0 )
  {
    v121 = 1;
    v135 = 1LL;
  }
  else
  {
    v121 = 0;
    v135 = 0LL;
  }
  v14 = *(_QWORD *)(v125 + 24);
  if ( (*((_DWORD *)v2 + 18) & 0x800000) != 0 )
  {
    v15 = ((unsigned __int16)*((_DWORD *)v2 + 212) | (unsigned __int16)(*((_DWORD *)v2 + 212) >> 10)) & 0x3FF;
  }
  else
  {
    LODWORD(v11) = v126;
    v15 = (1 << *(_DWORD *)(v6 + 144)) - 1;
  }
  v16 = !_BitScanForward((unsigned int *)&v17, v15);
  v18 = 0xFFFFFFFFLL;
  v127 = v17;
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
        v91 = *(unsigned int *)(152 * v21 + *(_QWORD *)(v6 + 3232) + 112);
        if ( (_DWORD)v91 == 2 )
          break;
      }
      v18 = 0xFFFFFFFFLL;
      v15 &= ~(1 << v20);
      v16 = !_BitScanForward((unsigned int *)&v22, v15);
      v128 = v22;
      if ( !v16 )
        v18 = (unsigned __int8)v22;
      if ( !v15 )
      {
        LODWORD(v11) = *((_DWORD *)v2 + 100);
        v12 = v125;
        goto LABEL_24;
      }
    }
    v99 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v91);
    v99[5] = (char)v18;
    v99[3] = 281LL;
    v99[4] = 0x100000LL;
    v99[6] = v4;
    v99[7] = v6;
    WdLogEvent5_WdCriticalError(v99);
    __debugbreak();
    goto LABEL_136;
  }
LABEL_24:
  v23 = (unsigned int)(v11 - *(_DWORD *)v13);
  v24 = v23 + *(_DWORD *)(v14 + 32);
  v126 = v23;
  v25 = *(_QWORD *)(v6 + 624);
  v26 = v24 & 0x3F;
  v27 = *(unsigned int *)(v1 + 88);
  v28 = v14 + 1344LL * v26;
  v120 = v26;
  v134 = (_DWORD *)v28;
  v18 = v28 + 88;
  if ( (unsigned int)v27 < *(_DWORD *)(v6 + 696) )
    v25 += 8 * v27;
  v29 = *(_WORD *)(*(_QWORD *)v25 + 6LL);
  v146 = v29;
  if ( *(_DWORD *)(v28 + 1140) == 8 )
  {
LABEL_136:
    *(_QWORD *)(v18 + 8LL * *(unsigned int *)(v18 + 1092)) = v1;
    *(_QWORD *)(v18 + 8LL * *(unsigned int *)(v18 + 1092) + 520) = *(_QWORD *)(v1 + 152);
    v100 = *(_QWORD *)(v1 + 104);
    ++*(_DWORD *)(v18 + 1092);
    *(_QWORD *)(v18 + 1040) = v100;
    ++*(_DWORD *)(v1 + 792);
    *(_DWORD *)(v18 + 1084) |= 1 << v29;
    v43 = 0;
    goto LABEL_57;
  }
  ++*(_DWORD *)(v6 + 796);
  ++*(_DWORD *)(v5 + 1576);
  ++*(_DWORD *)(v1 + 792);
  ++*(_DWORD *)(v12 + 2340);
  if ( (*((_DWORD *)v2 + 68) & 0x800000) != 0 )
    v30 = ((unsigned __int16)*((_DWORD *)v2 + 212) | (unsigned __int16)(*((_DWORD *)v2 + 212) >> 10)) & 0x3FF;
  else
    v30 = (1 << *(_DWORD *)(v6 + 144)) - 1;
  v16 = !_BitScanForward((unsigned int *)&v31, v30);
  v129 = v31;
  v32 = -1;
  if ( !v16 )
    v32 = v31;
  if ( v30 )
  {
    v33 = v136;
    do
    {
      ++*(_DWORD *)(216LL * v32 + *v33 + 180);
      v34 = 1 << v32;
      v32 = -1;
      v30 &= ~v34;
      v16 = !_BitScanForward((unsigned int *)&v34, v30);
      v130 = v34;
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
  v36 = *(_QWORD *)(v1 + 152);
  v37 = (int *)((char *)v2 + 272);
  *(_QWORD *)(v18 + 520) = v36;
  *(_BYTE *)(v18 + 1076) = (*((_DWORD *)v2 + 68) & 0x10) != 0;
  v38 = *(_DWORD *)(v18 + 1136) ^ (*(_DWORD *)(v18 + 1136) ^ (*((_DWORD *)v2 + 18) >> 19)) & 0x10;
  *(_DWORD *)(v18 + 1136) = v38;
  v39 = ((unsigned __int16)v38 ^ (*((_DWORD *)v2 + 68) >> 20)) & 0x400 ^ v38;
  *(_DWORD *)(v18 + 1136) = v39;
  v40 = v39 ^ ((unsigned __int16)v39 ^ (*((_DWORD *)v2 + 68) >> 20)) & 0x800;
  v16 = (_DWORD)v126 == 0;
  *(_DWORD *)(v18 + 1136) = v40;
  if ( v16 )
  {
    ++*(_QWORD *)(v14 + 64);
    v40 = *(_DWORD *)(v18 + 1136);
    *(_QWORD *)(v18 + 1064) = *(_QWORD *)(v14 + 64);
  }
  v41 = *((_DWORD *)v2 + 156);
  *(_DWORD *)(v18 + 1184) = v41;
  if ( (v40 & 0x400) != 0 )
  {
    v101 = v41 - 1;
    if ( v101 )
    {
      if ( v101 == 1 )
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
  if ( (v40 & 0x800) != 0 )
  {
    *(_OWORD *)(v18 + 1260) = *(_OWORD *)((char *)v2 + 700);
    *(_OWORD *)(v18 + 1276) = *(_OWORD *)((char *)v2 + 716);
  }
  VIDSCH_FLIP_QUEUE_ENTRY::FillVmState(
    (VIDSCH_FLIP_QUEUE_ENTRY *)v18,
    (struct _VIDSCH_QUEUE_PACKET *)((char *)v2 + 272));
  memmove(*(void **)(v18 + 1176), (char *)v2 + 848, *((unsigned int *)v2 + 215));
  v42 = *(_DWORD *)(v6 + 144);
  v43 = 0;
  v44 = *(_QWORD *)(v18 + 1176);
  for ( i = 0; i < v42; ++i )
  {
    v46 = *(_QWORD *)(i * ((8 * *(_DWORD *)(v44 + 8) + 199) & 0xFFFFFFF8) + v44 + 200);
    if ( v46 )
      _InterlockedIncrement((volatile signed __int32 *)(v46 + 12));
    v42 = *(_DWORD *)(v6 + 144);
  }
  v47 = 0;
  if ( v42 )
  {
    do
    {
      v133 = (PSLIST_ENTRY *)((char *)v2 + v47 * ((8 * *((_DWORD *)v2 + 214) + 199) & 0xFFFFFFF8) + 1048);
      if ( *v133 )
      {
        CRefCountedBuffer::RefCountedBufferRelease(*v133);
        v43 = 0;
        *v133 = 0LL;
      }
      ++v47;
    }
    while ( v47 < *(_DWORD *)(v6 + 144) );
  }
  *(_DWORD *)(v18 + 1080) = *((_DWORD *)v2 + 102);
  *(_DWORD *)(v18 + 1084) = 1 << v146;
  v48 = *(_DWORD *)(v18 + 1136) ^ (*(_DWORD *)(v18 + 1136) ^ ((unsigned int)*v37 >> 19)) & 1;
  *(_DWORD *)(v18 + 1136) = v48;
  v49 = ((unsigned __int8)v48 ^ (unsigned __int8)((unsigned int)*v37 >> 19)) & 2 ^ v48;
  *(_DWORD *)(v18 + 1136) = v49;
  v50 = ((unsigned __int8)v49 ^ (unsigned __int8)((unsigned int)*v37 >> 19)) & 4 ^ v49;
  *(_DWORD *)(v18 + 1136) = v50;
  *(_DWORD *)(v18 + 1136) = v50 ^ ((unsigned __int8)v50 ^ (unsigned __int8)((unsigned int)*v37 >> 19)) & 8;
  *(_QWORD *)(v18 + 1160) = *((_QWORD *)v2 + 37);
  v51 = *((_QWORD *)v2 + 38);
  *(_QWORD *)(v18 + 1168) = v51;
  if ( v51 )
    _InterlockedIncrement((volatile signed __int32 *)(v51 + 12));
  v52 = *v37;
  *(_DWORD *)(v18 + 1092) = 1;
  if ( (v52 & 0x400) != 0 )
  {
    *(_DWORD *)(v18 + 1088) = *((_DWORD *)v2 + 103);
    v53 = *((_DWORD *)v2 + 103);
  }
  else
  {
    *(_DWORD *)(v18 + 1088) = 1;
    v53 = 1;
  }
  *(_DWORD *)(v18 + 1096) = v53;
  if ( *(_BYTE *)(v18 + 1076) || v121 )
  {
    *(_DWORD *)(v18 + 1072) = 0;
    v104 = *(_DWORD *)(v18 + 1136) ^ (*(_DWORD *)(v18 + 1136) ^ ((unsigned int)*v37 >> 21)) & 0x80;
    *(_DWORD *)(v18 + 1136) = v104;
    v103 = v104 ^ ((unsigned __int16)v104 ^ ((unsigned int)*v37 >> 20)) & 0x100;
    goto LABEL_145;
  }
  v54 = *((_DWORD *)v2 + 99);
  if ( !v54 )
  {
    v102 = *(_DWORD *)(v18 + 1136) | 0x80;
    *(_DWORD *)(v18 + 1072) = 0;
    v103 = v102 & 0xFFFFFEFF;
LABEL_145:
    *(_DWORD *)(v18 + 1136) = v103;
    goto LABEL_57;
  }
  *(_DWORD *)(v18 + 1072) = v54;
LABEL_57:
  v55 = v125;
  v56 = *((_DWORD *)v2 + 104);
  *(_DWORD *)(v18 + 1140) = v56;
  if ( (*(_DWORD *)(v55 + 70584) & 1) != 0 )
  {
    v105 = *(_DWORD *)(v18 + 1136);
    if ( (v105 & 0x80u) != 0 )
    {
      if ( !v56 )
        v56 = -1;
      *(_DWORD *)(v18 + 1140) = v56;
    }
    if ( (v105 & 0x180) == 0x80 )
      *(_DWORD *)(v18 + 1136) = v105 | 0x200;
  }
  if ( (*((_DWORD *)v2 + 68) & 0x800) != 0 )
    *(_BYTE *)(v18 + 1077) = 1;
  v138 = *(unsigned int **)(v18 + 1176);
  v137 = v6;
  v57 = *v138;
  v58 = *v138 & 0x3FF;
  v16 = *(_BYTE *)(v6 + 148) == 0;
  v139 = v58;
  if ( v16 )
    v59 = 0;
  else
    v59 = (v57 >> 10) & 0x3FF;
  v16 = !_BitScanForward((unsigned int *)&v60, v58);
  v140 = v59;
  v61 = 0;
  v131 = v60;
  v141 = 0;
  if ( v16 )
    LOBYTE(v60) = -1;
  v62 = (char)v60;
  v16 = !_BitScanForward((unsigned int *)&v60, v59);
  v142 = v62;
  v132 = v63;
  if ( v16 )
    LOBYTE(v60) = -1;
  v64 = v146;
  v65 = (char)v60;
  v143 = (char)v60;
  while ( v58 || v59 )
  {
    if ( v62 >= v65 )
      goto LABEL_96;
    v79 = *(_DWORD *)(v18 + 1080);
    v80 = 0;
    v122 = 0;
    v81 = 1;
    LODWORD(v133) = v79;
    while ( (v79 & v81) == 0 )
    {
LABEL_154:
      ++v80;
      v81 *= 2;
      v122 = v80;
      if ( v80 > v64 )
        goto LABEL_96;
    }
    v82 = *(_QWORD *)(v18 + 1176);
    v83 = *(_DWORD *)(v82 + 4);
    v84 = v83 * ((8 * *(_DWORD *)(v82 + 8) + 199) & 0xFFFFFFF8);
    v85 = *(_QWORD *)(v84 + ((unsigned __int64)(unsigned int)(v61 + v43 * v83) << 6) + v82 + 48);
    if ( ((*(_DWORD *)(v85 + 32) >> 2) & 0x3F) != v146 )
    {
      v79 = (int)v133;
      ++v43;
      v80 = v122;
      v64 = v146;
      goto LABEL_154;
    }
    v86 = *(_QWORD *)(v85 + 96);
    v87 = ((unsigned __int64)(unsigned int)(v61 + v43 * v83) << 6) + v84;
    v88 = v87;
    v89 = *(_QWORD *)(v86 + 24);
    if ( v89 )
    {
      *(_QWORD *)(v87 + v82 + 64) = ++*(_QWORD *)(v89 + 16);
      v106 = *(_QWORD *)(*(_QWORD *)(v85 + 96) + 24LL);
      *(_QWORD *)(v87 + v82 + 72) = ++*(_QWORD *)(v106 + 24);
      v107 = *(_QWORD *)(v85 + 96);
      v64 = v146;
      v108 = *(_QWORD *)(v107 + 24);
      v109 = 2LL * *(unsigned int *)(v108 + 32);
      *(_OWORD *)(v108 + 8 * v109 + 40) = 0LL;
      *(_DWORD *)(v108 + 32) = ((unsigned __int8)*(_DWORD *)(v108 + 32) + 1) & 7;
      *(_DWORD *)(v108 + 8 * v109 + 40) = 0;
      *(_QWORD *)(v108 + 8 * v109 + 48) = *(_QWORD *)(v88 + v82 + 72);
    }
    else
    {
      v90 = *(_QWORD *)(v86 + 16);
      v64 = v146;
      if ( v90 )
        _InterlockedIncrement((volatile signed __int32 *)(v90 + 8));
    }
LABEL_96:
    VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(&v137);
    v65 = v143;
    v59 = v140;
    v58 = v139;
    v62 = v142;
    v61 = v141;
  }
  if ( *(_DWORD *)(v18 + 1088) > *(_DWORD *)(v18 + 1092) )
  {
    *(_DWORD *)(v18 + 1052) = 8;
  }
  else
  {
    if ( !(_DWORD)v126 )
    {
      v66 = v120;
      v67 = v125;
      while ( 1 )
      {
        *(_DWORD *)(v14 + 32) = ((_BYTE)v66 + 1) & 0x3F;
        ++*v144;
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 800));
        _InterlockedIncrement((volatile signed __int32 *)(v67 + 2344));
        if ( *(_DWORD *)(v18 + 1052) == 7 )
          *(_QWORD *)(v18 + 1064) = ++*(_QWORD *)(v14 + 64);
        if ( (unsigned int)VidSchiIsHardwareCompletedDependingCommandForFlip(v18) && *(_BYTE *)(v67 + 66436) )
          break;
        v69 = v136;
        v70 = v134;
        *(_DWORD *)(v18 + 1052) = 1;
        v71 = *v69;
        if ( (v70[306] & 0x10) != 0 )
          v72 = ((unsigned __int16)**((_DWORD **)v70 + 158) | (unsigned __int16)(**((_DWORD **)v70 + 158) >> 10)) & 0x3FF;
        else
          v72 = (1 << *(_DWORD *)(v6 + 144)) - 1;
        v73 = (LARGE_INTEGER *)(*(_QWORD *)(v71 + 120) + 72LL * *(unsigned int *)(v71 + 128));
        memset(v73, 0, 0x48uLL);
        *(_DWORD *)(v71 + 128) = (*(_DWORD *)(v71 + 128) + 1) & (*(_DWORD *)(v71 + 112) - 1);
        v73->LowPart = 0;
        v73[2].LowPart = v72;
        BYTE4(v73[2].QuadPart) = *(_BYTE *)(v14 + 56);
        v73[3].LowPart = v120;
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v75 = v134;
        v73[1] = PerformanceCounter;
        LOBYTE(v73[4].LowPart) = (v75[306] & 0x20) != 0;
        v73[4].HighPart = v75[285];
        v73[3].HighPart = v75[286];
        v73[5].HighPart = *(_DWORD *)(v71 + 2356);
        PerformanceCounter.LowPart = *(_DWORD *)(v71 + 2352);
        v67 = v125;
        v73[5].LowPart = PerformanceCounter.LowPart;
        v73[6].LowPart = *(_DWORD *)(v14 + 32);
        v73[6].HighPart = *(_DWORD *)(v14 + 36);
        v73[7].LowPart = *(_DWORD *)(v14 + 40);
        v73[7].HighPart = *(_DWORD *)(v14 + 44);
        v73[8].LowPart = *(_DWORD *)(v14 + 48);
        v73[8].HighPart = *(_DWORD *)(v14 + 52);
LABEL_78:
        v120 = *(_DWORD *)(v14 + 32);
        v66 = v120;
        v134 = (_DWORD *)(v14 + 1344LL * v120);
        v18 = (__int64)(v134 + 22);
        if ( v134[285] != 7 )
        {
          v76 = v149;
          goto LABEL_80;
        }
      }
      v16 = v135 == 0;
      *(_DWORD *)(v18 + 1052) = 2;
      v92 = *(_DWORD *)(v14 + 40);
      if ( v16 )
      {
        if ( v66 == v92 || *(_BYTE *)(v18 + 1076) )
        {
          *(_QWORD *)(v18 + 1104) = MEMORY[0xFFFFF78000000320];
          if ( *(_BYTE *)(v6 + 148) )
            goto LABEL_180;
          goto LABEL_104;
        }
        v18 = ((_BYTE)v66 - 1) & 0x3F;
        v115 = *(unsigned int *)(1344 * v18 + v14 + 1224);
        if ( (v115 & 0x20) == 0 )
          goto LABEL_116;
        v116 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v115, v68);
        v116[3] = 281LL;
        v116[4] = 0x100000LL;
        v116[5] = v18;
        v116[6] = v14;
        v116[7] = v6;
        WdLogEvent5_WdCriticalError(v116);
        __debugbreak();
LABEL_180:
        v117 = *(_DWORD *)(v14 + 48);
        v118 = ((unsigned __int8)*(_DWORD *)(v14 + 44) - 1) & 0x3F;
        if ( v117 != v118 )
        {
          while ( *(_DWORD *)(1344LL * v117 + v14 + 1140) != 14 )
          {
            v117 = ((_BYTE)v117 - 1) & 0x3F;
            if ( v117 == v118 )
              goto LABEL_183;
          }
LABEL_116:
          v95 = 1;
LABEL_111:
          if ( *(_DWORD *)(1344LL * *(unsigned int *)(v14 + 36) + v14 + 1140) != 1 )
            *(_DWORD *)(v14 + 36) = *(_DWORD *)(v14 + 32);
          if ( v95 )
            VidSchiUpdateFlipQueueHistory(0LL, v6, v149, v14, v66);
          goto LABEL_78;
        }
LABEL_183:
        if ( (*(_DWORD *)(v18 + 1136) & 0x10) != 0 )
          v119 = ((unsigned __int16)**(_DWORD **)(v18 + 1176) | (unsigned __int16)(**(_DWORD **)(v18 + 1176) >> 10)) & 0x3FF;
        else
          v119 = (1 << *(_DWORD *)(v6 + 144)) - 1;
        if ( (v119 & *(_DWORD *)(v67 + 2356)) != 0 )
          goto LABEL_116;
        if ( *(_DWORD *)(v6 + 152) <= 1u || *(_DWORD *)(v67 + 4) == 3 || (*(_DWORD *)(v18 + 1136) & 0x180) != 0x80 )
        {
LABEL_104:
          if ( (*(_DWORD *)(v18 + 1136) & 0x10) != 0 )
            v93 = ((unsigned __int16)**(_DWORD **)(v18 + 1176) | (unsigned __int16)(**(_DWORD **)(v18 + 1176) >> 10)) & 0x3FF;
          else
            v93 = (1 << *(_DWORD *)(v6 + 144)) - 1;
          if ( (v93 & *(_DWORD *)(v67 + 2352)) != 0 )
            goto LABEL_116;
        }
        if ( *(_BYTE *)(v18 + 1076) )
          VidSchiRestartQueuedFlip((unsigned int)v123, v5, v149, v14, v66);
        if ( *(_DWORD *)(v14 + 80) )
        {
          *(_DWORD *)(v18 + 1052) = 3;
          goto LABEL_116;
        }
LABEL_110:
        v94 = v149;
        *(_DWORD *)(v18 + 1052) = 4;
        v95 = 0;
        VidSchiUpdateFlipQueueHistory(0LL, v6, v94, v14, v66);
        VidSchiExecuteMmIoFlip(v123, v6, v149, v14, v66, &v147);
        goto LABEL_111;
      }
      if ( v66 != v92 )
        goto LABEL_116;
      if ( !*(_BYTE *)(v6 + 148) )
        goto LABEL_110;
      v110 = *(_DWORD *)(v14 + 48);
      v111 = ((unsigned __int8)*(_DWORD *)(v14 + 44) - 1) & 0x3F;
      if ( v110 == v111 )
      {
LABEL_165:
        v112 = *(_DWORD *)(v18 + 1136);
        if ( (v112 & 0x10) != 0 )
          v113 = ((unsigned __int16)**(_DWORD **)(v18 + 1176) | (unsigned __int16)(**(_DWORD **)(v18 + 1176) >> 10)) & 0x3FF;
        else
          v113 = (1 << *(_DWORD *)(v6 + 144)) - 1;
        if ( (v113 & *(_DWORD *)(v67 + 2356)) == 0 )
        {
          if ( *(_DWORD *)(v6 + 152) > 1u && *(_DWORD *)(v67 + 4) != 3 && (v112 & 0x180) == 0x80 )
            goto LABEL_110;
          v114 = (*(_DWORD *)(v18 + 1136) & 0x10) != 0
               ? ((unsigned __int16)**(_DWORD **)(v18 + 1176) | (unsigned __int16)(**(_DWORD **)(v18 + 1176) >> 10)) & 0x3FF
               : (1 << *(_DWORD *)(v6 + 144)) - 1;
          if ( (v114 & *(_DWORD *)(v67 + 2352)) == 0 )
            goto LABEL_110;
        }
      }
      else
      {
        while ( *(_DWORD *)(1344LL * v110 + v14 + 1140) != 14 )
        {
          v110 = ((_BYTE)v110 - 1) & 0x3F;
          if ( v110 == v111 )
            goto LABEL_165;
        }
      }
      *(_QWORD *)(v18 + 1104) = MEMORY[0xFFFFF78000000320];
      goto LABEL_116;
    }
    *(_DWORD *)(v18 + 1052) = 7;
  }
  v76 = v149;
  VidSchiUpdateFlipQueueHistory(0LL, v6, v149, v14, v120);
LABEL_80:
  *((_DWORD *)v2 + 16) |= 2u;
  if ( v147 )
    VidSchiCompletePendingFlipOnPlane((unsigned int)v123, v6, v76, v14, 9);
  while ( 1 )
  {
    v77 = (_QWORD *)v123[0];
    if ( *(_QWORD **)(v123[0] + 8LL) != v123
      || (v78 = *(_QWORD *)v123[0], *(_QWORD *)(*(_QWORD *)v123[0] + 8LL) != v123[0]) )
    {
      __fastfail(3u);
    }
    v123[0] = *(_QWORD *)v123[0];
    *(_QWORD *)(v78 + 8) = v123;
    if ( v77 == v123 )
      break;
    *v77 = 0LL;
    v77[1] = 0LL;
    HwQueueStagingList::ProcessHwQueue((HwQueueStagingList *)v123, (struct VIDSCH_HW_QUEUE *)(v77 - 22));
  }
  v124 = 1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  do
    v2 = VidSchiProcessCompletedQueuePacketInternal(v2);
  while ( v2 );
  KeLowerIrql(v148);
  if ( !v124 )
    goto LABEL_128;
}
