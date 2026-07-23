/*
 * XREFs of MiTimeSingleLargePageZeroWorker @ 0x1403B0898
 * Callers:
 *     MiTimeSingleLargePageZero @ 0x1403B0680 (MiTimeSingleLargePageZero.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiCreateUltraThreadContext @ 0x14029444C (MiCreateUltraThreadContext.c)
 *     MiDeleteUltraThreadContext @ 0x14029794C (MiDeleteUltraThreadContext.c)
 *     MiGetUltraMapping @ 0x1402D8F50 (MiGetUltraMapping.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402E020C (MiMakeProtectionPfnCompatible.c)
 *     MiInitializePageColorBase @ 0x1402E3AD0 (MiInitializePageColorBase.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiInsertLargePageInNodeList @ 0x1403097A0 (MiInsertLargePageInNodeList.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiInitializeColorTable @ 0x1403B0E8C (MiInitializeColorTable.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetLargePagesDemoteAsNeeded @ 0x1403F5870 (MiGetLargePagesDemoteAsNeeded.c)
 *     MiUnlinkNodeLargePages @ 0x1403F70E8 (MiUnlinkNodeLargePages.c)
 *     KeZeroPages @ 0x140402F90 (KeZeroPages.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiFreeLargePageChain @ 0x140556C90 (MiFreeLargePageChain.c)
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
  unsigned __int64 ValidPte; // rbx
  int v20; // r13d
  bool v21; // zf
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  bool v25; // zf
  unsigned __int64 v26; // rbx
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r9
  int v30; // eax
  __int64 v31; // rcx
  unsigned __int64 v32; // r8
  unsigned int v33; // edx
  __int64 v34; // rax
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // r9
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rcx
  _QWORD *v42; // rdx
  signed __int32 v43[8]; // [rsp+0h] [rbp-100h] BYREF
  BOOL v44; // [rsp+50h] [rbp-B0h]
  int v45; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v46; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+68h] [rbp-98h]
  __int128 v48; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 UltraMapping; // [rsp+80h] [rbp-80h]
  __int64 v50; // [rsp+88h] [rbp-78h]
  __int64 v51; // [rsp+90h] [rbp-70h]
  unsigned __int64 v52; // [rsp+98h] [rbp-68h]
  __int128 v53; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v54[16]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v55[16]; // [rsp+130h] [rbp+30h] BYREF

  v51 = a1;
  v47 = 0LL;
  v2 = a1;
  v53 = 0LL;
  v46 = 0LL;
  v48 = 0LL;
  MiInitializeColorTable(&v53);
  MiInitializePageColorBase(0LL, a2 + 1, (__int64)&v48);
  v4 = _InterlockedExchangeAdd((volatile signed __int32 *)v48, 1u);
  v5 = DWORD2(v48) & v4 | HIDWORD(v48);
  memset(v54, 0, sizeof(v54));
  if ( !(unsigned int)MiCreateUltraThreadContext((__int64)v54, v5, 2) )
    return 0LL;
  memset(v55, 0, sizeof(v55));
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
    v52 = __rdtsc();
    _InterlockedOr(v43, 0);
    v10 = MiUnlinkNodeLargePages(v2, 1, 1, a2, 4, 1, (__int64)&v53, 2, 0LL);
    v11 = v10;
    if ( v10 )
    {
      v50 = (v10 + 0x58000000000LL) / 48;
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v10);
      UltraMapping = MiGetUltraMapping(&v54[4], 1u, 512LL, 0);
      v18 = (_QWORD *)(((UltraMapping >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
      ValidPte = MiMakeValidPte(
                   (unsigned __int64)v18,
                   (v11 + 0x58000000000LL) / 48,
                   ProtectionPfnCompatible | 0xA4000000);
      v20 = 0;
      v44 = MiPteInShadowRange((unsigned __int64)v18);
      if ( !v44 )
        goto LABEL_26;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v20 = 1;
        if ( HIBYTE(word_140C4E048) )
          goto LABEL_26;
        v21 = (ValidPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_26;
        v21 = (ValidPte & 1) == 0;
      }
      if ( !v21 )
        ValidPte |= 0x8000000000000000uLL;
LABEL_26:
      *v18 = ValidPte;
      if ( v20 )
        MiWritePteShadow((__int64)v18, ValidPte);
      KeZeroPages(UltraMapping, 0x200000LL);
      v23 = ZeroPte;
      v24 = 0LL;
      if ( !v44 )
        goto LABEL_36;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v24 = 1LL;
        if ( !HIBYTE(word_140C4E048) )
        {
          v25 = (v23 & 1) == 0;
          goto LABEL_34;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v25 = (v23 & 1) == 0;
LABEL_34:
        if ( !v25 )
          v23 |= 0x8000000000000000uLL;
      }
LABEL_36:
      *v18 = v23;
      if ( (_DWORD)v24 )
        MiWritePteShadow((__int64)v18, v23);
      v45 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v45, v23, v24, v22);
        while ( *(__int64 *)(v11 + 24) < 0 );
      }
      v47 = 2LL;
      v46 = (unsigned __int64)v50;
      MiInsertLargePageInNodeList((__int64)&v46);
      v2 = v51;
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
          v21 = (v15 & v14[5]) == 0;
          v14[5] &= v15;
          if ( v21 )
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
    _InterlockedOr(v43, 0);
    v26 = __rdtsc() - v52;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v27 = KeGetCurrentIrql();
        if ( v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
        {
          v28 = KeGetCurrentPrcb();
          v29 = v28->SchedulerAssist;
          v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v21 = (v30 & v29[5]) == 0;
          v29[5] &= v30;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(v28);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( !v11 )
      break;
    v55[v7] = v26;
    if ( v7 >= 2 )
    {
      v31 = v7 - 2;
      v32 = 0LL;
      v33 = v7 - 2;
      do
      {
        v34 = v33++;
        v32 += v55[v34];
      }
      while ( v33 <= v7 );
      v35 = v32 / 3;
      v36 = v32 / 3 / 0xA;
      v37 = v32 / 3 - v36;
      v38 = v36 + v35;
      if ( (unsigned int)v31 > v7 )
        goto LABEL_61;
      do
      {
        v39 = v55[v31];
        if ( v39 < v37 )
          break;
        if ( v39 > v38 )
          break;
        v31 = (unsigned int)(v31 + 1);
      }
      while ( (unsigned int)v31 <= v7 );
      if ( (unsigned int)v31 > v7 )
        goto LABEL_61;
    }
LABEL_58:
    if ( ++v7 >= 0x10 )
    {
      v35 = 0LL;
      goto LABEL_62;
    }
  }
  memset(v55, 0, sizeof(v55));
  v35 = 0LL;
LABEL_61:
  if ( v35 )
    goto LABEL_67;
LABEL_62:
  v40 = 0LL;
  v41 = 0LL;
  v42 = v55;
  do
  {
    if ( !*v42 )
      break;
    v40 += *v42;
    v41 = (unsigned int)(v41 + 1);
    ++v42;
  }
  while ( (unsigned int)v41 < 0x10 );
  if ( (_DWORD)v41 )
    v35 = v40 / v41;
LABEL_67:
  MiDeleteUltraThreadContext((__int64)v54);
  return v35;
}
