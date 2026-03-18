/*
 * XREFs of MiSmallVaStillMapsFrame @ 0x140320F80
 * Callers:
 *     MiStealPage @ 0x14031A7E0 (MiStealPage.c)
 *     MiLockStealUserVm @ 0x14031D3F8 (MiLockStealUserVm.c)
 *     MiLockStealSystemVm @ 0x140321188 (MiLockStealSystemVm.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiFillPteHierarchy @ 0x140259460 (MiFillPteHierarchy.c)
 *     MiPageTableStillExists @ 0x14032102C (MiPageTableStillExists.c)
 */

_BOOL8 __fastcall MiSmallVaStillMapsFrame(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  _OWORD v8[2]; // [rsp+20h] [rbp-20h] BYREF
  int v9; // [rsp+60h] [rbp+20h] BYREF
  __int64 v10; // [rsp+68h] [rbp+28h] BYREF

  v9 = 0;
  memset(v8, 0, sizeof(v8));
  MiFillPteHierarchy(a1, (unsigned __int64 *)v8);
  if ( !(unsigned int)MiPageTableStillExists(v8, &v9) || v9 )
    return 0LL;
  if ( a2 == -1 )
    return 1LL;
  v10 = MI_READ_PTE_LOCK_FREE(*(unsigned __int64 *)&v8[0]);
  v3 = v10;
  if ( (v10 & 1) == 0 )
    return 0LL;
  if ( MiPteInShadowRange((unsigned __int64)&v10)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v6 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v10 >> 3) & 0x1FF));
      v7 = v3 | 0x20;
      if ( (v6 & 0x20) == 0 )
        v7 = v3;
      v3 = v7;
      if ( (v6 & 0x42) != 0 )
        v3 = v7;
    }
  }
  return ((v3 >> 12) & 0xFFFFFFFFFLL) == a2
      || *(_QWORD *)&v8[0] == 0xFFFFF6FB7DBEDF68uLL
      && (*(_QWORD *)(48 * a2 - 0x57FFFFFFFD8LL) & 0xFFFFFFFFFLL) == a2
      && a2 == KeGetCurrentThread()->ApcState.Process->UserDirectoryTableBase >> 12;
}
