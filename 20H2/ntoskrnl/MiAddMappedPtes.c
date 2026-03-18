/*
 * XREFs of MiAddMappedPtes @ 0x140658B60
 * Callers:
 *     MiInsertInSystemSpace @ 0x14024C1E0 (MiInsertInSystemSpace.c)
 *     MiMapSystemImage @ 0x140756210 (MiMapSystemImage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiMakePrototypePteDirect @ 0x14024EB30 (MiMakePrototypePteDirect.c)
 *     MiGetSubsectionDriverProtos @ 0x14024EC00 (MiGetSubsectionDriverProtos.c)
 *     MiOffsetToProtos @ 0x1402A42A0 (MiOffsetToProtos.c)
 *     MiMakeDemandZeroPte @ 0x1402AD380 (MiMakeDemandZeroPte.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiGetSharedProtos @ 0x1403A5948 (MiGetSharedProtos.c)
 */

__int64 __fastcall MiAddMappedPtes(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 *a4, unsigned int a5, int a6)
{
  int v6; // ebp
  __int64 v7; // rbx
  __int64 *v8; // rsi
  unsigned __int64 v9; // r12
  __int64 DemandZeroPte; // rdi
  __int64 v11; // rax
  __int64 v12; // r13
  unsigned __int16 v13; // r8
  __int64 v14; // rcx
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r15
  __int64 PrototypePteDirect; // rbx
  __int16 v19; // ax
  int v20; // edx
  __int64 SubsectionDriverProtos; // rax
  unsigned int v22; // edx
  unsigned int v23; // ecx
  __int64 v24; // r8
  unsigned __int64 v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // r8
  unsigned __int64 v28; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v29; // [rsp+68h] [rbp+10h]
  __int64 v30; // [rsp+70h] [rbp+18h]

  v30 = a3;
  v6 = 0;
  v7 = a3;
  v8 = a1;
  v28 = 0LL;
  if ( (MiFlags & 0x10000) == 0 || (MiFlags & 0x8000) == 0 || (*(_DWORD *)(a3 + 56) & 0x20) == 0 )
    a6 = 0;
  v9 = (unsigned __int64)&a1[a2];
  v29 = 0LL;
  DemandZeroPte = 0LL;
  v11 = MiOffsetToProtos(a3, *a4, &v28);
  v12 = v11;
  if ( !v11 )
    return 3221225503LL;
  v13 = 1;
  if ( (*(_BYTE *)(v11 + 34) & 2) != 0 && (*(_DWORD *)(v7 + 56) & 0x4000000) != 0 )
    goto LABEL_23;
  if ( (*(_DWORD *)(v7 + 56) & 0x20) != 0 )
  {
    SubsectionDriverProtos = MiGetSubsectionDriverProtos((_QWORD *)v11);
    if ( SubsectionDriverProtos )
      goto LABEL_24;
  }
  v14 = *(_QWORD *)(v12 + 8);
  v15 = v14 + 8 * v28;
  v16 = v14 + 8LL * *(unsigned int *)(v12 + 44);
  while ( 1 )
  {
    if ( (unsigned __int64)v8 >= v9 )
      return 0LL;
    if ( v15 < v16 )
      goto LABEL_9;
    v12 = *(_QWORD *)(v12 + 16);
    if ( !v12 )
      break;
    v19 = *(_WORD *)(v12 + 34);
    v20 = *(_DWORD *)(v7 + 56);
    v15 = *(_QWORD *)(v12 + 8);
    if ( (((v20 & 0x4000000) != 0) & _bittest16(&v19, v13)) != 0 )
    {
LABEL_23:
      SubsectionDriverProtos = MiGetSharedProtos(v7, a5, v12);
    }
    else
    {
      if ( (v20 & 0x20) == 0 )
        goto LABEL_19;
      SubsectionDriverProtos = MiGetSubsectionDriverProtos((_QWORD *)v12);
      if ( !SubsectionDriverProtos )
        goto LABEL_19;
    }
LABEL_24:
    v15 = *(_QWORD *)(SubsectionDriverProtos + 72);
LABEL_19:
    v6 = 0;
    v16 = v15 + 8LL * *(unsigned int *)(v12 + 44);
    if ( !a6 || (v22 = *(unsigned __int16 *)(v12 + 32), (v22 & 4) == 0) )
    {
LABEL_10:
      PrototypePteDirect = MiMakePrototypePteDirect(v15);
      goto LABEL_11;
    }
    v23 = (*(unsigned __int16 *)(v12 + 34) >> 4) + (*(_DWORD *)(v12 + 40) << 9);
    v29 = v15 + 8LL * ((v23 >> 12) + ((v23 & 0xFFF) != 0));
    v6 = ((__int64)(v16 - v29) >> 3) - (*(_DWORD *)(v12 + 52) & 0x3FFFFFFF);
    DemandZeroPte = MiMakeDemandZeroPte((v22 >> 1) & 0x1F);
LABEL_9:
    if ( !v6 || v15 < v29 )
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
    if ( !HIBYTE(word_140C4DE88) && (PrototypePteDirect & 1) != 0 )
      PrototypePteDirect |= 0x8000000000000000uLL;
    *v8 = PrototypePteDirect;
    MiWritePteShadow((__int64)v8, PrototypePteDirect, v24);
LABEL_13:
    v7 = v30;
    ++v8;
    v15 += 8LL;
    v13 = 1;
  }
  v25 = *(_QWORD *)(v7 + 136)
      + 8
      * (*(unsigned int *)(*(_QWORD *)v7 + 8LL) | ((unsigned __int64)(*(_WORD *)(*(_QWORD *)v7 + 12LL) & 0x3FF) << 32));
  if ( v15 < v25 )
  {
    while ( 1 )
    {
      v26 = MiMakePrototypePteDirect(v15);
      if ( MiPteInShadowRange((unsigned __int64)v8) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140C4DE88) && (v26 & 1) != 0 )
            v26 |= 0x8000000000000000uLL;
          *v8 = v26;
          MiWritePteShadow((__int64)v8, v26, v27);
          goto LABEL_54;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v26 & 1) != 0 )
        {
          v26 |= 0x8000000000000000uLL;
        }
      }
      *v8 = v26;
LABEL_54:
      if ( (unsigned __int64)++v8 < v9 )
      {
        v15 += 8LL;
        if ( v15 < v25 )
          continue;
      }
      return 0LL;
    }
  }
  return 0LL;
}
