/*
 * XREFs of MiTimeSingleLargePageZeroWorker @ 0x1403AE258
 * Callers:
 *     MiTimeSingleLargePageZero @ 0x1403AE040 (MiTimeSingleLargePageZero.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402827DC (MiMakeProtectionPfnCompatible.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiGetUltraMapping @ 0x1402968A0 (MiGetUltraMapping.c)
 *     MiInitializePageColorBase @ 0x1402B7AA0 (MiInitializePageColorBase.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiDeleteUltraThreadContext @ 0x1403265F0 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContext @ 0x140326F88 (MiCreateUltraThreadContext.c)
 *     MiInsertLargePageInNodeList @ 0x140345EC0 (MiInsertLargePageInNodeList.c)
 *     MiInitializeColorTable @ 0x1403AE84C (MiInitializeColorTable.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetLargePagesDemoteAsNeeded @ 0x1403EE860 (MiGetLargePagesDemoteAsNeeded.c)
 *     MiUnlinkNodeLargePages @ 0x1403F00D8 (MiUnlinkNodeLargePages.c)
 *     KeZeroPages @ 0x1403F9D70 (KeZeroPages.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiFreeLargePageChain @ 0x140550F60 (MiFreeLargePageChain.c)
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
  bool v22; // zf
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  bool v26; // zf
  unsigned __int64 v27; // rbx
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r9
  int v31; // eax
  __int64 v32; // rcx
  unsigned __int64 v33; // r8
  unsigned int v34; // edx
  __int64 v35; // rax
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // r9
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rcx
  _QWORD *v43; // rdx
  signed __int32 v44[8]; // [rsp+0h] [rbp-100h] BYREF
  BOOL v45; // [rsp+50h] [rbp-B0h]
  int v46; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v47; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v48; // [rsp+68h] [rbp-98h]
  __int128 v49; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 UltraMapping; // [rsp+80h] [rbp-80h]
  __int64 v51; // [rsp+88h] [rbp-78h]
  __int64 v52; // [rsp+90h] [rbp-70h]
  unsigned __int64 v53; // [rsp+98h] [rbp-68h]
  __int128 v54; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v55[16]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v56[16]; // [rsp+130h] [rbp+30h] BYREF

  v52 = a1;
  v48 = 0LL;
  v2 = a1;
  v54 = 0LL;
  v47 = 0LL;
  v49 = 0LL;
  MiInitializeColorTable(&v54);
  MiInitializePageColorBase(0LL, a2 + 1, (__int64)&v49);
  v4 = _InterlockedExchangeAdd((volatile signed __int32 *)v49, 1u);
  v5 = DWORD2(v49) & v4 | HIDWORD(v49);
  memset(v55, 0, sizeof(v55));
  if ( !(unsigned int)MiCreateUltraThreadContext((__int64)v55, v5, 2) )
    return 0LL;
  memset(v56, 0, sizeof(v56));
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
    v53 = __rdtsc();
    _InterlockedOr(v44, 0);
    v10 = MiUnlinkNodeLargePages(v2, 1, 1, a2, 4, 1, (__int64)&v54, 2, 0LL);
    v11 = v10;
    if ( v10 )
    {
      v51 = (v10 + 0x58000000000LL) / 48;
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v10);
      UltraMapping = MiGetUltraMapping(&v55[4], 1u, 512LL, 0);
      v18 = (_QWORD *)(((UltraMapping >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
      ValidPte = MiMakeValidPte(
                   (unsigned __int64)v18,
                   (v11 + 0x58000000000LL) / 48,
                   ProtectionPfnCompatible | 0xA4000000,
                   v19);
      v21 = 0;
      v45 = MiPteInShadowRange((unsigned __int64)v18);
      if ( !v45 )
        goto LABEL_26;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v21 = 1;
        if ( HIBYTE(word_140C4DF48) )
          goto LABEL_26;
        v22 = (ValidPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_26;
        v22 = (ValidPte & 1) == 0;
      }
      if ( !v22 )
        ValidPte |= 0x8000000000000000uLL;
LABEL_26:
      *v18 = ValidPte;
      if ( v21 )
        MiWritePteShadow((__int64)v18, ValidPte);
      KeZeroPages(UltraMapping, 0x200000LL);
      v24 = ZeroPte;
      v25 = 0LL;
      if ( !v45 )
        goto LABEL_36;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v25 = 1LL;
        if ( !HIBYTE(word_140C4DF48) )
        {
          v26 = (v24 & 1) == 0;
          goto LABEL_34;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v26 = (v24 & 1) == 0;
LABEL_34:
        if ( !v26 )
          v24 |= 0x8000000000000000uLL;
      }
LABEL_36:
      *v18 = v24;
      if ( (_DWORD)v25 )
        MiWritePteShadow((__int64)v18, v24);
      v46 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v46, v24, v25, v23);
        while ( *(__int64 *)(v11 + 24) < 0 );
      }
      v48 = 2LL;
      v47 = (unsigned __int64)v51;
      MiInsertLargePageInNodeList((__int64)&v47, v24, v25, v23);
      v2 = v52;
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
          v22 = (v15 & v14[5]) == 0;
          v14[5] &= v15;
          if ( v22 )
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
    _InterlockedOr(v44, 0);
    v27 = __rdtsc() - v53;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v28 = KeGetCurrentIrql();
        if ( v28 <= 0xFu && CurrentIrql <= 0xFu && v28 >= 2u )
        {
          v29 = KeGetCurrentPrcb();
          v30 = v29->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v22 = (v31 & v30[5]) == 0;
          v30[5] &= v31;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(v29);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( !v11 )
      break;
    v56[v7] = v27;
    if ( v7 >= 2 )
    {
      v32 = v7 - 2;
      v33 = 0LL;
      v34 = v7 - 2;
      do
      {
        v35 = v34++;
        v33 += v56[v35];
      }
      while ( v34 <= v7 );
      v36 = v33 / 3;
      v37 = v33 / 3 / 0xA;
      v38 = v33 / 3 - v37;
      v39 = v37 + v36;
      if ( (unsigned int)v32 > v7 )
        goto LABEL_61;
      do
      {
        v40 = v56[v32];
        if ( v40 < v38 )
          break;
        if ( v40 > v39 )
          break;
        v32 = (unsigned int)(v32 + 1);
      }
      while ( (unsigned int)v32 <= v7 );
      if ( (unsigned int)v32 > v7 )
        goto LABEL_61;
    }
LABEL_58:
    if ( ++v7 >= 0x10 )
    {
      v36 = 0LL;
      goto LABEL_62;
    }
  }
  memset(v56, 0, sizeof(v56));
  v36 = 0LL;
LABEL_61:
  if ( v36 )
    goto LABEL_67;
LABEL_62:
  v41 = 0LL;
  v42 = 0LL;
  v43 = v56;
  do
  {
    if ( !*v43 )
      break;
    v41 += *v43;
    v42 = (unsigned int)(v42 + 1);
    ++v43;
  }
  while ( (unsigned int)v42 < 0x10 );
  if ( (_DWORD)v42 )
    v36 = v41 / v42;
LABEL_67:
  MiDeleteUltraThreadContext((__int64)v55);
  return v36;
}
