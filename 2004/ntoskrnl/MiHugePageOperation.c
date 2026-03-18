/*
 * XREFs of MiHugePageOperation @ 0x14052DAA8
 * Callers:
 *     MiGetHugeRangeFromNode @ 0x14052D584 (MiGetHugeRangeFromNode.c)
 *     MiHotAddHugeRange @ 0x1408C33B8 (MiHotAddHugeRange.c)
 * Callees:
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiSearchNumaNodeTable @ 0x14023A180 (MiSearchNumaNodeTable.c)
 *     MiGetUltraMapping @ 0x14023D870 (MiGetUltraMapping.c)
 *     MiInitializePageColorBase @ 0x14025EA70 (MiInitializePageColorBase.c)
 *     MiDeleteUltraThreadContext @ 0x1402E14F0 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContext @ 0x1402E1D50 (MiCreateUltraThreadContext.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MmMapIoSpaceEx @ 0x140335F40 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x1403373E0 (MmUnmapIoSpace.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeZeroPages @ 0x1403FB000 (KeZeroPages.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiEndDpcGang @ 0x14055AFF8 (MiEndDpcGang.c)
 *     MiInitializeDpcGang @ 0x14055B0B0 (MiInitializeDpcGang.c)
 *     MiStartDpcGang @ 0x14055B20C (MiStartDpcGang.c)
 */

void __fastcall MiHugePageOperation(int a1)
{
  unsigned __int64 v2; // r15
  _QWORD *v3; // rax
  signed __int32 v4; // eax
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 UltraMapping; // rsi
  __int64 v7; // r9
  unsigned __int64 *v8; // rdi
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 ValidPte; // rbx
  int v11; // r12d
  __int64 v12; // r8
  bool v13; // zf
  _QWORD *v14; // rax
  unsigned __int64 v15; // rbx
  int v16; // esi
  __int64 v17; // r8
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v20; // r8
  int v21; // eax
  unsigned __int64 *MmInternal; // [rsp+28h] [rbp-E0h]
  __int128 v23; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v24[48]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v25[16]; // [rsp+1C8h] [rbp+C0h] BYREF

  memset(v24, 0, sizeof(v24));
  v23 = 0LL;
  memset(v25, 0, sizeof(v25));
  v2 = (unsigned __int64)(a1 & 0x3FFFF) << 18;
  v3 = MiSearchNumaNodeTable(v2);
  MiInitializePageColorBase(
    (__int64)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6],
    *((_DWORD *)v3 + 2) + 1,
    (__int64)&v23);
  v4 = _InterlockedExchangeAdd((volatile signed __int32 *)v23, 1u);
  MmInternal = 0LL;
  CurrentIrql = 17;
  if ( (unsigned int)MiCreateUltraThreadContext((__int64)v25, DWORD2(v23) & (unsigned int)v4 | HIDWORD(v23), 1) )
  {
    UltraMapping = MiGetUltraMapping(v25, 0, 0x40000LL, 0);
    v8 = (unsigned __int64 *)(((UltraMapping >> 27) & 0x1FFFF8) - 0x90482600000LL);
  }
  else
  {
    v8 = 0LL;
    UltraMapping = MmMapIoSpaceEx(v2 << 12, 0x40000000LL, 4u);
    if ( UltraMapping )
      goto LABEL_20;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    MmInternal = (unsigned __int64 *)KeGetCurrentPrcb()->MmInternal;
    UltraMapping = MiGetUltraMapping(MmInternal + 1544, 0, 0x40000LL, 0);
    v8 = (unsigned __int64 *)(((UltraMapping >> 27) & 0x1FFFF8) - 0x90482600000LL);
    MmInternal[1543] = (unsigned __int64)v8;
  }
  if ( v8 )
  {
    ValidPte = MiMakeValidPte((unsigned __int64)v8, v2, 2214592516LL, v7);
    v11 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v8) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v11 = 1;
        if ( !HIBYTE(word_140C4DE08) )
        {
          v13 = (ValidPte & 1) == 0;
          goto LABEL_16;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v13 = (ValidPte & 1) == 0;
LABEL_16:
        if ( !v13 )
          ValidPte |= 0x8000000000000000uLL;
      }
    }
    *v8 = ValidPte;
    if ( v11 )
      MiWritePteShadow((__int64)v8, ValidPte, v12);
  }
LABEL_20:
  if ( KeGetCurrentIrql() >= 2u )
  {
    KeZeroPages((__m128i *)UltraMapping, 0x40000000uLL);
  }
  else
  {
    v14 = MiSearchNumaNodeTable(v2);
    MiInitializeDpcGang(v24, *((unsigned int *)v14 + 2), 1LL);
    LODWORD(v24[23]) |= 8u;
    v24[0] = v2;
    v24[1] = 0x40000LL;
    v24[20] = UltraMapping;
    MiStartDpcGang(v24);
    MiEndDpcGang(v24);
  }
  if ( !v8 )
  {
    MmUnmapIoSpace((PVOID)UltraMapping, 0x40000000uLL);
    return;
  }
  v15 = ZeroPte;
  v16 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v8) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v16 = 1;
      if ( !HIBYTE(word_140C4DE08) )
      {
LABEL_29:
        if ( (ZeroPte & 1) != 0 )
          v15 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      goto LABEL_29;
    }
  }
  *v8 = v15;
  if ( v16 )
    MiWritePteShadow((__int64)v8, v15, v17);
  if ( CurrentIrql == 17 )
  {
    MiDeleteUltraThreadContext((__int64)v25);
  }
  else
  {
    MmInternal[1543] = 0LL;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v18 = KeGetCurrentIrql();
        if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v20 = CurrentPrcb->SchedulerAssist;
          v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v13 = (v21 & v20[5]) == 0;
          v20[5] &= v21;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
}
