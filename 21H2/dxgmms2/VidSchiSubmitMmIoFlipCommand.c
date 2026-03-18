/*
 * XREFs of VidSchiSubmitMmIoFlipCommand @ 0x1C0015200
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C00AE010 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00F379C (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00087D0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0009AD0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C000C250 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiUpdateContextStatus @ 0x1C000D200 (VidSchiUpdateContextStatus.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000DBA0 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C000E394 (-VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VI.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C0015F38 (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C001AE48 (VidSchiCompletePendingFlipOnPlane.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001D980 (memmove.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C001E78A (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x1C003818C (McTemplateK0qqqq_EtwWriteTransfer.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C0038224 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     VidSchiRestartQueuedFlip @ 0x1C003A160 (VidSchiRestartQueuedFlip.c)
 *     VidSchiRewindPacket @ 0x1C003A240 (VidSchiRewindPacket.c)
 *     VidSchIsVSyncEnabled @ 0x1C00A3970 (VidSchIsVSyncEnabled.c)
 */

void __fastcall VidSchiSubmitMmIoFlipCommand(struct _VIDSCH_QUEUE_PACKET *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  struct _VIDSCH_QUEUE_PACKET *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned __int64 v7; // r13
  __int64 v8; // r14
  struct _VIDSCH_PRESENT_INFO *v9; // r12
  __int64 v10; // rdi
  unsigned int v11; // edi
  int v12; // ecx
  __int64 v13; // rdx
  _QWORD *v14; // r9
  unsigned __int64 v15; // rax
  int v16; // r11d
  __int64 v17; // r13
  int v18; // eax
  unsigned int v19; // r8d
  bool v20; // zf
  int v21; // eax
  char v22; // cl
  __int64 v23; // r10
  char v24; // r9
  __int64 v25; // rax
  int v26; // eax
  unsigned __int64 v27; // r8
  int v28; // edx
  int v29; // ecx
  char v30; // dl
  __int64 v31; // rcx
  unsigned int v32; // edx
  __int64 v33; // rax
  __int64 v34; // r10
  __int64 v35; // rbx
  unsigned __int16 v36; // dx
  unsigned int v37; // r8d
  int v38; // eax
  char v39; // cl
  _QWORD *v40; // r9
  int v41; // eax
  _DWORD *v42; // rdi
  int v43; // ecx
  int v44; // ecx
  int v45; // edx
  int v46; // ecx
  __int64 v47; // rax
  unsigned int v48; // edi
  __int64 v49; // r8
  unsigned int v50; // ecx
  __int64 v51; // rdx
  unsigned int v52; // eax
  char *v53; // rsi
  __int64 v54; // r12
  __int64 *v55; // r15
  _DWORD *v56; // r11
  unsigned int v57; // r9d
  unsigned int v58; // edx
  int v59; // eax
  unsigned int v60; // r8d
  int v61; // eax
  unsigned int v62; // r10d
  int v63; // ecx
  int v64; // ecx
  int v65; // ecx
  __int64 v66; // rax
  int v67; // eax
  int v68; // eax
  int v69; // eax
  unsigned int v70; // r9d
  __int64 v71; // rcx
  char v72; // cl
  int v73; // eax
  _DWORD *v74; // rax
  unsigned int v75; // r11d
  int v76; // r13d
  __int64 v77; // r9
  unsigned int v78; // eax
  unsigned int v79; // ecx
  unsigned int v80; // edi
  int v81; // eax
  __int64 v82; // r15
  struct _VIDSCH_PRESENT_INFO *v83; // r12
  unsigned int v84; // edx
  __int64 v85; // rdi
  __int64 v86; // rdx
  unsigned int v87; // r11d
  __int64 v88; // rax
  unsigned int v89; // r10d
  bool v90; // cc
  _QWORD *v91; // rax
  _DWORD *v92; // rdi
  __int64 v93; // rdx
  __int64 v94; // rbx
  void *v95; // rcx
  __int64 v96; // rdx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v98; // rcx
  unsigned int v99; // ebx
  _QWORD *v100; // rdx
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // r8
  unsigned int v104; // ecx
  __int64 v105; // rax
  __int64 v106; // rcx
  __int64 v107; // rcx
  int v108; // eax
  int v109; // edx
  unsigned int v110; // eax
  int v111; // r15d
  unsigned int v112; // ecx
  int v113; // ecx
  __int64 v114; // r10
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // rax
  __int64 v118; // r15
  __int64 v119; // rdx
  __int64 v120; // r10
  __int64 v121; // rax
  int v122; // eax
  int v123; // ecx
  char v124; // di
  int v125; // eax
  unsigned int v126; // ebx
  unsigned int v127; // ebx
  void (__fastcall *v128)(_QWORD, _QWORD); // rax
  __int64 v129; // rdx
  __int64 v130; // r8
  void (__fastcall *v131)(_QWORD, _QWORD); // rax
  void (__fastcall *v132)(_QWORD, _QWORD); // rax
  __int64 v133; // rax
  __int64 v134; // r13
  char v135; // cl
  int v136; // eax
  int v137; // eax
  unsigned int v138; // eax
  int v139; // ecx
  unsigned int v140; // edx
  unsigned int v141; // r10d
  __int64 v142; // rax
  int v143; // edx
  __int64 v144; // rax
  __int64 v145; // rdx
  char v146; // cl
  int v147; // eax
  unsigned __int64 *v148; // rax
  __int64 v149; // rcx
  char v150; // al
  __int64 v151; // [rsp+20h] [rbp-E0h]
  unsigned int v152; // [rsp+20h] [rbp-E0h]
  unsigned int v153; // [rsp+40h] [rbp-C0h]
  int v154; // [rsp+44h] [rbp-BCh]
  unsigned int v155; // [rsp+44h] [rbp-BCh]
  unsigned int v156; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v157; // [rsp+50h] [rbp-B0h]
  _QWORD v158[2]; // [rsp+58h] [rbp-A8h] BYREF
  char v159; // [rsp+68h] [rbp-98h]
  int v160; // [rsp+70h] [rbp-90h]
  char *v161; // [rsp+78h] [rbp-88h]
  int v162; // [rsp+80h] [rbp-80h]
  int v163; // [rsp+84h] [rbp-7Ch]
  int v164; // [rsp+88h] [rbp-78h]
  int v165; // [rsp+8Ch] [rbp-74h]
  int v166; // [rsp+90h] [rbp-70h]
  int v167; // [rsp+94h] [rbp-6Ch]
  int v168; // [rsp+98h] [rbp-68h]
  int v169; // [rsp+9Ch] [rbp-64h]
  unsigned int v170; // [rsp+A0h] [rbp-60h]
  int v171; // [rsp+A4h] [rbp-5Ch]
  int v172; // [rsp+A8h] [rbp-58h]
  int v173; // [rsp+ACh] [rbp-54h]
  __int64 v174; // [rsp+B0h] [rbp-50h]
  _QWORD *v175; // [rsp+B8h] [rbp-48h]
  __int64 v176; // [rsp+C0h] [rbp-40h]
  struct _VIDSCH_PRESENT_INFO *v177; // [rsp+C8h] [rbp-38h]
  __int64 v178; // [rsp+D0h] [rbp-30h]
  _QWORD *v179; // [rsp+D8h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E0h] [rbp-20h] BYREF
  int v182; // [rsp+150h] [rbp+50h]
  char v183; // [rsp+158h] [rbp+58h] BYREF
  KIRQL v184; // [rsp+160h] [rbp+60h]
  unsigned int v185; // [rsp+168h] [rbp+68h]

  v3 = *((_QWORD *)a1 + 11);
  v4 = a1;
  v5 = *((unsigned int *)a1 + 40);
  v153 = v5;
  v6 = (unsigned int)v5;
  v7 = *(_QWORD *)(v3 + 104);
  v157 = v7;
  v8 = *(_QWORD *)(v7 + 32);
  v9 = *(struct _VIDSCH_PRESENT_INFO **)(v8 + 8 * (v5 + 400));
  v10 = v8 + 8 * (v5 + 400);
  v177 = v9;
  v179 = (_QWORD *)v10;
  if ( (*(_BYTE *)(v8 + 3036) & 1) != 0
    || *(_DWORD *)(v8 + 3012)
    || *(_BYTE *)(v7 + 204)
    || (a2 = 0LL, _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 200), 0, 0)) )
  {
    do
      v4 = VidSchiProcessCompletedQueuePacketInternal(v4, a2, a3);
    while ( v4 );
    return;
  }
  if ( (*(_DWORD *)(v7 + 48) & 2) != 0 || *((int *)v4 + 98) >= 4 || *(_BYTE *)(v8 + 156) )
    VidSchIsVSyncEnabled((struct _VIDSCH_GLOBAL *)v8);
  v11 = *(_DWORD *)(*(_QWORD *)v10 + 44232LL);
  if ( v11 != -1 )
  {
    v128 = *(void (__fastcall **)(_QWORD, _QWORD))(v8 + 3056);
    if ( v128 )
      v128(*(_QWORD *)(v8 + 3120), v11);
  }
  v184 = KfRaiseIrql(2u);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 1728), &LockHandle);
  v12 = *((_DWORD *)v4 + 16);
  v158[1] = v158;
  v158[0] = v158;
  v159 = 0;
  if ( (v12 & 0x20) != 0 )
  {
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v158);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KeLowerIrql(v184);
    do
      v4 = VidSchiProcessCompletedQueuePacketInternal(v4, v129, v130);
    while ( v4 );
    if ( v11 != -1 )
    {
      v131 = *(void (__fastcall **)(_QWORD, _QWORD))(v8 + 3072);
      if ( v131 )
        v131(*(_QWORD *)(v8 + 3120), v11);
    }
    if ( v159 )
      return;
