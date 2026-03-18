/*
 * XREFs of MiWritePteHighLevelIsr @ 0x1405AE310
 * Callers:
 *     <none>
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG_PTR __fastcall MiWritePteHighLevelIsr(ULONG_PTR Argument, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 v4; // rdi
  __int64 v5; // r12
  __int128 v6; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  _OWORD *v13; // rdx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rax
  __int64 CurrentIrql; // r13
  signed __int32 v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // r14
  unsigned __int64 ValidPte; // rbx
  int v22; // r13d
  bool v23; // zf
  unsigned __int64 v24; // rbx
  int v25; // r14d
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  bool v29; // zf
  signed __int32 v30; // eax
  unsigned int v31; // ebx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  signed __int32 v35; // eax
  unsigned int v36; // ebx
  __int64 *v37; // rbx
  BOOL v38; // eax
  __int64 v39; // r8
  __int64 v40; // r9
  _BOOL8 v41; // rdx
  signed __int32 v42; // eax
  unsigned int v43; // ebx
  unsigned __int64 *v44; // rdi
  unsigned __int64 v45; // rbx
  int v46; // r14d
  signed __int32 v47; // eax
  unsigned int v48; // ebx
  unsigned __int8 v49; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v51; // r8
  int v52; // eax
  ULONG_PTR result; // rax
  signed __int32 v54; // eax
  int v55; // [rsp+28h] [rbp-E0h] BYREF
  int v56; // [rsp+2Ch] [rbp-DCh] BYREF
  int v57; // [rsp+30h] [rbp-D8h] BYREF
  int v58; // [rsp+34h] [rbp-D4h] BYREF
  __int64 v59; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v60; // [rsp+40h] [rbp-C8h] BYREF
  _OWORD v61[8]; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v62[3]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v63; // [rsp+F8h] [rbp-10h]

  v4 = *(_QWORD *)(Argument + 16);
  v5 = *(_QWORD *)Argument;
  v6 = *(_OWORD *)(Argument + 56);
  v61[0] = *(_OWORD *)(Argument + 40);
  v8 = *(_OWORD *)(Argument + 72);
  v61[1] = v6;
  v9 = *(_OWORD *)(Argument + 88);
  v61[2] = v8;
  v10 = *(_OWORD *)(Argument + 104);
  v61[3] = v9;
  v11 = *(_OWORD *)(Argument + 120);
  v61[4] = v10;
  v12 = *(_OWORD *)(Argument + 136);
  v61[5] = v11;
  v61[6] = v12;
  v13 = v62;
  v61[7] = *(_OWORD *)(Argument + 152);
  v14 = *(_OWORD *)(Argument + 184);
  v62[0] = *(_OWORD *)(Argument + 168);
  v15 = *(_OWORD *)(Argument + 200);
  v16 = *(_QWORD *)(Argument + 216);
  v62[1] = v14;
  v62[2] = v15;
  v63 = v16;
  CurrentIrql = KeGetCurrentIrql();
  v60 = CurrentIrql;
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v13 = (_OWORD *)((-1LL << ((unsigned __int8)CurrentIrql + 1)) & 0xFFFC);
    a3 = (unsigned int)v13 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  v18 = _InterlockedDecrement((volatile signed __int32 *)(Argument + 32));
  v19 = ~v18 & 0x80000000;
  if ( (v18 & 0x7FFFFFFF) != 0 )
  {
    v56 = 0;
    while ( (*(_DWORD *)(Argument + 32) & 0x80000000) != v19 )
      KeYieldProcessorEx(&v56, (__int64)v13, a3, (__int64)SchedulerAssist);
    v42 = _InterlockedDecrement((volatile signed __int32 *)(Argument + 32));
    v43 = ~v42 & 0x80000000;
    if ( (v42 & 0x7FFFFFFF) != 0 )
    {
      v57 = 0;
      while ( (*(_DWORD *)(Argument + 32) & 0x80000000) != v43 )
        KeYieldProcessorEx(&v57, (__int64)v13, a3, (__int64)SchedulerAssist);
    }
    else
    {
      *(_DWORD *)(Argument + 32) = v43 | *(_DWORD *)(Argument + 36);
    }
    goto LABEL_30;
  }
  *(_DWORD *)(Argument + 32) = v19 | *(_DWORD *)(Argument + 36);
  v20 = qword_140C53078;
  if ( qword_140C53078 )
  {
    ValidPte = MiMakeValidPte(v5, *(_QWORD *)(Argument + 24), -1610612732);
    v22 = 0;
    if ( MiPteInShadowRange(v20) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v22 = 1;
        if ( !HIBYTE(word_140C51864) )
        {
          v23 = (ValidPte & 1) == 0;
          goto LABEL_13;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v23 = (ValidPte & 1) == 0;
LABEL_13:
        if ( !v23 )
          ValidPte |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v20 = ValidPte;
    if ( v22 )
      MiWritePteShadow(v20, ValidPte);
    LOBYTE(CurrentIrql) = v60;
    v5 = (v20 << 25 >> 16) + (v5 & 0xFFF);
  }
  v24 = ZeroPte;
  v25 = 0;
  if ( MiPteInShadowRange(v5) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v25 = 1;
      if ( !HIBYTE(word_140C51864) )
      {
        v29 = (ZeroPte & 1) == 0;
        goto LABEL_24;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v29 = (ZeroPte & 1) == 0;
LABEL_24:
      if ( !v29 )
        v24 = ZeroPte | 0x8000000000000000uLL;
    }
  }
  *(_QWORD *)v5 = v24;
  if ( v25 )
    MiWritePteShadow(v5, v24);
  *(_QWORD *)(Argument + 8) = v5;
  v30 = _InterlockedDecrement((volatile signed __int32 *)(Argument + 32));
  v31 = ~v30 & 0x80000000;
  if ( (v30 & 0x7FFFFFFF) != 0 )
  {
    v55 = 0;
    while ( (*(_DWORD *)(Argument + 32) & 0x80000000) != v31 )
      KeYieldProcessorEx(&v55, v26, v27, v28);
  }
  else
  {
    *(_DWORD *)(Argument + 32) = v31 | *(_DWORD *)(Argument + 36);
  }
LABEL_30:
  MiFlushTbList((__int64)v61);
  v35 = _InterlockedDecrement((volatile signed __int32 *)(Argument + 32));
  v36 = ~v35 & 0x80000000;
  if ( (v35 & 0x7FFFFFFF) != 0 )
  {
    LODWORD(v59) = 0;
    while ( (*(_DWORD *)(Argument + 32) & 0x80000000) != v36 )
      KeYieldProcessorEx(&v59, v32, v33, v34);
    v54 = _InterlockedDecrement((volatile signed __int32 *)(Argument + 32));
    v48 = ~v54 & 0x80000000;
    if ( (v54 & 0x7FFFFFFF) == 0 )
      goto LABEL_64;
    LODWORD(v60) = 0;
    while ( (*(_DWORD *)(Argument + 32) & 0x80000000) != v48 )
      KeYieldProcessorEx(&v60, v32, v33, v34);
    goto LABEL_65;
  }
  *(_DWORD *)(Argument + 32) = v36 | *(_DWORD *)(Argument + 36);
  v37 = *(__int64 **)(Argument + 8);
  v38 = MiPteInShadowRange((unsigned __int64)v37);
  v41 = 0LL;
  if ( (v4 & 1) != 0 )
  {
    if ( !v38 )
      goto LABEL_51;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v41 = 1LL;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_51;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_51;
    }
    v4 |= 0x8000000000000000uLL;
  }
  else if ( v38 )
  {
    v41 = (unsigned int)MiPteHasShadow() != 0;
  }
LABEL_51:
  *v37 = v4;
  if ( v41 )
    MiWritePteShadow((__int64)v37, v4);
  v44 = (unsigned __int64 *)qword_140C53078;
  if ( !qword_140C53078 )
    goto LABEL_63;
  v45 = ZeroPte;
  v46 = 0;
  if ( MiPteInShadowRange(qword_140C53078) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v46 = 1;
      if ( !HIBYTE(word_140C51864) )
      {
LABEL_59:
        if ( (ZeroPte & 1) != 0 )
          v45 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      goto LABEL_59;
    }
  }
  *v44 = v45;
  if ( v46 )
    MiWritePteShadow((__int64)v44, v45);
LABEL_63:
  v47 = _InterlockedDecrement((volatile signed __int32 *)(Argument + 32));
  v48 = ~v47 & 0x80000000;
  if ( (v47 & 0x7FFFFFFF) == 0 )
  {
LABEL_64:
    *(_DWORD *)(Argument + 32) = v48 | *(_DWORD *)(Argument + 36);
    goto LABEL_65;
  }
  v58 = 0;
  while ( (*(_DWORD *)(Argument + 32) & 0x80000000) != v48 )
    KeYieldProcessorEx(&v58, v41, v39, v40);
LABEL_65:
  if ( qword_140C53078 )
  {
    MiInsertTbFlushEntry((__int64)v61, qword_140C53078 << 25 >> 16, 1LL, 0);
    MiFlushTbList((__int64)v61);
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v49 = KeGetCurrentIrql();
      if ( v49 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v49 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v51 = CurrentPrcb->SchedulerAssist;
        v52 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
        v23 = (v52 & v51[5]) == 0;
        v51[5] &= v52;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  result = (unsigned __int8)CurrentIrql;
  __writecr8((unsigned __int8)CurrentIrql);
  return result;
}
