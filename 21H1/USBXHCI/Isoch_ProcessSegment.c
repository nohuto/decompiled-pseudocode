/*
 * XREFs of Isoch_ProcessSegment @ 0x1C0041124
 * Callers:
 *     Isoch_CalculateBytesTransferred @ 0x1C0040400 (Isoch_CalculateBytesTransferred.c)
 * Callees:
 *     WPP_RECORDER_SF_dddd @ 0x1C000D7B0 (WPP_RECORDER_SF_dddd.c)
 *     WPP_RECORDER_SF_DDDDL @ 0x1C0042A38 (WPP_RECORDER_SF_DDDDL.c)
 *     WPP_RECORDER_SF_DDL @ 0x1C0042C7C (WPP_RECORDER_SF_DDL.c)
 */

char __fastcall Isoch_ProcessSegment(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6,
        int *a7)
{
  __int64 v7; // rbx
  int v9; // edx
  char v12; // si
  __int64 v13; // rax
  __int64 v14; // r9
  unsigned __int64 v15; // r12
  __int64 v16; // rbx
  unsigned __int64 v17; // rdi
  unsigned int v18; // r8d
  int v19; // r9d
  int v20; // edx
  int v21; // ecx
  int v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  unsigned __int64 v29; // rbx
  int v30; // edx
  int v31; // ebx
  int v33; // [rsp+20h] [rbp-68h]
  __int64 v34; // [rsp+98h] [rbp+10h]
  __int64 v35; // [rsp+A8h] [rbp+20h]

  v7 = *(_QWORD *)(a4 + 24);
  v9 = 0;
  v12 = 0;
  v35 = *(_QWORD *)(a4 + 16);
  v34 = *a2;
  v13 = *(_DWORD *)(a4 + 44) & 0xFFFFFFF0;
  v14 = 16LL * a5;
  v15 = v13 + v35 - 16;
  v16 = v14 + v7;
  v17 = v14 + v35;
  if ( v14 + v35 > v15 )
    return v12;
  while ( 1 )
  {
    if ( v16 == *(_QWORD *)a3 )
      v12 = 1;
    v18 = (unsigned __int16)*(_DWORD *)(v17 + 12) >> 10;
    if ( v18 == 1 || v18 == 5 )
      break;
    if ( v18 == 6 )
      goto LABEL_56;
    if ( v18 != 7 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_40;
      v19 = 32;
      goto LABEL_10;
    }
    if ( v12 )
      goto LABEL_43;
    *a7 = 0;
LABEL_41:
    v17 += 16LL;
    v16 += 16LL;
    if ( v17 > v15 )
      return v12;
  }
  if ( !v12 )
  {
    v26 = *(_DWORD *)(v17 + 8) & 0x1FFFF;
    goto LABEL_39;
  }
  v18 = *(unsigned __int8 *)(a3 + 11);
  if ( v18 > 0x1A )
  {
    if ( v18 == 27 )
      goto LABEL_40;
    if ( v18 == 28 )
    {
      *a7 = *(_DWORD *)(a3 + 8) & 0xFFFFFF;
      goto LABEL_40;
    }
    if ( v18 != 31 && v18 != 36 )
      goto LABEL_31;
    goto LABEL_33;
  }
  if ( v18 == 26 )
    goto LABEL_33;
  if ( v18 < 2 )
    goto LABEL_31;
  if ( v18 <= 4 || v18 == 6 )
  {
LABEL_33:
    v27 = *(_DWORD *)(a3 + 8);
    v28 = *(_DWORD *)(v17 + 8);
    if ( (v28 & 0x1FFFFu) < (v27 & 0xFFFFFFu) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_DDDDL(
        *(_QWORD *)(a1[7] + 80LL),
        *(unsigned __int8 *)(a1[6] + 135LL),
        v18,
        *(_DWORD *)(a3 + 8) & 0xFFFFFF,
        v33,
        *(_BYTE *)(a1[6] + 135LL),
        *(_DWORD *)(a1[7] + 144LL),
        v28,
        *(_BYTE *)(a3 + 8),
        *(_BYTE *)(a3 + 11));
      v27 = *(_DWORD *)(a3 + 8);
      v9 = 0;
      v28 = *(_DWORD *)(v17 + 8);
    }
    v25 = v27 & 0xFFFFFF;
    v24 = v28 & 0x1FFFF;
LABEL_26:
    v26 = v24 - v25;
LABEL_39:
    *a7 += v26;
    goto LABEL_40;
  }
  if ( v18 == 20 )
    goto LABEL_40;
  if ( v18 == 23 )
  {
    if ( !*(_BYTE *)(a1[5] + 319LL) )
      goto LABEL_40;
    v21 = *(_DWORD *)(a3 + 8);
    v22 = *(_DWORD *)(v17 + 8);
    if ( (v22 & 0x1FFFFu) < (v21 & 0xFFFFFFu) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = *(unsigned __int8 *)(a1[6] + 135LL);
      LOBYTE(v23) = 2;
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(a1[7] + 80LL),
        v23,
        14,
        30,
        (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
        *(_BYTE *)(a1[6] + 135LL),
        *(_DWORD *)(a1[7] + 144LL),
        v22,
        v21);
      v21 = *(_DWORD *)(a3 + 8);
      v9 = 0;
      v22 = *(_DWORD *)(v17 + 8);
    }
    v24 = v22 & 0x1FFFF;
    v25 = v21 & 0xFFFFFF;
    goto LABEL_26;
  }
LABEL_31:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = 31;
LABEL_10:
    v20 = *(unsigned __int8 *)(a1[6] + 135LL);
    LOBYTE(v20) = 2;
    WPP_RECORDER_SF_DDL(
      *(_QWORD *)(a1[7] + 80LL),
      v20,
      v18,
      v19,
      v33,
      *(_BYTE *)(a1[6] + 135LL),
      *(_DWORD *)(a1[7] + 144LL),
      v18);
    v9 = 0;
  }
