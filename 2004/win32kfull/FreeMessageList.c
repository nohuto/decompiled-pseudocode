/*
 * XREFs of FreeMessageList @ 0x1C0104AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C0007AFC (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     FreeQEntry @ 0x1C00B06FC (FreeQEntry.c)
 *     DelQEntry @ 0x1C00B0784 (DelQEntry.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C0104B30 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 */

__int64 __fastcall FreeMessageList(unsigned int **a1)
{
  unsigned int *i; // rbx
  unsigned int *v3; // rsi
  __int64 result; // rax
  unsigned int *v5; // rbx

  for ( i = *a1; i; i = *a1 )
  {
    CleanEventMessage((struct tagQMSG *)i);
    result = DelQEntry(a1, i, 1);
  }
  v3 = a1[3];
  if ( v3 )
  {
    do
    {
      v5 = (unsigned int *)*((_QWORD *)v3 + 1);
      RemoveQMsgFromDeferList((struct tagMLIST *)a1, (struct tagQMSG *)v3);
      CleanEventMessage((struct tagQMSG *)v3);
      result = FreeQEntry(v3);
      v3 = v5;
    }
    while ( v5 );
  }
  return result;
}
