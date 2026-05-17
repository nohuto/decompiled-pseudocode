/*
 * XREFs of RtlpQueryExtendedInformationHeap @ 0x18007A8F0
 * Callers:
 *     RtlpQueryExtendedHeapInformation @ 0x1800740CC (RtlpQueryExtendedHeapInformation.c)
 * Callees:
 *     RtlpWalkHeapInternal @ 0x180002560 (RtlpWalkHeapInternal.c)
 *     RtlpGetHeapProtection @ 0x18000EE34 (RtlpGetHeapProtection.c)
 *     RtlpHpHeapReportCounters @ 0x18007AAE4 (RtlpHpHeapReportCounters.c)
 *     RtlpEstimateAllocatedSize @ 0x18007ABA8 (RtlpEstimateAllocatedSize.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A4180 (memset.c)
 *     RtlpGetContainingRange @ 0x1800F4094 (RtlpGetContainingRange.c)
 *     RtlpQueryMemoryUsageHeap @ 0x1800F4B70 (RtlpQueryMemoryUsageHeap.c)
 */

__int64 __fastcall RtlpQueryExtendedInformationHeap(__int64 a1, __int64 a2)
{
  int v2; // ebx
  bool v3; // zf
  __int64 v5; // r12
  unsigned int v6; // r15d
  char v7; // r14
  _QWORD *v8; // rsi
  __int64 result; // rax
  unsigned int NumberOfHeaps; // ecx
  __int64 v11; // rax
  _DWORD *v12; // rax
  int v13; // ecx
  __int64 *v14; // rax
  int v15; // ecx
  __int64 v16; // rax
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // r15
  __int16 v19; // si
  int v20; // r15d
  __int64 v21; // rsi
  __int64 v22; // r8
  int HeapProtection; // esi
  unsigned __int64 v24; // rax
  __int64 v25; // r14
  unsigned __int64 v26; // rsi
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // r8
  unsigned __int64 v32; // rax
  __int64 v33; // r14
  __int64 v34; // rax
  int v35; // eax
  _QWORD *v36; // rcx
  __int64 v37; // rax
  int v38; // eax
  int v39; // eax
  char v40; // [rsp+30h] [rbp-D0h]
  int v41; // [rsp+34h] [rbp-CCh] BYREF
  __int64 (__fastcall *v42)(_QWORD *, __int64); // [rsp+38h] [rbp-C8h]
  unsigned int v43; // [rsp+40h] [rbp-C0h]
  __int64 v44; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v45; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v46; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v47; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v48; // [rsp+70h] [rbp-90h]
  __int128 v49; // [rsp+80h] [rbp-80h]
  __int64 v50; // [rsp+90h] [rbp-70h]
  __int64 v51; // [rsp+98h] [rbp-68h]
  _QWORD v52[22]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v53[16]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v54[12]; // [rsp+160h] [rbp+60h] BYREF

  v2 = 0;
  v3 = *(_DWORD *)(a1 + 16) == -571548178;
  v5 = *(_QWORD *)(a2 + 16);
  v6 = *(_DWORD *)a2;
  v42 = *(__int64 (__fastcall **)(_QWORD *, __int64))(a2 + 8);
  v43 = v6;
  v44 = v5;
  v51 = 0LL;
  if ( v3 )
  {
    v7 = 1;
    v40 = 1;
    v8 = (_QWORD *)a1;
    v50 = a1;
  }
  else
  {
    v3 = (*(_DWORD *)(a1 + 116) & 0x1000000) == 0;
    v7 = 0;
    v40 = 0;
    v8 = 0LL;
    v50 = 0LL;
    if ( !v3 )
      return 3221225474LL;
  }
  memset(v52, 0, 0xA8uLL);
  if ( v6 != 0x80000000 )
  {
    LODWORD(v52[0]) = 2;
    v52[1] = 64LL;
    v52[2] = a1;
    if ( v7 )
    {
      v52[4] = v8[16] << 12;
      v52[4] += v8[11] << 12;
      v52[5] = v8[17] << 12;
      v52[5] += v8[12] << 12;
      result = 0LL;
      LODWORD(v52[3]) = 0;
    }
    else
    {
      LODWORD(v52[3]) = *(unsigned __int8 *)(a1 + 418);
      result = RtlpQueryMemoryUsageHeap(a1, &v52[4], &v52[5]);
    }
    if ( (int)result < 0 )
      return result;
    result = v42(v52, v5);
    if ( (int)result < 0 || v6 < 3 )
      return result;
    v47 = 0LL;
    v45 = 0LL;
    v17 = 0LL;
    v48 = 0LL;
    v18 = 0LL;
    v46 = 0LL;
    v49 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        result = RtlpWalkHeapInternal(a1, (__int64)&v47);
        if ( (_DWORD)result == -2147483622 )
          return 0LL;
        if ( (int)result < 0 )
          return result;
        v19 = WORD1(v48);
        if ( (BYTE2(v48) & 2) == 0 )
          break;
        if ( v7 || (WORD1(v48) & 0x8000) != 0 )
        {
          v20 = v51;
          v21 = v47;
        }
        else
        {
          v20 = v47;
          v21 = v47;
          v51 = v47;
          if ( (_QWORD)v47 + 24LL == *(_QWORD *)(a1 + 288) )
            v21 = a1;
        }
        memset(v52, 0, 0xA8uLL);
        v52[3] = DWORD2(v48) + (unsigned __int64)HIDWORD(v48);
        v52[4] = DWORD2(v48);
        LODWORD(v52[0]) = 3;
        v52[1] = 56LL;
        v52[2] = v21;
        result = v42(v52, v44);
        if ( (int)result < 0 )
          return result;
        if ( v7 )
        {
          v17 = v47;
          v18 = v47 + DWORD2(v48);
          v45 = v47;
          v46 = v18;
          HeapProtection = (*(_DWORD *)(v50 + 20) & 0x40000000) != 0 ? 64 : 4;
          v41 = HeapProtection;
        }
        else if ( (WORD1(v48) & 0x8000) != 0 )
        {
          v17 = v47;
          v18 = v47 + DWORD2(v48);
          v45 = v47;
          v46 = v18;
          HeapProtection = RtlpGetHeapProtection(a1, 0, v22);
          v41 = HeapProtection;
        }
        else
        {
          RtlpGetContainingRange(v20, v20, (unsigned int)&v45, (unsigned int)&v46, (__int64)v53, (__int64)&v41);
          v17 = v45;
          v18 = v46;
          HeapProtection = v41;
        }
        memset(v52, 0, 0xA8uLL);
        v52[2] = v17;
        v24 = v18 - v17;
        LODWORD(v52[4]) = 1;
        HIDWORD(v52[4]) = HeapProtection;
LABEL_70:
        v52[3] = v24;
        v52[1] = 56LL;
        LODWORD(v52[0]) = 4;
        result = v42(v52, v44);
        if ( (int)result < 0 )
          return result;
      }
      if ( (WORD1(v48) & 0x4000) != 0 )
        break;
      if ( (WORD1(v48) & 0x1000) != 0 )
      {
        if ( v43 >= 4 )
        {
          memset(v52, 0, 0xA8uLL);
          v24 = *((_QWORD *)&v47 + 1);
          v52[2] = v47;
          v52[4] = 0x100000002LL;
          goto LABEL_70;
        }
      }
      else
      {
        v3 = v7 == 0;
        v33 = v47;
        if ( v3 && ((unsigned __int64)v47 < v17 || (unsigned __int64)v47 > v18) )
        {
          RtlpGetContainingRange(v51, v47, (unsigned int)&v45, (unsigned int)&v46, (__int64)v53, (__int64)&v41);
          if ( v43 < 4 )
          {
            v17 = v45;
            v18 = v46;
            goto LABEL_99;
          }
          memset(v52, 0, 0xA8uLL);
          v17 = v45;
          v18 = v46;
          LODWORD(v52[0]) = 4;
          v52[3] = v46 - v45;
          HIDWORD(v52[4]) = v41;
          v52[1] = 56LL;
          v52[2] = v45;
          LODWORD(v52[4]) = 1;
          result = v42(v52, v44);
          if ( (int)result < 0 )
            return result;
          v19 = WORD1(v48);
          v33 = v47;
        }
        if ( v43 < 4 )
        {
          v7 = v40;
        }
        else
        {
LABEL_80:
          if ( (v19 & 0xF0) == 0 )
          {
            memset(v52, 0, 0xA8uLL);
            v52[4] = *((_QWORD *)&v47 + 1);
            v37 = *(_QWORD *)((char *)&v49 + 4);
            LODWORD(v52[0]) = 5;
            v52[1] = 56LL;
            v52[2] = v33;
            if ( (v19 & 2) != 0 )
              v37 = (unsigned __int8)v48;
            v52[5] = v37;
            v38 = v52[3];
            if ( (v19 & 1) != 0 )
              v38 = 1;
            LODWORD(v52[3]) = v38;
            if ( (v19 & 0x4000) != 0 )
            {
              v39 = v38 | 4;
              goto LABEL_96;
            }
            if ( v19 < 0 )
            {
              v39 = v38 | 8;
LABEL_96:
              LODWORD(v52[3]) = v39;
            }
            v36 = v52;
            goto LABEL_98;
          }
          memset(v54, 0, 0x58uLL);
          v54[4] = *((_QWORD *)&v47 + 1);
          v34 = *(_QWORD *)((char *)&v49 + 4);
          LODWORD(v54[0]) = 5;
          v54[1] = 88LL;
          v54[2] = v33;
          if ( (v19 & 2) != 0 )
            v34 = (unsigned __int8)v48;
          v54[5] = v34;
          v35 = 2;
          if ( (v19 & 0x4000) != 0 )
            v35 = 6;
          LODWORD(v54[3]) = v35;
          if ( (v19 & 1) != 0 )
            LODWORD(v54[3]) = v35 | 1;
          v54[9] = *((_QWORD *)&v48 + 1);
          LODWORD(v54[10]) = v49;
          HIDWORD(v54[7]) = 1;
          v36 = v54;
          v54[8] = 32LL;
LABEL_98:
          result = v42(v36, v44);
          if ( (int)result < 0 )
            return result;
LABEL_99:
          v7 = v40;
        }
      }
    }
    memset(v52, 0, 0xA8uLL);
    v25 = 0LL;
    LODWORD(v52[0]) = 3;
    v26 = 0LL;
    v52[1] = 56LL;
    if ( v40 )
    {
      v52[2] = v47;
      v26 = *(_QWORD *)(v50 + 72);
      if ( (*(_BYTE *)(v50 + 80) & 1) != 0 )
      {
        if ( v26 )
          v26 ^= v50 + 72;
        else
          v26 = 0LL;
      }
      while ( v26 )
      {
        v29 = *(_QWORD *)(v26 + 24) & 0xFFFFFFFFFFFF0000uLL;
        if ( (unsigned __int64)v47 < v29 )
        {
          v30 = *(_QWORD *)v26;
        }
        else
        {
          if ( (unsigned __int64)v47 <= v29 )
            break;
          v30 = *(_QWORD *)(v26 + 8);
        }
        if ( (*(_BYTE *)(v50 + 80) & 1) != 0 && v30 )
          v26 ^= v30;
        else
          v26 = v30;
      }
      v52[3] = (*(_QWORD *)(v26 + 32) & 0xFFFFFFFFFFFFF000uLL) + 4096;
      v28 = *(_QWORD *)(v26 + 32) & 0xFFFFFFFFFFFFF000uLL;
    }
    else
    {
      v27 = v47 - 16;
      _m_prefetchw((const void *)(v47 - 16));
      if ( *(_BYTE *)(v27 + 15) == 5 )
        v27 -= 16LL * *(unsigned __int8 *)(v27 + 14);
      v25 = v27 - 48;
      v52[2] = (v27 - 48) & 0xFFFFFFFFFFFF0000uLL;
      v52[3] = *(_QWORD *)(v27 - 48 + 40);
      v28 = *(_QWORD *)(v27 - 48 + 32);
    }
    v52[4] = v28;
    result = v42(v52, v44);
    if ( (int)result < 0 )
      return result;
    memset(v52, 0, 0xA8uLL);
    LODWORD(v52[0]) = 4;
    v52[1] = 56LL;
    if ( v40 )
    {
      v52[2] = v47;
      v32 = *(_QWORD *)(v26 + 32) & 0xFFFFFFFFFFFFF000uLL;
      LODWORD(v52[4]) = 1;
      v52[3] = v32;
      HIDWORD(v52[4]) = (*(_DWORD *)(v50 + 20) & 0x40000000) != 0 ? 64 : 4;
    }
    else
    {
      v52[2] = v25;
      v52[3] = *(_QWORD *)(v25 + 32);
      LODWORD(v52[4]) = 1;
      HIDWORD(v52[4]) = RtlpGetHeapProtection(a1, 0, v31);
    }
    result = v42(v52, v44);
    if ( (int)result < 0 )
      return result;
    v19 = WORD1(v48);
    v33 = v47;
    goto LABEL_80;
  }
  LODWORD(v52[0]) = v6;
  v52[1] = 168LL;
  if ( v7 )
  {
    RtlpHpHeapReportCounters(v8, v52);
  }
  else
  {
    LODWORD(v52[3]) = *(unsigned __int16 *)(a1 + 208);
    HIDWORD(v52[2]) = 1;
    v52[4] = a1;
    NumberOfHeaps = NtCurrentPeb()->NumberOfHeaps;
    v52[5] = *(_QWORD *)(a1 + 568);
    v11 = *(_QWORD *)(a1 + 576) - *(_QWORD *)(a1 + 664);
    HIDWORD(v52[3]) = NumberOfHeaps - 1;
    v52[6] = v11;
    v52[10] = RtlpEstimateAllocatedSize(a1);
    v52[11] = 16LL * *(_QWORD *)(a1 + 192);
    LODWORD(v52[9]) = *(_DWORD *)(a1 + 604);
    LODWORD(v52[13]) = *(_DWORD *)(a1 + 592);
    v52[8] = *(_QWORD *)(a1 + 584);
    LODWORD(v52[7]) = *(_DWORD *)(a1 + 600);
    HIDWORD(v52[13]) = *(_DWORD *)(a1 + 608);
    LODWORD(v52[14]) = HIDWORD(v52[13]);
    v12 = *(_DWORD **)(a1 + 312);
    if ( v12 )
    {
      v13 = v12[4];
      LODWORD(v52[12]) = v13;
      if ( *(_QWORD *)v12 )
        LODWORD(v52[12]) = *(_DWORD *)(*(_QWORD *)v12 + 16LL) + v13;
    }
    v14 = *(__int64 **)(a1 + 352);
    v15 = *(_DWORD *)(a1 + 620);
    HIDWORD(v52[12]) = v15;
    if ( v14 )
    {
      v16 = *v14;
      if ( v16 != -1 )
        v2 = *(_DWORD *)(v16 + 36);
      HIDWORD(v52[12]) = v2 + v15;
    }
  }
  return v42(v52, v5);
}
