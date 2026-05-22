/*
 * XREFs of ?QualifyEdgyHitTestInputReport@EdgyProcessor@@IEAA_NPEAUHitTestInfo@@PEAUEdgyPointerInfo@@@Z @ 0x180177F98
 * Callers:
 *     ?OnHitTest@EdgyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180177CF0 (-OnHitTest@EdgyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitial.c)
 * Callees:
 *     <none>
 */

char __fastcall EdgyProcessor::QualifyEdgyHitTestInputReport(
        EdgyProcessor *this,
        struct HitTestInfo *a2,
        struct EdgyPointerInfo *a3)
{
  *(_DWORD *)a3 = -1;
  *(_QWORD *)((char *)a3 + 4) = 0LL;
  *(_QWORD *)((char *)a3 + 12) = 0LL;
  *((_QWORD *)a3 + 3) = 0LL;
  if ( (*(_DWORD *)a2 & 0x88) != 8 || (*((_BYTE *)a2 + 32) & 4) == 0 )
    return 0;
  *((_QWORD *)a3 + 3) = *((unsigned int *)a2 + 2);
  *(_DWORD *)a3 = *((_DWORD *)a2 + 10);
  *((_DWORD *)a3 + 2) = *((_DWORD *)a2 + 8);
  *((_DWORD *)a3 + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)a3 + 3) = *((_DWORD *)a2 + 11);
  *((_DWORD *)a3 + 4) = *((_DWORD *)a2 + 12);
  return 1;
}