LABEL_180:
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v158);
    return;
  }
  v13 = *((_QWORD *)v4 + 50);
  v14 = (_QWORD *)(v7 + 8 * v6 + 376);
  v15 = (unsigned int)(64 - *((_DWORD *)v9 + 747));
  v175 = v14;
  if ( v13 - *v14 > v15 )
  {
    VidSchiRewindPacket(v4, 1LL, 1LL, 1LL);
    VidSchiUpdateContextStatus(v3, 3LL, 3176LL);
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v158);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KeLowerIrql(v184);
    if ( v11 != -1 )
    {
      v132 = *(void (__fastcall **)(_QWORD, _QWORD))(v8 + 3072);
      if ( v132 )
        v132(*(_QWORD *)(v8 + 3120), v11);
    }
    if ( v159 )
      return;
    goto LABEL_180;
  }
  v183 = 0;
  if ( *((_DWORD *)v9 + 1) == 3 || !*((_DWORD *)v4 + 99) && (*((_DWORD *)v4 + 68) & 0x10000000) != 0 )
  {
    v16 = 1;
    v178 = 1LL;
  }
  else
  {
    v16 = 0;
    v178 = 0LL;
  }
  v17 = *((_QWORD *)v9 + 3);
  v18 = *((_DWORD *)v4 + 18) >> 23;
  v154 = v16;
  v174 = v17;
  if ( (v18 & 1) != 0 )
    v19 = ((unsigned __int16)*((_DWORD *)v4 + 218) | (unsigned __int16)(*((_DWORD *)v4 + 218) >> 10)) & 0x3FF;
  else
    v19 = (1 << *(_DWORD *)(v8 + 152)) - 1;
  v20 = !_BitScanForward((unsigned int *)&v21, v19);
  v22 = -1;
  v162 = v21;
  if ( !v20 )
    v22 = v21;
  if ( v19 )
  {
    v23 = *(_QWORD *)(v8 + 8 * v6 + 3200);
    while ( 1 )
    {
      v24 = v22;
      v25 = *(int *)(280LL * (unsigned int)v22 + v23 + 180);
      if ( (int)v25 > -1 && *(_DWORD *)(160 * v25 + *(_QWORD *)(v8 + 3328) + 112) == 2 )
        break;
      v22 = -1;
      v19 &= ~(1 << v24);
      v20 = !_BitScanForward((unsigned int *)&v26, v19);
      v163 = v26;
      if ( !v20 )
        v22 = v26;
      if ( !v19 )
      {
        v14 = v175;
        goto LABEL_24;
      }
    }
    WdLogSingleEntry5(0LL, 281LL, 0x100000LL, v22, v6, v8);
    __debugbreak();
  }
  else
  {
LABEL_24:
    v27 = v157;
    if ( !*(_BYTE *)(*(_QWORD *)(v157 + 40) + 2632LL) )
      goto LABEL_26;
    v28 = *((_DWORD *)v9 + 20681);
    v29 = *((_DWORD *)v4 + 106);
    if ( v28 == v29 )
      goto LABEL_26;
  }
  if ( !*(_BYTE *)(*(_QWORD *)(v8 + 16) + 2762LL) )
  {
    if ( (byte_1C006E944 & 1) != 0 )
    {
      McTemplateK0qqqqq_EtwWriteTransfer(
        v29,
        (unsigned int)&EventBoostUnboostRefreshRate,
        v27,
        v6,
        *((_DWORD *)v9 + 736),
        v28,
        *((_DWORD *)v4 + 104),
        v29);
      v29 = *((_DWORD *)v4 + 106);
      v27 = v157;
      v16 = v154;
      v14 = v175;
    }
    *((_DWORD *)v9 + 20681) = v29;
  }
