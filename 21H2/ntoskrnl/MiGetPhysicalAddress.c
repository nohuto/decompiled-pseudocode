/*
 * XREFs of MiGetPhysicalAddress @ 0x140226874
 * Callers:
 *     MmGetPhysicalAddress @ 0x140226840 (MmGetPhysicalAddress.c)
 *     RtlMarkHiberPhase @ 0x140592F14 (RtlMarkHiberPhase.c)
 * Callees:
 *     MiVaToPfn @ 0x1402269B4 (MiVaToPfn.c)
 *     MiFillPteHierarchy @ 0x1403171C0 (MiFillPteHierarchy.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140327920 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     MiQueuePinDriverAddressLog @ 0x1403A43A4 (MiQueuePinDriverAddressLog.c)
 *     MiSetNonPagedPoolNoSteal @ 0x140544FC8 (MiSetNonPagedPoolNoSteal.c)
 */

__int64 __fastcall MiGetPhysicalAddress(__int64 a1, __int64 *a2, _DWORD *a3)
{
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rbx
  bool v9; // zf
  __int64 v10; // rbx
  __int64 result; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rsi
  unsigned __int64 v15; // rbx
  int SystemRegionType; // r14d
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // [rsp+18h] [rbp-28h]
  _OWORD v21[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v22; // [rsp+80h] [rbp+40h] BYREF

  *a3 = 0;
  memset(v21, 0, sizeof(v21));
  MiFillPteHierarchy(a1, v21);
  v6 = MI_IS_PHYSICAL_ADDRESS(a1);
  v7 = v6;
  if ( v6 )
  {
    v8 = MiVaToPfn(a1);
    v9 = (MI_READ_PTE_LOCK_FREE(*((_QWORD *)v21 + v7)) & 0x800) == 0;
  }
  else
  {
    v12 = 4LL;
    do
    {
      v13 = *(&v20 + v12--);
      if ( (MI_READ_PTE_LOCK_FREE(v13) & 1) == 0 )
        return 0LL;
    }
    while ( v12 != 1 );
    v14 = *(_QWORD *)&v21[0];
    v22 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)&v21[0]);
    v15 = v22;
    SystemRegionType = MiGetSystemRegionType(a1);
    if ( SystemRegionType == 12 )
      MiQueuePinDriverAddressLog(a1, v15, 0LL);
    if ( (v15 & 1) == 0 )
      return 0LL;
    if ( SystemRegionType == 5 )
    {
      MiSetNonPagedPoolNoSteal(v14);
      v15 = MI_READ_PTE_LOCK_FREE(v14);
      v22 = v15;
    }
    if ( (unsigned int)MiPteInShadowRange(&v22)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v15 & 1) != 0
      && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v18 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v22 >> 3) & 0x1FF));
        v19 = v15 | 0x20;
        if ( (v18 & 0x20) == 0 )
          v19 = v15;
        v15 = v19;
        if ( (v18 & 0x42) != 0 )
          v15 = v19 | 0x42;
      }
    }
    v8 = (v15 >> 12) & 0xFFFFFFFFFLL;
    v9 = (v22 & 0x800) == 0;
  }
  if ( !v9 )
    *a3 = 1;
  v10 = v8 << 12;
  HIDWORD(v22) = HIDWORD(v10);
  result = 1LL;
  LODWORD(v22) = (a1 & 0xFFF) + v10;
  *a2 = v22;
  return result;
}
