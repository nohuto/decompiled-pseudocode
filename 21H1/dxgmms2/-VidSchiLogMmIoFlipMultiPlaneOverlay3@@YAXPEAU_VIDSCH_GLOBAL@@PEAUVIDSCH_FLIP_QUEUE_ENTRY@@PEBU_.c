/*
 * XREFs of ?VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_VIDSCH_CALL_EXECUTE_FLIP@@W4_VIDSCH_FLIP_STATUS@@I@Z @ 0x1C002B2E8
 * Callers:
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@K@Z @ 0x1C002ACCC (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_V.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002F6A0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     memset @ 0x1C0016E40 (memset.c)
 *     McTemplateK0pqqXR2qqddddddddtqtd_EtwWriteTransfer @ 0x1C002DAFC (McTemplateK0pqqXR2qqddddddddtqtd_EtwWriteTransfer.c)
 *     McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer @ 0x1C002E29C (McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer.c)
 *     McTemplateK0tqDR1DR1DR1DR1_EtwWriteTransfer @ 0x1C002EE14 (McTemplateK0tqDR1DR1DR1DR1_EtwWriteTransfer.c)
 */

void __fastcall VidSchiLogMmIoFlipMultiPlaneOverlay3(__int64 a1, _DWORD *a2, __int64 a3, char a4, char a5)
{
  char v5; // r14
  __int64 v9; // rax
  int *v10; // rax
  int v11; // edi
  char v12; // si
  unsigned int **v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // eax
  unsigned int *v16; // rax
  unsigned int i; // esi
  __int64 v18; // rcx
  int *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r12
  unsigned int v22; // r14d
  __int64 v23; // r9
  unsigned int v24; // edi
  unsigned int v25; // edx
  unsigned int v26; // r10d
  unsigned int v27; // r9d
  __int64 v28; // rcx
  __int128 v30; // [rsp+F8h] [rbp-78h]
  int v31; // [rsp+F8h] [rbp-78h]
  __int128 v32; // [rsp+108h] [rbp-68h]
  _QWORD v33[10]; // [rsp+120h] [rbp-50h] BYREF
  _BYTE v34[64]; // [rsp+170h] [rbp+0h] BYREF
  _BYTE v35[64]; // [rsp+1B0h] [rbp+40h] BYREF
  _BYTE v36[64]; // [rsp+1F0h] [rbp+80h] BYREF
  _BYTE v37[64]; // [rsp+230h] [rbp+C0h] BYREF

  v5 = a4;
  if ( bTracingEnabled )
  {
    v9 = *(_QWORD *)(a3 + 32);
    v32 = 0LL;
    v30 = 0LL;
    if ( v9 )
    {
      v32 = *(_OWORD *)(v9 + 4);
      v30 = *(_OWORD *)(v9 + 20);
    }
    v10 = *(int **)(a3 + 48);
    LOBYTE(v11) = 0;
    if ( v10 )
      v11 = *v10;
    v12 = *(_QWORD *)(a3 + 48) != 0LL;
    memset(v33, 0, sizeof(v33));
    v15 = *(_DWORD *)(a3 + 20);
    if ( v15 )
    {
      v13 = *(unsigned int ***)(a3 + 24);
      v14 = v15;
      do
      {
        v16 = *v13++;
        v33[*v16] = *((_QWORD *)v16 + 1);
        --v14;
      }
      while ( v14 );
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pqqXR2qqddddddddtqtd_EtwWriteTransfer(
        (a2[284] >> 12) & 1,
        (_DWORD)v13,
        v14,
        *(_QWORD *)(a1 + 16),
        *(_DWORD *)(a3 + 8),
        *(_DWORD *)(a1 + 144),
        (__int64)v33,
        *(_DWORD *)(a3 + 12),
        *(_DWORD *)(a3 + 16),
        v32,
        SBYTE8(v32),
        SBYTE4(v32),
        SBYTE12(v32),
        v30,
        SBYTE8(v30),
        SBYTE4(v30),
        SBYTE12(v30),
        v12,
        v11,
        (a2[284] & 0x1000) != 0,
        a5);
    for ( i = 0; i < *(_DWORD *)(a3 + 20); ++i )
    {
      LODWORD(v18) = i;
      v19 = *(int **)(*(_QWORD *)(a3 + 24) + 8LL * i);
      LODWORD(v20) = *v19;
      v31 = *v19;
      if ( (v19[4] & 1) == 0 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer(
            i,
            (_DWORD)v19,
            v20,
            *(_QWORD *)(a1 + 16),
            *(_DWORD *)(a3 + 8),
            v20,
            v31,
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
            v5,
            0,
            0,
            0);
        continue;
      }
      if ( v19[7] )
      {
        v21 = *((_QWORD *)v19 + 17);
        v22 = v19[32];
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v23 = **((_QWORD **)v19 + 4);
          McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer(
            *(unsigned __int16 *)(v23 + 16),
            (_DWORD)v19,
            v20,
            *(_QWORD *)(a1 + 16),
            *(_DWORD *)(a3 + 8),
            v20,
            v31,
            *(_QWORD *)(v23 + 8),
            *(_QWORD *)(v23 + 24),
            *(_WORD *)(v23 + 16),
            a2[264],
            a2[270],
            v19[15],
            v19[17],
            v19[16],
            v19[18],
            v19[19],
            v19[21],
            v19[20],
            v19[22],
            v19[23],
            v19[25],
            v19[24],
            v19[26],
            v19[29],
            a4,
            1,
            v19[31],
            v19[32]);
        }
        v24 = 0;
        if ( v22 )
        {
          while ( 1 )
          {
            v25 = v22 - v24;
            if ( v22 - v24 > 0x10 )
              break;
            v26 = v22 - v24;
            if ( v25 )
              goto LABEL_22;
LABEL_24:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0tqDR1DR1DR1DR1_EtwWriteTransfer(
                v18,
                v25,
                v20,
                v25 <= 0x10,
                v26,
                (__int64)v37,
                (__int64)v36,
                (__int64)v35,
                (__int64)v34);
            v24 += 16;
            if ( v24 >= v22 )
              goto LABEL_27;
          }
          v26 = 16;
LABEL_22:
          v20 = 0LL;
          v27 = 0;
          do
          {
            v28 = v27 + v24;
            ++v27;
            v18 = 2 * v28;
            v20 += 4LL;
            *(_DWORD *)&v36[v20 + 60] = *(_DWORD *)(v21 + 8 * v18);
            *(_DWORD *)&v35[v20 + 60] = *(_DWORD *)(v21 + 8 * v18 + 8);
            *(_DWORD *)&v34[v20 + 60] = *(_DWORD *)(v21 + 8 * v18 + 4);
            *(_DWORD *)((char *)&v33[9] + v20 + 4) = *(_DWORD *)(v21 + 8 * v18 + 12);
          }
          while ( v27 < v26 );
          goto LABEL_24;
        }
LABEL_27:
        v5 = a4;
      }
    }
  }
}
