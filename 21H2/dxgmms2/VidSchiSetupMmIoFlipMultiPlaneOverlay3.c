/*
 * XREFs of VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C0011E34
 * Callers:
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@K@Z @ 0x1C0011BF4 (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_V.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C001BBC0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     ?VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x1C0004B64 (-VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0011BAC (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidSchiSelectDriverPresentDuration@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@IIIAEAU_VIDSCH_CALL_EXECUTE_FLIP@@@Z @ 0x1C0012374 (-VidSchiSelectDriverPresentDuration@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_V.c)
 *     ?VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z @ 0x1C00125EC (-VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z.c)
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_N@Z @ 0x1C0045F30 (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_N@Z.c)
 */

unsigned __int64 __fastcall VidSchiSetupMmIoFlipMultiPlaneOverlay3(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_FLIP_QUEUE_ENTRY *a2,
        unsigned int a3,
        struct _VIDSCH_CALL_EXECUTE_FLIP *a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int64 a8)
{
  int v8; // r10d
  struct _VIDSCH_GLOBAL *v10; // r15
  unsigned int v11; // ebx
  struct _VIDSCH_CALL_EXECUTE_FLIP *v12; // rsi
  struct _VIDSCH_PRESENT_INFO *v13; // rdx
  int v14; // ecx
  unsigned int v15; // r12d
  unsigned int v16; // r14d
  unsigned __int64 v17; // r13
  __int64 v18; // rax
  bool v19; // zf
  int v20; // eax
  char v21; // cl
  unsigned int v22; // r11d
  unsigned int v23; // r8d
  int v24; // eax
  char v25; // cl
  __int64 v26; // r9
  unsigned int v27; // r10d
  unsigned __int64 result; // rax
  int v29; // eax
  __int64 v30; // rdx
  unsigned int *v31; // rbx
  __int64 v32; // rcx
  char v33; // r9
  int v34; // eax
  unsigned int v35; // edx
  unsigned int v36; // ecx
  unsigned int v37; // esi
  unsigned __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // edx
  int v41; // ecx
  int v42; // eax
  unsigned int v43; // ecx
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rcx
  struct _VIDSCH_PRESENT_INFO *v47; // r8
  char v48; // cl
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rcx
  char v52; // cl
  int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rcx
  unsigned __int64 v56; // r9
  unsigned __int64 v57; // rcx
  unsigned int v58; // r8d
  __int128 v59; // xmm1
  unsigned __int64 v60; // rcx
  unsigned __int64 CurrentVSyncPeriodQpc; // rax
  unsigned int v62; // [rsp+28h] [rbp-81h]
  unsigned int v63; // [rsp+48h] [rbp-61h]
  unsigned int v64; // [rsp+4Ch] [rbp-5Dh]
  unsigned int v65; // [rsp+50h] [rbp-59h]
  unsigned int v66[2]; // [rsp+58h] [rbp-51h]
  struct _VIDSCH_PRESENT_INFO *v67; // [rsp+70h] [rbp-39h]
  unsigned __int64 v68; // [rsp+78h] [rbp-31h]
  __int64 v69; // [rsp+80h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-21h] BYREF
  char v72; // [rsp+100h] [rbp+57h]

