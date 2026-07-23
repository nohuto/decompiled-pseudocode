/*
 * XREFs of KeFreeXStateContext @ 0x140241320
 * Callers:
 *     KeRestoreExtendedAndSupervisorState @ 0x1402411B8 (KeRestoreExtendedAndSupervisorState.c)
 *     VfCtxInit @ 0x1409E516C (VfCtxInit.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall KeFreeXStateContext(__int64 a1)
{
  void *v2; // rcx

  if ( a1 )
  {
    v2 = *(void **)(a1 + 24);
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0x76615358u);
      *(_QWORD *)a1 = 0LL;
      *(_DWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 24) = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
    }
  }
}