LABEL_40:
  if ( !v12 )
    goto LABEL_41;
LABEL_43:
  v29 = v17;
  if ( v17 >= v15 )
    goto LABEL_56;
  while ( 2 )
  {
    if ( (unsigned __int8)HIBYTE(*(_WORD *)(v29 + 12)) >> 2 == 1
      || (unsigned __int8)HIBYTE(*(_WORD *)(v29 + 12)) >> 2 == 5 )
    {
LABEL_50:
      v29 += 16LL;
      if ( v29 >= v15 )
        goto LABEL_56;
      continue;
    }
    break;
  }
  if ( (unsigned __int8)HIBYTE(*(_WORD *)(v29 + 12)) >> 2 == 6 )
    goto LABEL_56;
  if ( (unsigned __int8)HIBYTE(*(_WORD *)(v29 + 12)) >> 2 != 7 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v30 = *(unsigned __int8 *)(a1[6] + 135LL);
      LOBYTE(v30) = 2;
      WPP_RECORDER_SF_DDL(
        *(_QWORD *)(a1[7] + 80LL),
        v30,
        (unsigned __int8)HIBYTE(*(_WORD *)(v29 + 12)) >> 2,
        34,
        v33,
        *(_BYTE *)(a1[6] + 135LL),
        *(_DWORD *)(a1[7] + 144LL),
        (unsigned __int8)HIBYTE(*(_WORD *)(v29 + 12)) >> 2);
    }
    goto LABEL_50;
  }
  v31 = *(unsigned __int16 *)(v29 + 2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(a1[7] + 80LL),
      v9,
      14,
      33,
      (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
      *(_BYTE *)(a1[6] + 135LL),
      *(_DWORD *)(a1[7] + 144LL),
      *((_DWORD *)a2 + 12),
      v31 + 1);
  }
  *(_DWORD *)(v34 + 100) = v31 + 1;
  *((_DWORD *)a2 + 12) = v31 + 1;
LABEL_56:
  if ( v12 )
    *a6 = (__int64)(v17 - v35) >> 4;
  return v12;
}
