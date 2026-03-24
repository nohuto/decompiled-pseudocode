/*
 * XREFs of VidSchUnwaitFlipQueue @ 0x1C000D800
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00095B0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000CC70 (VidSchiUnwaitMonitoredFences.c)
 *     ?VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002A258 (-VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C002C4FC (-VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUE.c)
 *     VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x1C0032254 (VidSchiUnwaitFlipQueueUnderSchedulerSpinLock.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C0036D94 (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C003A3A0 (VidSchSubmitSignalToHwQueue.c)
 * Callees:
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C000D3F0 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     ?UpdateHistory@_VIDSCH_FLIP_QUEUE_HISTORY_ENTRY@@QEAAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEBU_VIDSCH_PRESENT_INFO@@PEAUVIDSCH_FLIP_QUEUE@@KK@Z @ 0x1C000EA50 (-UpdateHistory@_VIDSCH_FLIP_QUEUE_HISTORY_ENTRY@@QEAAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEBU_V.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000EB20 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C0010130 (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018EC0 (memset.c)
 *     VidSchiRestartQueuedFlip @ 0x1C003153C (VidSchiRestartQueuedFlip.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C003CE38 (VidSchiCompletePendingFlipOnPlane.c)
 */

__int64 __fastcall VidSchUnwaitFlipQueue(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // r9d
  int v5; // r11d
  unsigned int v6; // r14d
  __int64 v7; // r12
  __int64 v8; // rdi
  int v9; // ebx
  __int64 v10; // rbp
  __int64 v11; // rbp
  __int64 v12; // rdx
  unsigned int v13; // r13d
  __int64 v14; // r15
  int v15; // ecx
  __int64 v16; // r10
  __int64 v17; // r8
  __int64 v18; // r11
  __int64 v19; // rax
  unsigned int v20; // r11d
  bool v21; // zf
  __int64 v22; // rdx
  int v23; // eax
  int v24; // eax
  LARGE_INTEGER *v25; // rdi
  unsigned int v26; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v28; // rcx
  int v29; // eax
  int v30; // edx
  __int64 v31; // rdx
  int v32; // eax
  int v33; // r15d
  void *v34; // rdi
  __int64 v35; // r8
  int v36; // r11d
  int v37; // eax
  unsigned int v38; // r8d
  int v39; // r9d
  int v40; // r9d
  int v41; // r8d
  int v42; // r8d
  unsigned int v43; // ecx
  unsigned __int64 v44; // r9
  unsigned __int64 *v45; // rax
  __int64 v46; // rcx
  unsigned int v47; // edx
  int v48; // r8d
  int v49; // edx
  int v50; // edx
  unsigned int v51; // edx
  int v52; // r8d
  int v53; // edx
  __int64 v54; // [rsp+30h] [rbp-68h]
  __int64 v55; // [rsp+38h] [rbp-60h]
  __int64 v56; // [rsp+40h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF
  char v59; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v60; // [rsp+B0h] [rbp+18h]
  __int64 v61; // [rsp+B8h] [rbp+20h]

  result = (__int64)&retaddr;
  v3 = 0;
  v5 = a1;
  v6 = 0;
  if ( *(_DWORD *)(a2 + 40) )
  {
    while ( 1 )
    {
      result = v6;
      v7 = a2 + 8LL * v6;
      v8 = *(_QWORD *)(v7 + 3104);
      v54 = v8;
      if ( *(_BYTE *)(v8 + 66436) )
        break;
LABEL_10:
      if ( ++v6 >= *(_DWORD *)(a2 + 40) )
        return result;
    }
    v9 = -1;
    while ( 2 )
    {
      if ( v9 == *(_DWORD *)(a2 + 144) )
        goto LABEL_10;
      v10 = *(_QWORD *)(v7 + 3104);
      if ( v9 == -1 )
      {
        v11 = *(_QWORD *)(v10 + 24);
      }
      else
      {
        result = v9;
        v11 = *(_QWORD *)(v10 + 8LL * v9 + 32);
      }
      if ( !v11 )
        goto LABEL_8;
      v12 = 1LL;
      v59 = 0;
      v13 = *(_DWORD *)(v11 + 36);
      v60 = 1;
      while ( 1 )
      {
        v14 = v11 + 1344LL * v13;
        v15 = *(_DWORD *)(v14 + 1140);
        if ( v15 == 1 || v15 == 16 )
          break;
        result = (unsigned int)(v15 - 2);
        if ( (result & 0xFFFFFFFD) == 0 )
        {
          v36 = *(_DWORD *)(v8 + 4);
          if ( v36 != 3 )
          {
            if ( v36 != 5 )
              goto LABEL_54;
            if ( (*(_DWORD *)(v14 + 1224) & 0x100) == 0 )
              goto LABEL_54;
            v37 = *(_DWORD *)(1344LL * *(unsigned int *)(v11 + 44) + v11 + 1140);
            if ( v37 == 5 || v37 == 15 )
              goto LABEL_54;
          }
          if ( v13 != *(_DWORD *)(v11 + 40) )
            goto LABEL_54;
          if ( *(_BYTE *)(a2 + 148) )
          {
            v38 = *(_DWORD *)(v11 + 48);
            v39 = ((unsigned __int8)*(_DWORD *)(v11 + 44) - 1) & 0x3F;
            if ( v38 != v39 )
            {
              while ( *(_DWORD *)(1344LL * v38 + v11 + 1140) != 14 )
              {
                v38 = ((_BYTE)v38 - 1) & 0x3F;
                if ( v38 == v39 )
                  goto LABEL_68;
              }
LABEL_53:
              v3 = 0;
LABEL_54:
              v5 = a1;
              goto LABEL_55;
            }
LABEL_68:
            v40 = *(_DWORD *)(v14 + 1224);
            if ( (v40 & 0x10) != 0 )
              v41 = ((unsigned __int16)**(_DWORD **)(v14 + 1264) | (unsigned __int16)(**(_DWORD **)(v14 + 1264) >> 10)) & 0x3FF;
            else
              v41 = (1 << *(_DWORD *)(a2 + 144)) - 1;
            if ( (v41 & *(_DWORD *)(v8 + 2356)) != 0 )
              goto LABEL_53;
            if ( *(_DWORD *)(a2 + 152) <= 1u || v36 == 3 || (v40 & 0x180) != 0x80 )
            {
              v42 = (*(_DWORD *)(v14 + 1224) & 0x10) != 0
                  ? ((unsigned __int16)**(_DWORD **)(v14 + 1264) | (unsigned __int16)(**(_DWORD **)(v14 + 1264) >> 10)) & 0x3FF
                  : (1 << *(_DWORD *)(a2 + 144)) - 1;
              if ( (v42 & *(_DWORD *)(v8 + 2352)) != 0 )
                goto LABEL_53;
            }
          }
          *(_DWORD *)(v14 + 1140) = 4;
          VidSchiExecuteMmIoFlip(a1, a2, v6, v11, v13, &v59);
LABEL_52:
          v12 = v60;
          goto LABEL_53;
        }
        if ( v15 != 3 )
          goto LABEL_17;
LABEL_55:
        v13 = ((_BYTE)v13 + 1) & 0x3F;
        *(_DWORD *)(v11 + 36) = v13;
      }
      v16 = *(_QWORD *)(v14 + 1128);
      v56 = v16;
      if ( !*(_BYTE *)(v16 + 204) && !_InterlockedCompareExchange((volatile signed __int32 *)(v16 + 200), 0, 0) )
      {
        v17 = *(unsigned int *)(v14 + 1180);
        if ( (*(_DWORD *)(v14 + 1224) & 0x4000) != 0 )
        {
          v43 = 0;
          if ( (_DWORD)v17 )
          {
            do
            {
              v17 = *(_QWORD *)(v14 + 8LL * v43 + 88);
              v44 = *(_QWORD *)(v14 + 8LL * v43 + 600);
              if ( !*(_BYTE *)(v17 + 28) )
              {
                v45 = *(unsigned __int64 **)(v17 + 64);
                if ( *(_BYTE *)(v17 + 29) )
                {
                  if ( *v45 < v44 )
                    goto LABEL_28;
                }
                else if ( *(_DWORD *)v45 - (int)v44 < 0 )
                {
                  goto LABEL_28;
                }
              }
              ++v43;
            }
            while ( v43 < *(_DWORD *)(v14 + 1180) );
          }
        }
        else
        {
          if ( (_DWORD)v17 )
            v18 = *(_QWORD *)(v14 + 8LL * (unsigned int)(v17 - 1) + 88);
          else
            v18 = 0LL;
          v55 = v18;
          if ( (_DWORD)v17 )
          {
            while ( 1 )
            {
              v19 = *(_QWORD *)(v14 + 8LL * v3 + 88);
              if ( v19 )
              {
                v20 = *(_DWORD *)(v14 + 8LL * v3 + 612);
                v21 = v20 == *(_DWORD *)(v19 + 164);
                LODWORD(v61) = *(_DWORD *)(v19 + 164);
                v8 = v54;
                if ( v21 && *(_DWORD *)(v14 + 8LL * v3 + 608) > *(_DWORD *)(v19 + 160) )
                  break;
                if ( v20 > (unsigned int)v61 )
                  break;
              }
              if ( ++v3 >= (unsigned int)v17 )
              {
                v18 = v55;
                goto LABEL_34;
              }
            }
LABEL_28:
            v22 = *(_QWORD *)(v7 + 3104);
            v23 = *(_DWORD *)(v14 + 1224);
            v61 = v22;
            if ( (v23 & 0x10) != 0 )
              v24 = ((unsigned __int16)**(_DWORD **)(v14 + 1264) | (unsigned __int16)(**(_DWORD **)(v14 + 1264) >> 10)) & 0x3FF;
            else
              v24 = (1 << *(_DWORD *)(a2 + 144)) - 1;
            v60 = v24;
            v25 = (LARGE_INTEGER *)(*(_QWORD *)(v22 + 120) + 72LL * *(unsigned int *)(v22 + 128));
            memset(v25, 0, 0x48uLL);
            v26 = v60;
            *(_DWORD *)(v61 + 128) = (*(_DWORD *)(v61 + 128) + 1) & (*(_DWORD *)(v61 + 112) - 1);
            v25->LowPart = 0;
            v25[2].LowPart = v26;
            BYTE4(v25[2].QuadPart) = *(_BYTE *)(v11 + 56);
            v25[3].LowPart = v13;
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            v28 = v61;
            v5 = a1;
            v25[1] = PerformanceCounter;
            LOBYTE(v25[4].LowPart) = (*(_DWORD *)(v14 + 1224) & 0x20) != 0;
            v3 = 0;
            v25[4].HighPart = *(_DWORD *)(v14 + 1140);
            v25[3].HighPart = *(_DWORD *)(v14 + 1144);
            v25[5].HighPart = *(_DWORD *)(v28 + 2356);
            v25[5].LowPart = *(_DWORD *)(v28 + 2352);
            v25[6].LowPart = *(_DWORD *)(v11 + 32);
            v25[6].HighPart = *(_DWORD *)(v11 + 36);
            v25[7].LowPart = *(_DWORD *)(v11 + 40);
            v25[7].HighPart = *(_DWORD *)(v11 + 44);
            v25[8].LowPart = *(_DWORD *)(v11 + 48);
            result = *(unsigned int *)(v11 + 52);
            v25[8].HighPart = result;
            v8 = v54;
LABEL_17:
            if ( v59 )
            {
              result = VidSchiCompletePendingFlipOnPlane(v5, a2, v6, v11, 9);
              v5 = a1;
              v3 = 0;
            }
LABEL_8:
            ++v9;
            continue;
          }
LABEL_34:
          if ( v18 )
          {
            LOBYTE(v12) = 1;
            VidSchiUpdateLastCompletedPresentTimestamp(v18, v12, 0);
            v12 = v60;
            v16 = v56;
          }
          v5 = a1;
        }
        if ( (*(_DWORD *)(v14 + 1224) & 0x8000) != 0 )
        {
          v46 = *(_QWORD *)(v16 + 32);
          if ( *(_BYTE *)(v46 + 56) )
          {
            ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD))DxgCoreInterface[22])(
              *(_QWORD *)(v46 + 8),
              v12,
              v17,
              0LL);
            LODWORD(v12) = v60;
            LODWORD(v16) = v56;
            v5 = a1;
          }
        }
      }
      break;
    }
    v29 = *(_DWORD *)(v8 + 4);
    if ( v29 != 3 )
    {
      if ( v29 != 5 )
        goto LABEL_57;
      *(_DWORD *)(v14 + 1140) = 2;
      if ( !(_DWORD)v12 )
        goto LABEL_57;
      v60 = 0;
      if ( v13 != *(_DWORD *)(v11 + 40) && !*(_BYTE *)(v14 + 1164) )
        goto LABEL_57;
      *(_QWORD *)(v14 + 1192) = MEMORY[0xFFFFF78000000320];
      if ( *(_BYTE *)(a2 + 148) )
      {
        v51 = *(_DWORD *)(v11 + 48);
        v52 = ((unsigned __int8)*(_DWORD *)(v11 + 44) - 1) & 0x3F;
        if ( v51 != v52 )
        {
          while ( *(_DWORD *)(1344LL * v51 + v11 + 1140) != 14 )
          {
            v51 = ((_BYTE)v51 - 1) & 0x3F;
            if ( v51 == v52 )
              goto LABEL_111;
          }
          goto LABEL_57;
        }
LABEL_111:
        if ( (*(_DWORD *)(v14 + 1224) & 0x10) != 0 )
          v53 = ((unsigned __int16)**(_DWORD **)(v14 + 1264) | (unsigned __int16)(**(_DWORD **)(v14 + 1264) >> 10)) & 0x3FF;
        else
          v53 = (1 << *(_DWORD *)(a2 + 144)) - 1;
        if ( (v53 & *(_DWORD *)(v8 + 2356)) != 0 )
        {
LABEL_57:
          VidSchiUpdateFlipQueueHistory(0LL, a2, v6, v11, v13);
          goto LABEL_52;
        }
        if ( *(_DWORD *)(a2 + 152) > 1u && *(_DWORD *)(v8 + 4) != 3 && (*(_DWORD *)(v14 + 1224) & 0x180) == 0x80 )
        {
LABEL_46:
          if ( *(_BYTE *)(v14 + 1164) )
            VidSchiRestartQueuedFlip(v5, v16, v6, v11, v13);
          if ( !*(_DWORD *)(v11 + 80) )
          {
            *(_DWORD *)(v14 + 1140) = 4;
            v31 = *(_QWORD *)(v7 + 3104);
            v32 = *(_DWORD *)(v14 + 1224);
            v61 = v31;
            if ( (v32 & 0x10) != 0 )
              v33 = ((unsigned __int16)**(_DWORD **)(v14 + 1264) | (unsigned __int16)(**(_DWORD **)(v14 + 1264) >> 10)) & 0x3FF;
            else
              v33 = (1 << *(_DWORD *)(a2 + 144)) - 1;
            v34 = (void *)(*(_QWORD *)(v31 + 120) + 72LL * *(unsigned int *)(v31 + 128));
            memset(v34, 0, 0x48uLL);
            v35 = v61;
            *(_DWORD *)(v61 + 128) = (*(_DWORD *)(v61 + 128) + 1) & (*(_DWORD *)(v61 + 112) - 1);
            _VIDSCH_FLIP_QUEUE_HISTORY_ENTRY::UpdateHistory(v34, 0LL, v35, v11, v33, v13);
            VidSchiExecuteMmIoFlip(a1, a2, v6, v11, v13, &v59);
            v8 = v54;
            goto LABEL_52;
          }
          *(_DWORD *)(v14 + 1140) = 3;
          goto LABEL_57;
        }
      }
      if ( (*(_DWORD *)(v14 + 1224) & 0x10) != 0 )
        v30 = ((unsigned __int16)**(_DWORD **)(v14 + 1264) | (unsigned __int16)(**(_DWORD **)(v14 + 1264) >> 10)) & 0x3FF;
      else
        v30 = (1 << *(_DWORD *)(a2 + 144)) - 1;
      if ( (v30 & *(_DWORD *)(v8 + 2352)) == 0 )
        goto LABEL_46;
      goto LABEL_57;
    }
    if ( v13 == *(_DWORD *)(v11 + 40) )
    {
      if ( !*(_BYTE *)(a2 + 148) )
        goto LABEL_104;
      v47 = *(_DWORD *)(v11 + 48);
      v48 = ((unsigned __int8)*(_DWORD *)(v11 + 44) - 1) & 0x3F;
      if ( v47 != v48 )
      {
        while ( *(_DWORD *)(1344LL * v47 + v11 + 1140) != 14 )
        {
          v47 = ((_BYTE)v47 - 1) & 0x3F;
          if ( v47 == v48 )
            goto LABEL_96;
        }
        goto LABEL_105;
      }
LABEL_96:
      v49 = (*(_DWORD *)(v14 + 1224) & 0x10) != 0
          ? ((unsigned __int16)**(_DWORD **)(v14 + 1264) | (unsigned __int16)(**(_DWORD **)(v14 + 1264) >> 10)) & 0x3FF
          : (1 << *(_DWORD *)(a2 + 144)) - 1;
      if ( (v49 & *(_DWORD *)(v8 + 2356)) == 0 )
      {
        v50 = (*(_DWORD *)(v14 + 1224) & 0x10) != 0
            ? ((unsigned __int16)**(_DWORD **)(v14 + 1264) | (unsigned __int16)(**(_DWORD **)(v14 + 1264) >> 10)) & 0x3FF
            : (1 << *(_DWORD *)(a2 + 144)) - 1;
        if ( (v50 & *(_DWORD *)(v8 + 2352)) == 0 )
        {
LABEL_104:
          *(_DWORD *)(v14 + 1140) = 4;
          VidSchiUpdateFlipQueueHistory(0LL, a2, v6, v11, v13);
          VidSchiExecuteMmIoFlip(a1, a2, v6, v11, v13, &v59);
          goto LABEL_52;
        }
      }
    }
LABEL_105:
    *(_DWORD *)(v14 + 1140) = 2;
    *(_QWORD *)(v14 + 1192) = MEMORY[0xFFFFF78000000320];
    goto LABEL_57;
  }
  return result;
}
