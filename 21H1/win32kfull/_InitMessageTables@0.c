/*
 * XREFs of _InitMessageTables@0 @ 0x292A20
 * Callers:
 *     <none>
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _InitWindowMsgTable@12 @ 0x292B82 (_InitWindowMsgTable@12.c)
 */

int __stdcall InitMessageTables()
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(3, 12, &WPP_5beb818f3182338190d7890059714f79_Traceguids);
  InitWindowMsgTable(a32);
  InitWindowMsgTable(&unk_2500C0);
  InitWindowMsgTable(a9);
  InitWindowMsgTable(&unk_250048);
  InitWindowMsgTable(&unk_24FFF8);
  InitWindowMsgTable(&unk_24FFEC);
  InitWindowMsgTable(&unk_24FFB4);
  InitWindowMsgTable(&unk_24FF70);
  InitWindowMsgTable(&unk_24FD18);
  InitWindowMsgTable(&unk_24FEC0);
  InitWindowMsgTable(&unk_24FD18);
  InitWindowMsgTable(&unk_24FE00);
  InitWindowMsgTable(&unk_24FDD8);
  return InitWindowMsgTable(&unk_24FDCC);
}