  v8 = *((_DWORD *)a4 + 3);
  v10 = a1;
  v11 = a3;
  v12 = a4;
  v13 = (struct _VIDSCH_PRESENT_INFO *)*((_QWORD *)a1 + a3 + 400);
  *(_QWORD *)a4 = a1;
  *((_DWORD *)a4 + 2) = a3;
  v67 = v13;
  *((_DWORD *)a4 + 3) ^= (*((_DWORD *)a2 + 284) ^ v8) & 1;
  v14 = *((_DWORD *)a4 + 3) ^ ((unsigned __int8)*((_DWORD *)a4 + 3) ^ (unsigned __int8)*((_DWORD *)a2 + 284)) & 2;
  *((_DWORD *)a4 + 3) = v14;
  *((_DWORD *)a4 + 3) = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)*((_DWORD *)a2 + 284)) & 4;
  if ( (*((_DWORD *)a2 + 284) & 0x10) != 0 )
  {
    v15 = **((_DWORD **)a2 + 147) & 0x3FF;
    v16 = (**((_DWORD **)a2 + 147) >> 10) & 0x3FF;
  }
  else
  {
    v15 = 1;
    v16 = ((1 << *((_DWORD *)v10 + 38)) - 1) & 0xFFFFFFFE;
  }
  VidSchiSelectDriverPresentDuration(v10, a2, v13, v15, v62, a3, a4);
  *((_DWORD *)v12 + 530) = -1073741823;
  *((_QWORD *)v12 + 4) = 0LL;
  v17 = 0LL;
  *((_QWORD *)v12 + 6) = 0LL;
  *((_DWORD *)v12 + 5) = 0;
  v18 = *((_QWORD *)a2 + 146);
  v68 = 0LL;
  if ( v18 )
  {
    v17 = v18 + 24;
    v68 = v18 + 24 + 16LL * *(unsigned int *)(v18 + 16) - 16;
  }
  v19 = !_BitScanForward((unsigned int *)&v20, v15);
  v72 = 0;
  v21 = -1;
  if ( !v19 )
    v21 = v20;
  v63 = 0;
  v22 = v21;
  v23 = 0;
  v19 = !_BitScanForward((unsigned int *)&v24, v16);
  v25 = -1;
  v64 = v22;
  v26 = a6;
  if ( !v19 )
    v25 = v24;
  v27 = v25;
  v65 = v25;
  while ( v15 || v16 )
  {
    v30 = *((_QWORD *)a2 + 147);
    v31 = (unsigned int *)(v23 * ((8 * *(_DWORD *)(v30 + 8) + 231) & 0xFFFFFFF8) + v30 + 16);
    v32 = *(_QWORD *)(v23 * ((8 * *(_DWORD *)(v30 + 8) + 231) & 0xFFFFFFF8) + v30 + 200);
    v69 = v32;
    if ( v32 )
    {
      v31[10] = *(_DWORD *)(v32 + 8);
      *((_QWORD *)v31 + 6) = v32 + 16;
    }
    v33 = 1;
    if ( v22 >= v27 )
    {
      v47 = v67;
      if ( (*((unsigned __int16 *)v67 + 22024) & (1 << v27)) != 0 )
      {
        *v31 = v27;
        v31[4] = 0;
        *((_QWORD *)v31 + 4) = 0LL;
        *((_QWORD *)v31 + 3) = 0LL;
        v31[10] = 0;
        *((_QWORD *)v31 + 6) = 0LL;
      }
      else
      {
        v33 = 0;
        *((_QWORD *)v31 + 1) = 0LL;
      }
      v52 = -1;
      v16 &= ~(1 << v27);
      v19 = !_BitScanForward((unsigned int *)&v53, v16);
      if ( !v19 )
        v52 = v53;
      v65 = v52;
      if ( !v33 )
        goto LABEL_48;
    }
    else
    {
      if ( a5 )
      {
        v31[4] = v31[4] & 0xFFFFFFFD | (2 * a5);
      }
      else
      {
        v34 = *((_DWORD *)a2 + 284);
        if ( *((_BYTE *)v10 + 6608) && (v34 & 0x80u) != 0 )
        {
          v31[4] |= 2u;
        }
        else if ( (v34 & 0x200) != 0 )
        {
          v31[4] |= 0x20u;
        }
      }
      v35 = v31[4] & 0xFFFFFFFB | ((v31[4] & 0x22) == 0 ? 4 : 0);
      v31[4] = v35;
      v36 = *((_DWORD *)a2 + 274);
      v31[7] = v36;
      *((_QWORD *)v31 + 4) = v31 + 56;
      if ( v36 )
      {
        v37 = 0;
        do
        {
          VidSchiBindFlipPhysicalAddress(*((struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)a2 + 147), v63, v37);
          v38 = ((unsigned __int64)(v63 + v37 * *(_DWORD *)(*((_QWORD *)a2 + 147) + 4LL)) << 6)
              + 16
              + *((_QWORD *)a2 + 147)
              + *(_DWORD *)(*((_QWORD *)a2 + 147) + 4LL)
              * ((8 * *(_DWORD *)(*((_QWORD *)a2 + 147) + 8LL) + 231) & 0xFFFFFFF8);
          v39 = v37++;
          *(_QWORD *)(*((_QWORD *)v31 + 4) + 8 * v39) = v38;
        }
        while ( v37 < v31[7] );
        v35 = v31[4];
        v12 = a4;
        v10 = a1;
        v23 = v63;
        v22 = v64;
      }
      *v31 = v22;
      v40 = v35 | 1;
      v31[4] = v40;
      v41 = v40 ^ (*((_DWORD *)a2 + 284) ^ v40) & 8;
      v31[4] = v41;
      v42 = v41 ^ ((unsigned __int8)v41 ^ (unsigned __int8)(*((_DWORD *)a2 + 284) >> 1)) & 0x10;
      v43 = v31[14];
      v31[4] = v42;
      v44 = *((_QWORD *)a2 + 147);
      v45 = v23 * ((8 * *(_DWORD *)(v44 + 8) + 231) & 0xFFFFFFF8);
      v31[14] ^= (*(_DWORD *)(v45 + v44 + 188) ^ v43) & 1;
      v31[14] ^= (*(_DWORD *)(v45 + v44 + 188) ^ v31[14]) & 2;
      v31[15] = (unsigned __int16)*(_DWORD *)(v45 + v44 + 160);
      v31[16] = (unsigned __int16)*(_DWORD *)(v45 + v44 + 164);
      v31[17] = *(unsigned __int16 *)(v45 + v44 + 162);
      v31[18] = *(unsigned __int16 *)(v45 + v44 + 166);
      v31[19] = *(__int16 *)(v45 + v44 + 168);
      v31[20] = *(__int16 *)(v45 + v44 + 172);
      v31[21] = *(unsigned __int16 *)(v45 + v44 + 170);
      v31[22] = *(unsigned __int16 *)(v45 + v44 + 174);
      v31[23] = (unsigned __int16)*(_DWORD *)(v45 + v44 + 176);
      v31[24] = (unsigned __int16)*(_DWORD *)(v45 + v44 + 180);
      v31[25] = *(unsigned __int16 *)(v45 + v44 + 178);
      v31[26] = *(unsigned __int16 *)(v45 + v44 + 182);
      if ( v17 && *(_DWORD *)v17 == v22 )
      {
        v31[32] = *(_DWORD *)(v17 + 4);
        *((_QWORD *)v31 + 17) = *(_QWORD *)(v17 + 8);
        v17 = (v17 + 16) & -(__int64)(v17 < v68);
      }
      else
      {
        v31[32] = 1;
        *((_QWORD *)v31 + 17) = v31 + 15;
      }
      v31[27] = ((*(_DWORD *)(v45 + v44 + 188) >> 3) & 3) + 1;
      v31[28] ^= (v31[28] ^ (*(_DWORD *)(v45 + v44 + 188) >> 2)) & 1;
      v31[29] = *(_DWORD *)(v45 + v44 + 184);
      v31[31] = *(_DWORD *)(v45 + v44 + 192);
      v46 = *((_QWORD *)a2 + 145);
      *(_QWORD *)v66 = v46;
      if ( v46 && (unsigned int)(*((_DWORD *)a2 + 263) - 13) > 1 && !v72 )
      {
        v72 = 1;
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v46 + 16), &LockHandle);
        v54 = v69;
        if ( v69 )
          _InterlockedIncrement((volatile signed __int32 *)(v69 + 12));
        v55 = *(_QWORD *)v66;
        if ( *(_QWORD *)(*(_QWORD *)v66 + 8LL) )
        {
          CRefCountedBuffer::RefCountedBufferRelease(*(PSLIST_ENTRY *)(*(_QWORD *)v66 + 8LL));
          v54 = v69;
          v55 = *(_QWORD *)v66;
        }
        *(_QWORD *)(v55 + 8) = v54;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        LOBYTE(v22) = v64;
      }
      v47 = v67;
      v48 = -1;
      v15 &= ~(1 << v22);
      v19 = !_BitScanForward((unsigned int *)&v49, v15);
      if ( !v19 )
        v48 = v49;
      v64 = v48;
    }
    v26 = a6;
    *(_QWORD *)(a6 + 8LL * (unsigned int)(*((_DWORD *)v12 + 5))++) = v31;
    if ( (*((_DWORD *)a2 + 284) & 0x1000) != 0
      || (++*((_QWORD *)v47 + *v31 + 376),
          v50 = *v31,
          v51 = *((_QWORD *)v47 + v50 + 376),
          *((_QWORD *)v31 + 1) = v51,
          *((_QWORD *)v47 + 35 * v50 + 47) = v51,
          !*((_BYTE *)v10 + 59)) )
    {
      v11 = a3;
      goto LABEL_42;
    }
    v56 = *((_QWORD *)v31 + 1);
    v57 = *((_QWORD *)v47 + 35 * v50 + 51);
    if ( (*((_DWORD *)a2 + 284) & 0x80000) != 0 )
    {
      if ( v56 == v57 )
      {
        ++v56;
LABEL_66:
        v58 = *v31;
        v11 = a3;
        VidSchiSetInterruptTargetPresentId(v10, a3, v58, v56, 0);
        goto LABEL_49;
      }
    }
    else if ( v56 < v57 )
    {
      goto LABEL_66;
    }
