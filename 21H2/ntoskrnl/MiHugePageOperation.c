/*
 * XREFs of MiHugePageOperation @ 0x140532F78
 * Callers:
 *     MiGetHugeRangeFromNode @ 0x140532A54 (MiGetHugeRangeFromNode.c)
 *     MiHotAddHugeRange @ 0x1408C69B8 (MiHotAddHugeRange.c)
 * Callees:
 *     MiGetUltraMapping @ 0x140234700 (MiGetUltraMapping.c)
 *     MiInitializePageColorBase @ 0x14023F280 (MiInitializePageColorBase.c)
 *     MmMapIoSpaceEx @ 0x140294E50 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x140297530 (MmUnmapIoSpace.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiCreateUltraThreadContext @ 0x1402E30FC (MiCreateUltraThreadContext.c)
 *     MiDeleteUltraThreadContext @ 0x1402E65FC (MiDeleteUltraThreadContext.c)
 *     MiSearchNumaNodeTable @ 0x14032B790 (MiSearchNumaNodeTable.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeZeroPages @ 0x140402DB0 (KeZeroPages.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiEndDpcGang @ 0x140560498 (MiEndDpcGang.c)
 *     MiInitializeDpcGang @ 0x140560550 (MiInitializeDpcGang.c)
 *     MiStartDpcGang @ 0x1405606AC (MiStartDpcGang.c)
 */

void __fastcall MiHugePageOperation(int a1)
{
  unsigned __int64 v2; // r15
  _QWORD *v3; // rax
  signed __int32 v4; // eax
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 UltraMapping; // rsi
  unsigned __int64 *v7; // rdi
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 ValidPte; // rbx
  int v10; // r12d
  __int64 v11; // r8
  bool v12; // zf
  _QWORD *v13; // rax
  unsigned __int64 v14; // rbx
  int v15; // esi
  __int64 v16; // r8
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v19; // r8
  int v20; // eax
  unsigned __int64 *MmInternal; // [rsp+28h] [rbp-E0h]
  __int128 v22; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v23[48]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v24[16]; // [rsp+1C8h] [rbp+C0h] BYREF

  memset(v23, 0, sizeof(v23));
  v22 = 0LL;
  memset(v24, 0, sizeof(v24));
  v2 = (unsigned __int64)(a1 & 0x3FFFF) << 18;
  v3 = MiSearchNumaNodeTable(v2);
  MiInitializePageColorBase(
    (__int64)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6],
    *((_DWORD *)v3 + 2) + 1,
    (__int64)&v22);
  v4 = _InterlockedExchangeAdd((volatile signed __int32 *)v22, 1u);
  MmInternal = 0LL;
  CurrentIrql = 17;
  if ( (unsigned int)MiCreateUltraThreadContext((__int64)v24, DWORD2(v22) & (unsigned int)v4 | HIDWORD(v22), 1) )
  {
    UltraMapping = MiGetUltraMapping(v24, 0, 0x40000LL, 0);
    v7 = (unsigned __int64 *)(((UltraMapping >> 27) & 0x1FFFF8) - 0x90482600000LL);
  }
  else
  {
    v7 = 0LL;
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
    v7 = (unsigned __int64 *)(((UltraMapping >> 27) & 0x1FFFF8) - 0x90482600000LL);
    MmInternal[1543] = (unsigned __int64)v7;
  }
  if ( v7 )
  {
    ValidPte = MiMakeValidPte((unsigned __int64)v7, v2, -2080374780);
    v10 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v7) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v10 = 1;
        if ( !HIBYTE(word_140C4E008) )
        {
          v12 = (ValidPte & 1) == 0;
          goto LABEL_16;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v12 = (ValidPte & 1) == 0;
LABEL_16:
        if ( !v12 )
          ValidPte |= 0x8000000000000000uLL;
      }
    }
    *v7 = ValidPte;
    if ( v10 )
      MiWritePteShadow((__int64)v7, ValidPte, v11);
  }
LABEL_20:
  if ( KeGetCurrentIrql() >= 2u )
  {
    KeZeroPages((__m128i *)UltraMapping, 0x40000000uLL);
  }
  else
  {
    v13 = MiSearchNumaNodeTable(v2);
    MiInitializeDpcGang(v23, *((unsigned int *)v13 + 2), 1LL);
    LODWORD(v23[23]) |= 8u;
    v23[0] = v2;
    v23[1] = 0x40000LL;
    v23[20] = UltraMapping;
    MiStartDpcGang(v23);
    MiEndDpcGang(v23);
  }
  if ( !v7 )
  {
    MmUnmapIoSpace((PVOID)UltraMapping, 0x40000000uLL);
    return;
  }
  v14 = ZeroPte;
  v15 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v7) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v15 = 1;
      if ( !HIBYTE(word_140C4E008) )
      {
LABEL_29:
        if ( (ZeroPte & 1) != 0 )
          v14 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      goto LABEL_29;
    }
  }
  *v7 = v14;
  if ( v15 )
    MiWritePteShadow((__int64)v7, v14, v16);
  if ( CurrentIrql == 17 )
  {
    MiDeleteUltraThreadContext((__int64)v24);
  }
  else
  {
    MmInternal[1543] = 0LL;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v19 = CurrentPrcb->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v12 = (v20 & v19[5]) == 0;
          v19[5] &= v20;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
}
