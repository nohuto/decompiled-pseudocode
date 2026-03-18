/*
 * XREFs of VidSchSubmitCommandToHwQueue @ 0x1C003A0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x1C0004FF0 (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 *     ?VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C00068F4 (-VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     memmove @ 0x1C0016B00 (memmove.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C003C114 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00D49BC (VidSchiAllocateHwQueuePacket.c)
 *     VidSchiEnsureRootPageTableUpdated @ 0x1C00D4B6C (VidSchiEnsureRootPageTableUpdated.c)
 */

__int64 __fastcall VidSchSubmitCommandToHwQueue(__int64 a1, struct VIDSCH_SUBMIT_DATA2 *a2)
{
  __int64 v2; // r15
  struct VIDSCH_SUBMIT_DATA2 *v3; // rdi
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 result; // rax
  __int64 HwQueuePacket; // rbx
  bool v9; // zf
  __int16 v10; // ax
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r9
  int v16; // eax
  char v17; // cl
  unsigned int v18; // r12d
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // r8d
  _QWORD *v22; // rax
  void *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // [rsp+70h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 40);
  v3 = a2;
  v5 = *(_QWORD *)(v2 + 8);
  v6 = *(_QWORD *)(v5 + 32);
  if ( *(_BYTE *)(v5 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 200), 0, 0) )
  {
    v26 = WdLogNewEntry5_WdWarning(a1, a2);
    *(_QWORD *)(v26 + 24) = v5;
    *(_QWORD *)(v26 + 32) = -1071775232LL;
    WdLogEvent5_WdWarning(v26);
    return 3223192064LL;
  }
  v27 = *(_QWORD *)a2;
  if ( (v27 & 0x20) == 0
    || (result = VidSchValidatePresentFlags(a2, (struct _VIDSCH_DEVICE *)v5, (struct _VIDSCH_SUBMIT_FLAGS *)&v27),
        (int)result >= 0) )
  {
    LOBYTE(a2) = 1;
    HwQueuePacket = VidSchiAllocateHwQueuePacket(a1, a2);
    *(_DWORD *)HwQueuePacket = 895576406;
    v9 = (v27 & 0x40000) == 0;
    *(_QWORD *)(HwQueuePacket + 56) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(HwQueuePacket + 52) = 2;
    *(_DWORD *)(HwQueuePacket + 64) = 0;
    if ( v9 )
    {
      if ( ((*((_DWORD *)v3 + 30) - 3) & 0xFFFFFFFD) != 0 )
      {
        *(_DWORD *)(HwQueuePacket + 48) = 0;
        VidSchiEnsureRootPageTableUpdated((void *)v2);
      }
      else
      {
        *(_DWORD *)(HwQueuePacket + 48) = 3;
        v12 = *((unsigned int *)v3 + 29);
        if ( (_DWORD)v12 != -1 )
        {
          v13 = *((_DWORD *)v3 + 142);
          v14 = ((unsigned __int16)v13 | (unsigned __int16)(v13 >> 10)) & 0x3FF;
          if ( (((unsigned __int16)v13 | (unsigned __int16)(v13 >> 10)) & 0x3FF) != 0 )
          {
            v15 = *(_QWORD *)(v6 + 8 * v12 + 3104);
            while ( 1 )
            {
              v9 = !_BitScanForward((unsigned int *)&v16, v14);
              v17 = -1;
              if ( !v9 )
                v17 = v16;
              v18 = v17;
              v19 = 216LL * (unsigned int)v17;
              v20 = *(int *)(v19 + v15 + 172);
              if ( (int)v20 <= -1 )
              {
                v21 = 0;
              }
              else
              {
                v19 = 152 * v20;
                v21 = *(_DWORD *)(152 * v20 + *(_QWORD *)(v6 + 3232) + 112);
              }
              if ( v21 == 2 )
                break;
              v14 = ~(1 << v18) & (unsigned int)v14;
              if ( !(_DWORD)v14 )
                goto LABEL_7;
            }
            v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v14);
            v22[5] = v18;
            v22[3] = 281LL;
            v22[4] = 0x100000LL;
            v22[6] = *((unsigned int *)v3 + 29);
            v22[7] = v6;
            LOBYTE(v10) = WdLogEvent5_WdCriticalError(v22);
            __debugbreak();
            goto LABEL_25;
          }
        }
      }
    }
    else
    {
      *(_DWORD *)(HwQueuePacket + 48) = 7;
    }
LABEL_7:
    *(_QWORD *)(HwQueuePacket + 96) = a1;
    *(_QWORD *)(HwQueuePacket + 104) = KeGetCurrentThread();
    v10 = v27;
    *(_QWORD *)(HwQueuePacket + 72) = v27;
    *(_QWORD *)(HwQueuePacket + 144) = *((_QWORD *)v3 + 12);
    *(_QWORD *)(HwQueuePacket + 152) = *((_QWORD *)v3 + 13);
    *(_DWORD *)(HwQueuePacket + 160) = *((_DWORD *)v3 + 29);
    if ( (v10 & 4) != 0 )
    {
      *(_DWORD *)(HwQueuePacket + 64) ^= (*(_DWORD *)(HwQueuePacket + 64) ^ (*(_DWORD *)(v6 + 2448) >> 4)) & 4;
      if ( ((*((_DWORD *)v3 + 30) - 3) & 0xFFFFFFFD) == 0 && (v10 & 0xC00) != 0x400 )
      {
        v11 = *((unsigned int *)v3 + 29);
        *((_QWORD *)v3 + 16) = ++*(_QWORD *)(v5 + 8 * v11 + 248);
      }
LABEL_29:
      memmove((void *)(HwQueuePacket + 272), v3, *((unsigned int *)v3 + 135));
      if ( !*(_BYTE *)(v2 + 89) )
        VidSchiAcquirePrivateDataReference(
          (struct _VIDSCH_GLOBAL *)v6,
          (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)(HwQueuePacket + 840));
      if ( *((_QWORD *)v3 + 4) )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(HwQueuePacket + 304) + 12LL));
      v23 = *(void **)(HwQueuePacket + 360);
      if ( v23 )
        ObfReferenceObject(v23);
      v24 = *(_QWORD *)(HwQueuePacket + 280);
      if ( v24 && (*(_DWORD *)(HwQueuePacket + 272) & 0x8000000) != 0 && !*(_QWORD *)(HwQueuePacket + 312) )
        *(_QWORD *)(HwQueuePacket + 312) = *(_QWORD *)(v24 + 96);
      VidSchiSubmitCommandPacketToHwQueue((struct _VIDSCH_QUEUE_PACKET *)HwQueuePacket);
      v25 = *((unsigned int *)v3 + 29);
      if ( (unsigned int)v25 < *(_DWORD *)(v6 + 40) && (*(_BYTE *)v3 & 5) == 5 )
        _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v6 + 8 * v25 + 3104) + 66432LL), 2, 1);
      return 0LL;
    }
LABEL_25:
    if ( (v10 & 0x20) != 0 )
    {
      *(_DWORD *)(HwQueuePacket + 64) ^= (*(_DWORD *)(HwQueuePacket + 64) ^ (*(_DWORD *)(v6 + 2448) >> 5)) & 4;
    }
    else if ( *(_DWORD *)(HwQueuePacket + 48) != 7 )
    {
      *(_DWORD *)(HwQueuePacket + 64) |= 4u;
    }
    goto LABEL_29;
  }
  return result;
}
