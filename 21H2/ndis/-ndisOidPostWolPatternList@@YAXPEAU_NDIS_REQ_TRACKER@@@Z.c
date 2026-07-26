/*
 * XREFs of ?ndisOidPostWolPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0091650
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisXlateWakeUpPatternListToWolPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009617C (-ndisXlateWakeUpPatternListToWolPatternList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

void __fastcall ndisOidPostWolPatternList(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)a1 + 4);
  if ( *(_DWORD *)(v1 + 4) && *(_DWORD *)(v1 + 32) == -50265851 )
  {
    *(_DWORD *)(v1 + 32) = -50265844;
    if ( !*((_DWORD *)a1 + 10) )
      ndisXlateWakeUpPatternListToWolPatternList(a1);
  }
}
