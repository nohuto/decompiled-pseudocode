/*
 * XREFs of KdpQuickMoveMemory @ 0x1409BACF0
 * Callers:
 *     KdpGetContextEx @ 0x140511538 (KdpGetContextEx.c)
 *     KdpSetContextEx @ 0x14051172C (KdpSetContextEx.c)
 *     KdpReportExceptionStateChange @ 0x1409B8CE0 (KdpReportExceptionStateChange.c)
 *     KdpSearchMemory @ 0x1409B9018 (KdpSearchMemory.c)
 *     KdpPrint @ 0x1409BA6C8 (KdpPrint.c)
 *     KdpPrompt @ 0x1409BA848 (KdpPrompt.c)
 *     KdpCopyContext @ 0x1409BAB28 (KdpCopyContext.c)
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
