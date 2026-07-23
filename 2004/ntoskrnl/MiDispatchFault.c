/*
 * XREFs of MiDispatchFault @ 0x1402A0EE0
 * Callers:
 *     MiInPagePageTable @ 0x140258DB0 (MiInPagePageTable.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 * Callees:
 *     MiWorkingSetIsContended @ 0x1402589C0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x14025A290 (MiPageTableLockIsContended.c)
 *     MiAccessCheck @ 0x14026E080 (MiAccessCheck.c)
 *     MiComputeMaximumFaultCluster @ 0x1402A1630 (MiComputeMaximumFaultCluster.c)
 *     MiResolveDemandZeroFault @ 0x1402A1B30 (MiResolveDemandZeroFault.c)
 *     MiResolveProtoPteFault @ 0x1402A7870 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1402A8C30 (MiResolveTransitionFault.c)
 *     MiAdvanceFaultList @ 0x140312138 (MiAdvanceFaultList.c)
 *     MiResolvePageFileFault @ 0x140313F9C (MiResolvePageFileFault.c)
 *     MiCheckProtoAccess @ 0x140315B68 (MiCheckProtoAccess.c)
 *     KeShouldYieldProcessor @ 0x140327BB0 (KeShouldYieldProcessor.c)
 *     MiAdjustFaultList @ 0x140349C00 (MiAdjustFaultList.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRspInIstStack @ 0x140513788 (KiRspInIstStack.c)
 */