LABEL_48:
    v11 = a3;
LABEL_49:
    v26 = a6;
LABEL_42:
    v27 = v65;
    v23 = v63 + 1;
    v22 = v64;
    ++v63;
  }
  result = *((unsigned int *)a2 + 284);
  if ( (result & 0x400) == 0 )
    goto LABEL_17;
  v29 = *((_DWORD *)a2 + 296);
  *(_DWORD *)a7 = v29;
  switch ( v29 )
  {
    case 0:
      *(_DWORD *)(a7 + 4) = 0;
      goto LABEL_15;
    case 1:
      *(_DWORD *)(a7 + 4) = 28;
      goto LABEL_77;
    case 2:
      *(_DWORD *)(a7 + 4) = 72;
LABEL_77:
      *(_QWORD *)(a7 + 8) = (char *)a2 + 1188;
      break;
    case 134217729:
      *(_QWORD *)a7 = 1LL;
LABEL_15:
      *(_QWORD *)(a7 + 8) = 0LL;
      break;
    case -2147483646:
      *(_QWORD *)a7 = 2LL;
      goto LABEL_15;
  }
  *((_QWORD *)v12 + 6) = a7;
  result = *((unsigned int *)a2 + 284);
LABEL_17:
  if ( (result & 0x800) != 0 )
  {
    result = a8;
    *(_DWORD *)a8 = 0;
    *(_OWORD *)(a8 + 4) = *(_OWORD *)((char *)a2 + 1260);
    v59 = *(_OWORD *)((char *)a2 + 1276);
    *(_DWORD *)(a8 + 36) = 1;
    *(_OWORD *)(a8 + 20) = v59;
    *((_QWORD *)v12 + 4) = a8;
  }
  if ( *((_BYTE *)v10 + 59) )
  {
    if ( *((_DWORD *)v67 + 736) == -1 )
    {
      v60 = *((_QWORD *)a2 + 162);
    }
    else
    {
      CurrentVSyncPeriodQpc = VidSchiGetCurrentVSyncPeriodQpc(v10, v11, 1);
      v26 = a6;
      result = CurrentVSyncPeriodQpc >> 1;
      v60 = *((_QWORD *)a2 + 162) - result;
    }
    *((_QWORD *)v12 + 7) = v60;
    *((_QWORD *)a2 + 138) = v60;
  }
  *((_QWORD *)v12 + 3) = v26;
  return result;
}
