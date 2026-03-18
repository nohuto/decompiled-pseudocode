/*
 * XREFs of VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C000C8B0
 * Callers:
 *     VidSchiIsHardwareCompletedDependingCommandForFlip @ 0x1C00034DC (VidSchiIsHardwareCompletedDependingCommandForFlip.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009640 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchUnwaitFlipQueue @ 0x1C000CCC0 (VidSchUnwaitFlipQueue.c)
 *     VidSchiNeedToForcePreemptNode @ 0x1C0013B98 (VidSchiNeedToForcePreemptNode.c)
 * Callees:
 *     VidSchiStartNodeYield @ 0x1C00130C0 (VidSchiStartNodeYield.c)
 *     VidSchiMonitorRefreshPeriodFromNode @ 0x1C001317C (VidSchiMonitorRefreshPeriodFromNode.c)
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x1C0024C74 (McTemplateK0pqx_EtwWriteTransfer.c)
 *     McTemplateK0pqxxxx_EtwWriteTransfer @ 0x1C002E8DC (McTemplateK0pqxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchiUpdateLastCompletedPresentTimestamp(__int64 a1, __int64 a2, char a3)
{
  unsigned __int128 v3; // rax
  LARGE_INTEGER *v4; // r14
  char v7; // bl
  LARGE_INTEGER v8; // rsi
  __int64 v9; // r12
  char v10; // r15
  LARGE_INTEGER v11; // rax
  int v12; // edx
  LARGE_INTEGER v13; // rcx
  int v14; // r8d
  LARGE_INTEGER v15; // r9
  LARGE_INTEGER v16; // rbp
  unsigned __int64 v17; // r14
  unsigned __int64 QuadPart; // r8
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int128 v23; // rax
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r11
  __int64 v27; // rbx
  int v28; // edi
  __int64 v29; // rbp
  __int64 *v30; // rcx
  __int64 v31; // r9
  unsigned int i; // edi
  __int64 *v33; // rbx
  __int64 v34; // rbx
  __int64 v35; // rcx
  unsigned int refreshed; // eax
  unsigned __int64 v37; // r10
  int v38; // ecx
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // r11
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // r10
  unsigned __int64 v43; // r11
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // rtt
  union _LARGE_INTEGER v47; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v48; // [rsp+58h] [rbp-60h]
  unsigned __int64 v49; // [rsp+60h] [rbp-58h]
  __int64 v50; // [rsp+68h] [rbp-50h]
  LARGE_INTEGER v51; // [rsp+70h] [rbp-48h]
  LARGE_INTEGER *v52; // [rsp+78h] [rbp-40h]
  unsigned int v53; // [rsp+C0h] [rbp+8h]

  *((_QWORD *)&v3 + 1) = a2;
  v4 = *(LARGE_INTEGER **)(a1 + 104);
  *(_QWORD *)&v3 = *(unsigned int *)(a1 + 404);
  v52 = v4;
  v7 = BYTE8(v3);
  v8 = v4[4];
  v9 = gulPriorityToYieldPriorityBand[(_QWORD)v3];
  if ( !(_DWORD)v9 || (_DWORD)v9 == 3 )
    return v3;
  v10 = 0;
  v47.QuadPart = 0LL;
  v11 = KeQueryPerformanceCounter(&v47);
  v15 = v4[23];
  v16 = v11;
  v51 = v11;
  v50 = v9;
  if ( !v15.QuadPart && !a3 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pqxxxx_EtwWriteTransfer(
        v13.LowPart,
        v12,
        v14,
        *(_QWORD *)(v8.QuadPart + 16),
        1,
        *(_DWORD *)(a1 + 404),
        v11.QuadPart,
        0,
        0);
LABEL_47:
    v10 = v53;
    goto LABEL_26;
  }
  v17 = v11.QuadPart - v15.QuadPart;
  if ( v7 || a3 )
  {
    QuadPart = v47.QuadPart;
  }
  else
  {
    QuadPart = v47.QuadPart;
    v13.QuadPart = 10000000 * v17;
    if ( is_mul_ok(v17, 0x989680uLL) )
    {
      if ( v47.QuadPart == 10000000 )
      {
        *(_QWORD *)&v3 = 7609472 * v17;
        *((_QWORD *)&v3 + 1) = v13.QuadPart / 0x989680uLL;
      }
      else
      {
        *(_QWORD *)&v3 = 10000000 * v17 / v47.QuadPart;
        *((_QWORD *)&v3 + 1) = v3;
      }
    }
    else
    {
      v13.QuadPart = v17 / v47.QuadPart;
      *(_QWORD *)&v3 = 10000000 * (v17 % v47.QuadPart) / v47.QuadPart;
      *((_QWORD *)&v3 + 1) = v3 + 10000000 * (v17 / v47.QuadPart);
    }
    if ( *((_QWORD *)&v3 + 1) < *(_QWORD *)(v8.QuadPart + 2776) )
      return v3;
  }
  v53 = *(_DWORD *)(v8.QuadPart + 4 * v9 + 196);
  v19 = v17 * v53;
  v3 = v19 * (unsigned __int128)0x47AE147AE147AE15uLL;
  v20 = v19 / 0x64;
  v49 = v20;
  if ( !v20 && !a3 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      *(_QWORD *)&v3 = McTemplateK0pqxxxx_EtwWriteTransfer(
                         v13.LowPart,
                         DWORD2(v3),
                         QuadPart,
                         *(_QWORD *)(v8.QuadPart + 16),
                         2,
                         *(_DWORD *)(a1 + 404),
                         v17,
                         0,
                         0);
    return v3;
  }
  v48 = 0LL;
  v21 = 10000000 * v20;
  v22 = 10000000 * v20;
  if ( is_mul_ok(v20, 0x989680uLL) )
  {
    if ( QuadPart == 10000000 )
    {
      v23 = v22 * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
      v24 = v22 / 0x989680;
    }
    else
    {
      *((_QWORD *)&v23 + 1) = v21 % QuadPart;
      v24 = v21 / QuadPart;
    }
  }
  else
  {
    v22 = v20 / QuadPart;
    *((_QWORD *)&v23 + 1) = 10000000 * (v20 % QuadPart) % QuadPart;
    v24 = 10000000 * (v20 % QuadPart) / QuadPart + 10000000 * (v20 / QuadPart);
  }
  v25 = *(_QWORD *)(v8.QuadPart + 2768);
  v48 = v24;
  if ( v24 > v25 )
  {
    if ( !a3 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0pqxxxx_EtwWriteTransfer(
          v22,
          DWORD2(v23),
          QuadPart,
          *(_QWORD *)(v8.QuadPart + 16),
          1,
          *(_DWORD *)(a1 + 404),
          v16.QuadPart,
          v15.QuadPart,
          0);
      goto LABEL_47;
    }
    LOBYTE(v24) = v25;
    v48 = v25;
    v49 = 0LL;
    v39 = v25 * QuadPart;
    if ( is_mul_ok(v25, QuadPart) )
    {
      v26 = v39 / 0x989680;
      v49 = v39 / 0x989680;
    }
    else
    {
      v26 = QuadPart * (v25 / 0x989680) + QuadPart * (v48 - 10000000 * (v25 / 0x989680)) / 0x989680;
      LOBYTE(v24) = v48;
      v49 = v26;
    }
  }
  else
  {
    v26 = v49;
  }
  v27 = 0LL;
  v28 = (1 << *(_DWORD *)(a1 + 404)) - 1;
  if ( !*(_DWORD *)(v8.QuadPart + 72) )
    goto LABEL_26;
  v29 = v50;
  do
  {
    v30 = *(__int64 **)(v8.QuadPart + 624);
    if ( (unsigned int)v27 < *(_DWORD *)(v8.QuadPart + 696) )
      v30 += v27;
    v31 = *v30;
    if ( (v28 & *(_DWORD *)(*v30 + 1760)) != 0 || (v28 & *(_DWORD *)(v31 + 1764)) != 0 )
    {
      v37 = *(_QWORD *)(v31 + 8 * v29 + 1960);
      if ( v37 <= v17 * (100 - v53) / 0x64 && !a3 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        {
LABEL_44:
          LOBYTE(v24) = v48;
          goto LABEL_24;
        }
        v50 = 0LL;
        if ( is_mul_ok(v17, 0x989680uLL) )
          v40 = v17 * (unsigned __int128)0x989680uLL / QuadPart;
        else
          v40 = 10000000 * (v17 / QuadPart) + 10000000 * (v17 % QuadPart) / QuadPart;
        v50 = 0LL;
        if ( is_mul_ok(v37, 0x989680uLL) )
          v41 = v37 * (unsigned __int128)0x989680uLL / QuadPart;
        else
          v41 = 10000000 * (v37 / QuadPart) + 10000000 * (v37 % QuadPart) / QuadPart;
        McTemplateK0pqxxxx_EtwWriteTransfer(
          *(unsigned __int16 *)(v31 + 4),
          *(_DWORD *)(a1 + 404),
          v41,
          *(_QWORD *)(v8.QuadPart + 16),
          5,
          *(_DWORD *)(a1 + 404),
          v41,
          *(_WORD *)(v31 + 4),
          v40);
LABEL_76:
        QuadPart = v47.QuadPart;
        v26 = v49;
        goto LABEL_44;
      }
      v24 = v48;
      v10 = 1;
      *(_BYTE *)(v31 + 2016) = 1;
      *(_QWORD *)(v31 + 2008) = v24;
      *(_QWORD *)(v31 + 2000) = v26;
      *(_QWORD *)(v31 + 1992) = 0LL;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v50 = 0LL;
        if ( is_mul_ok(v17, 0x989680uLL) )
          v43 = v17 * (unsigned __int128)0x989680uLL / (unsigned __int64)v47.QuadPart;
        else
          v43 = 10000000 * (v17 / v47.QuadPart) + 10000000 * (v17 % v47.QuadPart) / v47.QuadPart;
        v44 = *(_QWORD *)(v31 + 8 * v29 + 1960);
        v50 = 0LL;
        if ( is_mul_ok(v44, 0x989680uLL) )
        {
          v42 = v44 * (unsigned __int128)0x989680uLL / (unsigned __int64)v47.QuadPart;
        }
        else
        {
          v45 = v44;
          v44 /= v47.QuadPart;
          v42 = 10000000 * v44 + 10000000 * (v45 % v47.QuadPart) / v47.QuadPart;
        }
        McTemplateK0pqxxxx_EtwWriteTransfer(
          *(unsigned __int16 *)(v31 + 4),
          *(_DWORD *)(a1 + 404),
          v44,
          *(_QWORD *)(v8.QuadPart + 16),
          0,
          *(_DWORD *)(a1 + 404),
          v42,
          *(_WORD *)(v31 + 4),
          v43);
        goto LABEL_76;
      }
      QuadPart = v47.QuadPart;
    }
LABEL_24:
    v27 = (unsigned int)(v27 + 1);
  }
  while ( (unsigned int)v27 < *(_DWORD *)(v8.QuadPart + 72) );
  v16 = v51;
  if ( v10 )
  {
    v38 = *(_DWORD *)(a1 + 404) - 1;
    *(_DWORD *)(v8.QuadPart + 192) = v38;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pqx_EtwWriteTransfer(
        v38,
        (unsigned int)&EventYieldStartAdapter,
        QuadPart,
        *(_QWORD *)(v8.QuadPart + 16),
        v38,
        v24);
  }
LABEL_26:
  for ( i = 0; i < *(_DWORD *)(v8.QuadPart + 72); ++i )
  {
    v33 = *(__int64 **)(v8.QuadPart + 624);
    if ( i < *(_DWORD *)(v8.QuadPart + 696) )
      v33 += i;
    v34 = *v33;
    *(_QWORD *)(v34 + 8LL * (int)v9 + 1928) = 0LL;
    *(_QWORD *)(v34 + 8LL * (int)v9 + 1960) = 0LL;
    *(LARGE_INTEGER *)(v34 + 8LL * (int)v9 + 1896) = v16;
    v35 = *(_QWORD *)(v34 + 8LL * *(unsigned int *)(v34 + 1552) + 1560);
    if ( v35 && gulPriorityToYieldPriorityBand[*(unsigned int *)(v35 + 404)] >= (int)v9 && v16.QuadPart )
      *(LARGE_INTEGER *)(v34 + 8LL * (int)v9 + 1928) = v16;
    if ( v10
      && *(_BYTE *)(v34 + 2016)
      && !*(_QWORD *)(v34 + 1992)
      && v35
      && *(_DWORD *)(v35 + 404) <= *(_DWORD *)(v8.QuadPart + 192) )
    {
      refreshed = VidSchiMonitorRefreshPeriodFromNode(v34);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
        v34,
        (LARGE_INTEGER)v16.QuadPart,
        (union _LARGE_INTEGER)v47.QuadPart,
        refreshed);
    }
  }
  *(_QWORD *)&v3 = v52;
  v52[23] = v16;
  return v3;
}