__int64 __fastcall MiDispatchFault(__int64 a1, _QWORD *a2)
{
  __m128i v2; // xmm3
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __m128i v6; // xmm2
  __int128 v7; // xmm4
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int64 v11; // r13
  unsigned __int64 v12; // r15
  unsigned int v13; // esi
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rax
  __int64 Flink; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // r14
  __int64 v20; // r11
  unsigned __int64 v21; // rbx
  int v22; // ecx
  __int64 v23; // r10
  __int16 v24; // ax
  void *v25; // rcx
  int v26; // eax
  int v27; // ebx
  __int8 v28; // al
  char v29; // dl
  __int64 v30; // xmm1_8
  __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // r8
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v44; // [rsp+40h] [rbp-C8h]
  __int64 v45; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v46; // [rsp+50h] [rbp-B8h]
  _QWORD *v47; // [rsp+58h] [rbp-B0h]
  __m128i v48; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v49; // [rsp+78h] [rbp-90h]
  __int128 v50; // [rsp+88h] [rbp-80h]
  __m256i v51; // [rsp+98h] [rbp-70h]
  __int128 v52; // [rsp+B8h] [rbp-50h]
  __int128 v53; // [rsp+C8h] [rbp-40h]
  __int128 v54; // [rsp+D8h] [rbp-30h]
  __int64 v55; // [rsp+E8h] [rbp-20h]

  *a2 = 0LL;
  v2 = *(__m128i *)a1;
  v4 = *(_OWORD *)(a1 + 32);
  v5 = *(_OWORD *)(a1 + 80);
  v6 = *(__m128i *)(a1 + 48);
  v7 = *(_OWORD *)(a1 + 16);
  v47 = a2;
  v50 = v4;
  v8 = *(_OWORD *)(a1 + 64);
  v45 = 0LL;
  v52 = v5;
  v9 = *(_OWORD *)(a1 + 112);
  *(_OWORD *)&v51.m256i_u64[2] = v8;
  v10 = *(_OWORD *)(a1 + 96);
  v54 = v9;
  v48 = v2;
  v53 = v10;
  *(_QWORD *)&v10 = *(_QWORD *)(a1 + 128);
  *(__m128i *)v51.m256i_i8 = v6;
  v48.m128i_i64[1] = _mm_srli_si128(v2, 8).m128i_u64[0];
  v11 = v48.m128i_i8[8] & 2;
  v55 = v10;
  v46 = _mm_srli_si128(v6, 8).m128i_u64[0];
  v12 = (((unsigned __int64)v2.m128i_i64[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v49 = v7;
  v13 = 0;
  if ( (v7 & 1) == 0 || (v44 = v7 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v7 & 0xFFFFFFFFFFFFFFFEuLL) != 5) )
  {
    if ( (v7 & 1) == 0
      || (v44 = v7 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v7 & 0xFFFFFFFFFFFFFFFEuLL) != 2)
      && ((v7 & 1) == 0 || (v44 = v7 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v7 & 0xFFFFFFFFFFFFFFFEuLL) != 1)) )
    {
      v44 = 0LL;
    }
  }
  v14 = 0LL;
  v15 = MiComputeMaximumFaultCluster(&v48, 0LL);
  v19 = v15;
  if ( v15 > 1 )
    v51.m256i_i8[21] |= 4u;
  v51.m256i_i8[21] &= ~2u;
  if ( !v15 )
    goto LABEL_35;
  v20 = v49;
  while ( 1 )
  {
    if ( (v51.m256i_i8[21] & 8) != 0 )
    {
      if ( (*(_BYTE *)(v46 + 187) & 8) != 0
        || (*(_BYTE *)(v46 + 184) & 0x40) != 0
        && (unsigned __int64)(*(_QWORD *)(v46 + 120) + 1LL) >= *(_QWORD *)(v46 + 152)
        || MiWorkingSetIsContended(v46)
        || (v51.m256i_i8[21] & 1) != 0
        || (unsigned int)MiPageTableLockIsContended(v39, ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
        || KeShouldYieldProcessor() )
      {
        goto LABEL_35;
      }
      v20 = v49;
    }
    v21 = *(_QWORD *)v12;
    if ( v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v21 & 1) != 0
        && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
      {
        Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v41 = *(_QWORD *)(Flink + 8 * ((v12 >> 3) & 0x1FF));
          Flink = v21 | 0x20;
          if ( (v41 & 0x20) == 0 )
            Flink = *(_QWORD *)v12;
          v21 = Flink;
          if ( (v41 & 0x42) != 0 )
            v21 = Flink | 0x42;
        }
      }
      v20 = v49;
    }
    if ( !v21 || (v21 & 1) != 0 )
    {
      v22 = 0;
      goto LABEL_27;
    }
    LODWORD(v43) = 256;
    if ( (v21 & 0x400) != 0 )
    {
      if ( (_QWORD)v53 )
        goto LABEL_14;
      v32 = MiCheckProtoAccess(v12, &v43);
      v20 = v49;
      if ( !v32 )
      {
        v22 = -1073741819;
        goto LABEL_27;
      }
      LODWORD(v33) = v43;
      *(_QWORD *)&v53 = v32;
    }
    else
    {
      if ( (v51.m256i_i8[21] & 8) == 0 )
        goto LABEL_14;
      v33 = (v21 >> 5) & 0x1F;
    }
    if ( (_DWORD)v33 == 256 )
      goto LABEL_14;
    if ( (v33 & 0xFFFFFFF8) == 0x10 && (v51.m256i_i8[21] & 8) != 0 )
    {
      v22 = -1073741819;
      goto LABEL_27;
    }
    v34 = MiAccessCheck((unsigned __int64 *)v12, v11, (v52 & 0x40) != 0, v33, v20, 0);
    v20 = v49;
    v22 = v34;
    if ( !v34 )
    {
LABEL_14:
      if ( (v49 & 1) != 0 && *(_BYTE *)(v20 & 0xFFFFFFFFFFFFFFFEuLL) == 2 )
      {
        MiAdjustFaultList(&v48);
        v20 = v49;
      }
      if ( (v21 & 0x400) != 0 )
      {
        v35 = MiResolveProtoPteFault(&v48, v11, &v45);
        v20 = v49;
        v22 = v35;
        goto LABEL_27;
      }
      if ( (v21 & 0x800) != 0 )
      {
        v36 = MiResolveTransitionFault(&v48, v12, 0LL, v11, &v45);
        v20 = v49;
        v22 = v36;
        goto LABEL_27;
      }
      if ( (v21 & 4) != 0 )
      {
        if ( (v51.m256i_i8[21] & 8) != 0 )
        {
          if ( v44 )
          {
            MiAdvanceFaultList(v44, Flink, v17, v18);
            v20 = v49;
          }
          v22 = -1073740748;
        }
        else
        {
          v40 = MiResolvePageFileFault(&v48, v12, 0LL, &v45);
          v20 = v49;
          v22 = v40;
        }
        goto LABEL_27;
      }
      v22 = 0;
      v23 = v20 & 1;
      if ( (v20 & 1) != 0
        && *(_BYTE *)(v20 & 0xFFFFFFFFFFFFFFFEuLL) == 1
        && (*(_DWORD *)((v20 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 0x4000) == 0 )
      {
        goto LABEL_27;
      }
      if ( (v20 & 1) == 0 )
        goto LABEL_20;
      if ( *(_BYTE *)(v20 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
      {
        if ( (v20 & 1) == 0 )
          goto LABEL_20;
        if ( *(_BYTE *)(v20 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
          goto LABEL_98;
        if ( (v20 & 1) == 0 )
        {
LABEL_20:
          if ( !v20 )
            goto LABEL_26;
          v24 = *(_WORD *)(v20 + 368);
          LOBYTE(Flink) = 0;
          if ( v24 == 16 )
          {
            if ( (*(_DWORD *)(v20 + 376) & 0x200) == 0
              && ((unsigned int)KiRspInIstStack(3LL, *(_QWORD *)(v20 + 384)) || (unsigned int)KiRspInIstStack(2LL, v42)) )
            {
              goto LABEL_26;
            }
            v25 = &ExpInterlockedPopEntrySListFault;
            v37 = *(_QWORD *)(v20 + 360);
            LOBYTE(Flink) = KiDynamicTraceEnabled
                         && v37 >= ControlPc
                         && v37 < qword_140CFCBE0
                         && KeGetCurrentIrql() == 15;
          }
          else
          {
            if ( v24 != 51 )
              goto LABEL_26;
            v25 = (void *)KeUserPopEntrySListFault;
          }
          if ( *(void **)(v20 + 360) != v25 && (_BYTE)Flink != 1 )
            goto LABEL_26;
          goto LABEL_98;
        }
        if ( *(_BYTE *)(v20 & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
        {
          if ( (v20 & 1) != 0 )
            goto LABEL_26;
          goto LABEL_20;
        }
      }
LABEL_98:
      if ( v23 && *(_BYTE *)(v20 & 0xFFFFFFFFFFFFFFFEuLL) == 6
        || v48.m128i_i64[0] < 0xFFFF800000000000uLL
        || ((v21 >> 5) & 0x18) != 0x10 )
      {
LABEL_26:
        v26 = MiResolveDemandZeroFault(&v48, v12, 0LL, v11);
        v20 = v49;
        v22 = v26;
        goto LABEL_27;
      }
      v22 = -1073741819;
    }
LABEL_27:
    v27 = v22;
    if ( (v51.m256i_i8[21] & 8) != 0 )
      v27 = v13;
    if ( v22 < 0 )
      break;
    v48.m128i_i64[0] += 4096LL;
    v28 = v51.m256i_i8[21] | 8;
    v12 += 8LL;
    v51.m256i_i8[21] = v28;
    ++v14;
    *((_QWORD *)&v49 + 1) = v12;
    if ( (v28 & 2) != 0 )
    {
      v13 = v27;
      v51.m256i_i8[21] = v28 & 0xFD;
      if ( v14 == v19 )
        goto LABEL_35;
      v19 = MiComputeMaximumFaultCluster(&v48, v19 - v14);
      if ( v19 == 1 && (v51.m256i_i8[21] & 4) != 0 )
        v51.m256i_i8[21] &= ~4u;
      v20 = v49;
      v14 = 0LL;
    }
    *(_QWORD *)&v53 = 0LL;
    if ( (v20 & 1) == 0 || *(_BYTE *)(v20 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
    {
      v11 = 0LL;
      v48.m128i_i64[1] &= ~2uLL;
    }
    if ( (v20 & 1) != 0 )
    {
      v38 = v20 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( *(_BYTE *)(v20 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
      {
        v20 &= ~1uLL;
        *(_QWORD *)&v49 = v38;
      }
    }
    v13 = v27;
    if ( v14 >= v19 )
      goto LABEL_35;
  }
  v13 = v27;
  if ( v22 != -1073741802 )
  {
LABEL_35:
    v29 = v52;
    goto LABEL_36;
  }
  v29 = v52;
  if ( (v52 & 0x100) != 0 )
    *(_DWORD *)(a1 + 80) |= 0x100u;
LABEL_36:
  v30 = v51.m256i_i64[3];
  *(_OWORD *)(a1 + 112) = v54;
  *(_QWORD *)(a1 + 128) = v55;
  *(_QWORD *)(a1 + 104) = *((_QWORD *)&v53 + 1);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)&v51.m256i_u64[1];
  *(_QWORD *)(a1 + 72) = v30;
  if ( v29 < 0 )
    *(_DWORD *)(a1 + 80) ^= ((unsigned __int8)v29 ^ (unsigned __int8)*(_DWORD *)(a1 + 80)) & 0x80;
  if ( v13 == -1073532109 )
    *v47 = v45;
  return v13;
}
