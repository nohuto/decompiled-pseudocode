/*
 * XREFs of MiCaptureSecureImageBaseAddress @ 0x1408DA3A0
 * Callers:
 *     MiValidateSectionCreate @ 0x14070EA48 (MiValidateSectionCreate.c)
 * Callees:
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x140237788 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x140237984 (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiCaptureSecureImageBaseAddress(_QWORD *a1)
{
  __int64 v1; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  unsigned int v6; // ebx

  v1 = a1[12];
  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)(v1 + 32);
  v5 = *(_QWORD *)(v1 + 40) & 0xFFFFFFFFFFFFFFF8uLL;
  MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v4);
  if ( qword_140C1D9C0 )
    v6 = qword_140C1D9C0(v5, *(_QWORD *)(*a1 + 32LL));
  else
    v6 = -1073741637;
  MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v4);
  return v6;
}
