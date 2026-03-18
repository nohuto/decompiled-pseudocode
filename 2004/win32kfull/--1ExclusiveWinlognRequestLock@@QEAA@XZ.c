/*
 * XREFs of ??1ExclusiveWinlognRequestLock@@QEAA@XZ @ 0x1C015AD98
 * Callers:
 *     UmfdDispatchWinLogonEscape @ 0x1C010E1A8 (UmfdDispatchWinLogonEscape.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C001ED40 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

void __fastcall ExclusiveWinlognRequestLock::~ExclusiveWinlognRequestLock(ExclusiveWinlognRequestLock *this)
{
  PUSHLOCKEX::~PUSHLOCKEX(this);
}
