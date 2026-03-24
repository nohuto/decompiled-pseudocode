/*
 * XREFs of VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C00318C0
 * Callers:
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@K@Z @ 0x1C002AC6C (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_V.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002F5D0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0002EAC (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z @ 0x1C002A5E8 (-VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z.c)
 */

__int64 __fastcall VidSchiSetupMmIoFlipMultiPlaneOverlay3(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // r13
  int v12; // ecx
  unsigned int v13; // r15d
  unsigned int v14; // r14d
  int v15; // ecx
  bool v16; // zf
  int v17; // eax
  char v18; // cl
  int v19; // edx
  int v20; // eax
  _DWORD *v21; // r12
  __int64 v22; // rax
  int v23; // eax
  char v24; // cl
  unsigned int v25; // r10d
  char v26; // cl
  unsigned int v27; // eax
  unsigned int v28; // r11d
  __int64 v29; // rcx
  __int64 v30; // r9
  __int64 v31; // rax
  unsigned int *v32; // rbx
  __int64 v33; // rcx
  char v34; // r8
  int v35; // eax
  unsigned int v36; // edx
  unsigned int v37; // ecx
  unsigned int v38; // esi
  unsigned __int64 v39; // rdx
  __int64 v40; // rcx
  char v41; // r11
  int v42; // edx
  int v43; // ecx
  int v44; // eax
  unsigned int v45; // ecx
  __int64 v46; // rdx
  __int64 v47; // r8
  unsigned int **v48; // rcx
  unsigned int *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  char v53; // cl
  char v54; // cl
  int v55; // eax
  char v56; // cl
  int v57; // eax
  __int64 result; // rax
  int v59; // eax
  __int128 v60; // xmm1
  unsigned int v61; // [rsp+20h] [rbp-71h]
  unsigned int v62; // [rsp+24h] [rbp-6Dh]
  unsigned int v63[2]; // [rsp+28h] [rbp-69h]
  __int64 v64; // [rsp+48h] [rbp-49h]
  unsigned __int64 v65; // [rsp+50h] [rbp-41h]
  __int64 v66; // [rsp+58h] [rbp-39h]
  __int64 v67; // [rsp+60h] [rbp-31h]
  __int64 v68; // [rsp+68h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-21h] BYREF
  unsigned int v71; // [rsp+E8h] [rbp+57h]
  char v72; // [rsp+F0h] [rbp+5Fh]

  v9 = a1;
  v10 = a4;
  v11 = *(_QWORD *)(a1 + 8LL * a3 + 3104);
  *(_QWORD *)a4 = a1;
  *(_DWORD *)(a4 + 8) = a3;
  v67 = v11;
  *(_DWORD *)(a4 + 12) ^= (*(_DWORD *)(a2 + 1136) ^ *(_DWORD *)(a4 + 12)) & 1;
  v12 = *(_DWORD *)(a4 + 12) ^ ((unsigned __int8)*(_DWORD *)(a4 + 12) ^ (unsigned __int8)*(_DWORD *)(a2 + 1136)) & 2;
  *(_DWORD *)(a4 + 12) = v12;
  *(_DWORD *)(a4 + 12) = v12 ^ (*(_DWORD *)(a2 + 1136) ^ v12) & 4;
  if ( (*(_DWORD *)(a2 + 1136) & 0x10) != 0 )
  {
    v13 = **(_DWORD **)(a2 + 1176) & 0x3FF;
    v14 = (**(_DWORD **)(a2 + 1176) >> 10) & 0x3FF;
  }
  else
  {
    v13 = 1;
    v14 = ((1 << *(_DWORD *)(v9 + 144)) - 1) & 0xFFFFFFFE;
  }
  *(_DWORD *)(a4 + 40) = *(_DWORD *)(a2 + 1140);
  if ( *(_BYTE *)(v9 + 6505) )
  {
    v15 = *(_DWORD *)(a2 + 1140);
    if ( (unsigned int)(v15 - 1) > 0xFFFFFFFD )
    {
      v19 = *(_DWORD *)(v11 + 2296);
      if ( v19 )
      {
        v20 = v13 | v14;
        if ( _bittest(&v20, *(_DWORD *)(v11 + 2300)) )
          *(_DWORD *)(v11 + 2296) = 0;
        else
          *(_DWORD *)(a4 + 40) = v19;
      }
      v9 = a1;
    }
    else if ( v13 )
    {
      v16 = !_BitScanForward((unsigned int *)&v17, v13);
      *(_DWORD *)(v11 + 2296) = v15;
      v18 = -1;
      if ( !v16 )
        v18 = v17;
      *(_DWORD *)(v11 + 2300) = v18;
    }
  }
  *(_QWORD *)(a4 + 32) = 0LL;
  v21 = 0LL;
  *(_QWORD *)(a4 + 48) = 0LL;
  *(_DWORD *)(a4 + 2120) = -1073741823;
  *(_DWORD *)(a4 + 20) = 0;
  v22 = *(_QWORD *)(a2 + 1168);
  v65 = 0LL;
  if ( v22 )
  {
    v21 = (_DWORD *)(v22 + 24);
    v65 = v22 + 24 + 16LL * *(unsigned int *)(v22 + 16) - 16;
  }
  v16 = !_BitScanForward((unsigned int *)&v23, v13);
  v24 = -1;
  v72 = 0;
  v25 = 0;
  if ( !v16 )
    v24 = v23;
  v61 = 0;
  v27 = v24;
  v26 = -1;
  v71 = v27;
  v16 = !_BitScanForward(&v27, v14);
  if ( !v16 )
    v26 = v27;
  v28 = v26;
  v29 = a6;
  v62 = v28;
  while ( v13 || v14 )
  {
    v30 = *(_QWORD *)(a2 + 1176);
    v64 = v30;
    v31 = v25 * ((8 * *(_DWORD *)(v30 + 8) + 199) & 0xFFFFFFF8);
    v32 = (unsigned int *)(v31 + v30 + 16);
    v68 = v31;
    v33 = *(_QWORD *)(v31 + v30 + 200);
    v66 = v33;
    if ( v33 )
    {
      v32[10] = *(_DWORD *)(v33 + 8);
      *((_QWORD *)v32 + 6) = v33 + 16;
    }
    v34 = 1;
    if ( v71 >= v28 )
    {
      if ( (*(unsigned __int16 *)(v11 + 33160) & (1 << v28)) != 0 )
      {
        *((_QWORD *)v32 + 4) = 0LL;
        *((_QWORD *)v32 + 3) = 0LL;
        v32[10] = 0;
        *((_QWORD *)v32 + 6) = 0LL;
        *v32 = v28;
        v32[4] = 0;
      }
      else
      {
        v34 = 0;
        *((_QWORD *)v32 + 1) = 0LL;
      }
      v56 = -1;
      v14 &= ~(1 << v28);
      v16 = !_BitScanForward((unsigned int *)&v57, v14);
      if ( !v16 )
        v56 = v57;
      v28 = v56;
      v62 = v56;
      if ( !v34 )
        goto LABEL_61;
    }
    else
    {
      if ( a5 )
      {
        v32[4] = v32[4] & 0xFFFFFFFD | (2 * a5);
      }
      else
      {
        v35 = *(_DWORD *)(a2 + 1136);
        if ( (v35 & 0x200) != 0 )
        {
          v32[4] |= 0x20u;
        }
        else if ( (v35 & 0x80u) != 0 && *(_BYTE *)(v9 + 6504) )
        {
          v32[4] |= 2u;
        }
      }
      v36 = v32[4] & 0xFFFFFFFB | ((v32[4] & 0x22) == 0 ? 4 : 0);
      v32[4] = v36;
      v37 = *(_DWORD *)(a2 + 1096);
      v32[7] = v37;
      *((_QWORD *)v32 + 4) = v32 + 48;
      if ( v37 )
      {
        v38 = 0;
        do
        {
          VidSchiBindFlipPhysicalAddress(*(struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)(a2 + 1176), v61, v38);
          v39 = ((unsigned __int64)(v61 + v38 * *(_DWORD *)(*(_QWORD *)(a2 + 1176) + 4LL)) << 6)
              + 16
              + *(_QWORD *)(a2 + 1176)
              + *(_DWORD *)(*(_QWORD *)(a2 + 1176) + 4LL)
              * ((8 * *(_DWORD *)(*(_QWORD *)(a2 + 1176) + 8LL) + 199) & 0xFFFFFFF8);
          v40 = v38++;
          *(_QWORD *)(*((_QWORD *)v32 + 4) + 8 * v40) = v39;
        }
        while ( v38 < v32[7] );
        v36 = v32[4];
        v10 = a4;
        v11 = v67;
        v30 = v64;
        v25 = v61;
      }
      v41 = v71;
      v42 = v36 | 1;
      v32[4] = v42;
      *v32 = v71;
      v43 = v42 ^ (*(_DWORD *)(a2 + 1136) ^ v42) & 8;
      v32[4] = v43;
      v44 = v43 ^ ((unsigned __int8)v43 ^ (unsigned __int8)(*(_DWORD *)(a2 + 1136) >> 1)) & 0x10;
      v45 = v32[14];
      v32[4] = v44;
      v46 = *(_QWORD *)(a2 + 1176);
      v47 = v25 * ((8 * *(_DWORD *)(v46 + 8) + 199) & 0xFFFFFFF8);
      v32[14] ^= (*(_DWORD *)(v47 + v46 + 188) ^ v45) & 1;
      v32[14] ^= ((unsigned __int8)v32[14] ^ (unsigned __int8)*(_DWORD *)(v47 + v46 + 188)) & 2;
      v32[15] = (unsigned __int16)*(_DWORD *)(v47 + v46 + 160);
      v32[16] = (unsigned __int16)*(_DWORD *)(v47 + v46 + 164);
      v32[17] = *(unsigned __int16 *)(v47 + v46 + 162);
      v32[18] = *(unsigned __int16 *)(v47 + v46 + 166);
      v32[19] = *(__int16 *)(v47 + v46 + 168);
      v32[20] = *(__int16 *)(v47 + v46 + 172);
      v32[21] = *(unsigned __int16 *)(v47 + v46 + 170);
      v32[22] = *(unsigned __int16 *)(v47 + v46 + 174);
      v32[23] = (unsigned __int16)*(_DWORD *)(v47 + v46 + 176);
      v32[24] = (unsigned __int16)*(_DWORD *)(v47 + v46 + 180);
      v32[25] = *(unsigned __int16 *)(v47 + v46 + 178);
      v32[26] = *(unsigned __int16 *)(v47 + v46 + 182);
      if ( v21 && *v21 == v71 )
      {
        v48 = (unsigned int **)(v21 + 2);
        v32[32] = v21[1];
        v21 = (_DWORD *)((unsigned __int64)(v21 + 4) & -(__int64)((unsigned __int64)v21 < v65));
        v49 = *v48;
      }
      else
      {
        v49 = v32 + 15;
        v32[32] = 1;
      }
      *(_QWORD *)(v30 + v68 + 152) = v49;
      v32[27] = ((*(_DWORD *)(v47 + v46 + 188) >> 3) & 3) + 1;
      v32[28] ^= (v32[28] ^ (*(_DWORD *)(v47 + v46 + 188) >> 2)) & 1;
      v32[29] = *(_DWORD *)(v47 + v46 + 184);
      v32[31] = *(_DWORD *)(v47 + v46 + 192);
      v50 = *(_QWORD *)(a2 + 1160);
      *(_QWORD *)v63 = v50;
      if ( v50 && *(_DWORD *)(a2 + 1052) != 13 && !v72 )
      {
        v72 = 1;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v50 + 16), &LockHandle);
        v51 = v66;
        if ( v66 )
          _InterlockedIncrement((volatile signed __int32 *)(v66 + 12));
        v52 = *(_QWORD *)v63;
        if ( *(_QWORD *)(*(_QWORD *)v63 + 8LL) )
        {
          CRefCountedBuffer::RefCountedBufferRelease(*(PSLIST_ENTRY *)(*(_QWORD *)v63 + 8LL));
          v51 = v66;
          v52 = *(_QWORD *)v63;
        }
        *(_QWORD *)(v52 + 8) = v51;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v25 = v61;
        v41 = v71;
      }
      v53 = v41;
      v28 = v62;
      v55 = 1 << v53;
      v54 = -1;
      v13 &= ~v55;
      v16 = !_BitScanForward((unsigned int *)&v55, v13);
      if ( !v16 )
        v54 = v55;
      v71 = v54;
    }
    v29 = a6;
    *(_QWORD *)(a6 + 8LL * (unsigned int)(*(_DWORD *)(v10 + 20))++) = v32;
    if ( (*(_DWORD *)(a2 + 1136) & 0x1000) != 0 )
      goto LABEL_62;
    *((_QWORD *)v32 + 1) = ++*(_QWORD *)(v11 + 8LL * *v32 + 2360);
