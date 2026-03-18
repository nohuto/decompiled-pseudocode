/*
 * XREFs of VidSchEnterIndependentFlip @ 0x1C0034410
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0016DC0 (memset.c)
 *     ??0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z @ 0x1C00329D8 (--0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z.c)
 *     McTemplateK0txqqqtxtx_EtwWriteTransfer @ 0x1C0033990 (McTemplateK0txqqqtxtx_EtwWriteTransfer.c)
 */

_QWORD *__fastcall VidSchEnterIndependentFlip(
        __int64 a1,
        unsigned int a2,
        struct _LUID *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _DWORD *a7,
        _QWORD *a8)
{
  _QWORD *result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r12d
  char v14; // r11
  unsigned int v15; // r15d
  unsigned int v16; // ebx
  __int64 v17; // rdi
  unsigned int v18; // r8d
  unsigned int v19; // r9d
  unsigned int i; // r10d
  __int64 v21; // rax
  unsigned int v22; // eax
  unsigned int v23; // r13d
  _QWORD *v24; // rax
  int v25; // r8d
  _QWORD *v26; // rax
  unsigned int v27; // edx
  unsigned int v28; // r15d
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // r12
  __int64 v32; // rbx
  int v33; // r9d
  unsigned int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  bool v39; // zf
  __int64 v40; // rdx
  __int64 v41; // r8
  _QWORD *v42; // r9
  __int64 v43; // r14
  unsigned int v44; // edi
  char v45; // si
  unsigned int v46; // ebx
  struct _LUID DestinationLuid; // [rsp+68h] [rbp-49h] BYREF
  unsigned int v48; // [rsp+70h] [rbp-41h] BYREF
  unsigned int v49; // [rsp+74h] [rbp-3Dh]
  unsigned int v50; // [rsp+78h] [rbp-39h]
  __int64 v51; // [rsp+80h] [rbp-31h]
  unsigned int v52; // [rsp+88h] [rbp-29h] BYREF
  int v53; // [rsp+8Ch] [rbp-25h]
  unsigned int v54; // [rsp+90h] [rbp-21h]
  __int64 v55; // [rsp+98h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp-11h] BYREF
  unsigned int v57; // [rsp+F8h] [rbp+47h]

  *a7 = 0;
  result = a8;
  *a8 = 0LL;
  if ( *(_BYTE *)(a1 + 47) )
  {
    DestinationLuid = 0LL;
    RtlCopyLuid(&DestinationLuid, a3);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1712), &LockHandle);
    v12 = 1LL;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0LL;
    v18 = a2;
    v19 = 0;
    for ( i = 0; v18; v18 >>= 1 )
    {
      if ( (v18 & 1) != 0 )
        break;
      ++v19;
    }
    while ( v18 )
    {
      v11 = 216LL * *(unsigned int *)(a5 + 4LL * i);
      v21 = *(int *)(v11 + *(_QWORD *)(a1 + 8LL * v19 + 3104) + 172);
      if ( (int)v21 <= -1 )
        v17 = 0LL;
      else
        v17 = *(_QWORD *)(a1 + 3232) + 152 * v21;
      v12 = 1LL;
      if ( v17 )
        v14 = 1;
      else
        ++v16;
      v22 = v15 + 1;
      if ( !v17 )
        v22 = v15;
      v15 = v22;
      while ( 1 )
      {
        v18 >>= 1;
        if ( !v18 || (v18 & 1) != 0 )
          break;
        ++v19;
      }
      ++i;
    }
    v23 = 0;
    if ( v16 && v15 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(1LL, v11);
      v24[5] = v15;
      v24[6] = v16;
      v24[3] = 281LL;
      v24[4] = 0x8000LL;
      v24[7] = a1;
      WdLogEvent5_WdCriticalError(v24);
      __debugbreak();
    }
    if ( !v14 )
    {
      v25 = *(_DWORD *)(a1 + 3392);
      if ( v25 > 0 )
      {
        v11 = *(_QWORD *)(a1 + 3232);
        while ( *(_QWORD *)v11 )
        {
          ++v13;
          v11 += 152LL;
          if ( v13 >= v25 )
            goto LABEL_30;
        }
        v17 = *(_QWORD *)(a1 + 3232) + 152LL * v13;
        if ( v13 > *(_DWORD *)(a1 + 3408) )
          *(_DWORD *)(a1 + 3408) = v13;
      }
    }
