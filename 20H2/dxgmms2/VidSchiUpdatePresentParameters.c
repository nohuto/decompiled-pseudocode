/*
 * XREFs of VidSchiUpdatePresentParameters @ 0x1C0002630
 * Callers:
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x1C0004590 (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C00040E0 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0017740 (__security_check_cookie.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C0031CF8 (VidSchiTryEnterIndependentFlip.c)
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C003586C (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 */

__int64 __fastcall VidSchiUpdatePresentParameters(struct _VIDSCH_GLOBAL *a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v5; // r13
  char v6; // di
  KSPIN_LOCK *v7; // r12
  __int128 v8; // xmm1
  bool v9; // r14
  __int64 v10; // r14
  unsigned int v11; // ecx
  __int64 result; // rax
  bool v13; // zf
  unsigned int v14; // ecx
  int v15; // r8d
  unsigned int v16; // edx
  unsigned int v17; // edi
  _QWORD *v18; // r15
  __int64 v19; // rax
  int v20; // ebx
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int64 v23; // rcx
  __int64 v24; // rdx
  _QWORD *v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // r8d
  __int64 v28; // rdx
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // rcx
  unsigned int v34; // r8d
  bool v35; // [rsp+20h] [rbp-B9h]
  _QWORD v36[2]; // [rsp+28h] [rbp-B1h] BYREF
  char v37; // [rsp+38h] [rbp-A1h]
  unsigned int v38; // [rsp+40h] [rbp-99h]
  _QWORD v39[2]; // [rsp+48h] [rbp-91h] BYREF
  unsigned int v40; // [rsp+58h] [rbp-81h]
  unsigned int v41; // [rsp+5Ch] [rbp-7Dh]
  int v42; // [rsp+60h] [rbp-79h]
  unsigned int v43; // [rsp+64h] [rbp-75h]
  unsigned int v44; // [rsp+68h] [rbp-71h]
  __int128 v45; // [rsp+70h] [rbp-69h]
  KSPIN_LOCK *v46; // [rsp+80h] [rbp-59h]
  struct _KLOCK_QUEUE_HANDLE v47; // [rsp+88h] [rbp-51h] BYREF
  __int16 v48; // [rsp+A0h] [rbp-39h]
  __int128 v49; // [rsp+A8h] [rbp-31h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B8h] [rbp-21h] BYREF
  __int128 Source2; // [rsp+D0h] [rbp-9h] BYREF
  __int128 v52; // [rsp+E0h] [rbp+7h] BYREF

  v38 = *(_DWORD *)(a2 + 116);
  v3 = v38;
  v5 = *((_QWORD *)a1 + v38 + 388);
  *(_QWORD *)&v45 = (char *)a1 + 8 * v38 + 3104;
  v35 = (*(_DWORD *)a2 & 0x800000) != 0;
  v6 = *(int *)a2 < 0;
  v7 = (KSPIN_LOCK *)((char *)a1 + 1712);
  v8 = *(_OWORD *)(a2 + 444);
  Source2 = *(_OWORD *)(a2 + 428);
  v52 = v8;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 214, &LockHandle);
  v9 = v6 != *(_BYTE *)(v5 + 2304);
  *(_BYTE *)(v5 + 2304) = v6;
  if ( !v6
    || RtlCompareMemory((const void *)(v5 + 2308), &Source2, 0x10uLL) == 16
    && RtlCompareMemory((const void *)(v5 + 2324), &v52, 0x10uLL) == 16 )
  {
    if ( !v9 )
      goto LABEL_3;
  }
  else
  {
    *(_OWORD *)(v5 + 2308) = Source2;
    *(_OWORD *)(v5 + 2324) = v52;
  }
  v27 = *((_DWORD *)a1 + 36);
  v28 = 0LL;
  if ( v27 )
  {
    v29 = *((_QWORD *)a1 + v3 + 388);
    do
    {
      v30 = *(int *)(216LL * (unsigned int)v28 + v29 + 172);
      if ( (int)v30 > -1 )
      {
        v31 = *(unsigned int *)(152 * v30 + *((_QWORD *)a1 + 404) + 112);
        if ( (_DWORD)v31 == 2 )
        {
          v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v31, v28);
          v32[3] = 281LL;
          v32[4] = 0x100000LL;
          v32[5] = 0LL;
          v32[6] = v3;
          v32[7] = a1;
          WdLogEvent5_WdCriticalError(v32);
          __debugbreak();
        }
      }
      v28 = (unsigned int)(v28 + 1);
    }
    while ( (unsigned int)v28 < v27 );
  }
