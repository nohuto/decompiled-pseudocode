/*
 * XREFs of CmpReportNotify @ 0x1406A405C
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1406A3E64 (CmpProcessLightWeightUOW.c)
 *     CmRenameKey @ 0x14086CA04 (CmRenameKey.c)
 *     CmRestoreKey @ 0x14087BF30 (CmRestoreKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     CmpReportNotifyForKcbStack @ 0x1405ED300 (CmpReportNotifyForKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140665D30 (CmpStartKcbStackForTopLayerKcb.c)
 */

void __fastcall CmpReportNotify(__int64 a1, int a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  int v5; // ebx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h]

  v5 = a3;
  v7 = 0LL;
  v8 = 0LL;
  if ( (_DWORD)a3 == 1 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0x40000) != 0 )
      a1 = *(_QWORD *)(a1 + 72);
    a1 = *(_QWORD *)(a1 + 72);
  }
  CmpStartKcbStackForTopLayerKcb((__int64)&v7, a1, a3, a4);
  CmpReportNotifyForKcbStack((__int64)&v7, a2, v5, (__int64)a4);
  if ( *((_QWORD *)&v8 + 1) )
    CmSiFreeMemory(*((PPRIVILEGE_SET *)&v8 + 1));
}
