/*
 * XREFs of ?VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEBU_VIDSCH_CALL_EXECUTE_FLIP@@W4_VIDSCH_FLIP_STATUS@@I_K@Z @ 0x1C0011338
 * Callers:
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@K@Z @ 0x1C0011BF4 (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_V.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C001BBC0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     McTemplateK0pqqXR2qqddddddddtqtdqiiq_EtwWriteTransfer @ 0x1C0036E7C (McTemplateK0pqqXR2qqddddddddtqtdqiiq_EtwWriteTransfer.c)
 *     McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer @ 0x1C00376B4 (McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer.c)
 *     McTemplateK0tqDR1DR1DR1DR1_EtwWriteTransfer @ 0x1C0038438 (McTemplateK0tqDR1DR1DR1DR1_EtwWriteTransfer.c)
 */

void __fastcall VidSchiLogMmIoFlipMultiPlaneOverlay3(
        __int64 a1,
        _DWORD *a2,
        LARGE_INTEGER *a3,
        char a4,
        char a5,
        char a6)
{
  char v6; // r14
  LARGE_INTEGER v10; // rax
  int *QuadPart; // rax
  int v12; // edi
  char v13; // si
  unsigned int HighPart; // eax
  unsigned int **v15; // rdx
  __int64 v16; // r8
  unsigned int *v17; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v19; // r10
  DWORD v20; // ecx
  unsigned __int64 v21; // r8
  __int64 v22; // rdx
  unsigned int i; // esi
  __int64 v24; // rcx
  int *v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r15
  unsigned int v28; // r14d
  __int64 v29; // r9
  unsigned int j; // edi
  unsigned int v31; // edx
  unsigned int v32; // r10d
  unsigned int v33; // r9d
  __int64 v34; // rcx
  int v36; // [rsp+F8h] [rbp-78h]
  __int128 v37; // [rsp+100h] [rbp-70h]
  __int128 v38; // [rsp+110h] [rbp-60h]
  _QWORD v39[10]; // [rsp+120h] [rbp-50h] BYREF
  _BYTE v40[64]; // [rsp+170h] [rbp+0h] BYREF
  _BYTE v41[64]; // [rsp+1B0h] [rbp+40h] BYREF
  _BYTE v42[64]; // [rsp+1F0h] [rbp+80h] BYREF
  char v43[64]; // [rsp+230h] [rbp+C0h] BYREF

  v6 = a4;
  if ( bTracingEnabled )
  {
    v10 = a3[4];
    v38 = 0LL;
    v37 = 0LL;
    if ( v10.QuadPart )
    {
      v38 = *(_OWORD *)(v10.QuadPart + 4);
      v37 = *(_OWORD *)(v10.QuadPart + 20);
    }
    QuadPart = (int *)a3[6].QuadPart;
    LOBYTE(v12) = 0;
    if ( QuadPart )
      v12 = *QuadPart;
    v13 = a3[6].QuadPart != 0;
    memset(v39, 0, sizeof(v39));
    HighPart = a3[2].HighPart;
    if ( HighPart )
    {
      v15 = (unsigned int **)a3[3].QuadPart;
      v16 = HighPart;
      do
      {
        v17 = *v15++;
        v39[*v17] = *((_QWORD *)v17 + 1);
        --v16;
      }
      while ( v16 );
    }
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v19 = a3[7];
    if ( v19.QuadPart > (unsigned __int64)PerformanceCounter.QuadPart )
      v20 = v19.LowPart - PerformanceCounter.LowPart;
    else
      v20 = 0;
    v21 = *(_QWORD *)(a1 + 2624);
    if ( is_mul_ok(v20, 0x3E8uLL) )
    {
      v22 = v20 * (unsigned __int128)0x3E8uLL % v21;
      v21 = v20 * (unsigned __int128)0x3E8uLL / v21;
    }
    else
    {
      v22 = 1000 * (v20 % v21) % v21;
      LODWORD(v21) = 1000 * (v20 / v21) + 1000 * (v20 % v21) / v21;
    }
    if ( (byte_1C006E941 & 1) != 0 )
      McTemplateK0pqqXR2qqddddddddtqtdqiiq_EtwWriteTransfer(
        (a2[284] >> 12) & 1,
        v22,
        v21,
        *(_QWORD *)(a1 + 16),
        a3[1].LowPart,
        *(_DWORD *)(a1 + 152),
        (__int64)v39,
        a3[1].HighPart,
        a3[2].LowPart,
        v38,
        SBYTE8(v38),
        SBYTE4(v38),
        SBYTE12(v38),
        v37,
        SBYTE8(v37),
        SBYTE4(v37),
        SBYTE12(v37),
        v13,
        v12,
        (a2[284] & 0x1000) != 0,
        a5,
        a3[5].LowPart,
        a6,
        v19.QuadPart,
        v21);
    for ( i = 0; i < a3[2].HighPart; ++i )
    {
      LODWORD(v24) = i;
      v25 = *(int **)(a3[3].QuadPart + 8LL * i);
      LODWORD(v26) = *v25;
      v36 = *v25;
      if ( (v25[4] & 1) != 0 )
      {
        if ( v25[7] )
        {
          v27 = *((_QWORD *)v25 + 17);
          v28 = v25[32];
          if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
          {
            v29 = **((_QWORD **)v25 + 4);
            McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer(
              *(unsigned __int16 *)(v29 + 16),
              (_DWORD)v25,
              v26,
              *(_QWORD *)(a1 + 16),
              a3[1].LowPart,
              v26,
              v36,
              *(_QWORD *)(v29 + 8),
              *(_QWORD *)(v29 + 24),
              *(_WORD *)(v29 + 16),
              a2[264],
              a2[270],
              v25[15],
              v25[17],
              v25[16],
              v25[18],
              v25[19],
              v25[21],
              v25[20],
              v25[22],
              v25[23],
              v25[25],
              v25[24],
              v25[26],
              v25[29],
              a4,
              1,
              v25[31],
              v25[32]);
          }
          for ( j = 0; j < v28; j += 16 )
          {
            v31 = v28 - j;
            if ( v28 - j > 0x10 )
            {
              v32 = 16;
            }
            else
            {
              v32 = v28 - j;
              if ( !v31 )
                goto LABEL_25;
            }
            v26 = 0LL;
            v33 = 0;
            do
            {
              v34 = v33 + j;
              ++v33;
              v24 = 2 * v34;
              v26 += 4LL;
              *(_DWORD *)&v42[v26 + 60] = *(_DWORD *)(v27 + 8 * v24);
              *(_DWORD *)&v41[v26 + 60] = *(_DWORD *)(v27 + 8 * v24 + 8);
              *(_DWORD *)&v40[v26 + 60] = *(_DWORD *)(v27 + 8 * v24 + 4);
              *(_DWORD *)((char *)&v39[9] + v26 + 4) = *(_DWORD *)(v27 + 8 * v24 + 12);
            }
            while ( v33 < v32 );
LABEL_25:
            if ( (byte_1C006E941 & 1) != 0 )
              McTemplateK0tqDR1DR1DR1DR1_EtwWriteTransfer(
                v24,
                v31,
                v26,
                v31 <= 0x10,
                v32,
                (__int64)v43,
                (__int64)v42,
                (__int64)v41,
                (__int64)v40);
          }
          v6 = a4;
        }
      }
      else if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
      {
        McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer(
          i,
          (_DWORD)v25,
          v26,
          *(_QWORD *)(a1 + 16),
          a3[1].LowPart,
          v26,
          v36,
          0,
          0,
          0,
          a2[264],
          a2[270],
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          v6,
          0,
          0,
          0);
      }
    }
  }
}