LABEL_26:
  v30 = *((_BYTE *)v4 + 400) - *(_BYTE *)v14 + *(_DWORD *)(v17 + 56);
  v160 = *((_DWORD *)v4 + 100) - *(_DWORD *)v14;
  v31 = *(_QWORD *)(v8 + 632);
  v32 = v30 & 0x3F;
  v33 = *(unsigned int *)(v3 + 88);
  v34 = v17 + 1376LL * v32;
  v185 = v32;
  v176 = v34;
  v35 = v34 + 120;
  if ( (unsigned int)v33 < *(_DWORD *)(v8 + 704) )
    v31 += 8 * v33;
  v36 = *(_WORD *)(*(_QWORD *)v31 + 6LL);
  v156 = v36;
  if ( *(_DWORD *)(v34 + 1172) == 8 )
  {
    *(_QWORD *)(v34 + 120 + 8LL * *(unsigned int *)(v34 + 1212)) = v3;
    *(_QWORD *)(v34 + 120 + 8LL * *(unsigned int *)(v34 + 1212) + 520) = *(_QWORD *)(v3 + 152);
    v133 = *(_QWORD *)(v3 + 104);
    ++*(_DWORD *)(v34 + 1212);
    *(_QWORD *)(v34 + 1160) = v133;
    ++*(_DWORD *)(v3 + 792);
    *(_DWORD *)(v34 + 1204) |= 1 << v36;
    goto LABEL_73;
  }
  ++*(_DWORD *)(v8 + 804);
  ++*(_DWORD *)(v27 + 1576);
  ++*(_DWORD *)(v3 + 792);
  ++*((_DWORD *)v9 + 747);
  v20 = (*((_DWORD *)v4 + 68) & 0x800000) == 0;
  v161 = (char *)v4 + 872;
  if ( v20 )
    v37 = (1 << *(_DWORD *)(v8 + 152)) - 1;
  else
    v37 = ((unsigned __int16)*((_DWORD *)v4 + 218) | (unsigned __int16)(*((_DWORD *)v4 + 218) >> 10)) & 0x3FF;
  v20 = !_BitScanForward((unsigned int *)&v38, v37);
  v39 = -1;
  v164 = v38;
  if ( !v20 )
    v39 = v38;
  if ( v37 )
  {
    v40 = v179;
    do
    {
      ++*(_DWORD *)(280LL * v39 + *v40 + 188);
      v41 = 1 << v39;
      v39 = -1;
      v37 &= ~v41;
      v20 = !_BitScanForward((unsigned int *)&v41, v37);
      v165 = v41;
      if ( !v20 )
        v39 = v41;
    }
    while ( v37 );
  }
  v42 = *(_DWORD **)(v34 + 1296);
  memset((void *)(v34 + 120), 0, 0x560uLL);
  *(_QWORD *)(v35 + 1176) = v42;
  memset(v42 + 4, 0, v42[1] * ((v42[2] << 6) + ((8 * v42[2] + 231) & 0xFFFFFFF8)));
  *(_QWORD *)v35 = v3;
  *(_QWORD *)(v35 + 1040) = *(_QWORD *)(v3 + 104);
  *(_DWORD *)(v35 + 1048) = *((_DWORD *)v4 + 28);
  *(_DWORD *)(v35 + 1056) = *((_DWORD *)v4 + 96);
  *(_QWORD *)(v35 + 520) = *(_QWORD *)(v3 + 152);
  *(_BYTE *)(v35 + 1076) = (*((_DWORD *)v4 + 68) & 0x10) != 0;
  v43 = *(_DWORD *)(v35 + 1136) ^ (*(_DWORD *)(v35 + 1136) ^ (*((_DWORD *)v4 + 18) >> 19)) & 0x10;
  *(_DWORD *)(v35 + 1136) = v43;
  v44 = ((unsigned __int16)v43 ^ (*((_DWORD *)v4 + 68) >> 20)) & 0x400 ^ v43;
  *(_DWORD *)(v35 + 1136) = v44;
  v45 = v44 ^ ((unsigned __int16)v44 ^ (*((_DWORD *)v4 + 68) >> 20)) & 0x800;
  v20 = v160 == 0;
  *(_DWORD *)(v35 + 1136) = v45;
  if ( v20 )
  {
    ++*(_QWORD *)(v17 + 88);
    v45 = *(_DWORD *)(v35 + 1136);
    *(_QWORD *)(v35 + 1064) = *(_QWORD *)(v17 + 88);
  }
  v46 = *((_DWORD *)v4 + 158);
  *(_DWORD *)(v35 + 1184) = v46;
  if ( (v45 & 0x400) != 0 )
  {
    v123 = v46 - 1;
    if ( v123 )
    {
      if ( v123 == 1 )
      {
        *(_OWORD *)(v35 + 1188) = *(_OWORD *)((char *)v4 + 636);
        *(_OWORD *)(v35 + 1204) = *(_OWORD *)((char *)v4 + 652);
        *(_OWORD *)(v35 + 1220) = *(_OWORD *)((char *)v4 + 668);
        *(_OWORD *)(v35 + 1236) = *(_OWORD *)((char *)v4 + 684);
        *(_QWORD *)(v35 + 1252) = *(_QWORD *)((char *)v4 + 700);
      }
    }
    else
    {
      *(_OWORD *)(v35 + 1188) = *(_OWORD *)((char *)v4 + 636);
      *(_QWORD *)(v35 + 1204) = *(_QWORD *)((char *)v4 + 652);
      *(_DWORD *)(v35 + 1212) = *((_DWORD *)v4 + 165);
    }
  }
  if ( (v45 & 0x800) != 0 )
  {
    *(_OWORD *)(v35 + 1260) = *(_OWORD *)((char *)v4 + 708);
    *(_OWORD *)(v35 + 1276) = *(_OWORD *)((char *)v4 + 724);
  }
  v47 = *((_QWORD *)v4 + 104);
  if ( v47 )
  {
    *(_QWORD *)(v35 + 1328) = v47;
    *(_DWORD *)(v35 + 1336) = *((_DWORD *)v4 + 210);
    *(_QWORD *)(v35 + 1344) = *((_QWORD *)v4 + 106);
    *(_QWORD *)(v35 + 1352) = *((_QWORD *)v4 + 107);
    *(_QWORD *)(v35 + 1360) = *((_QWORD *)v4 + 108);
    *(_DWORD *)(v35 + 1368) ^= (*(_DWORD *)(v35 + 1368) ^ (*((_DWORD *)v4 + 69) >> 5)) & 1;
    *(_DWORD *)(v35 + 1368) ^= ((unsigned __int8)*(_DWORD *)(v35 + 1368) ^ (unsigned __int8)(*((_DWORD *)v4 + 69) >> 3)) & 2;
  }
  memmove(*(void **)(v35 + 1176), (char *)v4 + 872, *((unsigned int *)v4 + 221));
  v48 = 0;
  v49 = *(_QWORD *)(v35 + 1176);
  v50 = 0;
  if ( *(_DWORD *)(v8 + 152) )
  {
    do
    {
      v51 = *(_QWORD *)(v50 * ((8 * *(_DWORD *)(v49 + 8) + 231) & 0xFFFFFFF8) + v49 + 200);
      if ( v51 )
        _InterlockedIncrement((volatile signed __int32 *)(v51 + 12));
      v52 = *(_DWORD *)(v8 + 152);
      ++v50;
    }
    while ( v50 < v52 );
    if ( v52 )
    {
      v53 = v161;
      do
      {
        v54 = v48 * ((8 * *((_DWORD *)v53 + 2) + 231) & 0xFFFFFFF8);
        v55 = *(__int64 **)&v53[v54 + 200];
        if ( v55 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v55 + 3, 0xFFFFFFFF) == 1 )
          {
            v134 = *v55;
            if ( *v55 )
            {
              ++*(_DWORD *)(v134 + 28);
              if ( ExQueryDepthSList((PSLIST_HEADER)v134) < *(_WORD *)(v134 + 16) )
              {
                ExpInterlockedPushEntrySList((PSLIST_HEADER)v134, (PSLIST_ENTRY)v55);
              }
              else
              {
                ++*(_DWORD *)(v134 + 32);
                (*(void (__fastcall **)(__int64 *, __int64))(v134 + 56))(v55, v134);
              }
            }
            else
            {
              ExFreePoolWithTag(v55, 0);
            }
          }
          *(_QWORD *)&v53[v54 + 200] = 0LL;
        }
        ++v48;
      }
      while ( v48 < *(_DWORD *)(v8 + 152) );
      v4 = a1;
      v9 = v177;
    }
  }
  v56 = *(_DWORD **)(v35 + 1176);
  v57 = 0;
  v58 = *v56 & 0x3FF;
  if ( *(_BYTE *)(v8 + 156) )
    v57 = (*v56 >> 10) & 0x3FF;
  v20 = !_BitScanForward((unsigned int *)&v59, v58);
  v166 = v59;
  if ( v20 )
    LOBYTE(v59) = -1;
  v60 = (char)v59;
  v20 = !_BitScanForward((unsigned int *)&v59, v57);
  v167 = v61;
  if ( v20 )
    LOBYTE(v59) = -1;
  v62 = (char)v59;
  while ( v58 || v57 )
  {
    v104 = v62;
    if ( v60 < v62 )
      v104 = v60;
    v105 = v104 * ((8 * v56[2] + 231) & 0xFFFFFFF8);
    v106 = *(_QWORD *)((char *)v56 + v105 + 208);
    if ( v106 )
      _InterlockedIncrement((volatile signed __int32 *)(v106 + 36));
    v107 = *(_QWORD *)((char *)v56 + v105 + 224);
    if ( v107 )
      _InterlockedIncrement((volatile signed __int32 *)(v107 + 36));
    if ( v60 >= v62 )
    {
      v135 = -1;
      v57 &= ~(1 << v62);
      v20 = !_BitScanForward((unsigned int *)&v136, v57);
      v169 = v136;
      if ( !v20 )
        v135 = v136;
      v62 = v135;
    }
    else
    {
      v58 &= ~(1 << v60);
      v20 = !_BitScanForward((unsigned int *)&v108, v58);
      v168 = v108;
      if ( v20 )
        LOBYTE(v108) = -1;
      v60 = (char)v108;
    }
  }
  *(_DWORD *)(v35 + 1080) = *((_DWORD *)v4 + 102);
  *(_DWORD *)(v35 + 1084) = 1 << v156;
  v63 = *(_DWORD *)(v35 + 1136) ^ (*(_DWORD *)(v35 + 1136) ^ (*((_DWORD *)v4 + 68) >> 19)) & 1;
  *(_DWORD *)(v35 + 1136) = v63;
  v64 = ((unsigned __int8)v63 ^ (unsigned __int8)(*((_DWORD *)v4 + 68) >> 19)) & 2 ^ v63;
  *(_DWORD *)(v35 + 1136) = v64;
  v65 = ((unsigned __int8)v64 ^ (unsigned __int8)(*((_DWORD *)v4 + 68) >> 19)) & 4 ^ v64;
  *(_DWORD *)(v35 + 1136) = v65;
  *(_DWORD *)(v35 + 1136) = v65 ^ ((unsigned __int8)v65 ^ (unsigned __int8)(*((_DWORD *)v4 + 68) >> 19)) & 8;
  *(_QWORD *)(v35 + 1160) = *((_QWORD *)v4 + 37);
  v66 = *((_QWORD *)v4 + 38);
  *(_QWORD *)(v35 + 1168) = v66;
  if ( v66 )
    _InterlockedIncrement((volatile signed __int32 *)(v66 + 12));
  v67 = *((_DWORD *)v4 + 68);
  *(_DWORD *)(v35 + 1092) = 1;
  if ( (v67 & 0x400) != 0 )
  {
    *(_DWORD *)(v35 + 1088) = *((_DWORD *)v4 + 103);
    v68 = *((_DWORD *)v4 + 103);
  }
  else
  {
    *(_DWORD *)(v35 + 1088) = 1;
    v68 = 1;
  }
  v16 = v154;
  *(_DWORD *)(v35 + 1096) = v68;
  if ( *(_BYTE *)(v35 + 1076) || v154 )
  {
    v27 = v157;
    *(_DWORD *)(v35 + 1072) = 0;
    v139 = *(_DWORD *)(v35 + 1136) ^ (*(_DWORD *)(v35 + 1136) ^ (*((_DWORD *)v4 + 68) >> 21)) & 0x80;
    *(_DWORD *)(v35 + 1136) = v139;
    v138 = v139 ^ ((unsigned __int16)v139 ^ (*((_DWORD *)v4 + 68) >> 20)) & 0x100;
    goto LABEL_205;
  }
  v69 = *((_DWORD *)v4 + 99);
  v27 = v157;
  if ( !v69 )
  {
    v137 = *(_DWORD *)(v35 + 1136) | 0x80;
    *(_DWORD *)(v35 + 1072) = 0;
    v138 = v137 & 0xFFFFFEFF;
LABEL_205:
    *(_DWORD *)(v35 + 1136) = v138;
    goto LABEL_73;
  }
  *(_DWORD *)(v35 + 1072) = v69;
