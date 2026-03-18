/*
 * XREFs of FsRtlNotifyCompleteIrpList @ 0x1406ABBF4
 * Callers:
 *     FsRtlNotifyFilterReportChange @ 0x1406AA510 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406AB670 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x1406AC2DC (FsRtlNotifyCleanupOneEntry.c)
 *     FsRtlCheckNotifyForDelete @ 0x14092FEAC (FsRtlCheckNotifyForDelete.c)
 *     FsRtlCheckNotifyForDeleteLite @ 0x14092FF10 (FsRtlCheckNotifyForDeleteLite.c)
 * Callees:
 *     FsRtlNotifyCompleteIrp @ 0x1406ABC90 (FsRtlNotifyCompleteIrp.c)
 */

_QWORD *__fastcall FsRtlNotifyCompleteIrpList(__int64 a1, int a2)
{
  _QWORD *v2; // rbx
  _QWORD *result; // rax
  __int64 v5; // rcx

  v2 = (_QWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 104) = 0;
  *(_WORD *)(a1 + 72) &= ~2u;
  *(_DWORD *)(a1 + 108) = 0;
  result = *(_QWORD **)(a1 + 48);
  do
  {
    if ( (_QWORD *)result[1] != v2 || (v5 = *result, *(_QWORD **)(*result + 8LL) != result) )
      __fastfail(3u);
    *v2 = v5;
    *(_QWORD *)(v5 + 8) = v2;
    *result = 0LL;
    result = (_QWORD *)FsRtlNotifyCompleteIrp((PIRP)(result - 21), 1);
    if ( !a2 )
      break;
    result = (_QWORD *)*v2;
  }
  while ( (_QWORD *)*v2 != v2 );
  return result;
}
