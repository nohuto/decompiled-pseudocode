/*
 * XREFs of MiAddMappedPtes @ 0x140700630
 * Callers:
 *     MiInsertInSystemSpace @ 0x140305B30 (MiInsertInSystemSpace.c)
 *     MiMapSystemImage @ 0x14075D284 (MiMapSystemImage.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiMakePrototypePteDirect @ 0x140307A60 (MiMakePrototypePteDirect.c)
 *     MiGetSubsectionDriverProtos @ 0x140307B30 (MiGetSubsectionDriverProtos.c)
 *     MiOffsetToProtos @ 0x14032B8A0 (MiOffsetToProtos.c)
 *     MiMakeDemandZeroPte @ 0x140334CC0 (MiMakeDemandZeroPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiGetSharedProtos @ 0x1403A6358 (MiGetSharedProtos.c)
 */

__int64 __fastcall MiAddMappedPtes(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 *a4, unsigned int a5, int a6)
{
  int v6; // ebp
  __int64 v7; // rbx
  __int64 *v8; // rsi
  unsigned __int64 v9; // r12
  __int64 DemandZeroPte; // rdi
  unsigned int *v11; // rax
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
  unsigned __int64 v24; // rdi
  __int64 v25; // rbx
  unsigned __int64 v26; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v27; // [rsp+68h] [rbp+10h]
  __int64 v28; // [rsp+70h] [rbp+18h]

  v28 = a3;
  v6 = 0;
  v7 = a3;
  v8 = a1;
  v26 = 0LL;
  if ( (MiFlags & 0x10000) == 0 || (MiFlags & 0x8000) == 0 || (*(_DWORD *)(a3 + 56) & 0x20) == 0 )
    a6 = 0;
  v9 = (unsigned __int64)&a1[a2];
  v27 = 0LL;
  DemandZeroPte = 0LL;
  v11 = MiOffsetToProtos(a3, *a4, &v26);
  v12 = (__int64)v11;
  if ( !v11 )
    return 3221225503LL;
  v13 = 1;
  if ( (*((_BYTE *)v11 + 34) & 2) != 0 && (*(_DWORD *)(v7 + 56) & 0x4000000) != 0 )
    goto LABEL_23;
  if ( (*(_DWORD *)(v7 + 56) & 0x20) != 0 )
  {
    SubsectionDriverProtos = MiGetSubsectionDriverProtos(v11);
    if ( SubsectionDriverProtos )
      goto LABEL_24;
  }
  v14 = *(_QWORD *)(v12 + 8);
  v15 = v14 + 8 * v26;
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
    v27 = v15 + 8LL * ((v23 >> 12) + ((v23 & 0xFFF) != 0));
    v6 = ((__int64)(v16 - v27) >> 3) - (*(_DWORD *)(v12 + 52) & 0x3FFFFFFF);
    DemandZeroPte = MiMakeDemandZeroPte((v22 >> 1) & 0x1F);
LABEL_9:
    if ( !v6 || v15 < v27 )
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
    if ( !HIBYTE(word_140C4E048) && (PrototypePteDirect & 1) != 0 )
      PrototypePteDirect |= 0x8000000000000000uLL;
    *v8 = PrototypePteDirect;
    MiWritePteShadow((__int64)v8, PrototypePteDirect);
LABEL_13:
    v7 = v28;
    ++v8;
    v15 += 8LL;
    v13 = 1;
  }
  v24 = *(_QWORD *)(v7 + 136)
      + 8
      * (*(unsigned int *)(*(_QWORD *)v7 + 8LL) | ((unsigned __int64)(*(_WORD *)(*(_QWORD *)v7 + 12LL) & 0x3FF) << 32));
  if ( v15 < v24 )
  {
    while ( 1 )
    {
      v25 = MiMakePrototypePteDirect(v15);
      if ( MiPteInShadowRange((unsigned __int64)v8) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140C4E048) && (v25 & 1) != 0 )
            v25 |= 0x8000000000000000uLL;
          *v8 = v25;
          MiWritePteShadow((__int64)v8, v25);
          goto LABEL_54;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v25 & 1) != 0 )
        {
          v25 |= 0x8000000000000000uLL;
        }
      }
      *v8 = v25;
LABEL_54:
      if ( (unsigned __int64)++v8 < v9 )
      {
        v15 += 8LL;
        if ( v15 < v24 )
          continue;
      }
      return 0LL;
    }
  }
  return 0LL;
}