LABEL_73:
  v70 = *(_DWORD *)(v35 + 1312);
  if ( !v70 )
  {
    *(_DWORD *)(v35 + 1312) = 1;
    v70 = 1;
  }
  v71 = *(_QWORD *)(*(_QWORD *)(v35 + 1040) + 40LL);
  if ( !*(_BYTE *)(*(_QWORD *)(v71 + 16) + 130LL) )
  {
    v140 = *((_DWORD *)v9 + 20681);
    if ( v70 != v140 && (*(_DWORD *)(v35 + 1136) & 0x100) == 0 && *((_DWORD *)v9 + 1) != 3 )
    {
      v141 = *(_DWORD *)(v35 + 1072);
      if ( v70 >= v140 )
      {
        LOBYTE(v140) = v141 / v70;
        *(_DWORD *)(v35 + 1072) = v141 / v70;
      }
      else
      {
        if ( v141 )
          v140 *= v141;
        *(_DWORD *)(v35 + 1072) = v140;
      }
      if ( (byte_1C006E944 & 1) != 0 )
      {
        McTemplateK0qqqq_EtwWriteTransfer(
          v71,
          (unsigned int)&EventVirtualizeFlipSubmissionRate,
          v27,
          v70,
          *((_DWORD *)v9 + 20681),
          v141,
          v140);
        v27 = v157;
        v16 = v154;
      }
    }
  }
  v72 = 0;
  *(_DWORD *)(v35 + 1312) = *((_DWORD *)v9 + 20681);
  if ( (*((_DWORD *)v9 + 20685) & 1) != 0 )
  {
    v142 = *(_QWORD *)(v27 + 40);
    if ( *(_BYTE *)(v142 + 2632) || *(_BYTE *)(*(_QWORD *)(v142 + 16) + 129LL) )
    {
      v143 = *(_DWORD *)(v35 + 1136);
      if ( (v143 & 0x80u) != 0 || v16 )
        v72 = 1;
      if ( (*(_DWORD *)(v35 + 1136) & 0x180) == 0x80 )
        *(_DWORD *)(v35 + 1136) = v143 | 0x200;
    }
  }
  v73 = *((_DWORD *)v4 + 104);
  if ( !v73 )
  {
    if ( v72 )
      v73 = -1;
    else
      v73 = *((_DWORD *)v9 + 20682);
  }
  *(_DWORD *)(v35 + 1140) = v73;
  if ( (*((_DWORD *)v4 + 68) & 0x800) != 0 )
    *(_BYTE *)(v35 + 1077) = 1;
  v74 = *(_DWORD **)(v35 + 1176);
  v75 = 0;
  v76 = 0;
  v77 = *v74 & 0x3FF;
  if ( *(_BYTE *)(v8 + 156) )
    v75 = (*v74 >> 10) & 0x3FF;
  v20 = !_BitScanForward(&v78, v77);
  v170 = v78;
  if ( v20 )
    LOBYTE(v78) = -1;
  v79 = 0;
  v80 = (char)v78;
  v20 = !_BitScanForward(&v78, v75);
  v171 = v81;
  if ( v20 )
    LOBYTE(v78) = -1;
  v78 = (char)v78;
  LODWORD(v161) = (char)v78;
  while ( (_DWORD)v77 || v75 )
  {
    if ( v80 >= v78 )
    {
      v146 = -1;
      v75 &= ~(1 << v78);
      v20 = !_BitScanForward(&v78, v75);
      v173 = v147;
      if ( !v20 )
        v146 = v78;
      v78 = v146;
      v79 = 0;
      LODWORD(v161) = v78;
      goto LABEL_138;
    }
    v109 = 0;
    v182 = 0;
    v110 = 0;
    v155 = 0;
    v111 = 1;
    v112 = v156;
    while ( (*(_DWORD *)(v35 + 1080) & v111) == 0 )
    {
LABEL_225:
      ++v110;
      v111 *= 2;
      v155 = v110;
      if ( v110 > v112 )
        goto LABEL_135;
    }
    v27 = *(_QWORD *)(v35 + 1176);
    v113 = *(_DWORD *)(v27 + 4);
    v114 = v113 * ((8 * *(_DWORD *)(v27 + 8) + 231) & 0xFFFFFFF8);
    v115 = (unsigned int)(v76 + v109 * v113);
    v116 = *(_QWORD *)(v114 + (v115 << 6) + v27 + 48);
    if ( ((*(_DWORD *)(v116 + 32) >> 2) & 0x3F) != v156 )
    {
      v110 = v155;
      v109 = v182 + 1;
      v112 = v156;
      ++v182;
      goto LABEL_225;
    }
    v117 = *(_QWORD *)(v116 + 96);
    v118 = (v115 << 6) + v114;
    v119 = *(_QWORD *)(v117 + 24);
    v120 = v27 + v118;
    if ( v119 )
    {
      *(_QWORD *)(v118 + v27 + 64) = ++*(_QWORD *)(v119 + 16);
      v144 = *(_QWORD *)(*(_QWORD *)(v116 + 96) + 24LL);
      *(_QWORD *)(v120 + 72) = ++*(_QWORD *)(v144 + 24);
      v27 = *(_QWORD *)(*(_QWORD *)(v116 + 96) + 24LL);
      v145 = 2LL * *(unsigned int *)(v27 + 32);
      *(_OWORD *)(v27 + 8 * v145 + 40) = 0LL;
      *(_DWORD *)(v27 + 32) = ((unsigned __int8)*(_DWORD *)(v27 + 32) + 1) & 7;
      *(_DWORD *)(v27 + 8 * v145 + 40) = 0;
      *(_QWORD *)(v27 + 8 * v145 + 48) = *(_QWORD *)(v120 + 72);
    }
    else
    {
      v121 = *(_QWORD *)(v117 + 16);
      if ( v121 )
        _InterlockedIncrement((volatile signed __int32 *)(v121 + 8));
    }
LABEL_135:
    v79 = 0;
    v77 = ~(1 << v80) & (unsigned int)v77;
    v20 = !_BitScanForward((unsigned int *)&v122, v77);
    v172 = v122;
    if ( v20 )
      LOBYTE(v122) = -1;
    v80 = (char)v122;
    v78 = (unsigned int)v161;
LABEL_138:
    ++v76;
  }
  v82 = v174;
  if ( *(_DWORD *)(v35 + 1088) > *(_DWORD *)(v35 + 1092) )
  {
    *(_DWORD *)(v35 + 1052) = 8;
  }
  else
  {
    if ( !v160 )
    {
      v83 = v177;
      v84 = v185;
      while ( 1 )
      {
        *(_DWORD *)(v82 + 56) = ((_BYTE)v84 + 1) & 0x3F;
        ++*v175;
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 808));
        _InterlockedIncrement((volatile signed __int32 *)v83 + 748);
        if ( *(_DWORD *)(v35 + 1052) == 7 )
          *(_QWORD *)(v35 + 1064) = ++*(_QWORD *)(v82 + 88);
        v85 = *(_QWORD *)(v35 + 1040);
        if ( !*(_BYTE *)(v85 + 204) && !_InterlockedCompareExchange((volatile signed __int32 *)(v85 + 200), 0, 0) )
        {
          v86 = *(unsigned int *)(v35 + 1092);
          if ( (*(_DWORD *)(v35 + 1136) & 0x4000) != 0 )
          {
            if ( (_DWORD)v86 )
            {
              do
              {
                v86 = *(_QWORD *)(v35 + 8LL * v79);
                v27 = *(_QWORD *)(v35 + 8LL * v79 + 512);
                if ( !*(_BYTE *)(v86 + 28) )
                {
                  v148 = *(unsigned __int64 **)(v86 + 64);
                  if ( *(_BYTE *)(v86 + 29) )
                  {
                    if ( *v148 < v27 )
                      goto LABEL_104;
                  }
                  else if ( *(_DWORD *)v148 - (int)v27 < 0 )
                  {
                    goto LABEL_104;
                  }
                }
                ++v79;
              }
              while ( v79 < *(_DWORD *)(v35 + 1092) );
            }
          }
          else if ( (_DWORD)v86 )
          {
            v77 = *(_QWORD *)(v35 + 8LL * (unsigned int)(v86 - 1));
            v87 = 0;
            while ( 1 )
            {
              v88 = *(_QWORD *)(v35 + 8LL * v87);
              if ( v88 )
              {
                v27 = *(unsigned int *)(v35 + 8LL * v87 + 524);
                v89 = *(_DWORD *)(v88 + 164);
                v90 = (unsigned int)v27 <= v89;
                if ( (_DWORD)v27 == v89 )
                {
                  if ( *(_DWORD *)(v35 + 8LL * v87 + 520) > *(_DWORD *)(v88 + 160) )
                    break;
                  v90 = (unsigned int)v27 <= v89;
                }
                if ( !v90 )
                  break;
              }
              if ( ++v87 >= (unsigned int)v86 )
              {
                if ( v77 )
                {
                  LOBYTE(v86) = 1;
                  VidSchiUpdateLastCompletedPresentTimestamp(v77, v86, 0);
                }
                goto LABEL_151;
              }
            }
LABEL_104:
            v91 = v179;
            *(_DWORD *)(v35 + 1052) = 1;
            v92 = (_DWORD *)*v91;
            v93 = *(unsigned int *)(*v91 + 136LL);
            v94 = *(_QWORD *)(*v91 + 128LL) + 112 * v93;
            *(_DWORD *)(*v91 + 136LL) = (v93 + 1) & (*(_DWORD *)(*v91 + 120LL) - 1);
            v95 = *(void **)(v94 + 72);
            if ( v95 )
              memset(v95, 0, 8LL * *(unsigned int *)(v8 + 152));
            v96 = v176;
            *(_DWORD *)v94 = 0;
            *(_DWORD *)(v94 + 16) = **(_DWORD **)(v96 + 1296) & 0x3FF;
            *(_DWORD *)(v94 + 20) = (**(_DWORD **)(v96 + 1296) >> 10) & 0x3FF;
            *(_BYTE *)(v94 + 24) = *(_BYTE *)(v82 + 80);
            *(_DWORD *)(v94 + 28) = v185;
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            v98 = v176;
            *(LARGE_INTEGER *)(v94 + 8) = PerformanceCounter;
            *(_BYTE *)(v94 + 36) = (*(_DWORD *)(v98 + 1256) & 0x20) != 0;
            *(_DWORD *)(v94 + 40) = *(_DWORD *)(v98 + 1172);
            *(_DWORD *)(v94 + 32) = *(_DWORD *)(v98 + 1176);
            *(_DWORD *)(v94 + 44) = *(_DWORD *)(v98 + 1260);
            *(_DWORD *)(v94 + 48) = v92[736];
            *(_QWORD *)(v94 + 56) = *(_QWORD *)(v98 + 1416);
            *(_QWORD *)(v94 + 64) = *(_QWORD *)(v98 + 1424);
            *(_DWORD *)(v94 + 84) = v92[751];
            *(_DWORD *)(v94 + 80) = v92[750];
            *(_DWORD *)(v94 + 88) = *(_DWORD *)(v82 + 56);
            *(_DWORD *)(v94 + 92) = *(_DWORD *)(v82 + 60);
            *(_DWORD *)(v94 + 96) = *(_DWORD *)(v82 + 64);
            *(_DWORD *)(v94 + 100) = *(_DWORD *)(v82 + 68);
            *(_DWORD *)(v94 + 104) = *(_DWORD *)(v82 + 72);
            *(_DWORD *)(v94 + 108) = *(_DWORD *)(v82 + 76);
            goto LABEL_107;
          }
LABEL_151:
          if ( (*(_DWORD *)(v35 + 1136) & 0x8000) != 0 )
          {
            v149 = *(_QWORD *)(v85 + 32);
            if ( *(_BYTE *)(v149 + 56) )
              ((void (__fastcall *)(_QWORD, __int64, unsigned __int64))DxgCoreInterface[23])(
                *(_QWORD *)(v149 + 8),
                v86,
                v27);
          }
          v84 = v185;
        }
        if ( !*((_BYTE *)v83 + 78580) )
          goto LABEL_104;
        v20 = v178 == 0;
        v124 = 1;
        *(_DWORD *)(v35 + 1052) = 2;
        v125 = *(_DWORD *)(v82 + 64);
        if ( v20 )
          break;
        if ( v84 != v125 )
          goto LABEL_168;
        if ( *(_BYTE *)(v8 + 156) )
        {
          v150 = VidSchiCheckPendingFlipsForThisEntry(
                   (struct _VIDSCH_GLOBAL *)v8,
                   v83,
                   (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v35,
                   (struct VIDSCH_FLIP_QUEUE *)v77);
          v84 = v185;
          if ( v150 )
          {
            if ( !*(_BYTE *)(v8 + 59) )
              *(_QWORD *)(v35 + 1104) = MEMORY[0xFFFFF78000000320];
            goto LABEL_168;
          }
        }
        *(_DWORD *)(v35 + 1052) = 4;
        v124 = 0;
        v127 = v153;
        LODWORD(v151) = v84;
        VidSchiUpdateFlipQueueHistory(0LL, v8, v153, v82, v151);
        VidSchiExecuteMmIoFlip((__int64)v158, v8, v153, v82, v185, &v183);
LABEL_162:
        v84 = v185;
LABEL_163:
        if ( *(_DWORD *)(1376LL * *(unsigned int *)(v82 + 60) + v82 + 1172) != 1 )
          *(_DWORD *)(v82 + 60) = *(_DWORD *)(v82 + 56);
        if ( v124 )
        {
          LODWORD(v151) = v84;
          VidSchiUpdateFlipQueueHistory(0LL, v8, v127, v82, v151);
        }
LABEL_107:
        v185 = *(_DWORD *)(v82 + 56);
        v84 = v185;
        v176 = v82 + 1376LL * v185;
        v35 = v176 + 120;
        if ( *(_DWORD *)(v176 + 1172) != 7 )
        {
          v99 = v153;
          goto LABEL_109;
        }
        v79 = 0;
      }
      if ( v84 != v125 && !*(_BYTE *)(v35 + 1076) )
      {
        v77 = ((_BYTE)v84 - 1) & 0x3F;
        if ( (*(_DWORD *)(1376 * v77 + v82 + 1256) & 0x20) == 0 )
          goto LABEL_168;
        WdLogSingleEntry5(0LL, 281LL, 0x100000LL, v77, v82, v8);
        __debugbreak();
        goto LABEL_253;
      }
      if ( !*(_BYTE *)(v8 + 59) )
        *(_QWORD *)(v35 + 1104) = MEMORY[0xFFFFF78000000320];
      if ( VidSchiCheckPendingFlipsForThisEntry(
             (struct _VIDSCH_GLOBAL *)v8,
             v83,
             (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v35,
             (struct VIDSCH_FLIP_QUEUE *)v77) )
      {
        goto LABEL_167;
      }
      if ( *(_BYTE *)(v35 + 1076) )
      {
LABEL_253:
        LODWORD(v151) = v185;
        VidSchiRestartQueuedFlip(v158, v157, v153, v82, v151);
      }
      if ( *(_DWORD *)(v82 + 112) )
      {
        *(_DWORD *)(v35 + 1052) = 3;
LABEL_167:
        v84 = v185;
LABEL_168:
        v127 = v153;
        goto LABEL_163;
      }
      v124 = 0;
      *(_DWORD *)(v35 + 1052) = 4;
      v126 = v185;
      LODWORD(v151) = v185;
      VidSchiUpdateFlipQueueHistory(0LL, v8, v153, v82, v151);
      v152 = v126;
      v127 = v153;
      VidSchiExecuteMmIoFlip((__int64)v158, v8, v153, v82, v152, &v183);
      goto LABEL_162;
    }
    *(_DWORD *)(v35 + 1052) = 7;
  }
  v99 = v153;
  LODWORD(v151) = v185;
  VidSchiUpdateFlipQueueHistory(0LL, v8, v153, v82, v151);
LABEL_109:
  *((_DWORD *)v4 + 16) |= 2u;
  if ( v183 )
    VidSchiCompletePendingFlipOnPlane((unsigned int)v158, v8, v99, v82, 9);
  while ( 1 )
  {
    v100 = (_QWORD *)v158[0];
    if ( *(_QWORD **)(v158[0] + 8LL) != v158
      || (v101 = *(_QWORD *)v158[0], *(_QWORD *)(*(_QWORD *)v158[0] + 8LL) != v158[0]) )
    {
      __fastfail(3u);
    }
    v158[0] = *(_QWORD *)v158[0];
    *(_QWORD *)(v101 + 8) = v158;
    if ( v100 == v158 )
      break;
    *v100 = 0LL;
    v100[1] = 0LL;
    HwQueueStagingList::ProcessHwQueue((HwQueueStagingList *)v158, (struct VIDSCH_HW_QUEUE *)(v100 - 22));
  }
  v159 = 1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  do
    v4 = VidSchiProcessCompletedQueuePacketInternal(v4, v102, v103);
  while ( v4 );
  KeLowerIrql(v184);
  if ( !v159 )
    goto LABEL_180;
}
