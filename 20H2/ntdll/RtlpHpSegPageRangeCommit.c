/*
 * XREFs of RtlpHpSegPageRangeCommit @ 0x180023180
 * Callers:
 *     RtlpHpMetadataCommit @ 0x1800059A8 (RtlpHpMetadataCommit.c)
 *     RtlpHpSegLfhVsDecommit @ 0x1800206C0 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpHpSegLfhVsCommit @ 0x180023040 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpSegReAlloc @ 0x1800271D0 (RtlpHpSegReAlloc.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x1800281F0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegAlloc @ 0x180029B70 (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlpHpSegPageRangeHandleCommit @ 0x180022A00 (RtlpHpSegPageRangeHandleCommit.c)
 *     RtlpHpSegMgrCommit @ 0x180022E90 (RtlpHpSegMgrCommit.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlpLogHeapCommit @ 0x18010A0E8 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapDecommit @ 0x18010A2CC (RtlpLogHeapDecommit.c)
 *     RtlpHpTlLogMemStats @ 0x18010B810 (RtlpHpTlLogMemStats.c)
 */

__int64 __fastcall RtlpHpSegPageRangeCommit(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5, _DWORD *a6)
{
  unsigned int v7; // esi
  unsigned int v10; // r12d
  int v11; // edx
  unsigned int v12; // ebp
  int v13; // eax
  char v14; // r9
  unsigned int v15; // r11d
  unsigned int v16; // r14d
  char v17; // cl
  unsigned __int64 v18; // r10
  int v19; // ebx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r10
  unsigned int v22; // r9d
  unsigned __int64 v23; // r11
  int v24; // edx
  unsigned __int64 v25; // r11
  unsigned int v26; // edx
  unsigned int v27; // ecx
  unsigned __int64 v28; // r11
  unsigned int v29; // ecx
  unsigned int v30; // r8d
  int v31; // edx
  unsigned int v32; // r11d
  __int64 result; // rax
  int v34; // eax
  __int64 v35; // r14
  int v36; // ecx
  __int64 v37; // rcx
  unsigned int v38; // r8d
  int v39; // edx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  int v43; // ecx
  unsigned int v44; // ecx
  unsigned int v45; // r8d
  unsigned int v46; // edx
  int v47; // ebx
  int v48; // r8d
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // r8
  unsigned int v52; // [rsp+40h] [rbp-58h]
  unsigned int v53; // [rsp+40h] [rbp-58h]
  unsigned int v54; // [rsp+44h] [rbp-54h]
  int v55; // [rsp+48h] [rbp-50h]
  int v56; // [rsp+A0h] [rbp+8h]
  int v57; // [rsp+A8h] [rbp+10h]
  unsigned int v58; // [rsp+B0h] [rbp+18h] BYREF
  int v59; // [rsp+B8h] [rbp+20h] BYREF

  v7 = a3;
  v56 = 0;
  if ( (a5 & 0x800000) != 0 )
    v56 = 2;
  v10 = a4 + a3;
  v11 = 0x7FFF;
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
    v11 = 511;
  v55 = v11;
  v12 = (unsigned int)((a2 - (a2 & *(_QWORD *)a1)) >> 5) << *(_BYTE *)(a1 + 9);
  if ( a4 <= 0 )
    v10 = a3 - a4;
  v13 = 0;
  v57 = 0;
  if ( a3 >= v10 )
    goto LABEL_18;
  while ( 1 )
  {
    v14 = *(_BYTE *)(a1 + 9);
    v15 = v11 - (v11 & (v7 + v12)) + 1;
    if ( v15 >= v10 - v7 )
      v15 = v10 - v7;
    v16 = 1 << *(_BYTE *)(a1 + 9);
    v54 = v15;
    v17 = *(_BYTE *)(a1 + 9);
    v18 = (unsigned __int64)v7 >> v14;
    v19 = 0;
    v20 = a2 + 32 * v18;
    v21 = v18 << v14;
    v22 = -1;
    v59 = -1;
    v58 = v7 & (v16 - 1);
    v23 = v15 - 1 + v58;
    v24 = (v16 - 1) & v23;
    v25 = v23 >> v17;
    v26 = v24 + 1;
    v27 = v58;
    v28 = v20 + 32 * v25;
    v52 = v26;
    if ( v58 )
    {
      v45 = v16;
      if ( v20 == v28 )
        v45 = v26;
      v46 = *(unsigned __int8 *)(v20 + 25);
      if ( a4 <= 0 )
      {
        if ( v46 > v58 )
        {
          v47 = v7 & (v16 - 1);
          v45 = *(unsigned __int8 *)(v20 + 25);
          goto LABEL_63;
        }
      }
      else if ( v46 < v45 )
      {
        v47 = v45;
        v27 = *(unsigned __int8 *)(v20 + 25);
LABEL_63:
        v48 = v21 + v45;
        v19 = v47 - v46;
        v59 = v48;
        v22 = v21 + v27;
        if ( v19 )
        {
          v59 = v48;
          if ( a4 <= 0 )
          {
            v59 = v48;
            *(_BYTE *)(v20 + 25) = v19 + v46;
          }
        }
      }
      v20 += 32LL;
      LODWORD(v21) = v16 + v21;
    }
    for ( ; v20 < v28; LODWORD(v21) = v16 + v21 )
    {
      v38 = *(unsigned __int8 *)(v20 + 25);
      v39 = 0;
      v40 = v22;
      if ( a4 > 0 )
      {
        if ( v38 < v16 )
        {
          v22 = v38 + v21;
          v39 = v16 - v38;
          if ( v40 != -1 )
            v22 = v40;
          v41 = v16;
          goto LABEL_45;
        }
      }
      else if ( *(_BYTE *)(v20 + 25) )
      {
        v42 = v21;
        v39 = -v38;
        if ( v22 != -1 )
          v42 = v22;
        v22 = v42;
        v41 = *(unsigned __int8 *)(v20 + 25);
LABEL_45:
        v43 = v21 + v41;
        v59 = v43;
        if ( v39 )
        {
          v59 = v43;
          if ( a4 <= 0 )
          {
            v59 = v43;
            *(_BYTE *)(v20 + 25) = v39 + v38;
          }
        }
      }
      v19 += v39;
      v20 += 32LL;
    }
    v29 = v22;
    if ( v20 != v28 )
      goto LABEL_16;
    v30 = *(unsigned __int8 *)(v20 + 25);
    v31 = 0;
    if ( a4 <= 0 )
    {
      if ( !*(_BYTE *)(v20 + 25) )
        goto LABEL_15;
      v44 = v21;
      v31 = -v30;
      v32 = *(unsigned __int8 *)(v20 + 25);
      if ( v22 != -1 )
        v44 = v22;
      v22 = v44;
LABEL_50:
      v59 = v32 + v21;
      if ( v31 )
      {
        v59 = v32 + v21;
        if ( a4 <= 0 )
        {
          v59 = v32 + v21;
          *(_BYTE *)(v20 + 25) = v31 + v30;
        }
      }
      goto LABEL_15;
    }
    v32 = v52;
    if ( v30 < v52 )
    {
      v22 = v30 + v21;
      v31 = v52 - v30;
      if ( v29 != -1 )
        v22 = v29;
      goto LABEL_50;
    }
LABEL_15:
    v19 += v31;
LABEL_16:
    if ( !v19 )
      goto LABEL_17;
    v34 = v59 - v22;
    v35 = a2 & *(_QWORD *)a1;
    v58 = v22;
    v59 -= v22;
    v53 = v22 + v12;
    if ( v19 <= 0 )
    {
      v36 = 0x4000;
    }
    else
    {
      v36 = 4096;
      if ( (a5 & 2) != 0 )
        v36 = 1073745920;
    }
    result = RtlpHpSegMgrCommit(a1, v35, v22 + v12, v34, v19, v36, v56);
    if ( (int)result < 0 )
      return result;
    if ( v19 > 0 )
      RtlpHpSegPageRangeHandleCommit(a1, a2, (int *)&v58, &v59, 1);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), v19);
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 56), a1 + *(__int16 *)(a1 + 22));
    *(_WORD *)(a2 + 28) = ~(v19 + ~*(_WORD *)(a2 + 28));
    if ( RtlGetCurrentServiceSessionId() )
      v37 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v37 = 2147353472LL;
    if ( *(_BYTE *)v37 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      v49 = *(_QWORD *)(a1 + 56);
      v50 = v35 + (v53 << 12);
      v51 = (unsigned int)(v59 << 12);
      if ( v19 <= 0 )
        RtlpLogHeapDecommit(v49, v50, v51, 13LL);
      else
        RtlpLogHeapCommit(v49, v50, v51, 10LL);
    }
LABEL_17:
    v7 += v54;
    v13 = v19 + v57;
    v57 += v19;
    if ( v7 >= v10 )
    {
LABEL_18:
      if ( a6 )
        *a6 = v13;
      return 0LL;
    }
    v11 = v55;
  }
}
