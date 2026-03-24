/*
 * XREFs of MiReservePageFileSpace @ 0x14023D190
 * Callers:
 *     MiFillNoReservationCluster @ 0x1402BF8A0 (MiFillNoReservationCluster.c)
 *     MiWsleFlush @ 0x1403274F0 (MiWsleFlush.c)
 * Callees:
 *     MiReservePageFileSpaceForPage @ 0x14023D660 (MiReservePageFileSpaceForPage.c)
 *     MiUpdatePageFileHighInPte @ 0x14023DD80 (MiUpdatePageFileHighInPte.c)
 *     MiLocateAddress @ 0x14025B810 (MiLocateAddress.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiFindFreePageFileSpace @ 0x14026A714 (MiFindFreePageFileSpace.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1402ACB24 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 *     MiReleasePageFileSectionInfo @ 0x140387A84 (MiReleasePageFileSectionInfo.c)
 *     MiGetPageFileSectionForReservation @ 0x140387AC0 (MiGetPageFileSectionForReservation.c)
 */

char __fastcall MiReservePageFileSpace(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 Address; // rax
  signed __int32 v5; // esi
  unsigned int v6; // r12d
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 v9; // r10
  int v10; // edx
  unsigned __int64 v11; // r15
  __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r15
  unsigned int v17; // edi
  unsigned __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // r12
  unsigned int v22; // r13d
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r12
  __int64 v25; // r13
  unsigned int v26; // r15d
  unsigned int v27; // r10d
  __int64 v28; // rdx
  __int64 v29; // r8
  int v30; // r9d
  unsigned int v31; // r10d
  unsigned __int64 v32; // rsi
  unsigned int v33; // edi
  unsigned __int64 i; // r14
  int v35; // eax
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rdx
  __int64 v39; // r8
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rdx
  __int64 v42; // r15
  __int64 v43; // rdx
  unsigned int v44; // eax
  __int64 v45; // r15
  int v46; // eax
  unsigned int v48; // [rsp+28h] [rbp-29h]
  unsigned int v49; // [rsp+28h] [rbp-29h]
  int v50; // [rsp+2Ch] [rbp-25h]
  unsigned __int64 updated; // [rsp+30h] [rbp-21h] BYREF
  unsigned __int64 v52; // [rsp+38h] [rbp-19h] BYREF
  unsigned __int64 v53; // [rsp+40h] [rbp-11h] BYREF
  __int128 v54; // [rsp+48h] [rbp-9h] BYREF
  __int128 v55; // [rsp+58h] [rbp+7h]
  __int64 v56; // [rsp+68h] [rbp+17h]
  __int64 v58; // [rsp+C8h] [rbp+77h]
  signed __int32 v59; // [rsp+D0h] [rbp+7Fh]

  v58 = a3;
  v54 = 0LL;
  v56 = 0LL;
  LODWORD(Address) = *(_DWORD *)(a1 + 872);
  v5 = Address;
  v59 = Address;
  v6 = Address & 0x3FF;
  v55 = 0LL;
  if ( v6 < 0x10 )
    return Address;
  v7 = 0LL;
  v50 = 0;
  if ( !a3 )
  {
    v17 = 1;
    LODWORD(Address) = MiGetPageFileSectionForReservation(a2, &v54, 1LL);
    if ( !(_DWORD)Address )
      return Address;
    v16 = *((_QWORD *)&v55 + 1);
    updated = v55;
    v50 = 1;
LABEL_14:
    a3 = v58;
    goto LABEL_15;
  }
  if ( (*(_BYTE *)(a3 + 184) & 7) == 0 )
  {
    v8 = a2 << 25 >> 16;
    Address = MiLocateAddress(v8);
    v7 = Address;
    if ( !Address )
      return Address;
    v10 = *(_DWORD *)(Address + 48);
    LOBYTE(Address) = (v10 & 0x100004) == 0x100000;
    if ( (((v10 & 0x70) == 0) & (unsigned __int8)Address) == 0
      || (v10 & 0x100000) != 0 && ((v10 & 0x400000) != 0 || (v10 & 0xC0000u) >= 0x80000) )
    {
      return Address;
    }
    v11 = v8 & 0xFFFFFFFFFFE00000uLL;
    if ( v11 >= (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32)) << 12 )
      v12 = (v11 >> 9) & 0x7FFFFFFFF8LL;
    else
      v12 = 8 * ((*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32)) & 0xFFFFFFFFFLL);
    v13 = v12 + v9;
    v14 = v11 + 2093056;
    v15 = *(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32);
    updated = v13;
    if ( v14 <= v15 << 12 )
    {
      v16 = v9 + ((v14 >> 9) & 0x7FFFFFFFF8LL);
      updated = v13;
    }
    else
    {
      v16 = v9 + 8 * (v15 & 0xFFFFFFFFFLL);
    }
    v17 = 1;
    goto LABEL_14;
  }
  updated = a2 & 0xFFFFFFFFFFFFF000uLL;
  v16 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  v17 = 1;
