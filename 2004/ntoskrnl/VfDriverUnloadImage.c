/*
 * XREFs of VfDriverUnloadImage @ 0x1409BF4B4
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A8E58 (MiUnloadSystemImage.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x140360D70 (VfIsVerifierEnabled.c)
 *     VfTargetDriversRemove @ 0x14037040C (VfTargetDriversRemove.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     VfRemLockDeleteMemoryRange @ 0x1409D36FC (VfRemLockDeleteMemoryRange.c)
 *     ViThunkRemoveImportEntry @ 0x1409D6240 (ViThunkRemoveImportEntry.c)
 *     VfSuspectDriversUnloadCallback @ 0x1409D6FAC (VfSuspectDriversUnloadCallback.c)
 *     VfDeadlockDeleteMemoryRange @ 0x1409DAE20 (VfDeadlockDeleteMemoryRange.c)
 */

void __fastcall VfDriverUnloadImage(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  PVOID *v4; // rdi
  PVOID *v5; // rax
  PVOID *v6; // rdx
  PVOID *v7; // rcx

  if ( (unsigned int)VfIsVerifierEnabled() )
  {
    v2 = *(_DWORD *)(a1 + 64);
    v3 = *(_QWORD *)(a1 + 48);
    VfDeadlockDeleteMemoryRange(v3, v2);
    VfRemLockDeleteMemoryRange(v3, v2);
  }
  if ( ViActiveVerifierThunks )
  {
    ViThunkRemoveImportEntry(&ViVerifierDriverAddedThunkListHead, a1);
    v4 = (PVOID *)ViVerifierDriverAddedSpecialThunkListHead;
    while ( v4 != &ViVerifierDriverAddedSpecialThunkListHead )
    {
      ViThunkRemoveImportEntry(v4 + 3, a1);
      v5 = (PVOID *)*v4;
      if ( v4[3] == v4 + 3 )
      {
        if ( v5[1] != v4 || (v6 = (PVOID *)v4[1], *v6 != v4) )
          __fastfail(3u);
        *v6 = v5;
        v7 = v4;
        v5[1] = v6;
        v4 = (PVOID *)*v4;
        ExFreePoolWithTag(v7, 0);
        --ViVerifierSpecialThunkTables;
      }
      else
      {
        v4 = (PVOID *)*v4;
      }
    }
  }
  VfTargetDriversRemove(a1);
  if ( (*(_DWORD *)(a1 + 104) & 0x2000000) != 0 )
    VfSuspectDriversUnloadCallback(a1);
}
