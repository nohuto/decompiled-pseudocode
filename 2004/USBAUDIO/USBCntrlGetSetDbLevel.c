/*
 * XREFs of USBCntrlGetSetDbLevel @ 0x1C00311F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0004174 (WPP_RECORDER_SF_ddd.c)
 *     log10 @ 0x1C0012688 (log10.c)
 *     _guard_dispatch_icall_nop @ 0x1C0013270 (_guard_dispatch_icall_nop.c)
 *     pow @ 0x1C0013280 (pow.c)
 */

__int64 __fastcall USBCntrlGetSetDbLevel(__int64 a1, __int64 a2, int *a3, unsigned int a4, int a5, _DWORD *a6)
{
  __int64 v8; // rbx
  unsigned int *v9; // rsi
  __int64 v10; // r13
  int v11; // r9d
  int v12; // r12d
  int v13; // r14d
  void *v14; // r10
  int v15; // ebx
  int v16; // edi
  double v17; // xmm0_8
  float v18; // xmm2_4
  signed int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // rdx
  int v22; // ebx
  __int64 v23; // rax
  unsigned int v24; // ecx
  int v25; // edx
  int v26; // edx
  int v27; // eax
  float v28; // xmm1_4
  int v30; // [rsp+28h] [rbp-50h]
  __int64 v31; // [rsp+28h] [rbp-50h]
  unsigned int v33; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v34; // [rsp+98h] [rbp+20h]

  v34 = a4;
  v8 = a1;
  v9 = (unsigned int *)(*(_QWORD *)(a2 + 128) + 32LL * a4);
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v33 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)&WPP_RECORDER_INITIALIZED,
      0xAu,
      0xAu,
      (__int64)&WPP_33bb0946d2ee3d47bfcb664d3a11472f_Traceguids,
      *(_DWORD *)(a2 + 76),
      a4,
      *a3);
  v11 = *(_DWORD *)(a2 + 76);
  v12 = a5;
  if ( v11 == 8 )
  {
    v14 = USBHwGetSetShort;
    v13 = 256;
    v11 = 8;
    if ( *(_BYTE *)(v10 + 6) && (a5 & 0x80u) == 0 )
    {
      v15 = v9[7];
      v16 = v9[6];
      v17 = pow(10.0, (float)((float)((float)*a3 * 0.000015258789) - (float)((float)v15 * 0.000015258789)) / 20.0);
      v14 = USBHwGetSetShort;
      v18 = v17;
      *(float *)&v17 = (float)(v15 - v16);
      v8 = a1;
      *a3 = (int)(float)((float)(v18 * *(float *)&v17) + (float)v16);
      v11 = *(_DWORD *)(a2 + 76);
    }
  }
  else
  {
    v13 = 0x4000;
    v14 = USBHwGetSetByte;
  }
  if ( (v12 & 0x80) == 0 )
  {
    v19 = *a3;
    if ( *a3 <= (int)v9[7] )
    {
      if ( v19 < (int)v9[6] )
      {
        v20 = 0xFF800000 / v13;
        goto LABEL_12;
      }
    }
    else
    {
      v19 = v9[7];
    }
    v20 = v19 / v13;
LABEL_12:
    v33 = v20;
  }
  LOBYTE(v30) = v12;
  v22 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned int *, int))v14)(
          v8,
          *(unsigned int *)(a2 + 80),
          v9[2],
          (unsigned int)(v11 - 6),
          &v33,
          v30);
  if ( v22 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v31) = v22;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v21,
        0xAu,
        0xBu,
        (__int64)&WPP_33bb0946d2ee3d47bfcb664d3a11472f_Traceguids,
        v31);
    }
  }
  else
  {
    if ( (v12 & 0x80) != 0 )
    {
      if ( v12 == 131 && (v23 = *(_QWORD *)(v10 + 32), *(_WORD *)(v23 + 8) == 3468) )
      {
        v24 = v33;
        if ( *(_WORD *)(v23 + 10) == 1 )
          v24 = 0;
        v33 = v24;
      }
      else
      {
        LOWORD(v24) = v33;
      }
      v25 = (char)v24;
      if ( v13 == 256 )
        v25 = (__int16)v24;
      v26 = v13 * v25;
      *a3 = v26;
      if ( *(_DWORD *)(a2 + 76) == 8 )
      {
        if ( *(_BYTE *)(v10 + 6) )
        {
          v27 = *(_DWORD *)(a2 + 96);
          if ( _bittest(&v27, v34) )
          {
            v28 = log10((float)((float)(int)(v26 - v9[6]) / (float)(int)(v9[7] - v9[6])));
            *a3 = (int)(float)((float)(v28 * 20.0) * 65536.0);
          }
        }
      }
    }
    *a6 = 4;
  }
  return (unsigned int)v22;
}