LABEL_15:
  v18 = updated;
  v19 = ((__int64)(v16 - updated) >> 3) + 1;
  if ( v19 > v6 )
  {
    v42 = (__int64)(v16 - a2) >> 3;
    v43 = (__int64)(a2 - updated) >> 3;
    v44 = v19 - v6;
    if ( (unsigned int)v42 < v44 )
    {
      v46 = v44 - v42;
      v45 = 0LL;
      LODWORD(v43) = v43 - v46;
    }
    else
    {
      v45 = (unsigned int)v42 - v44;
    }
    v16 = a2 + 8 * v45;
    v18 = a2 - 8LL * (unsigned int)v43;
    updated = v18;
  }
  if ( a3 )
    v17 = 129;
  if ( v7 && *(int *)(v7 + 52) < 0 )
    v17 |= (*(_DWORD *)(v7 + 48) & 0xF80 | 0x40u) >> 5;
  v20 = 0LL;
  v21 = a2 - 8;
  v22 = 0;
  v52 = 0LL;
  v48 = 0;
  if ( a2 - 8 >= v18 )
  {
    do
    {
      if ( !(unsigned int)MiReservePageFileSpaceForPage(a1, v21, v17, &v52) )
        break;
      ++v22;
      v21 -= 8LL;
    }
    while ( v21 >= updated );
    v20 = v52;
    v5 = v59;
    v48 = v22;
  }
  v23 = 0LL;
  v24 = a2 + 8;
  v25 = 0LL;
  v53 = 0LL;
  if ( a2 + 8 <= v16 )
  {
    do
    {
      if ( !(unsigned int)MiReservePageFileSpaceForPage(a1, v24, v17, &v53) )
        break;
      v25 = (unsigned int)(v25 + 1);
      v24 += 8LL;
    }
    while ( v24 <= v16 );
    v23 = v53;
    v5 = v59;
  }
  v26 = v48;
  v27 = v25 + v48 + 1;
  v49 = v27;
  if ( v20 )
  {
    v38 = v20;
    if ( qword_140C4DF40 && (v20 & 0x10) == 0 )
      v38 = v20 & ~qword_140C4DF40;
    updated = MiUpdatePageFileHighInPte(v20, HIDWORD(v38) + 1, a3);
  }
  else
  {
    if ( !v23 )
      goto LABEL_31;
    v39 = qword_140C4DF40;
    v40 = v23;
    v41 = v23;
    if ( qword_140C4DF40 && (v23 & 0x10) == 0 )
      v40 = v23 & ~qword_140C4DF40;
    if ( v27 < HIDWORD(v40) )
    {
      if ( qword_140C4DF40 && (v23 & 0x10) == 0 )
      {
        v39 = ~qword_140C4DF40;
        v41 = ~qword_140C4DF40 & v23;
      }
      updated = MiUpdatePageFileHighInPte(v23, HIDWORD(v41) - v27, v39);
    }
    else
    {
LABEL_31:
      updated = 0LL;
    }
  }
  LODWORD(Address) = MI_IS_PTE_IN_WS_SWAP_SET(a1, &updated);
  if ( (_DWORD)Address )
  {
    updated = 0LL;
    v30 = 16;
  }
  if ( v31 == 1 )
  {
    if ( v30 )
      goto LABEL_47;
    v30 = 64;
  }
  LODWORD(Address) = MiFindFreePageFileSpace(a1, &updated, v31, v30 | 1u);
  v28 = v49;
  v29 = (unsigned int)Address;
  if ( (_DWORD)Address == v49 )
    goto LABEL_36;
  LOBYTE(Address) = _InterlockedCompareExchange(
                      (volatile signed __int32 *)(a1 + 872),
                      v5 ^ ((unsigned __int16)Address ^ (unsigned __int16)v5) & 0x3FF,
                      v5);
  if ( (_DWORD)v29 )
  {
    v28 = v49 - (unsigned int)v29;
    if ( (unsigned int)v25 < (unsigned int)v28 )
    {
      v28 = (unsigned int)(v28 - v25);
      v25 = 0LL;
      v26 -= v28;
    }
    else
    {
      v25 = (unsigned int)(v25 - v28);
    }
LABEL_36:
    v32 = a2 + 8 * v25;
    Address = 8LL * v26;
    v33 = v17 & 0xFFFFFFFE;
    for ( i = a2 - Address; i <= v32; updated = Address )
    {
      v35 = MiReservePageFileSpaceForPage(a1, i, v33, &updated);
      v36 = updated;
      if ( !v35 )
        MiReleasePageFileInfo(a1, updated, v58 != 0);
      v37 = v36;
      if ( qword_140C4DF40 && (v36 & 0x10) == 0 )
        v36 &= ~qword_140C4DF40;
      if ( v37 && qword_140C4DF40 )
      {
        if ( (v37 & 0x10) != 0 )
          LODWORD(v37) = v37 & 0xFFFFFFEF;
        else
          LODWORD(v37) = ~(_DWORD)qword_140C4DF40 & v37;
      }
      Address = MiSwizzleInvalidPte((v36 + 0x100000000LL) ^ (unsigned int)v36 ^ (unsigned int)v37);
      i += 8LL;
    }
  }
LABEL_47:
  if ( v50 )
    LOBYTE(Address) = MiReleasePageFileSectionInfo(&v54, v28, v29);
  return Address;
}
