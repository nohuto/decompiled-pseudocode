/*
 * XREFs of MiCopyMemoryPagefileData @ 0x140599780
 * Callers:
 *     MiTransferMemoryPagefileData @ 0x14059A568 (MiTransferMemoryPagefileData.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiMakeProtectionPfnCompatible @ 0x14026C61C (MiMakeProtectionPfnCompatible.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiGetPteMappingSet @ 0x1402E8000 (MiGetPteMappingSet.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     KeCopyPage @ 0x140424FF0 (KeCopyPage.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     MiReturnPteMappingSet @ 0x1405B2504 (MiReturnPteMappingSet.c)
 */

char __fastcall MiCopyMemoryPagefileData(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // rbx
  ULONG_PTR v9; // rax
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rdi
  _QWORD *v12; // r12
  unsigned __int64 v13; // rax
  __int64 v14; // r14
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rdx
  _QWORD *v19; // rdi
  unsigned __int64 v20; // rbx
  int v21; // r12d
  _QWORD *v22; // rax
  int v23; // ebx
  __int64 v24; // r13
  int ProtectionPfnCompatible; // eax
  _QWORD *v26; // rdi
  __int64 v27; // r9
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 v29; // r14
  int v30; // eax
  unsigned __int64 v31; // rbx
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rdx
  unsigned __int64 v36; // rbx
  int v37; // edi
  __int64 v38; // rdx
  unsigned __int64 v40; // [rsp+28h] [rbp-48h]
  __int64 v41; // [rsp+28h] [rbp-48h]
  __int128 v42; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v43; // [rsp+40h] [rbp-30h]
  BOOL v44; // [rsp+48h] [rbp-28h]
  ULONG_PTR v45; // [rsp+50h] [rbp-20h]
  __int64 v46; // [rsp+58h] [rbp-18h]
  unsigned __int64 v47; // [rsp+60h] [rbp-10h]

  v43 = 0LL;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v42 = 0LL;
  if ( !a2 )
    goto LABEL_34;
  v9 = MiReservePtes((__int64)&qword_140C534C0, a4);
  v45 = v9;
  v10 = v9;
  if ( !v9 )
  {
    v6 = a3;
LABEL_34:
    v22 = &a1[v5];
    v47 = (unsigned __int64)v22;
    if ( a1 >= v22 )
      return (char)v22;
    v23 = a5 != 0 ? 4 : 1;
    LODWORD(v45) = v23;
    v46 = 0LL;
    v24 = a3;
    v41 = 48 * v6 - 0x220000000000LL;
    while ( 1 )
    {
      MiGetPteMappingSet(0, 2uLL, (__int64)&v42);
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v23, 48LL * *a1 - 0x220000000000LL);
      v26 = v43;
      ValidPte = MiMakeValidPte((unsigned __int64)v43, v27, ProtectionPfnCompatible | 0xA0000000);
      v44 = MiPteInShadowRange((unsigned __int64)v26);
      if ( !v44 )
        goto LABEL_45;
      if ( !(unsigned int)MiPteHasShadow() )
        break;
      if ( !HIBYTE(word_140C51864) && (ValidPte & 1) != 0 )
        ValidPte |= 0x8000000000000000uLL;
      *v26 = ValidPte;
      MiWritePteShadow((__int64)v26, ValidPte);
LABEL_46:
      v29 = (unsigned __int64)(v26 + 1);
      v30 = MiMakeProtectionPfnCompatible(a5 != 0 ? 1 : 4, v41);
      v31 = MiMakeValidPte((unsigned __int64)(v26 + 1), v24, v30 | 0xA0000000);
      if ( !MiPteInShadowRange((unsigned __int64)(v26 + 1)) )
        goto LABEL_55;
      if ( !(unsigned int)MiPteHasShadow() )
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v31 & 1) != 0 )
        {
          v31 |= 0x8000000000000000uLL;
        }
        v26 = v43;
LABEL_55:
        v32 = 0;
        goto LABEL_56;
      }
      v32 = 1;
      if ( !HIBYTE(word_140C51864) && (v31 & 1) != 0 )
        v31 |= 0x8000000000000000uLL;
