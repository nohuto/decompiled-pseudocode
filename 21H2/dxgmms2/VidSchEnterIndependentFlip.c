/*
 * XREFs of VidSchEnterIndependentFlip @ 0x1C0019440
 * Callers:
 *     <none>
 * Callees:
 *     ??0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z @ 0x1C0019AE0 (--0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     McTemplateK0txqqqtxtx_EtwWriteTransfer @ 0x1C003C55C (McTemplateK0txqqqtxtx_EtwWriteTransfer.c)
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
  __int64 v8; // r12
  _QWORD *result; // rax
  int v12; // r15d
  unsigned int v13; // r11d
  unsigned int v14; // r10d
  __int64 v15; // rbx
  unsigned int v16; // r8d
  unsigned int v17; // r9d
  __int64 v18; // r14
  unsigned int v19; // r13d
  int v20; // r8d
  _QWORD *v21; // r9
  _QWORD *v22; // rdx
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // r12
  char v26; // r15
  __int64 v27; // rsi
  unsigned int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  bool v33; // zf
  int v34; // edx
  int v35; // r8d
  _QWORD *v36; // r9
  __int64 v37; // r14
  unsigned int v38; // edi
  char v39; // si
  unsigned int v40; // ebx
  __int64 v41; // rax
  unsigned int v42; // [rsp+68h] [rbp-49h] BYREF
  unsigned int v43; // [rsp+6Ch] [rbp-45h]
  unsigned int v44; // [rsp+70h] [rbp-41h]
  __int64 v45; // [rsp+78h] [rbp-39h]
  unsigned int v46; // [rsp+80h] [rbp-31h] BYREF
  int v47; // [rsp+84h] [rbp-2Dh]
  unsigned int v48; // [rsp+88h] [rbp-29h]
  __int64 v49; // [rsp+90h] [rbp-21h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-19h] BYREF
  struct _LUID DestinationLuid; // [rsp+F8h] [rbp+47h] BYREF
  struct _LUID *v52; // [rsp+108h] [rbp+57h]
  __int64 v53; // [rsp+110h] [rbp+5Fh]

  v53 = a4;
  v52 = a3;
  *a7 = 0;
  result = a8;
  *a8 = 0LL;
  if ( !*(_BYTE *)(a1 + 47) )
    return result;
  DestinationLuid = 0LL;
  RtlCopyLuid(&DestinationLuid, a3);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1728), &LockHandle);
  v12 = 0;
  LOBYTE(v8) = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0LL;
  v16 = a2;
  v17 = 0;
  for ( LODWORD(v18) = 0; v16; v16 >>= 1 )
  {
    if ( (v16 & 1) != 0 )
      break;
    ++v17;
  }
  while ( v16 )
  {
    v41 = *(int *)(280LL * *(unsigned int *)(a5 + 4LL * (unsigned int)v18) + *(_QWORD *)(a1 + 8LL * v17 + 3200) + 180);
    if ( (int)v41 > -1 )
    {
      v15 = *(_QWORD *)(a1 + 3328) + 160 * v41;
      if ( v15 )
      {
        LOBYTE(v8) = 1;
        ++v13;
        goto LABEL_41;
      }
    }
    else
    {
      v15 = 0LL;
    }
    ++v14;
LABEL_41:
    while ( 1 )
    {
      v16 >>= 1;
      if ( !v16 || (v16 & 1) != 0 )
        break;
      ++v17;
    }
    LODWORD(v18) = v18 + 1;
  }
  v19 = 0;
  if ( v14 && v13 )
  {
    WdLogSingleEntry5(0LL, 281LL, 0x8000LL, v13, v14, a1);
    __debugbreak();
    goto LABEL_51;
  }
  if ( !(_BYTE)v8 )
  {
    v20 = *(_DWORD *)(a1 + 3496);
    if ( v20 > 0 )
    {
      v21 = *(_QWORD **)(a1 + 3328);
      v22 = v21;
      while ( *v22 )
      {
LABEL_51:
        ++v12;
        v22 += 20;
        if ( v12 >= v20 )
          goto LABEL_13;
      }
      v15 = (__int64)&v21[20 * v12];
      if ( v12 > *(_DWORD *)(a1 + 3512) )
        *(_DWORD *)(a1 + 3512) = v12;
    }
  }
LABEL_13:
  if ( !v15 )
  {
    WdLogSingleEntry5(0LL, 281LL, 0x2000LL, *(unsigned int *)(a1 + 3496), *(int *)(a1 + 3512), a1);
    __debugbreak();
    goto LABEL_54;
  }
  if ( (_BYTE)v8 )
  {
    v25 = v53;
  }
  else
  {
    *(_DWORD *)(v15 + 16) = a2;
    memset((void *)(v15 + 20), 0, 0x40uLL);
    v18 = 0LL;
    v8 = 0LL;
    if ( a2 )
    {
      while ( (a2 & 1) == 0 )
      {
LABEL_54:
        v18 = (unsigned int)(v18 + 1);
        a2 >>= 1;
        if ( !a2 )
          break;
      }
      while ( a2 )
      {
        v23 = a5;
        v24 = v19++;
        *(_DWORD *)(v15 + 4 * v24 + 20) = *(_DWORD *)(a5 + 4 * v8);
        *(_DWORD *)(*(_QWORD *)(a1 + 8 * v18 + 3200) + 280LL * *(unsigned int *)(v23 + 4 * v8) + 180) = v12;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry3)(
          8LL,
          *v52,
          v53,
          *(unsigned int *)(v23 + 4 * v8));
        while ( 1 )
        {
          a2 >>= 1;
          if ( !a2 || (a2 & 1) != 0 )
            break;
          v18 = (unsigned int)(v18 + 1);
        }
        v8 = (unsigned int)(v8 + 1);
      }
    }
    v25 = v53;
    *(_QWORD *)(v15 + 112) = 1LL;
    *(struct _LUID *)v15 = DestinationLuid;
    *(_QWORD *)(v15 + 8) = v25;
    *(_WORD *)(v15 + 96) = 0;
    *(_BYTE *)(v15 + 98) = 0;
  }
  v26 = a6;
  *(_DWORD *)(v15 + 100) = a6;
  v27 = *(_QWORD *)(a1 + 3504);
  *(_QWORD *)(v15 + 88) = v27;
  VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
    (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v42,
    (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v15);
  v28 = v42;
  v29 = v44;
  while ( v28 )
  {
    v30 = 280LL * *(unsigned int *)(v45 + 4 * v29) + *(_QWORD *)(a1 + 8LL * v43 + 3200) + 144LL;
    v31 = *(_QWORD *)(v15 + 88);
    v32 = 5LL * *(unsigned int *)(v30 + 216);
    *(_QWORD *)(v30 + 8 * v32 + 88) = MEMORY[0xFFFFF78000000320];
    *(_WORD *)(v30 + 8 * v32 + 56) = 257;
    *(struct _LUID *)(v30 + 8 * v32 + 60) = DestinationLuid;
    *(_QWORD *)(v30 + 8 * v32 + 72) = v25;
    *(_QWORD *)(v30 + 8 * v32 + 80) = v31;
    *(_DWORD *)(v30 + 216) = ((unsigned __int8)*(_DWORD *)(v30 + 216) + 1) & 3;
    v33 = v42 >> 1 == 0;
    v28 = v42 >> 1;
    v42 >>= 1;
    if ( !v33 )
    {
      do
      {
        if ( (v28 & 1) != 0 )
          break;
        ++v43;
        v28 >>= 1;
      }
      while ( v28 );
      v42 = v28;
    }
    v29 = ++v44;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v33 = bTracingEnabled == 0;
  *a8 = v27;
  if ( !v33 )
  {
    VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
      (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v46,
      (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v15);
    v37 = v49;
    v38 = v48;
    v39 = v47;
    v40 = v46;
    while ( v40 )
    {
      if ( (byte_1C006E941 & 1) != 0 )
      {
        McTemplateK0txqqqtxtx_EtwWriteTransfer(
          v38,
          v34,
          v35,
          1,
          DestinationLuid.LowPart,
          v39,
          *(_DWORD *)(v37 + 4LL * v38),
          v26,
          0,
          v25,
          1,
          *v36);
        v36 = a8;
      }
      while ( 1 )
      {
        v40 >>= 1;
        if ( !v40 || (v40 & 1) != 0 )
          break;
        ++v39;
      }
      ++v38;
    }
  }
  result = a7;
  *a7 = 1;
  return result;
}
