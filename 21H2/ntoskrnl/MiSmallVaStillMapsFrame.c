/*
 * XREFs of MiSmallVaStillMapsFrame @ 0x1402CE1F8
 * Callers:
 *     MiLockStealUserVm @ 0x14026AFD4 (MiLockStealUserVm.c)
 *     MiStealPage @ 0x14026BCA4 (MiStealPage.c)
 *     MiLockStealSystemVm @ 0x140298704 (MiLockStealSystemVm.c)
 * Callees:
 *     MiPageTableStillExists @ 0x1402CE2A4 (MiPageTableStillExists.c)
 *     MiFillPteHierarchy @ 0x14030C470 (MiFillPteHierarchy.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 */

_BOOL8 __fastcall MiSmallVaStillMapsFrame(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  _OWORD v9[2]; // [rsp+20h] [rbp-20h] BYREF
  int v10; // [rsp+60h] [rbp+20h] BYREF
  __int64 v11; // [rsp+68h] [rbp+28h] BYREF

  v10 = 0;
  memset(v9, 0, sizeof(v9));
  MiFillPteHierarchy(a1, v9);
  if ( !(unsigned int)MiPageTableStillExists(v9, &v10) || v10 )
    return 0LL;
  if ( a2 == -1 )
    return 1LL;
  v11 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)&v9[0]);
  v4 = v11;
  if ( (v11 & 1) == 0 )
    return 0LL;
  if ( (unsigned int)MiPteInShadowRange(&v11, v3)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v7 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v11 >> 3) & 0x1FF));
      v8 = v4 | 0x20;
      if ( (v7 & 0x20) == 0 )
        v8 = v4;
      v4 = v8;
      if ( (v7 & 0x42) != 0 )
        v4 = v8;
    }
  }
  return ((v4 >> 12) & 0xFFFFFFFFFLL) == a2
      || *(_QWORD *)&v9[0] == 0xFFFFF6FB7DBEDF68uLL
      && (*(_QWORD *)(48 * a2 - 0x57FFFFFFFD8LL) & 0xFFFFFFFFFLL) == a2
      && a2 == KeGetCurrentThread()->ApcState.Process->UserDirectoryTableBase >> 12;
}
