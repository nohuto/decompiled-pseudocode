/*
 * XREFs of VidSchSubmitCommandToHwQueue @ 0x1C0041CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x1C0003B04 (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 *     ?VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C0005A40 (-VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     ?VidSchiAcquireFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C0005A90 (-VidSchiAcquireFlipFencesReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@.c)
 *     memmove @ 0x1C001D980 (memmove.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001EC80 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C001F79E (VidSchiSubmitCommandPacketToHwQueue.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00B8D3A (VidSchiAllocateHwQueuePacket.c)
 *     VidSchiEnsureRootPageTableUpdated @ 0x1C00B8EE8 (VidSchiEnsureRootPageTableUpdated.c)
 *     VidSchiEnsureHwFlipQueueLog @ 0x1C00F60EC (VidSchiEnsureHwFlipQueueLog.c)
 */

__int64 __fastcall VidSchSubmitCommandToHwQueue(struct VIDSCH_HW_QUEUE *a1, struct VIDSCH_SUBMIT_DATA2 *a2)
{
  __int64 v2; // r13
  __int64 v3; // r12
  struct VIDSCH_SUBMIT_DATA2 *v4; // rdi
  __int64 v6; // rbp
  __int64 v7; // rsi
  int v8; // eax
  __int64 result; // rax
  __int64 v10; // r8
  __int64 HwQueuePacket; // rbx
  bool v12; // zf
  unsigned int v13; // edx
  unsigned int v14; // eax
  unsigned int v15; // r14d
  int v16; // eax
  char v17; // cl
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // rcx
  __int16 v21; // ax
  __int64 v22; // rax
  void *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // [rsp+80h] [rbp+18h] BYREF
  __int64 v30; // [rsp+88h] [rbp+20h]

  v2 = *((_QWORD *)a1 + 5);
  v3 = 0LL;
  v4 = a2;
  v30 = v2;
  v6 = *(_QWORD *)(v2 + 8);
  v7 = *(_QWORD *)(v6 + 32);
  if ( *(_BYTE *)(v6 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 200), 0, 0) )
  {
    WdLogSingleEntry2(3LL, v6, -1071775232LL);
    return 3223192064LL;
  }
  v29 = *(_QWORD *)a2;
  v8 = v29;
  if ( (v29 & 0x20) != 0 )
  {
    result = VidSchValidatePresentFlags(a2, (struct _VIDSCH_DEVICE *)v6, (struct _VIDSCH_SUBMIT_FLAGS *)&v29);
    if ( (int)result < 0 )
      return result;
    v8 = v29;
  }
  if ( (v8 & 0x800004) == 4 && *(_BYTE *)(v7 + 59) )
  {
    v10 = *((_BYTE *)v4 + 356) != 0 ? 0x68 : 0;
    a2 = (struct VIDSCH_SUBMIT_DATA2 *)(*(_DWORD *)((_BYTE *)v4 + v10 + 496) & 0xFFF003FF | ((((unsigned __int16)(1 << *(_DWORD *)(v7 + 152))
                                                                                             - 1) & 0x3FE) << 10));
    *(_DWORD *)((char *)v4 + v10 + 496) = (_DWORD)a2;
  }
  LOBYTE(a2) = 1;
  HwQueuePacket = VidSchiAllocateHwQueuePacket(a1, a2);
  *(_DWORD *)HwQueuePacket = 895576406;
  v12 = (v29 & 0x40000) == 0;
  *(_QWORD *)(HwQueuePacket + 56) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(HwQueuePacket + 52) = 2;
  *(_DWORD *)(HwQueuePacket + 64) = 0;
  if ( v12 )
  {
    if ( ((*((_DWORD *)v4 + 30) - 3) & 0xFFFFFFFD) != 0 )
    {
      *(_DWORD *)(HwQueuePacket + 48) = 0;
      VidSchiEnsureRootPageTableUpdated((void *)v2);
    }
    else
    {
      *(_DWORD *)(HwQueuePacket + 48) = 3;
      v13 = *((_DWORD *)v4 + 29);
      if ( v13 != -1 )
      {
        v14 = *((_DWORD *)v4 + 150);
        v15 = ((unsigned __int16)v14 | (unsigned __int16)(v14 >> 10)) & 0x3FF;
        if ( (((unsigned __int16)v14 | (unsigned __int16)(v14 >> 10)) & 0x3FF) != 0 )
        {
          while ( 1 )
          {
            v12 = !_BitScanForward((unsigned int *)&v16, v15);
            v17 = -1;
            if ( !v12 )
              v17 = v16;
            v3 = (unsigned int)v17;
            if ( *(_BYTE *)(v7 + 59) )
            {
              v18 = VidSchiEnsureHwFlipQueueLog((struct _VIDSCH_GLOBAL *)v7, v13, v3);
              v2 = (unsigned int)v18;
              if ( v18 < 0 )
              {
                VidSchiFreeQueuePacket(a1, (struct _VIDSCH_QUEUE_PACKET *)HwQueuePacket);
                return (unsigned int)v2;
              }
            }
            v19 = *((unsigned int *)v4 + 29);
            v20 = *(int *)(*(_QWORD *)(v7 + 8 * v19 + 3200) + 280LL * (unsigned int)v3 + 180);
            if ( (int)v20 > -1 && *(_DWORD *)(160 * v20 + *(_QWORD *)(v7 + 3328) + 112) == 2 )
              break;
            v13 = *((_DWORD *)v4 + 29);
            v15 &= ~(1 << v3);
            if ( !v15 )
            {
              v2 = v30;
              v3 = 0LL;
              goto LABEL_23;
            }
          }
          LOBYTE(v21) = WdLogSingleEntry5(0LL, 281LL, 0x100000LL, (unsigned int)v3, v19, v7);
          __debugbreak();
          goto LABEL_29;
        }
      }
    }
  }
  else
  {
    *(_DWORD *)(HwQueuePacket + 48) = 7;
  }
