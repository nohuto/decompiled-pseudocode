/*
 * XREFs of ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00BD2F4
 * Callers:
 *     RIMUnInitialize @ 0x1C00BD250 (RIMUnInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0063890 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_s @ 0x1C01534DC (WPP_RECORDER_SF_s.c)
 */

__int64 __fastcall dumpLeaks(struct _LIST_ENTRY *a1, char *a2)
{
  struct _LIST_ENTRY *Flink; // rbx

  Flink = a1->Flink;
  if ( a1->Flink == a1 )
    return 0LL;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_7;
  WPP_RECORDER_SF_s(
    (_DWORD)gRimLog,
    (_DWORD)a2,
    1,
    10,
    (__int64)&WPP_d20cf136c9a4320ea9528c837bf5ce2a_Traceguids,
    (__int64)a2);
  do
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_q(
        (_DWORD)gRimLog,
        (_DWORD)a2,
        1,
        11,
        (__int64)&WPP_d20cf136c9a4320ea9528c837bf5ce2a_Traceguids,
        (_BYTE)Flink - 16);
    }
LABEL_7:
    Flink = Flink->Flink;
  }
  while ( Flink != a1 );
  return 1LL;
}
