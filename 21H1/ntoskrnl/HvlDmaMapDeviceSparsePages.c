/*
 * XREFs of HvlDmaMapDeviceSparsePages @ 0x1404EF050
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x14038CDD0 (HvcallFastExtended.c)
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HvlpHandleInsufficientMemory @ 0x1404EC608 (HvlpHandleInsufficientMemory.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1404F5258 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1404F5274 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlDmaMapDeviceSparsePages(__int64 a1, int a2, __int64 a3, unsigned int *a4)
{
  unsigned int *v4; // rdi
  __int64 v5; // r10
  unsigned __int64 v9; // rax
  unsigned int v10; // ecx
  __int64 v11; // r14
  int v12; // r15d
  int v13; // esi
  _QWORD *v14; // rcx
  unsigned int v15; // r8d
  int v16; // eax
  __int64 *v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // r10
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int16 v23; // bx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // eax
  __int64 v29; // [rsp+38h] [rbp-89h]
  __int64 v30; // [rsp+40h] [rbp-81h]
  __int128 v32; // [rsp+50h] [rbp-71h] BYREF
  __int128 v33; // [rsp+60h] [rbp-61h]
  _BYTE v34[112]; // [rsp+78h] [rbp-49h] BYREF

  v4 = a4;
  v5 = a3;
  v32 = 0LL;
  v33 = 0LL;
  if ( *(_BYTE *)(a1 + 4) )
    return 3221225659LL;
  v9 = *(_QWORD *)a4;
  v10 = 0;
  v11 = 0LL;
  if ( *(_QWORD *)a4 )
  {
    v12 = 0;
    v13 = 199;
    do
    {
      if ( v9 <= 5 )
      {
        v14 = v34;
        if ( v9 >= 5 )
          v15 = 5;
        else
          v15 = *v4;
        LOBYTE(a4) = 1;
        v13 |= 0x10000u;
      }
      else
      {
        v14 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v32, 1, 0LL, 0LL);
        if ( *(_QWORD *)v4 >= 0xFEuLL )
          v15 = 254;
        else
          v15 = *v4;
        v5 = a3;
        LOBYTE(a4) = 0;
        v13 &= ~0x10000u;
      }
      LODWORD(v29) = v13;
      v14[1] = 0LL;
      v14[2] = 0LL;
      v14[3] = 0LL;
      *v14 = -1LL;
      *((_DWORD *)v14 + 4) &= 0xFFFFFFF0;
      *((_DWORD *)v14 + 5) = *(_DWORD *)a1;
      v16 = 1024;
      if ( a2 )
        v16 = a2;
      *((_BYTE *)v14 + 24) = 0;
      *((_DWORD *)v14 + 7) = v16;
      if ( v15 )
      {
        v17 = (__int64 *)(v5 + 8 * v11);
        v18 = v14 + 5;
        v19 = v15;
        do
        {
          *(v18 - 1) = *v17 << 12;
          v20 = *v17++;
          *v18 = v20;
          v18 += 2;
          --v19;
        }
        while ( v19 );
      }
      v12 ^= ((unsigned __int16)v15 ^ (unsigned __int16)v12) & 0xFFF;
      HIDWORD(v29) = v12;
      if ( (_BYTE)a4 )
      {
        v21 = HvcallFastExtended(v29, (__int64)v34, 16 * (v15 + 2), 0LL, 0);
        v23 = v21;
        WORD2(v30) = WORD2(v21);
      }
      else
      {
        v30 = HvcallInitiateHypercall(v13, *((__int64 *)&v33 + 1), 0LL, (__int64)a4);
        v23 = v30;
        HvlpReleaseHypercallPage((__int64)&v32);
      }
      v24 = WORD2(v30) & 0xFFF;
      *(_QWORD *)v4 -= v24;
      v11 += v24;
      if ( (unsigned __int8)HvlpHvStatusIsInsufficientMemory(v23, v22) )
        v28 = HvlpHandleInsufficientMemory(v26, v25, v27);
      else
        v28 = HvlpHvToNtStatus(v26);
      v10 = v28;
      if ( v28 < 0 )
        break;
      v9 = *(_QWORD *)v4;
      v5 = a3;
    }
    while ( *(_QWORD *)v4 );
  }
  *(_QWORD *)v4 = v11;
  return v10;
}
