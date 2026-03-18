/*
 * XREFs of MiGetPhysicalAddress @ 0x140361804
 * Callers:
 *     MmGetPhysicalAddress @ 0x1403617D0 (MmGetPhysicalAddress.c)
 *     RtlMarkHiberPhase @ 0x14058D8A4 (RtlMarkHiberPhase.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140224D10 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiFillPteHierarchy @ 0x140259460 (MiFillPteHierarchy.c)
 *     MiVaToPfn @ 0x140361944 (MiVaToPfn.c)
 *     MiQueuePinDriverAddressLog @ 0x1403A14C4 (MiQueuePinDriverAddressLog.c)
 *     MiSetNonPagedPoolNoSteal @ 0x14053F8B4 (MiSetNonPagedPoolNoSteal.c)
 */

__int64 __fastcall MiGetPhysicalAddress(unsigned __int64 a1, __int64 *a2, _DWORD *a3)
{
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rbx
  bool v9; // zf
  __int64 v10; // rbx
  __int64 result; // rax
  __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int SystemRegionType; // r14d
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // [rsp+18h] [rbp-28h]
  _OWORD v24[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v25; // [rsp+80h] [rbp+40h] BYREF

  *a3 = 0;
  memset(v24, 0, sizeof(v24));
  MiFillPteHierarchy(a1, (unsigned __int64 *)v24);
  v6 = MI_IS_PHYSICAL_ADDRESS(a1);
  v7 = v6;
  if ( v6 )
  {
    v8 = MiVaToPfn(a1);
    v9 = (MI_READ_PTE_LOCK_FREE(*((_QWORD *)v24 + v7)) & 0x800) == 0;
  }
  else
  {
    v12 = 4LL;
    do
    {
      v13 = *(&v23 + v12--);
      if ( (MI_READ_PTE_LOCK_FREE(v13) & 1) == 0 )
        return 0LL;
    }
    while ( v12 != 1 );
    v14 = *(_QWORD *)&v24[0];
    v25 = MI_READ_PTE_LOCK_FREE(*(unsigned __int64 *)&v24[0]);
    v15 = v25;
    SystemRegionType = MiGetSystemRegionType(a1);
    if ( SystemRegionType == 12 )
      MiQueuePinDriverAddressLog(a1, v15, 0LL);
    if ( (v15 & 1) == 0 )
      return 0LL;
    if ( SystemRegionType == 5 )
    {
      MiSetNonPagedPoolNoSteal(v14, v16, v17, v18);
      v15 = MI_READ_PTE_LOCK_FREE(v14);
      v25 = v15;
    }
    if ( MiPteInShadowRange((unsigned __int64)&v25)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v15 & 1) != 0
      && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v21 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v25 >> 3) & 0x1FF));
        v22 = v15 | 0x20;
        if ( (v21 & 0x20) == 0 )
          v22 = v15;
        v15 = v22;
        if ( (v21 & 0x42) != 0 )
          v15 = v22 | 0x42;
      }
    }
    v8 = (v15 >> 12) & 0xFFFFFFFFFLL;
    v9 = (v25 & 0x800) == 0;
  }
  if ( !v9 )
    *a3 = 1;
  v10 = v8 << 12;
  HIDWORD(v25) = HIDWORD(v10);
  result = 1LL;
  LODWORD(v25) = (a1 & 0xFFF) + v10;
  *a2 = v25;
  return result;
}