LABEL_61:
    v29 = a6;
LABEL_62:
    v9 = a1;
    v61 = ++v25;
  }
  result = *(unsigned int *)(a2 + 1136);
  if ( (result & 0x400) == 0 )
    goto LABEL_77;
  v59 = *(_DWORD *)(a2 + 1184);
  *(_DWORD *)a7 = v59;
  switch ( v59 )
  {
    case 0:
      *(_DWORD *)(a7 + 4) = 0;
      goto LABEL_75;
    case 1:
      *(_DWORD *)(a7 + 4) = 28;
      goto LABEL_73;
    case 2:
      *(_DWORD *)(a7 + 4) = 72;
LABEL_73:
      *(_QWORD *)(a7 + 8) = a2 + 1188;
      break;
    case 134217729:
      *(_QWORD *)a7 = 1LL;
LABEL_75:
      *(_QWORD *)(a7 + 8) = 0LL;
      break;
    case -2147483646:
      *(_QWORD *)a7 = 2LL;
      goto LABEL_75;
  }
  *(_QWORD *)(v10 + 48) = a7;
  result = *(unsigned int *)(a2 + 1136);
  v29 = a6;
LABEL_77:
  if ( (result & 0x800) != 0 )
  {
    result = a8;
    *(_DWORD *)a8 = 0;
    *(_OWORD *)(a8 + 4) = *(_OWORD *)(a2 + 1260);
    v60 = *(_OWORD *)(a2 + 1276);
    *(_DWORD *)(a8 + 36) = 1;
    *(_OWORD *)(a8 + 20) = v60;
    *(_QWORD *)(v10 + 32) = a8;
  }
  *(_QWORD *)(v10 + 24) = v29;
  return result;
}
