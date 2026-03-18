/*
 * XREFs of MiHugePageOperation @ 0x14052D458
 * Callers:
 *     MiGetHugeRangeFromNode @ 0x14052CF34 (MiGetHugeRangeFromNode.c)
 *     MiHotAddHugeRange @ 0x1408C2068 (MiHotAddHugeRange.c)
 * Callees:
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiSearchNumaNodeTable @ 0x1402931D0 (MiSearchNumaNodeTable.c)
 *     MiGetUltraMapping @ 0x1402968A0 (MiGetUltraMapping.c)
 *     MiInitializePageColorBase @ 0x1402B7AA0 (MiInitializePageColorBase.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MmMapIoSpaceEx @ 0x1402F8F10 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x1402FA3B0 (MmUnmapIoSpace.c)
 *     MiDeleteUltraThreadContext @ 0x1403265F0 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContext @ 0x140326F88 (MiCreateUltraThreadContext.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeZeroPages @ 0x1403F9D70 (KeZeroPages.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiEndDpcGang @ 0x14055A9A8 (MiEndDpcGang.c)
 *     MiInitializeDpcGang @ 0x14055AA60 (MiInitializeDpcGang.c)
 *     MiStartDpcGang @ 0x14055ABBC (MiStartDpcGang.c)
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
  bool v12; // zf
  _QWORD *v13; // rax
  unsigned __int64 v14; // rbx
  int v15; // esi
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v18; // r8
  int v19; // eax
  unsigned __int64 *MmInternal; // [rsp+28h] [rbp-E0h]
  __int128 v21; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v22[48]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v23[16]; // [rsp+1C8h] [rbp+C0h] BYREF

  memset(v22, 0, sizeof(v22));
  v21 = 0LL;
  memset(v23, 0, sizeof(v23));
  v2 = (unsigned __int64)(a1 & 0x3FFFF) << 18;
  v3 = MiSearchNumaNodeTable(v2);
  MiInitializePageColorBase(
    (__int64)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6],
    *((_DWORD *)v3 + 2) + 1,
    (__int64)&v21);
  v4 = _InterlockedExchangeAdd((volatile signed __int32 *)v21, 1u);
  MmInternal = 0LL;
  CurrentIrql = 17;
  if ( (unsigned int)MiCreateUltraThreadContext((__int64)v23, DWORD2(v21) & (unsigned int)v4 | HIDWORD(v21), 1) )
  {
    UltraMapping = MiGetUltraMapping(v23, 0, 0x40000LL, 0);
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
        if ( !HIBYTE(word_140C4DF48) )
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
    *v8 = ValidPte;
    if ( v11 )
      MiWritePteShadow((__int64)v8, ValidPte);
  }
LABEL_20:
  if ( KeGetCurrentIrql() >= 2u )
  {
    KeZeroPages((__m128i *)UltraMapping, 0x40000000uLL);
  }
  else
  {
    v13 = MiSearchNumaNodeTable(v2);
    MiInitializeDpcGang(v22, *((unsigned int *)v13 + 2), 1LL);
    LODWORD(v22[23]) |= 8u;
    v22[0] = v2;
    v22[1] = 0x40000LL;
    v22[20] = UltraMapping;
    MiStartDpcGang(v22);
    MiEndDpcGang(v22);
  }
  if ( !v8 )
  {
    MmUnmapIoSpace((PVOID)UltraMapping, 0x40000000uLL);
    return;
  }
  v14 = ZeroPte;
  v15 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v8) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v15 = 1;
      if ( !HIBYTE(word_140C4DF48) )
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
  *v8 = v14;
  if ( v15 )
    MiWritePteShadow((__int64)v8, v14);
  if ( CurrentIrql == 17 )
  {
    MiDeleteUltraThreadContext((__int64)v23);
  }
  else
  {
    MmInternal[1543] = 0LL;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v18 = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v12 = (v19 & v18[5]) == 0;
          v18[5] &= v19;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
}
