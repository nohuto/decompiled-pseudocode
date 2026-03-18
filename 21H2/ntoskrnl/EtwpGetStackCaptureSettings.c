/*
 * XREFs of EtwpGetStackCaptureSettings @ 0x140460684
 * Callers:
 *     EtwpStackTraceDispatcher @ 0x140460770 (EtwpStackTraceDispatcher.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14063130C (EtwpGetStackExtendedHeaderItem.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140244120 (ObGetCurrentIrql.c)
 *     MmCanThreadFault @ 0x140297EF0 (MmCanThreadFault.c)
 */

void __fastcall EtwpGetStackCaptureSettings(struct _KTHREAD *a1, char a2, char a3, _BYTE *a4, _BYTE *a5)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 NestingLevel; // cl

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != a1
    || (CurrentThread->MiscFlags & 0x400) != 0
    || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 && !a2 )
  {
    goto LABEL_9;
  }
  if ( ObGetCurrentIrql() < 2u )
  {
    if ( MmCanThreadFault()
      && !BYTE6(CurrentThread[1].Queue)
      && KeGetCurrentThread()->ApcStateIndex != 1
      && !_bittest((const signed __int32 *)&CurrentThread->116, 5u) )
    {
      *a4 = 1;
      *a5 = 0;
      return;
    }
  }
  else
  {
    NestingLevel = KeGetCurrentPrcb()->NestingLevel;
    if ( NestingLevel && (NestingLevel != 1 || !a3) )
    {
LABEL_9:
      *a4 = 0;
      return;
    }
  }
  *a4 = 1;
  *a5 = 1;
}
