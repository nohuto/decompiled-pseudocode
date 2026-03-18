/*
 * XREFs of MiGetStandbyLookaside @ 0x1402C14C0
 * Callers:
 *     MiSynchronizeFastPageInsert @ 0x1402C0900 (MiSynchronizeFastPageInsert.c)
 *     MiReplaceStandbyLookaside @ 0x1402E8AA0 (MiReplaceStandbyLookaside.c)
 *     MiPurgingPageFromLookaside @ 0x1402E9540 (MiPurgingPageFromLookaside.c)
 *     MiUnlinkPageFromListEx @ 0x140326870 (MiUnlinkPageFromListEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetStandbyLookaside(__int64 *a1, int a2)
{
  __int64 v2; // r9
  __int64 v3; // r8

  v2 = *a1;
  v3 = *((unsigned int *)a1 + 6);
  if ( !a2 )
    return (v3 << 9) + v2 + 7232;
  if ( a2 == 1 )
    return (v3 << 9) + v2 + 11328;
  return 24512LL * *((unsigned int *)a1 + 2)
       + ((v3 + 8LL * *((unsigned int *)a1 + 7)) << 9)
       + *(_QWORD *)(v2 + 16)
       + 6080LL;
}
