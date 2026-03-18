/*
 * XREFs of KdpQuickMoveMemory @ 0x140A70244
 * Callers:
 *     KdpSetContextEx @ 0x1403AE2FC (KdpSetContextEx.c)
 *     KdpGetContextEx @ 0x1403AE428 (KdpGetContextEx.c)
 *     KdpCopyContext @ 0x140A6F708 (KdpCopyContext.c)
 *     KdpReportExceptionStateChange @ 0x140A73424 (KdpReportExceptionStateChange.c)
 *     KdpSearchMemory @ 0x140A73628 (KdpSearchMemory.c)
 *     KdpPrint @ 0x140A7434C (KdpPrint.c)
 *     KdpPrompt @ 0x140A744CC (KdpPrompt.c)
 * Callees:
 *     <none>
 */

char __fastcall KdpQuickMoveMemory(__int64 a1, char *a2, int a3)
{
  __int64 v3; // rcx
  char result; // al

  if ( a3 )
  {
    v3 = a1 - (_QWORD)a2;
    do
    {
      result = *a2;
      a2[v3] = *a2;
      ++a2;
      --a3;
    }
    while ( a3 );
  }
  return result;
}
