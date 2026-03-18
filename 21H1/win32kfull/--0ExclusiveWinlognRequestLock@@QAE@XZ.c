/*
 * XREFs of ??0ExclusiveWinlognRequestLock@@QAE@XZ @ 0xF72C3
 * Callers:
 *     _UmfdDispatchWinLogonEscape@4 @ 0xEB862 (_UmfdDispatchWinLogonEscape@4.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 */

ExclusiveWinlognRequestLock *__thiscall ExclusiveWinlognRequestLock::ExclusiveWinlognRequestLock(
        ExclusiveWinlognRequestLock *this)
{
  PUSHLOCKEX::PUSHLOCKEX(this, (struct _EX_PUSH_LOCK *)&UmfdWinLogonRequestLock);
  return this;
}