LABEL_23:
  *(_QWORD *)(HwQueuePacket + 96) = a1;
  *(_QWORD *)(HwQueuePacket + 104) = KeGetCurrentThread();
  v21 = v29;
  *(_QWORD *)(HwQueuePacket + 72) = v29;
  *(_QWORD *)(HwQueuePacket + 144) = *((_QWORD *)v4 + 12);
  *(_QWORD *)(HwQueuePacket + 152) = *((_QWORD *)v4 + 13);
  *(_DWORD *)(HwQueuePacket + 160) = *((_DWORD *)v4 + 29);
  if ( (v21 & 4) == 0 )
  {
LABEL_29:
    if ( (v21 & 0x20) != 0 )
    {
      *(_DWORD *)(HwQueuePacket + 64) ^= (*(_DWORD *)(HwQueuePacket + 64) ^ (*(_DWORD *)(v7 + 2536) >> 5)) & 4;
    }
    else if ( *(_DWORD *)(HwQueuePacket + 48) != 7 )
    {
      *(_DWORD *)(HwQueuePacket + 64) |= 4u;
    }
    goto LABEL_33;
  }
  *(_DWORD *)(HwQueuePacket + 64) ^= (*(_DWORD *)(HwQueuePacket + 64) ^ (*(_DWORD *)(v7 + 2536) >> 4)) & 4;
  if ( ((*((_DWORD *)v4 + 30) - 3) & 0xFFFFFFFD) == 0 && (v21 & 0xC00) != 0x400 )
  {
    v22 = *((unsigned int *)v4 + 29);
    *((_QWORD *)v4 + 16) = ++*(_QWORD *)(v6 + 8 * v22 + 248);
  }
LABEL_33:
  memmove((void *)(HwQueuePacket + 272), v4, *((unsigned int *)v4 + 139));
  if ( *(_BYTE *)(v2 + 89) == (_BYTE)v3 )
    VidSchiAcquirePrivateDataReference(
      (struct _VIDSCH_GLOBAL *)v7,
      (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)(HwQueuePacket + 872));
  if ( *((_QWORD *)v4 + 4) != v3 )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(HwQueuePacket + 304) + 12LL));
  v23 = *(void **)(HwQueuePacket + 360);
  if ( v23 )
    ObfReferenceObject(v23);
  VidSchiAcquireFlipFencesReference(
    (struct _VIDSCH_GLOBAL *)v7,
    (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)(HwQueuePacket + 872));
  if ( *(_DWORD *)(HwQueuePacket + 472) > (unsigned int)v3 )
  {
    v24 = *(_QWORD *)(v7 + 16);
    if ( *(_BYTE *)(v24 + 4648) != (_BYTE)v3 && *(_DWORD *)(v24 + 288) == 1 )
    {
      v25 = *(unsigned int *)(HwQueuePacket + 160);
      if ( (unsigned int)v25 < *(_DWORD *)(v7 + 40) )
      {
        v26 = *(_QWORD *)(*(_QWORD *)(v7 + 8 * v25 + 3200) + 16LL);
        if ( v26 )
        {
          if ( v26 != v6 )
            *(_DWORD *)(HwQueuePacket + 64) |= 0x80u;
        }
      }
    }
  }
  v27 = *(_QWORD *)(HwQueuePacket + 280);
  if ( v27 && (*(_DWORD *)(HwQueuePacket + 272) & 0x8000000) != 0 && *(_QWORD *)(HwQueuePacket + 312) == v3 )
    *(_QWORD *)(HwQueuePacket + 312) = *(_QWORD *)(v27 + 96);
  VidSchiSubmitCommandPacketToHwQueue((struct _VIDSCH_QUEUE_PACKET *)HwQueuePacket);
  v28 = *((unsigned int *)v4 + 29);
  if ( (unsigned int)v28 < *(_DWORD *)(v7 + 40) && (*(_BYTE *)v4 & 5) == 5 )
    _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v7 + 8 * v28 + 3200) + 78576LL), 2, 1);
  return 0LL;
}
