/*
 * XREFs of MiTimeSingleLargePageZeroWorker @ 0x1403A7E38
 * Callers:
 *     MiTimeSingleLargePageZero @ 0x1403A7C20 (MiTimeSingleLargePageZero.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x14022978C (MiMakeProtectionPfnCompatible.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiGetUltraMapping @ 0x14023D870 (MiGetUltraMapping.c)
 *     MiInitializePageColorBase @ 0x14025EA70 (MiInitializePageColorBase.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiDeleteUltraThreadContext @ 0x1402E14F0 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContext @ 0x1402E1D50 (MiCreateUltraThreadContext.c)
 *     MiInsertLargePageInNodeList @ 0x140316B80 (MiInsertLargePageInNodeList.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiInitializeColorTable @ 0x1403A842C (MiInitializeColorTable.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetLargePagesDemoteAsNeeded @ 0x1403EFBC0 (MiGetLargePagesDemoteAsNeeded.c)
 *     MiUnlinkNodeLargePages @ 0x1403F1438 (MiUnlinkNodeLargePages.c)
 *     KeZeroPages @ 0x1403FB000 (KeZeroPages.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiFreeLargePageChain @ 0x1405515B0 (MiFreeLargePageChain.c)
 */

unsigned __int64 __fastcall MiTimeSingleLargePageZeroWorker(__int64 a1, int a2)
{
  int v2; // r12d
  signed __int32 v4; // eax
  unsigned int v5; // ebx
  unsigned int v7; // esi
  unsigned __int8 CurrentIrql; // r15
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // rax
  __int64 v11; // r14
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v14; // r9
  int v15; // eax
  __int64 LargePagesDemoteAsNeeded; // rax
  int ProtectionPfnCompatible; // ebx
  _QWORD *v18; // r12
  __int64 v19; // r9
  unsigned __int64 ValidPte; // rbx
  int v21; // r13d
  __int64 v22; // r8
  bool v23; // zf
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  bool v27; // zf
  unsigned __int64 v28; // rbx
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  int v32; // eax
  __int64 v33; // rcx
  unsigned __int64 v34; // r8
  unsigned int v35; // edx
  __int64 v36; // rax
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // r9
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rcx
  _QWORD *v44; // rdx
  signed __int32 v45[8]; // [rsp+0h] [rbp-100h] BYREF
  BOOL v46; // [rsp+50h] [rbp-B0h]
  int v47; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v48; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v49; // [rsp+68h] [rbp-98h]
  __int128 v50; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 UltraMapping; // [rsp+80h] [rbp-80h]
  __int64 v52; // [rsp+88h] [rbp-78h]
  __int64 v53; // [rsp+90h] [rbp-70h]
  unsigned __int64 v54; // [rsp+98h] [rbp-68h]
  __int128 v55; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v56[16]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v57[16]; // [rsp+130h] [rbp+30h] BYREF

  v53 = a1;
  v49 = 0LL;
  v2 = a1;
  v55 = 0LL;
  v48 = 0LL;
  v50 = 0LL;
  MiInitializeColorTable(&v55);
  MiInitializePageColorBase(0LL, a2 + 1, (__int64)&v50);
  v4 = _InterlockedExchangeAdd((volatile signed __int32 *)v50, 1u);
  v5 = DWORD2(v50) & v4 | HIDWORD(v50);
  memset(v56, 0, sizeof(v56));
  if ( !(unsigned int)MiCreateUltraThreadContext((__int64)v56, v5, 2) )
    return 0LL;
  memset(v57, 0, sizeof(v57));
  v7 = 0;
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v54 = __rdtsc();
    _InterlockedOr(v45, 0);
    v10 = MiUnlinkNodeLargePages(v2, 1, 1, a2, 4, 1, (__int64)&v55, 2, 0LL);
    v11 = v10;
    if ( v10 )
    {
      v52 = (v10 + 0x58000000000LL) / 48;
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v10);
      UltraMapping = MiGetUltraMapping(&v56[4], 1u, 512LL, 0);
      v18 = (_QWORD *)(((UltraMapping >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
      ValidPte = MiMakeValidPte(
                   (unsigned __int64)v18,
                   (v11 + 0x58000000000LL) / 48,
                   ProtectionPfnCompatible | 0xA4000000,
                   v19);
      v21 = 0;
      v46 = MiPteInShadowRange((unsigned __int64)v18);
      if ( !v46 )
        goto LABEL_26;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v21 = 1;
        if ( HIBYTE(word_140C4DE08) )
          goto LABEL_26;
        v23 = (ValidPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_26;
        v23 = (ValidPte & 1) == 0;
      }
      if ( !v23 )
        ValidPte |= 0x8000000000000000uLL;
LABEL_26:
      *v18 = ValidPte;
      if ( v21 )
        MiWritePteShadow((__int64)v18, ValidPte, v22);
      KeZeroPages(UltraMapping, 0x200000LL, v22);
      v25 = ZeroPte;
      v26 = 0LL;
      if ( !v46 )
        goto LABEL_36;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v26 = 1LL;
        if ( !HIBYTE(word_140C4DE08) )
        {
          v27 = (v25 & 1) == 0;
          goto LABEL_34;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v27 = (v25 & 1) == 0;
LABEL_34:
        if ( !v27 )
          v25 |= 0x8000000000000000uLL;
      }
LABEL_36:
      *v18 = v25;
      if ( (_DWORD)v26 )
        MiWritePteShadow((__int64)v18, v25, v26);
      v47 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v47, v25, v26, v24);
        while ( *(__int64 *)(v11 + 24) < 0 );
      }
      v49 = 2LL;
      v48 = (unsigned __int64)v52;
      MiInsertLargePageInNodeList((__int64)&v48, v25, v26, v24);
      v2 = v53;
      goto LABEL_42;
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v12 = KeGetCurrentIrql();
        if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v14 = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v23 = (v15 & v14[5]) == 0;
          v14[5] &= v15;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    LargePagesDemoteAsNeeded = MiGetLargePagesDemoteAsNeeded(v2, a2, 512, 512, 0, 2, 1);
    v11 = LargePagesDemoteAsNeeded;
    if ( LargePagesDemoteAsNeeded )
    {
      MiFreeLargePageChain(LargePagesDemoteAsNeeded);
      --v7;
      goto LABEL_58;
    }
LABEL_42:
    _InterlockedOr(v45, 0);
    v28 = __rdtsc() - v54;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v29 = KeGetCurrentIrql();
        if ( v29 <= 0xFu && CurrentIrql <= 0xFu && v29 >= 2u )
        {
          v30 = KeGetCurrentPrcb();
          v31 = v30->SchedulerAssist;
          v32 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v23 = (v32 & v31[5]) == 0;
          v31[5] &= v32;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(v30);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( !v11 )
      break;
    v57[v7] = v28;
    if ( v7 >= 2 )
    {
      v33 = v7 - 2;
      v34 = 0LL;
      v35 = v7 - 2;
      do
      {
        v36 = v35++;
        v34 += v57[v36];
      }
      while ( v35 <= v7 );
      v37 = v34 / 3;
      v38 = v34 / 3 / 0xA;
      v39 = v34 / 3 - v38;
      v40 = v38 + v37;
      if ( (unsigned int)v33 > v7 )
        goto LABEL_61;
      do
      {
        v41 = v57[v33];
        if ( v41 < v39 )
          break;
        if ( v41 > v40 )
          break;
        v33 = (unsigned int)(v33 + 1);
      }
      while ( (unsigned int)v33 <= v7 );
      if ( (unsigned int)v33 > v7 )
        goto LABEL_61;
    }
LABEL_58:
    if ( ++v7 >= 0x10 )
    {
      v37 = 0LL;
      goto LABEL_62;
    }
  }
  memset(v57, 0, sizeof(v57));
  v37 = 0LL;
LABEL_61:
  if ( v37 )
    goto LABEL_67;
LABEL_62:
  v42 = 0LL;
  v43 = 0LL;
  v44 = v57;
  do
  {
    if ( !*v44 )
      break;
    v42 += *v44;
    v43 = (unsigned int)(v43 + 1);
    ++v44;
  }
  while ( (unsigned int)v43 < 0x10 );
  if ( (_DWORD)v43 )
    v37 = v42 / v43;
LABEL_67:
  MiDeleteUltraThreadContext((__int64)v56);
  return v37;
}
