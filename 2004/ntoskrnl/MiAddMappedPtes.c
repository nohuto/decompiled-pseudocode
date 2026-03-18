/*
 * XREFs of MiAddMappedPtes @ 0x14060AA90
 * Callers:
 *     MiInsertInSystemSpace @ 0x140264130 (MiInsertInSystemSpace.c)
 *     MiMapSystemImage @ 0x140747630 (MiMapSystemImage.c)
 * Callees:
 *     MiOffsetToProtos @ 0x14022EFF0 (MiOffsetToProtos.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiMakePrototypePteDirect @ 0x140263C40 (MiMakePrototypePteDirect.c)
 *     MiGetSubsectionDriverProtos @ 0x140263D10 (MiGetSubsectionDriverProtos.c)
 *     MiMakeDemandZeroPte @ 0x1402B6020 (MiMakeDemandZeroPte.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiGetSharedProtos @ 0x1403A3578 (MiGetSharedProtos.c)
 */

__int64 __fastcall MiAddMappedPtes(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 *a4, unsigned int a5, int a6)
{
  int v6; // ebp
  __int64 v7; // rbx
  __int64 *v8; // rsi
  unsigned __int64 v9; // r12
  __int64 DemandZeroPte; // rdi
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // r13
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r15
  __int64 PrototypePteDirect; // rbx
  __int16 v20; // ax
  int v21; // edx
  __int64 SubsectionDriverProtos; // rax
  unsigned int v23; // edx
  unsigned int v24; // ecx
  __int64 v25; // r8
  unsigned __int64 v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // r8
  unsigned __int64 v29; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v30; // [rsp+68h] [rbp+10h]
  __int64 v31; // [rsp+70h] [rbp+18h]

  v31 = a3;
  v6 = 0;
  v7 = a3;
  v8 = a1;
  v29 = 0LL;
  if ( (MiFlags & 0x10000) == 0 || (MiFlags & 0x8000) == 0 || (*(_DWORD *)(a3 + 56) & 0x20) == 0 )
    a6 = 0;
  v9 = (unsigned __int64)&a1[a2];
  v30 = 0LL;
  DemandZeroPte = 0LL;
  v11 = MiOffsetToProtos(a3, *a4, &v29);
  v13 = v11;
  if ( !v11 )
    return 3221225503LL;
  v14 = 1LL;
  if ( (*(_BYTE *)(v11 + 34) & 2) != 0 && (*(_DWORD *)(v7 + 56) & 0x4000000) != 0 )
    goto LABEL_23;
  if ( (*(_DWORD *)(v7 + 56) & 0x20) != 0 )
  {
    SubsectionDriverProtos = MiGetSubsectionDriverProtos((_QWORD *)v11);
    if ( SubsectionDriverProtos )
      goto LABEL_24;
  }
  v15 = *(_QWORD *)(v13 + 8);
  v16 = v15 + 8 * v29;
  v17 = v15 + 8LL * *(unsigned int *)(v13 + 44);
  while ( 1 )
  {
    if ( (unsigned __int64)v8 >= v9 )
      return 0LL;
    if ( v16 < v17 )
      goto LABEL_9;
    v13 = *(_QWORD *)(v13 + 16);
    if ( !v13 )
      break;
    v20 = *(_WORD *)(v13 + 34);
    v21 = *(_DWORD *)(v7 + 56);
    v16 = *(_QWORD *)(v13 + 8);
    if ( (((v21 & 0x4000000) != 0) & _bittest16(&v20, v14)) != 0 )
    {
LABEL_23:
      SubsectionDriverProtos = MiGetSharedProtos(v7, a5, v13);
    }
    else
    {
      if ( (v21 & 0x20) == 0 )
        goto LABEL_19;
      SubsectionDriverProtos = MiGetSubsectionDriverProtos((_QWORD *)v13);
      if ( !SubsectionDriverProtos )
        goto LABEL_19;
    }
LABEL_24:
    v16 = *(_QWORD *)(SubsectionDriverProtos + 72);
LABEL_19:
    v6 = 0;
    v17 = v16 + 8LL * *(unsigned int *)(v13 + 44);
    if ( !a6 || (v23 = *(unsigned __int16 *)(v13 + 32), (v23 & 4) == 0) )
    {
LABEL_10:
      PrototypePteDirect = MiMakePrototypePteDirect(v16);
      goto LABEL_11;
    }
    v24 = (*(unsigned __int16 *)(v13 + 34) >> 4) + (*(_DWORD *)(v13 + 40) << 9);
    v30 = v16 + 8LL * ((v24 >> 12) + ((v24 & 0xFFF) != 0));
    v6 = ((__int64)(v17 - v30) >> 3) - (*(_DWORD *)(v13 + 52) & 0x3FFFFFFF);
    DemandZeroPte = MiMakeDemandZeroPte((v23 >> 1) & 0x1F, (v23 >> 1) & 0x1F, v14, v12);
LABEL_9:
    if ( !v6 || v16 < v30 )
      goto LABEL_10;
    PrototypePteDirect = DemandZeroPte;
    --v6;
LABEL_11:
    if ( !MiPteInShadowRange((unsigned __int64)v8) )
      goto LABEL_12;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (PrototypePteDirect & 1) != 0 )
      {
        PrototypePteDirect |= 0x8000000000000000uLL;
      }
LABEL_12:
      *v8 = PrototypePteDirect;
      goto LABEL_13;
    }
    if ( !HIBYTE(word_140C4DE08) && (PrototypePteDirect & 1) != 0 )
      PrototypePteDirect |= 0x8000000000000000uLL;
    *v8 = PrototypePteDirect;
    MiWritePteShadow((__int64)v8, PrototypePteDirect, v25);
LABEL_13:
    v7 = v31;
    ++v8;
    v16 += 8LL;
    v14 = 1LL;
  }
  v26 = *(_QWORD *)(v7 + 136)
      + 8
      * (*(unsigned int *)(*(_QWORD *)v7 + 8LL) | ((unsigned __int64)(*(_WORD *)(*(_QWORD *)v7 + 12LL) & 0x3FF) << 32));
  if ( v16 < v26 )
  {
    while ( 1 )
    {
      v27 = MiMakePrototypePteDirect(v16);
      if ( MiPteInShadowRange((unsigned __int64)v8) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140C4DE08) && (v27 & 1) != 0 )
            v27 |= 0x8000000000000000uLL;
          *v8 = v27;
          MiWritePteShadow((__int64)v8, v27, v28);
          goto LABEL_54;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v27 & 1) != 0 )
        {
          v27 |= 0x8000000000000000uLL;
        }
      }
      *v8 = v27;
LABEL_54:
      if ( (unsigned __int64)++v8 < v9 )
      {
        v16 += 8LL;
        if ( v16 < v26 )
          continue;
      }
      return 0LL;
    }
  }
  return 0LL;
}