LABEL_56:
      *(_QWORD *)v29 = v31;
      if ( v32 )
        MiWritePteShadow(v29, v31);
      v33 = (__int64)(((v29 - 8) << 25) - v46) >> 16;
      v34 = (__int64)((v29 << 25) - v46) >> 16;
      if ( !a5 )
      {
        v34 = (__int64)(((v29 - 8) << 25) - v46) >> 16;
        v33 = (__int64)((v29 << 25) - v46) >> 16;
      }
      KeCopyPage(v33, v34);
      v35 = ZeroPte;
      if ( !v44 )
        goto LABEL_69;
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C51864) && (v35 & 1) != 0 )
          v35 |= 0x8000000000000000uLL;
        *v26 = v35;
        MiWritePteShadow((__int64)v26, v35);
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v26 = v43;
          if ( (v35 & 1) != 0 )
            v35 |= 0x8000000000000000uLL;
LABEL_69:
          *v26 = v35;
          goto LABEL_70;
        }
        *v43 = v35;
      }
LABEL_70:
      v36 = ZeroPte;
      v37 = 0;
      if ( MiPteInShadowRange(v29) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v37 = 1;
          if ( !HIBYTE(word_140C51864) )
            goto LABEL_76;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
LABEL_76:
          if ( (ZeroPte & 1) != 0 )
            v36 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v29 = v36;
      if ( v37 )
        MiWritePteShadow(v29, v36);
      LOBYTE(v22) = MiReturnPteMappingSet(&v42, v38);
      v41 += 48LL;
      ++a1;
      LOBYTE(v23) = v45;
      ++v24;
      if ( (unsigned __int64)a1 >= v47 )
        return (char)v22;
    }
    v26 = v43;
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ValidPte & 1) != 0 )
    {
      ValidPte |= 0x8000000000000000uLL;
    }
LABEL_45:
    *v26 = ValidPte;
    goto LABEL_46;
  }
  v11 = MiMakeValidPte(v9, -1LL, (a5 != 0 ? 1 : 4) | 0xA0000000);
  v12 = (_QWORD *)v10;
  v13 = v10 + 8 * v5;
  v40 = v13;
  if ( v10 >= v13 )
    goto LABEL_17;
  v14 = a3;
  v15 = v13;
  do
  {
    v11 ^= (v11 ^ (v14 << 12)) & 0xFFFFFFFFFF000LL;
    v16 = v11;
    if ( !MiPteInShadowRange((unsigned __int64)v12) )
    {
      v17 = 0;
      goto LABEL_13;
    }
    if ( (unsigned int)MiPteHasShadow() )
    {
      v17 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_13;
    }
    else
    {
      v17 = 0;
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_13;
    }
    if ( (v11 & 1) != 0 )
      v16 = v11 | 0x8000000000000000uLL;
LABEL_13:
    *v12 = v16;
    if ( v17 )
      MiWritePteShadow((__int64)v12, v16);
    ++v12;
    ++v14;
  }
  while ( (unsigned __int64)v12 < v15 );
  v10 = v45;
  v5 = a4;
  v7 = a2;
LABEL_17:
  if ( a5 )
  {
    v18 = (__int64)(v10 << 25) >> 16;
  }
  else
  {
    v18 = v7;
    v7 = (__int64)(v10 << 25) >> 16;
  }
  memmove((void *)v7, (const void *)v18, v5 << 12);
  v19 = (_QWORD *)v10;
  if ( v10 < v10 + 8 * v5 )
  {
    while ( 2 )
    {
      v20 = ZeroPte;
      v21 = 0;
      if ( MiPteInShadowRange((unsigned __int64)v19) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v21 = 1;
          if ( !HIBYTE(word_140C51864) )
            goto LABEL_26;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
LABEL_26:
          if ( (ZeroPte & 1) != 0 )
            v20 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      *v19 = v20;
      if ( v21 )
        MiWritePteShadow((__int64)v19, v20);
      if ( (unsigned __int64)++v19 >= v40 )
      {
        LODWORD(v5) = a4;
        break;
      }
      continue;
    }
  }
  LOBYTE(v22) = MiReleasePtes((__int64)&qword_140C534C0, (_QWORD *)v10, v5);
  return (char)v22;
}
