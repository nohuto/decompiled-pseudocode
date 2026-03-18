/*
 * XREFs of VidSchUnwaitFlipQueue @ 0x1C000CCC0
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008B90 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000C130 (VidSchiUnwaitMonitoredFences.c)
 *     ?VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002A238 (-VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C002C4DC (-VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUE.c)
 *     VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x1C00322A0 (VidSchiUnwaitFlipQueueUnderSchedulerSpinLock.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C0036DC4 (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C003A400 (VidSchSubmitSignalToHwQueue.c)
 * Callees:
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C000C8B0 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000DF80 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C000FDB0 (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016DC0 (memset.c)
 *     VidSchiRestartQueuedFlip @ 0x1C003158C (VidSchiRestartQueuedFlip.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C003CE98 (VidSchiCompletePendingFlipOnPlane.c)
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
  LARGE_INTEGER *v33; // rdi
  DWORD v34; // eax
  int v35; // r11d
  int v36; // eax
  unsigned int v37; // r8d
  int v38; // r9d
  int v39; // r9d
  int v40; // r8d
  int v41; // r8d
  unsigned int v42; // ecx
  unsigned __int64 v43; // r9
  unsigned __int64 *v44; // rax
  __int64 v45; // rcx
  unsigned int v46; // edx
  int v47; // r8d
  int v48; // edx
  int v49; // edx
  unsigned int v50; // edx
  int v51; // r8d
  int v52; // edx
  __int64 v53; // [rsp+30h] [rbp-68h]
  __int64 v54; // [rsp+38h] [rbp-60h]
  __int64 v55; // [rsp+40h] [rbp-58h]
  _DWORD *v56; // [rsp+40h] [rbp-58h]
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
      v53 = v8;
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
          v35 = *(_DWORD *)(v8 + 4);
          if ( v35 != 3 )
          {
            if ( v35 != 5 )
              goto LABEL_54;
            if ( (*(_DWORD *)(v14 + 1224) & 0x100) == 0 )
              goto LABEL_54;
            v36 = *(_DWORD *)(1344LL * *(unsigned int *)(v11 + 44) + v11 + 1140);
            if ( v36 == 5 || v36 == 15 )
              goto LABEL_54;
          }
          if ( v13 != *(_DWORD *)(v11 + 40) )
            goto LABEL_54;
          if ( *(_BYTE *)(a2 + 148) )
          {
            v37 = *(_DWORD *)(v11 + 48);
            v38 = ((unsigned __int8)*(_DWORD *)(v11 + 44) - 1) & 0x3F;
            if ( v37 != v38 )
            {
              while ( *(_DWORD *)(1344LL * v37 + v11 + 1140) != 14 )
              {
                v37 = ((_BYTE)v37 - 1) & 0x3F;
                if ( v37 == v38 )
                  goto LABEL_68;
              }
LABEL_53:
              v3 = 0;
LABEL_54:
              v5 = a1;
              goto LABEL_55;
            }
LABEL_68:
            v39 = *(_DWORD *)(v14 + 1224);
            if ( (v39 & 0x10) != 0 )
              v40 = ((unsigned __int16)**(_DWORD **)(v14 + 1264) | (unsigned __int16)(**(_DWORD **)(v14 + 1264) >> 10)) & 0x3FF;
            else
              v40 = (1 << *(_DWORD *)(a2 + 144)) - 1;
            if ( (v40 & *(_DWORD *)(v8 + 2356)) != 0 )
              goto LABEL_53;
            if ( *(_DWORD *)(a2 + 152) <= 1u || v35 == 3 || (v39 & 0x180) != 0x80 )
            {
              v41 = (*(_DWORD *)(v14 + 1224) & 0x10) != 0
                  ? ((unsigned __int16)**(_DWORD **)(v14 + 1264) | (unsigned __int16)(**(_DWORD **)(v14 + 1264) >> 10)) & 0x3FF
                  : (1 << *(_DWORD *)(a2 + 144)) - 1;
              if ( (v41 & *(_DWORD *)(v8 + 2352)) != 0 )
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
      v55 = v16;
      if ( !*(_BYTE *)(v16 + 204) && !_InterlockedCompareExchange((volatile signed __int32 *)(v16 + 200), 0, 0) )
      {
        v17 = *(unsigned int *)(v14 + 1180);
        if ( (*(_DWORD *)(v14 + 1224) & 0x4000) != 0 )
        {
          v42 = 0;
          if ( (_DWORD)v17 )
          {
            do
            {
              v17 = *(_QWORD *)(v14 + 8LL * v42 + 88);
              v43 = *(_QWORD *)(v14 + 8LL * v42 + 600);
              if ( !*(_BYTE *)(v17 + 28) )
              {
                v44 = *(unsigned __int64 **)(v17 + 64);
                if ( *(_BYTE *)(v17 + 29) )
                {
                  if ( *v44 < v43 )
                    goto LABEL_28;
                }
                else if ( *(_DWORD *)v44 - (int)v43 < 0 )
                {
                  goto LABEL_28;
                }
              }
              ++v42;
            }
            while ( v42 < *(_DWORD *)(v14 + 1180) );
          }
        }
        else
        {
          if ( (_DWORD)v17 )
            v18 = *(_QWORD *)(v14 + 8LL * (unsigned int)(v17 - 1) + 88);
          else
            v18 = 0LL;
          v54 = v18;
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
                v8 = v53;
                if ( v21 && *(_DWORD *)(v14 + 8LL * v3 + 608) > *(_DWORD *)(v19 + 160) )
                  break;
                if ( v20 > (unsigned int)v61 )
                  break;
              }
              if ( ++v3 >= (unsigned int)v17 )
              {
                v18 = v54;
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
            v8 = v53;
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
            v16 = v55;
          }
          v5 = a1;
        }
        if ( (*(_DWORD *)(v14 + 1224) & 0x8000) != 0 )
        {
          v45 = *(_QWORD *)(v16 + 32);
          if ( *(_BYTE *)(v45 + 56) )
          {
            ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD))DxgCoreInterface[22])(
              *(_QWORD *)(v45 + 8),
              v12,
              v17,
              0LL);
            LODWORD(v12) = v60;
            LODWORD(v16) = v55;
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
        v50 = *(_DWORD *)(v11 + 48);
        v51 = ((unsigned __int8)*(_DWORD *)(v11 + 44) - 1) & 0x3F;
        if ( v50 != v51 )
        {
          while ( *(_DWORD *)(1344LL * v50 + v11 + 1140) != 14 )
          {
            v50 = ((_BYTE)v50 - 1) & 0x3F;
            if ( v50 == v51 )
              goto LABEL_111;
          }
          goto LABEL_57;
        }
LABEL_111:
        if ( (*(_DWORD *)(v14 + 1224) & 0x10) != 0 )
          v52 = ((unsigned __int16)**(_DWORD **)(v14 + 1264) | (unsigned __int16)(**(_DWORD **)(v14 + 1264) >> 10)) & 0x3FF;
        else
          v52 = (1 << *(_DWORD *)(a2 + 144)) - 1;
        if ( (v52 & *(_DWORD *)(v8 + 2356)) != 0 )
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
            v56 = (_DWORD *)v31;
            if ( (*(_DWORD *)(v14 + 1224) & 0x10) != 0 )
              v32 = ((unsigned __int16)**(_DWORD **)(v14 + 1264) | (unsigned __int16)(**(_DWORD **)(v14 + 1264) >> 10)) & 0x3FF;
            else
              v32 = (1 << *(_DWORD *)(a2 + 144)) - 1;
            LODWORD(v61) = v32;
            v33 = (LARGE_INTEGER *)(*(_QWORD *)(v31 + 120) + 72LL * *(unsigned int *)(v31 + 128));
            memset(v33, 0, 0x48uLL);
            v34 = v61;
            v56[32] = (v56[32] + 1) & (v56[28] - 1);
            v33->LowPart = 0;
            v33[2].LowPart = v34;
            BYTE4(v33[2].QuadPart) = *(_BYTE *)(v11 + 56);
            v33[3].LowPart = v13;
            v33[1] = KeQueryPerformanceCounter(0LL);
            LOBYTE(v33[4].LowPart) = (*(_DWORD *)(v14 + 1224) & 0x20) != 0;
            v33[4].HighPart = *(_DWORD *)(v14 + 1140);
            v33[3].HighPart = *(_DWORD *)(v14 + 1144);
            v33[5].HighPart = v56[589];
            v33[5].LowPart = v56[588];
            v33[6].LowPart = *(_DWORD *)(v11 + 32);
            v33[6].HighPart = *(_DWORD *)(v11 + 36);
            v33[7].LowPart = *(_DWORD *)(v11 + 40);
            v33[7].HighPart = *(_DWORD *)(v11 + 44);
            v33[8].LowPart = *(_DWORD *)(v11 + 48);
            v33[8].HighPart = *(_DWORD *)(v11 + 52);
            VidSchiExecuteMmIoFlip(a1, a2, v6, v11, v13, &v59);
            v8 = v53;
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
      v46 = *(_DWORD *)(v11 + 48);
      v47 = ((unsigned __int8)*(_DWORD *)(v11 + 44) - 1) & 0x3F;
      if ( v46 != v47 )
      {
        while ( *(_DWORD *)(1344LL * v46 + v11 + 1140) != 14 )
        {
          v46 = ((_BYTE)v46 - 1) & 0x3F;
          if ( v46 == v47 )
            goto LABEL_96;
        }
        goto LABEL_105;
      }
LABEL_96:
      v48 = (*(_DWORD *)(v14 + 1224) & 0x10) != 0
          ? ((unsigned __int16)**(_DWORD **)(v14 + 1264) | (unsigned __int16)(**(_DWORD **)(v14 + 1264) >> 10)) & 0x3FF
          : (1 << *(_DWORD *)(a2 + 144)) - 1;
      if ( (v48 & *(_DWORD *)(v8 + 2356)) == 0 )
      {
        v49 = (*(_DWORD *)(v14 + 1224) & 0x10) != 0
            ? ((unsigned __int16)**(_DWORD **)(v14 + 1264) | (unsigned __int16)(**(_DWORD **)(v14 + 1264) >> 10)) & 0x3FF
            : (1 << *(_DWORD *)(a2 + 144)) - 1;
        if ( (v49 & *(_DWORD *)(v8 + 2352)) == 0 )
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
