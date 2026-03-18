/*
 * XREFs of MiCommitPageTablesForVad @ 0x14067BDF0
 * Callers:
 *     MiSplitPrivatePage @ 0x1402354F8 (MiSplitPrivatePage.c)
 *     MiCommitExistingVad @ 0x14027A570 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x1402B5EC0 (MiSetProtectionOnSection.c)
 *     MiCommitPageTableRangesForVad @ 0x140543788 (MiCommitPageTableRangesForVad.c)
 *     MiInsertVadCharges @ 0x1406239C0 (MiInsertVadCharges.c)
 * Callees:
 *     RtlAreBitsClearEx @ 0x14021F040 (RtlAreBitsClearEx.c)
 *     MiCreateSystemWsles @ 0x140231820 (MiCreateSystemWsles.c)
 *     MiMakeHyperRangeAccessible @ 0x14027CCC0 (MiMakeHyperRangeAccessible.c)
 *     MiVadPureReserve @ 0x14027D170 (MiVadPureReserve.c)
 *     MiVadLeafPagesPrecharged @ 0x14027D1C0 (MiVadLeafPagesPrecharged.c)
 *     MiVadPageTableChargeLevel @ 0x14027D200 (MiVadPageTableChargeLevel.c)
 *     MiUpdateChargedWsles @ 0x14055A98C (MiUpdateChargedWsles.c)
 *     MiChargeFullProcessCommitment @ 0x14067BD20 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiCommitPageTablesForVad(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _KPROCESS *Process; // r15
  unsigned int v5; // ebx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r8
  __int64 result; // rax
  unsigned __int64 v12; // rbx
  BOOL v13; // eax
  int v14; // r10d
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r8
  unsigned __int64 v18; // rbp
  __int64 v19; // r13
  unsigned __int64 v20; // rsi
  __int64 v21; // r15
  __int64 v22; // rdi
  __int64 v23; // r14
  __int64 v24; // rdx
  __int64 v25; // r12
  unsigned __int64 v26; // rbx
  int v27; // r11d
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  bool v32; // al
  int v33; // [rsp+20h] [rbp-78h]
  BOOL v34; // [rsp+24h] [rbp-74h]
  __int64 v35; // [rsp+28h] [rbp-70h]
  __int64 v36; // [rsp+30h] [rbp-68h]
  ULONG_PTR v37; // [rsp+38h] [rbp-60h]
  unsigned __int64 v38; // [rsp+40h] [rbp-58h]
  unsigned __int64 v39; // [rsp+48h] [rbp-50h]
  unsigned __int64 v40; // [rsp+50h] [rbp-48h]
  __int64 v41; // [rsp+58h] [rbp-40h]
  __int64 v43; // [rsp+B8h] [rbp+20h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v37 = (ULONG_PTR)Process;
  if ( *(_QWORD *)(a1 + 16) != -2LL || !(unsigned int)MiVadPureReserve(a1) )
  {
    v5 = 0;
    v38 = (unsigned int)(a2 >> 21);
    v39 = (unsigned int)(a3 >> 21);
    v43 = 0LL;
    v6 = v38;
    v7 = v39;
    v8 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8];
    do
    {
      v9 = 2 - v5;
      v10 = *(_QWORD *)(v8 + 16 * (v9 + 31) + 48);
      result = MiMakeHyperRangeAccessible(v10 + (v6 >> 3), v10 + (v7 >> 3), &v43);
      if ( (int)result < 0 )
        return result;
      ++v5;
      *(_QWORD *)(v8 + 8 * v9 + 584) += v43;
      v6 >>= 9;
      v7 >>= 9;
    }
    while ( v5 < 2 );
    v12 = Process[1].ActiveProcessorsPadding[8];
    v40 = v12;
    MiVadPageTableChargeLevel(a1);
    v13 = MiVadLeafPagesPrecharged(a1);
    v14 = 0;
    v34 = v13;
    v36 = v15;
    v16 = v12 + 568;
    LODWORD(v43) = 0;
    v41 = v12 + 568;
    v17 = v15;
    while ( 1 )
    {
      v33 = v14;
      v18 = v38;
      v19 = 0LL;
      v20 = v39;
      v21 = 0LL;
      v22 = 0LL;
      v23 = v16;
      do
      {
        v24 = 0LL;
        v25 = 0LL;
        v35 = 0LL;
        v26 = v18;
        if ( v18 <= v20 )
        {
          while ( 1 )
          {
            if ( !_bittest64(*(const signed __int64 **)(v23 + 8), v26) )
            {
              ++v25;
              if ( v14 != 1 )
              {
                LODWORD(v43) = 1;
                if ( !(unsigned int)MiCreateSystemWsles() && (v26 == v18 || (v26 & 7) == 0) )
                {
                  v32 = RtlAreBitsClearEx(v23, v26 & 0xFFFFFFFFFFFFFFF8uLL, 8uLL);
                  v24 = v35;
                  v14 = v33;
                  v27 = v43;
                  if ( v32 )
                    v24 = ++v35;
                }
                goto LABEL_10;
              }
              _bittestandset64(*(signed __int64 **)(v23 + 8), v26);
            }
            v27 = v43;
LABEL_10:
            if ( ++v26 > v20 )
            {
              v17 = v36;
              goto LABEL_12;
            }
          }
        }
        v27 = v43;
LABEL_12:
        if ( v22 >= v17 )
          v19 += v25;
        v21 += v24;
        v18 >>= 9;
        v20 >>= 9;
        ++v22;
        v23 -= 16LL;
      }
      while ( v22 < 3 );
      if ( v14 )
        return 0LL;
      v28 = v21 + v19;
      if ( !v34 && !(unsigned int)MiVadPureReserve(a1) )
      {
        v30 = *(unsigned int *)(a1 + 52);
        LODWORD(v30) = v30 & 0x7FFFFFFF;
        v31 = v30 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
        if ( v31 != 0x7FFFFFFFELL )
          v28 += v31;
      }
      if ( v28 )
      {
        result = MiChargeFullProcessCommitment(v37, v28);
        if ( (int)result < 0 )
          return result;
        v17 = v36;
        v27 = v43;
      }
      if ( v27 != 1 )
        return 0LL;
      *(_QWORD *)(v40 + 288) += v19;
      if ( v21 )
        MiUpdateChargedWsles(v37 + 1664);
      v16 = v41;
      v14 = 1;
    }
  }
  v29 = *(unsigned int *)(a1 + 52);
  LODWORD(v29) = v29 & 0x7FFFFFFF;
  if ( !(v29 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31)) )
    return 0LL;
  result = MiChargeFullProcessCommitment(
             (ULONG_PTR)Process,
             v29 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31));
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
