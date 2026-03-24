/*
 * XREFs of MiGetPhysicalAddress @ 0x1402A8734
 * Callers:
 *     MmGetPhysicalAddress @ 0x1402A8700 (MmGetPhysicalAddress.c)
 *     RtlMarkHiberPhase @ 0x140592CE4 (RtlMarkHiberPhase.c)
 * Callees:
 *     MiVaToPfn @ 0x1402A8874 (MiVaToPfn.c)
 *     MiFillPteHierarchy @ 0x14030C470 (MiFillPteHierarchy.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14031CBD0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     MiQueuePinDriverAddressLog @ 0x1403A4254 (MiQueuePinDriverAddressLog.c)
 *     MiSetNonPagedPoolNoSteal @ 0x140544D88 (MiSetNonPagedPoolNoSteal.c)
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
  __int64 v16; // rdx
  int SystemRegionType; // r14d
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // [rsp+18h] [rbp-28h]
  _OWORD v22[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v23; // [rsp+80h] [rbp+40h] BYREF

  *a3 = 0;
  memset(v22, 0, sizeof(v22));
  MiFillPteHierarchy(a1, v22);
  v6 = MI_IS_PHYSICAL_ADDRESS(a1);
  v7 = v6;
  if ( v6 )
  {
    v8 = MiVaToPfn(a1);
    v9 = (MI_READ_PTE_LOCK_FREE(*((_QWORD *)v22 + v7)) & 0x800) == 0;
  }
  else
  {
    v12 = 4LL;
    do
    {
      v13 = *(&v21 + v12--);
      if ( (MI_READ_PTE_LOCK_FREE(v13) & 1) == 0 )
        return 0LL;
    }
    while ( v12 != 1 );
    v14 = *(_QWORD *)&v22[0];
    v23 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)&v22[0]);
    v15 = v23;
    SystemRegionType = MiGetSystemRegionType(a1);
    if ( SystemRegionType == 12 )
      MiQueuePinDriverAddressLog(a1, v15, 0LL);
    if ( (v15 & 1) == 0 )
      return 0LL;
    if ( SystemRegionType == 5 )
    {
      MiSetNonPagedPoolNoSteal(v14);
      v15 = MI_READ_PTE_LOCK_FREE(v14);
      v23 = v15;
    }
    if ( (unsigned int)MiPteInShadowRange(&v23, v16)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v15 & 1) != 0
      && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v19 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v23 >> 3) & 0x1FF));
        v20 = v15 | 0x20;
        if ( (v19 & 0x20) == 0 )
          v20 = v15;
        v15 = v20;
        if ( (v19 & 0x42) != 0 )
          v15 = v20 | 0x42;
      }
    }
    v8 = (v15 >> 12) & 0xFFFFFFFFFLL;
    v9 = (v23 & 0x800) == 0;
  }
  if ( !v9 )
    *a3 = 1;
  v10 = v8 << 12;
  HIDWORD(v23) = HIDWORD(v10);
  result = 1LL;
  LODWORD(v23) = (a1 & 0xFFF) + v10;
  *a2 = v23;
  return result;
}
