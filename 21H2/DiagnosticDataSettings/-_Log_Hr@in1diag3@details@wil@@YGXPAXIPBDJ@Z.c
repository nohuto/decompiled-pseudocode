/*
 * XREFs of ?_Log_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z @ 0x10003377
 * Callers:
 *     _TelGetNumericPolicy@12 @ 0x10002610 (_TelGetNumericPolicy@12.c)
 *     _TelGetStringPolicy@12 @ 0x10002890 (_TelGetStringPolicy@12.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YGXPAXIPBD110W4FailureType@2@J@Z @ 0x10003E4A (-ReportFailure_Hr@details@wil@@YGXPAXIPBD110W4FailureType@2@J@Z.c)
 */

void __stdcall wil::details::in1diag3::_Log_Hr(
        wil::details::in1diag3 *this,
        void *a2,
        unsigned int a3,
        const char *a4,
        int a5)
{
  void *retaddr; // [esp+4h] [ebp+4h]

  wil::details::ReportFailure_Hr(
    "onecore\\base\\telemetry\\permission\\lib\\telemetrypermission.cpp",
    0,
    0,
    retaddr,
    2,
    a2);
}
