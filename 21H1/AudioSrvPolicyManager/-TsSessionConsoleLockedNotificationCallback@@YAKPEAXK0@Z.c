/*
 * XREFs of ?TsSessionConsoleLockedNotificationCallback@@YAKPEAXK0@Z @ 0x18002F880
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180015254 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_0c539e07ad5eca11a9151d154bdea5da_::operator() @ 0x18002F8D4 (_lambda_0c539e07ad5eca11a9151d154bdea5da_--operator().c)
 */

__int64 __fastcall TsSessionConsoleLockedNotificationCallback(void *a1, __int64 a2, void *a3)
{
  int v3; // eax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v7; // [rsp+40h] [rbp+8h] BYREF
  void *v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = a3;
  v7 = a1;
  v5[0] = &v7;
  v5[1] = &v8;
  v3 = lambda_0c539e07ad5eca11a9151d154bdea5da_::operator()(v5);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x95A,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v3);
  return 0LL;
}
