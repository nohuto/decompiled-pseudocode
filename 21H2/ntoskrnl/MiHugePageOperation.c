/*
 * XREFs of MiHugePageOperation @ 0x1405331B8
 * Callers:
 *     MiGetHugeRangeFromNode @ 0x140532C94 (MiGetHugeRangeFromNode.c)
 *     MiHotAddHugeRange @ 0x1408C6B18 (MiHotAddHugeRange.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140216B10 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x140217FB0 (MmUnmapIoSpace.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiCreateUltraThreadContext @ 0x14029444C (MiCreateUltraThreadContext.c)
 *     MiDeleteUltraThreadContext @ 0x14029794C (MiDeleteUltraThreadContext.c)
 *     MiGetUltraMapping @ 0x1402D8F50 (MiGetUltraMapping.c)
 *     MiInitializePageColorBase @ 0x1402E3AD0 (MiInitializePageColorBase.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeZeroPages @ 0x140402F90 (KeZeroPages.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiEndDpcGang @ 0x1405606D8 (MiEndDpcGang.c)
 *     MiInitializeDpcGang @ 0x140560790 (MiInitializeDpcGang.c)
 *     MiStartDpcGang @ 0x1405608EC (MiStartDpcGang.c)
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
  bool v11; // zf
  _QWORD *v12; // rax
  unsigned __int64 v13; // rbx
  int v14; // esi
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v17; // r8
  int v18; // eax
  unsigned __int64 *MmInternal; // [rsp+28h] [rbp-E0h]
  __int128 v20; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v21[48]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v22[16]; // [rsp+1C8h] [rbp+C0h] BYREF

  memset(v21, 0, sizeof(v21));
  v20 = 0LL;
  memset(v22, 0, sizeof(v22));
  v2 = (unsigned __int64)(a1 & 0x3FFFF) << 18;
  v3 = MiSearchNumaNodeTable(v2);
  MiInitializePageColorBase(
    (__int64)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6],
    *((_DWORD *)v3 + 2) + 1,
    (__int64)&v20);
  v4 = _InterlockedExchangeAdd((volatile signed __int32 *)v20, 1u);
  MmInternal = 0LL;
  CurrentIrql = 17;
  if ( (unsigned int)MiCreateUltraThreadContext((__int64)v22, DWORD2(v20) & (unsigned int)v4 | HIDWORD(v20), 1) )
  {
    UltraMapping = MiGetUltraMapping(v22, 0, 0x40000LL, 0);
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
        if ( !HIBYTE(word_140C4E048) )
        {
          v11 = (ValidPte & 1) == 0;
          goto LABEL_16;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v11 = (ValidPte & 1) == 0;
LABEL_16:
        if ( !v11 )
          ValidPte |= 0x8000000000000000uLL;
      }
    }
    *v7 = ValidPte;
    if ( v10 )
      MiWritePteShadow((__int64)v7, ValidPte);
  }
LABEL_20:
  if ( KeGetCurrentIrql() >= 2u )
  {
    KeZeroPages((__m128i *)UltraMapping, 0x40000000uLL);
  }
  else
  {
    v12 = MiSearchNumaNodeTable(v2);
    MiInitializeDpcGang(v21, *((unsigned int *)v12 + 2), 1LL);
    LODWORD(v21[23]) |= 8u;
    v21[0] = v2;
    v21[1] = 0x40000LL;
    v21[20] = UltraMapping;
    MiStartDpcGang(v21);
    MiEndDpcGang(v21);
  }
  if ( !v7 )
  {
    MmUnmapIoSpace((PVOID)UltraMapping, 0x40000000uLL);
    return;
  }
  v13 = ZeroPte;
  v14 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v7) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v14 = 1;
      if ( !HIBYTE(word_140C4E048) )
      {
LABEL_29:
        if ( (ZeroPte & 1) != 0 )
          v13 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      goto LABEL_29;
    }
  }
  *v7 = v13;
  if ( v14 )
    MiWritePteShadow((__int64)v7, v13);
  if ( CurrentIrql == 17 )
  {
    MiDeleteUltraThreadContext((__int64)v22);
  }
  else
  {
    MmInternal[1543] = 0LL;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v15 = KeGetCurrentIrql();
        if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v17 = CurrentPrcb->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v11 = (v18 & v17[5]) == 0;
          v17[5] &= v18;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
}
