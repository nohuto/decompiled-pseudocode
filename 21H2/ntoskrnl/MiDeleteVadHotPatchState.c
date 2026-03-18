/*
 * XREFs of MiDeleteVadHotPatchState @ 0x140972F98
 * Callers:
 *     MiFinishVadDeletion @ 0x14030FEC0 (MiFinishVadDeletion.c)
 * Callees:
 *     MiUnlockVad @ 0x140281C44 (MiUnlockVad.c)
 *     MiLockVad @ 0x14030B7F0 (MiLockVad.c)
 *     MiGetVadWakeList @ 0x14030E280 (MiGetVadWakeList.c)
 *     MiDeleteHotPatchEntry @ 0x140972D90 (MiDeleteHotPatchEntry.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteVadHotPatchState(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 VadWakeList; // rax
  void *v4; // rdi
  __int64 v5; // rbx

  CurrentThread = KeGetCurrentThread();
  VadWakeList = MiGetVadWakeList(a1, 512);
  v4 = (void *)VadWakeList;
  v5 = 0LL;
  if ( VadWakeList )
  {
    v5 = *(_QWORD *)(VadWakeList + 8);
    *(_DWORD *)(v5 + 68) |= 2u;
    if ( (*(_DWORD *)(v5 + 68) & 1) != 0 )
      v5 = 0LL;
  }
  MiUnlockVad((__int64)CurrentThread, a1);
  if ( v4 )
  {
    if ( v5 )
      MiDeleteHotPatchEntry((char *)v5);
    ExFreePoolWithTag(v4, 0);
  }
  MiLockVad((__int64)CurrentThread, a1);
}
