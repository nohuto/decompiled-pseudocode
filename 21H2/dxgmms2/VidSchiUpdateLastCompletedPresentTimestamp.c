/*
 * XREFs of VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C000C250
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00087D0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchUnwaitFlipQueue @ 0x1C000BDB0 (VidSchUnwaitFlipQueue.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0015200 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiNeedToForcePreemptNode @ 0x1C001773C (VidSchiNeedToForcePreemptNode.c)
 *     VidSchiIsHardwareCompletedDependingCommandForFlip @ 0x1C00389FC (VidSchiIsHardwareCompletedDependingCommandForFlip.c)
 * Callees:
 *     VidSchiStartNodeYield @ 0x1C00182B0 (VidSchiStartNodeYield.c)
 *     VidSchiMonitorRefreshPeriodFromNode @ 0x1C001836C (VidSchiMonitorRefreshPeriodFromNode.c)
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x1C002EDC8 (McTemplateK0pqx_EtwWriteTransfer.c)
 *     McTemplateK0pqxxxx_EtwWriteTransfer @ 0x1C0037D74 (McTemplateK0pqxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchiUpdateLastCompletedPresentTimestamp(__int64 a1, __int64 a2, char a3)
{
  unsigned __int128 v3; // rax
  __int64 v4; // r14
  char v7; // di
  __int64 v8; // rsi
  __int64 v9; // rbp
  LARGE_INTEGER v10; // rcx
  int v11; // r8d
  unsigned __int64 v12; // r9
  __int64 v13; // r12
  unsigned __int64 v14; // r13
  unsigned __int64 QuadPart; // r8
  unsigned int v16; // edi
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // rcx
  int v20; // r10d
  __int64 v21; // r12
  unsigned __int64 *v22; // rcx
  unsigned int v23; // edi
  __int64 *v24; // rbx
  __int64 v25; // rbx
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  unsigned int refreshed; // eax
  int v29; // ecx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // r10
  unsigned __int64 v32; // rcx
  __int16 v33; // r11
  __int64 v34; // rdx
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // rtt
  unsigned __int64 v37; // r8
  __int64 v38; // rdx
  unsigned __int64 v39; // rtt
  __int64 v40; // rcx
  unsigned __int64 v41; // r10
  __int16 v42; // r11
  unsigned int v44; // [rsp+50h] [rbp-78h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+58h] [rbp-70h] BYREF
  __int64 v46; // [rsp+60h] [rbp-68h]
  unsigned __int64 v47; // [rsp+68h] [rbp-60h]
  unsigned __int64 v48; // [rsp+70h] [rbp-58h]
  __int64 v49; // [rsp+78h] [rbp-50h]
  __int64 v50; // [rsp+80h] [rbp-48h]
  __int64 v51; // [rsp+88h] [rbp-40h]
  unsigned __int8 v52; // [rsp+D0h] [rbp+8h]
  int v53; // [rsp+E8h] [rbp+20h]

  *((_QWORD *)&v3 + 1) = a2;
  v4 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)&v3 = *(unsigned int *)(a1 + 404);
  v49 = v4;
  v7 = BYTE8(v3);
  v8 = *(_QWORD *)(v4 + 32);
  v9 = gulPriorityToYieldPriorityBand[(_QWORD)v3];
  if ( !(_DWORD)v9 || (_DWORD)v9 == 3 )
    return v3;
  PerformanceFrequency.QuadPart = 0LL;
  *(LARGE_INTEGER *)&v3 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v12 = *(_QWORD *)(v4 + 184);
  v13 = v3;
  v50 = v3;
  if ( !v12 && !a3 )
  {
    if ( (byte_1C006E941 & 1) != 0 )
      *(_QWORD *)&v3 = McTemplateK0pqxxxx_EtwWriteTransfer(
                         v10.LowPart,
                         DWORD2(v3),
                         v11,
                         *(_QWORD *)(v8 + 16),
                         1,
                         *(_DWORD *)(a1 + 404),
                         v3,
                         0,
                         0);
LABEL_44:
    *((_QWORD *)&v3 + 1) = v52;
    goto LABEL_27;
  }
  v14 = v3 - v12;
  if ( v7 || a3 )
  {
    QuadPart = PerformanceFrequency.QuadPart;
    v16 = 0;
  }
  else
  {
    QuadPart = PerformanceFrequency.QuadPart;
    v16 = 0;
    v10.QuadPart = 10000000 * v14;
    if ( is_mul_ok(v14, 0x989680uLL) )
    {
      if ( PerformanceFrequency.QuadPart == 10000000 )
      {
        *(_QWORD *)&v3 = 7609472 * v14;
        *((_QWORD *)&v3 + 1) = v10.QuadPart / 0x989680uLL;
      }
      else
      {
        *(_QWORD *)&v3 = 10000000 * v14 / PerformanceFrequency.QuadPart;
        *((_QWORD *)&v3 + 1) = v3;
      }
    }
    else
    {
      v10.QuadPart = v14 / PerformanceFrequency.QuadPart;
      *(_QWORD *)&v3 = 10000000 * (v14 / PerformanceFrequency.QuadPart);
      *((_QWORD *)&v3 + 1) = v3 + 10000000 * (v14 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
    }
    if ( *((_QWORD *)&v3 + 1) < *(_QWORD *)(v8 + 2872) )
      return v3;
  }
  v44 = *(_DWORD *)(v8 + 4 * v9 + 204);
  v17 = v14 * v44;
  v3 = v17 * (unsigned __int128)0x47AE147AE147AE15uLL;
  v18 = v17 / 0x64;
  v47 = v18;
  if ( !v18 && !a3 )
  {
    if ( (byte_1C006E941 & 1) != 0 )
      *(_QWORD *)&v3 = McTemplateK0pqxxxx_EtwWriteTransfer(
                         v10.LowPart,
                         DWORD2(v3),
                         QuadPart,
                         *(_QWORD *)(v8 + 16),
                         2,
                         *(_DWORD *)(a1 + 404),
                         v14,
                         0,
                         0);
    return v3;
  }
  v52 = 0;
  v19 = 10000000 * v18;
  if ( is_mul_ok(v18, 0x989680uLL) )
  {
    if ( QuadPart == 10000000 )
      *((_QWORD *)&v3 + 1) = v19 / 0x989680;
    else
      *((_QWORD *)&v3 + 1) = 10000000 * v18 / QuadPart;
  }
  else
  {
    v19 = v18 / QuadPart;
    *((_QWORD *)&v3 + 1) = 10000000 * (v18 / QuadPart) + 10000000 * (v18 % QuadPart) / QuadPart;
  }
  *(_QWORD *)&v3 = *(_QWORD *)(v8 + 2864);
  v46 = *((_QWORD *)&v3 + 1);
  if ( *((_QWORD *)&v3 + 1) > (unsigned __int64)v3 )
  {
    if ( !a3 )
    {
      if ( (byte_1C006E941 & 1) != 0 )
        *(_QWORD *)&v3 = McTemplateK0pqxxxx_EtwWriteTransfer(
                           v19,
                           DWORD2(v3),
                           QuadPart,
                           *(_QWORD *)(v8 + 16),
                           1,
                           *(_DWORD *)(a1 + 404),
                           v13,
                           v12,
                           0);
      goto LABEL_44;
    }
    v46 = v3;
    v12 = v3 * QuadPart;
    if ( is_mul_ok(v3, QuadPart) )
    {
      v3 = v12 * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
      v18 = v12 / 0x989680;
    }
    else
    {
      v12 = QuadPart * ((unsigned __int64)v3 / 0x989680);
      v30 = QuadPart * ((unsigned __int64)v3 % 0x989680);
      v3 = v30 * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
      v18 = v12 + v30 / 0x989680;
    }
    v47 = v18;
  }
  BYTE8(v3) = 0;
  v52 = 0;
  v20 = (1 << *(_DWORD *)(a1 + 404)) - 1;
  v53 = v20;
  if ( !*(_DWORD *)(v8 + 80) )
    goto LABEL_27;
  v21 = v46;
  do
  {
    v22 = *(unsigned __int64 **)(v8 + 632);
    if ( v16 < *(_DWORD *)(v8 + 704) )
    {
      *(_QWORD *)&v3 = v16;
      v22 += v16;
    }
    v12 = *v22;
    if ( (v20 & *(_DWORD *)(*v22 + 1768)) == 0 && (v20 & *(_DWORD *)(v12 + 1772)) == 0 )
      goto LABEL_24;
    v27 = v14 * (100 - v44);
    v48 = *(_QWORD *)(v12 + 8 * v9 + 1968);
    v3 = v27 * (unsigned __int128)0x47AE147AE147AE15uLL;
    if ( v48 <= v27 / 0x64 && !a3 )
    {
      if ( (byte_1C006E941 & 1) == 0 )
      {
LABEL_24:
        *((_QWORD *)&v3 + 1) = v52;
        goto LABEL_25;
      }
      v51 = 0LL;
      if ( is_mul_ok(v14, 0x989680uLL) )
        v31 = v14 * (unsigned __int128)0x989680uLL / QuadPart;
      else
        v31 = 10000000 * (v14 / QuadPart) + 10000000 * (v14 % QuadPart) / QuadPart;
      LODWORD(v32) = v48;
      v33 = *(_WORD *)(v12 + 4);
      v51 = 0LL;
      if ( is_mul_ok(v48, 0x989680uLL) )
      {
        v34 = v48 * (unsigned __int128)0x989680uLL % QuadPart;
        v35 = v48 * (unsigned __int128)0x989680uLL / QuadPart;
      }
      else
      {
        v32 = v48 / QuadPart;
        v34 = 10000000 * (v48 % QuadPart) % QuadPart;
        v35 = 10000000 * (v48 / QuadPart) + 10000000 * (v48 % QuadPart) / QuadPart;
      }
      *(_QWORD *)&v3 = McTemplateK0pqxxxx_EtwWriteTransfer(
                         v32,
                         v34,
                         v35,
                         *(_QWORD *)(v8 + 16),
                         5,
                         *(_DWORD *)(a1 + 404),
                         v35,
                         v33,
                         v31);
LABEL_79:
      QuadPart = PerformanceFrequency.QuadPart;
      v20 = v53;
      v18 = v47;
      goto LABEL_24;
    }
    BYTE8(v3) = 1;
    *(_QWORD *)(v12 + 2008) = v18;
    *(_BYTE *)(v12 + 2024) = 1;
    *(_QWORD *)(v12 + 2000) = 0LL;
    *(_QWORD *)(v12 + 2016) = v21;
    v52 = 1;
    if ( (byte_1C006E941 & 1) != 0 )
    {
      v51 = 0LL;
      if ( is_mul_ok(v14, 0x989680uLL) )
        v41 = v14 * (unsigned __int128)0x989680uLL / (unsigned __int64)PerformanceFrequency.QuadPart;
      else
        v41 = 10000000 * (v14 / PerformanceFrequency.QuadPart)
            + 10000000 * (v14 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
      v37 = *(_QWORD *)(v12 + 8 * v9 + 1968);
      v42 = *(_WORD *)(v12 + 4);
      v51 = 0LL;
      if ( is_mul_ok(v37, 0x989680uLL) )
      {
        v38 = v37 * (unsigned __int128)0x989680uLL % (unsigned __int64)PerformanceFrequency.QuadPart;
        v40 = v37 * (unsigned __int128)0x989680uLL / (unsigned __int64)PerformanceFrequency.QuadPart;
      }
      else
      {
        v36 = v37;
        v37 /= PerformanceFrequency.QuadPart;
        v39 = 10000000 * (v36 % PerformanceFrequency.QuadPart);
        v38 = v39 % PerformanceFrequency.QuadPart;
        v40 = 10000000 * v37 + v39 / PerformanceFrequency.QuadPart;
      }
      *(_QWORD *)&v3 = McTemplateK0pqxxxx_EtwWriteTransfer(
                         v40,
                         v38,
                         v37,
                         *(_QWORD *)(v8 + 16),
                         0,
                         *(_DWORD *)(a1 + 404),
                         v40,
                         v42,
                         v41);
      goto LABEL_79;
    }
    QuadPart = PerformanceFrequency.QuadPart;
LABEL_25:
    ++v16;
  }
  while ( v16 < *(_DWORD *)(v8 + 80) );
  v13 = v50;
  if ( BYTE8(v3) )
  {
    v29 = *(_DWORD *)(a1 + 404) - 1;
    *(_DWORD *)(v8 + 200) = v29;
    if ( (byte_1C006E941 & 1) != 0 )
    {
      *(_QWORD *)&v3 = McTemplateK0pqx_EtwWriteTransfer(
                         v29,
                         (unsigned int)&EventYieldStartAdapter,
                         QuadPart,
                         *(_QWORD *)(v8 + 16),
                         v29,
                         v46);
      *((_QWORD *)&v3 + 1) = v52;
    }
  }
LABEL_27:
  v23 = 0;
  if ( *(_DWORD *)(v8 + 80) )
  {
    do
    {
      v24 = *(__int64 **)(v8 + 632);
      if ( v23 < *(_DWORD *)(v8 + 704) )
        v24 += v23;
      v25 = *v24;
      *(_QWORD *)(v25 + 8 * v9 + 1936) = 0LL;
      *(_QWORD *)(v25 + 8 * v9 + 1968) = 0LL;
      *(_QWORD *)(v25 + 8 * v9 + 1904) = v13;
      *(_QWORD *)&v3 = *(unsigned int *)(v25 + 1560);
      v26 = *(_QWORD *)(v25 + 8 * v3 + 1568);
      if ( v26 )
      {
        *(_QWORD *)&v3 = *(unsigned int *)(v26 + 404);
        if ( gulPriorityToYieldPriorityBand[(_QWORD)v3] >= (int)v9 )
        {
          if ( v13 )
            *(_QWORD *)(v25 + 8 * v9 + 1936) = v13;
        }
      }
      if ( BYTE8(v3) )
      {
        if ( *(_BYTE *)(v25 + 2024) )
        {
          if ( !*(_QWORD *)(v25 + 2000) )
          {
            if ( v26 )
            {
              *(_QWORD *)&v3 = *(unsigned int *)(v8 + 200);
              if ( *(_DWORD *)(v26 + 404) <= (unsigned int)v3 )
              {
                refreshed = VidSchiMonitorRefreshPeriodFromNode(v25, *((_QWORD *)&v3 + 1), 0LL, v12);
                *(_QWORD *)&v3 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
                                   v25,
                                   v13,
                                   (union _LARGE_INTEGER)PerformanceFrequency.QuadPart,
                                   refreshed);
                *((_QWORD *)&v3 + 1) = v52;
              }
            }
          }
        }
      }
      ++v23;
    }
    while ( v23 < *(_DWORD *)(v8 + 80) );
    v4 = v49;
  }
  *(_QWORD *)(v4 + 184) = v13;
  return v3;
}