LABEL_3:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v10 = a2 + 576;
  v39[0] = a1;
  v11 = *(_DWORD *)(a2 + 576);
  result = v11 & 0x3FF;
  v39[1] = a2 + 576;
  v13 = *((_BYTE *)a1 + 148) == 0;
  v40 = v11 & 0x3FF;
  if ( v13 )
    v14 = 0;
  else
    v14 = (v11 >> 10) & 0x3FF;
  v15 = 0;
  v41 = v14;
  v13 = !_BitScanForward(&v16, result);
  v42 = 0;
  if ( v13 )
    LOBYTE(v16) = -1;
  v17 = (char)v16;
  v13 = !_BitScanForward(&v16, v14);
  v43 = v17;
  if ( v13 )
    LOBYTE(v16) = -1;
  v18 = (_QWORD *)v45;
  v16 = (char)v16;
  v44 = (char)v16;
  while ( (_DWORD)result || v14 )
  {
    if ( v17 < v16 )
    {
      v19 = v15 * ((8 * *(_DWORD *)(v10 + 8) + 199) & 0xFFFFFFF8);
      v20 = *(_DWORD *)(v19 + v10 + 192);
      v45 = *(_OWORD *)(v19 + v10 + 160);
      v21 = *(_OWORD *)(v19 + v10 + 176);
      v46 = v7;
      v48 = 0;
      v49 = v21;
      KeAcquireInStackQueuedSpinLock(v7, &v47);
      LOBYTE(v48) = 1;
      v22 = v49;
      v36[1] = v36;
      v36[0] = v36;
      v37 = 0;
      v23 = 216LL * v17;
      *(_OWORD *)(v23 + v5 + 136) = v45;
      *(_OWORD *)(v23 + v5 + 152) = v22;
      *(_DWORD *)(v23 + v5 + 168) = v20;
      v24 = *(int *)(v23 + *v18 + 172);
      if ( (int)v24 > -1 )
      {
        v33 = *((_QWORD *)a1 + 404) + 152 * v24;
        if ( v33 )
        {
          if ( *(_DWORD *)(v33 + 112) == 1 )
          {
            v34 = v38;
            *(_BYTE *)(v33 + 108) = v35;
            *(_BYTE *)(v33 + 96) = 1;
            VidSchiTryEnterIndependentFlip((struct HwQueueStagingList *)v36, a1, v34, v17);
          }
        }
      }
      if ( !v37 )
      {
        while ( 1 )
        {
          v25 = (_QWORD *)v36[0];
          if ( *(_QWORD **)(v36[0] + 8LL) != v36
            || (v26 = *(_QWORD *)v36[0], *(_QWORD *)(*(_QWORD *)v36[0] + 8LL) != v36[0]) )
          {
            __fastfail(3u);
          }
          v36[0] = *(_QWORD *)v36[0];
          *(_QWORD *)(v26 + 8) = v36;
          if ( v25 == v36 )
            break;
          *v25 = 0LL;
          v25[1] = 0LL;
          HwQueueStagingList::ProcessHwQueue((HwQueueStagingList *)v36, (struct VIDSCH_HW_QUEUE *)(v25 - 22));
        }
        v37 = 1;
      }
      if ( (_BYTE)v48 )
      {
        if ( HIBYTE(v48) )
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v47);
        else
          KeReleaseInStackQueuedSpinLock(&v47);
      }
    }
    VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(v39);
    v16 = v44;
    v15 = v42;
    v14 = v41;
    result = v40;
    v17 = v43;
  }
  return result;
}
