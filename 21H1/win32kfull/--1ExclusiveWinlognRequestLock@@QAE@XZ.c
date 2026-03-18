/*
 * XREFs of ??1ExclusiveWinlognRequestLock@@QAE@XZ @ 0xF72D6
 * Callers:
 *     _UmfdDispatchWinLogonEscape@4 @ 0xEB862 (_UmfdDispatchWinLogonEscape@4.c)
 * Callees:
 *     <none>
 */

void __thiscall ExclusiveWinlognRequestLock::~ExclusiveWinlognRequestLock(ExclusiveWinlognRequestLock *this)
{
  int v1; // ecx

  v1 = *(_DWORD *)this;
  if ( v1 )
  {
    ExReleasePushLockExclusiveEx(v1, 0);
    KeLeaveCriticalRegion();
  }
}
