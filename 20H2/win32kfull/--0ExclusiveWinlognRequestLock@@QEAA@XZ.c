/*
 * XREFs of ??0ExclusiveWinlognRequestLock@@QEAA@XZ @ 0x1C015E298
 * Callers:
 *     UmfdDispatchWinLogonEscape @ 0x1C00E9F98 (UmfdDispatchWinLogonEscape.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00906A4 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

ExclusiveWinlognRequestLock *__fastcall ExclusiveWinlognRequestLock::ExclusiveWinlognRequestLock(
        ExclusiveWinlognRequestLock *this)
{
  PUSHLOCKEX::PUSHLOCKEX(this, (struct _EX_PUSH_LOCK *)&UmfdWinLogonRequestLock);
  return this;
}
