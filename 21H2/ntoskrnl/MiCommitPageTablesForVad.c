/*
 * XREFs of MiCommitPageTablesForVad @ 0x1406E8900
 * Callers:
 *     MiCommitExistingVad @ 0x1402BD690 (MiCommitExistingVad.c)
 *     MiSplitPrivatePage @ 0x140317D00 (MiSplitPrivatePage.c)
 *     MiSetProtectionOnSection @ 0x14033D9C0 (MiSetProtectionOnSection.c)
 *     MiCommitPageTableRangesForVad @ 0x1405454CC (MiCommitPageTableRangesForVad.c)
 *     MiInsertVadCharges @ 0x140704050 (MiInsertVadCharges.c)
 * Callees:
 *     MiCreateSystemWsles @ 0x14023F040 (MiCreateSystemWsles.c)
 *     MiMakeHyperRangeAccessible @ 0x1402BFDE0 (MiMakeHyperRangeAccessible.c)
 *     MiVadPureReserve @ 0x1402C0290 (MiVadPureReserve.c)
 *     MiVadLeafPagesPrecharged @ 0x1402C02E0 (MiVadLeafPagesPrecharged.c)
 *     MiVadPageTableChargeLevel @ 0x1402C0320 (MiVadPageTableChargeLevel.c)
 *     RtlAreBitsClearEx @ 0x140353CE0 (RtlAreBitsClearEx.c)
 *     MiUpdateChargedWsles @ 0x14055C69C (MiUpdateChargedWsles.c)
 *     MiChargeFullProcessCommitment @ 0x1406E8830 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiCommitPageTablesForVad(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, _DWORD *a4)
{
  _KPROCESS *Process; // r15
  unsigned int v6; // ebx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  __int64 v10; // r14
  __int64 v11; // r8
  __int64 result; // rax
  unsigned __int64 v13; // rbx
  BOOL v14; // eax
  int v15; // r10d
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // r8
  unsigned __int64 v19; // rbp
  __int64 v20; // r13
  unsigned __int64 v21; // rsi
  __int64 v22; // r15
  __int64 v23; // rdi
  __int64 v24; // r14
  __int64 v25; // rdx
  __int64 v26; // r12
  unsigned __int64 v27; // rbx
  int v28; // r11d
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  bool v33; // al
  int v34; // [rsp+20h] [rbp-78h]
  BOOL v35; // [rsp+24h] [rbp-74h]
  __int64 v36; // [rsp+28h] [rbp-70h]
  __int64 v37; // [rsp+30h] [rbp-68h]
  __int64 v38; // [rsp+38h] [rbp-60h]
  unsigned __int64 v39; // [rsp+40h] [rbp-58h]
  unsigned __int64 v40; // [rsp+48h] [rbp-50h]
  unsigned __int64 v41; // [rsp+50h] [rbp-48h]
  __int64 v42; // [rsp+58h] [rbp-40h]
  __int64 v44; // [rsp+B8h] [rbp+20h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v38 = (__int64)Process;
  if ( *(_QWORD *)(a1 + 16) != -2LL || !(unsigned int)MiVadPureReserve(a1) )
  {
    v6 = 0;
    v39 = (unsigned int)(a2 >> 21);
    v40 = (unsigned int)(a3 >> 21);
    v44 = 0LL;
    v7 = v39;
    v8 = v40;
    v9 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8];
    do
    {
      v10 = 2 - v6;
      v11 = *(_QWORD *)(v9 + 16 * (v10 + 31) + 48);
      result = MiMakeHyperRangeAccessible(v11 + (v7 >> 3), v11 + (v8 >> 3), &v44, a4);
      if ( (int)result < 0 )
        return result;
      ++v6;
      *(_QWORD *)(v9 + 8 * v10 + 584) += v44;
      v7 >>= 9;
      v8 >>= 9;
    }
    while ( v6 < 2 );
    v13 = Process[1].ActiveProcessorsPadding[8];
    v41 = v13;
    MiVadPageTableChargeLevel(a1);
    v14 = MiVadLeafPagesPrecharged(a1);
    v15 = 0;
    v35 = v14;
    v37 = v16;
    v17 = v13 + 568;
    LODWORD(v44) = 0;
    v42 = v13 + 568;
    v18 = v16;
    while ( 1 )
    {
      v34 = v15;
      v19 = v39;
      v20 = 0LL;
      v21 = v40;
      v22 = 0LL;
      v23 = 0LL;
      v24 = v17;
      do
      {
        v25 = 0LL;
        v26 = 0LL;
        v36 = 0LL;
        v27 = v19;
        if ( v19 <= v21 )
        {
          while ( 1 )
          {
            if ( !_bittest64(*(const signed __int64 **)(v24 + 8), v27) )
            {
              ++v26;
              if ( v15 != 1 )
              {
                LODWORD(v44) = 1;
                if ( !(unsigned int)MiCreateSystemWsles() && (v27 == v19 || (v27 & 7) == 0) )
                {
                  v33 = RtlAreBitsClearEx(v24, v27 & 0xFFFFFFFFFFFFFFF8uLL, 8uLL);
                  v25 = v36;
                  v15 = v34;
                  v28 = v44;
                  if ( v33 )
                    v25 = ++v36;
                }
                goto LABEL_10;
              }
              _bittestandset64(*(signed __int64 **)(v24 + 8), v27);
            }
            v28 = v44;
LABEL_10:
            if ( ++v27 > v21 )
            {
              v18 = v37;
              goto LABEL_12;
            }
          }
        }
        v28 = v44;
LABEL_12:
        if ( v23 >= v18 )
          v20 += v26;
        v22 += v25;
        v19 >>= 9;
        v21 >>= 9;
        ++v23;
        v24 -= 16LL;
      }
      while ( v23 < 3 );
      if ( v15 )
        return 0LL;
      v29 = v22 + v20;
      if ( !v35 && !(unsigned int)MiVadPureReserve(a1) )
      {
        v31 = *(unsigned int *)(a1 + 52);
        LODWORD(v31) = v31 & 0x7FFFFFFF;
        v32 = v31 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
        if ( v32 != 0x7FFFFFFFELL )
          v29 += v32;
      }
      if ( v29 )
      {
        result = MiChargeFullProcessCommitment(v38, v29);
        if ( (int)result < 0 )
          return result;
        v18 = v37;
        v28 = v44;
      }
      if ( v28 != 1 )
        return 0LL;
      *(_QWORD *)(v41 + 288) += v20;
      if ( v22 )
        MiUpdateChargedWsles(v38 + 1664);
      v17 = v42;
      v15 = 1;
    }
  }
  v30 = *(unsigned int *)(a1 + 52);
  LODWORD(v30) = v30 & 0x7FFFFFFF;
  if ( !(v30 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31)) )
    return 0LL;
  result = MiChargeFullProcessCommitment(
             (__int64)Process,
             v30 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31));
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