LABEL_30:
    if ( !v17 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v11);
      v26[3] = 281LL;
      v26[4] = 0x2000LL;
      v26[5] = *(unsigned int *)(a1 + 3392);
      v26[6] = *(int *)(a1 + 3408);
      v26[7] = a1;
      WdLogEvent5_WdCriticalError(v26);
      __debugbreak();
    }
    if ( v14 )
    {
      v31 = a4;
    }
    else
    {
      *(_DWORD *)(v17 + 16) = a2;
      memset((void *)(v17 + 20), 0, 0x40uLL);
      v27 = 0;
      v28 = 0;
      if ( a2 )
      {
        do
        {
          if ( (a2 & 1) != 0 )
            break;
          ++v28;
          a2 >>= 1;
        }
        while ( a2 );
        while ( a2 )
        {
          v57 = v27 + 1;
          *(_DWORD *)(v17 + 4LL * v27 + 20) = *(_DWORD *)(a5 + 4LL * v23);
          v29 = 216LL * *(unsigned int *)(a5 + 4LL * v23);
          *(_DWORD *)(*(_QWORD *)(a1 + 8LL * v28 + 3104) + v29 + 172) = v13;
          v30 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v29, v28);
          v30[3] = *a3;
          v30[4] = a4;
          v30[5] = *(unsigned int *)(a5 + 4LL * v23);
          WdLogEvent5_WdPresentTokenEvent(v30);
          while ( 1 )
          {
            a2 >>= 1;
            if ( !a2 || (a2 & 1) != 0 )
              break;
            ++v28;
          }
          v27 = v57;
          ++v23;
        }
      }
      v31 = a4;
      *(_QWORD *)(v17 + 112) = 1LL;
      *(struct _LUID *)v17 = DestinationLuid;
      *(_QWORD *)(v17 + 8) = a4;
      *(_WORD *)(v17 + 96) = 0;
      *(_BYTE *)(v17 + 98) = 0;
    }
    *(_DWORD *)(v17 + 100) = a6;
    v32 = *(_QWORD *)(a1 + 3400);
    *(_QWORD *)(v17 + 88) = v32;
    VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
      (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v48,
      (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v17);
    v34 = v48;
    v35 = v50;
    while ( v34 )
    {
      v36 = 216LL * *(unsigned int *)(v51 + 4 * v35) + *(_QWORD *)(a1 + 8LL * v49 + 3104) + 136LL;
      v37 = *(_QWORD *)(v17 + 88);
      v38 = 5LL * *(unsigned int *)(v36 + 208);
      *(_QWORD *)(v36 + 8 * v38 + 80) = MEMORY[0xFFFFF78000000320];
      *(_WORD *)(v36 + 8 * v38 + 48) = 257;
      *(struct _LUID *)(v36 + 8 * v38 + 52) = DestinationLuid;
      *(_QWORD *)(v36 + 8 * v38 + 64) = v31;
      *(_QWORD *)(v36 + 8 * v38 + 72) = v37;
      *(_DWORD *)(v36 + 208) = ((_BYTE)v33 + (unsigned __int8)*(_DWORD *)(v36 + 208)) & 3;
      v39 = v48 >> 1 == 0;
      v34 = v48 >> 1;
      v48 >>= 1;
      if ( !v39 )
      {
        do
        {
          if ( ((unsigned __int8)v34 & (unsigned __int8)v33) != 0 )
            break;
          v49 += v33;
          v34 >>= 1;
        }
        while ( v34 );
        v48 = v34;
      }
      v35 = v33 + v50;
      v50 += v33;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v39 = bTracingEnabled == 0;
    *a8 = v32;
    if ( !v39 )
    {
      VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
        (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v52,
        (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v17);
      v43 = v55;
      v44 = v54;
      v45 = v53;
      v46 = v52;
      while ( v46 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          McTemplateK0txqqqtxtx_EtwWriteTransfer(
            v44,
            v40,
            v41,
            1,
            DestinationLuid.LowPart,
            v45,
            *(_DWORD *)(v43 + 4LL * v44),
            a6,
            0,
            v31,
            1,
            *v42);
          v42 = a8;
        }
        while ( 1 )
        {
          v46 >>= 1;
          if ( !v46 || (v46 & 1) != 0 )
            break;
          ++v45;
        }
        ++v44;
      }
    }
    result = a7;
    *a7 = 1;
  }
  return result;
}
