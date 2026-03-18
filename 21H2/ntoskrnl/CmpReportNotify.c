/*
 * XREFs of CmpReportNotify @ 0x14069EF78
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x14065D5C8 (CmpProcessLightWeightUOW.c)
 *     CmRestoreKey @ 0x14090C34C (CmRestoreKey.c)
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmpReportNotifyForKcbStack @ 0x140721878 (CmpReportNotifyForKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407C05F4 (CmpStartKcbStackForTopLayerKcb.c)
 */

void __fastcall CmpReportNotify(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+40h] [rbp-8h]

  v7 = 0LL;
  v8 = 0LL;
  if ( a3 == 1 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0x40000) != 0 )
      a1 = *(_QWORD *)(a1 + 72);
    a1 = *(_QWORD *)(a1 + 72);
  }
  CmpStartKcbStackForTopLayerKcb(&v7, a1);
  CmpReportNotifyForKcbStack(&v7, a2, a3, a4, v7, *((_QWORD *)&v7 + 1), v8, *((_QWORD *)&v8 + 1), v9);
  if ( *((_QWORD *)&v8 + 1) )
    CmSiFreeMemory(*((PPRIVILEGE_SET *)&v8 + 1));
}
