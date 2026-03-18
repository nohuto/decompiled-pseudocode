/*
 * XREFs of MiPostInsertVad @ 0x1402ED750
 * Callers:
 *     MiPerformVadSplitting @ 0x1402ED194 (MiPerformVadSplitting.c)
 * Callees:
 *     MiManageSubsectionView @ 0x140285FE0 (MiManageSubsectionView.c)
 *     MiAweViewInserter @ 0x14097C814 (MiAweViewInserter.c)
 */

__int64 __fastcall MiPostInsertVad(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 48) & 0x200000) == 0 )
  {
    *(_QWORD *)(a1 + 112) = (__int64)KeGetCurrentThread()->ApcState.Process | 1;
    result = MiManageSubsectionView(*(__int64 **)(a1 + 72), (_QWORD *)(a1 + 96), 3);
  }
  if ( a3 )
    return MiAweViewInserter(KeGetCurrentThread()->ApcState.Process, a3);
  return result;
}
